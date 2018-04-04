using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.Events;

public class Controller : MonoBehaviour
{

	[SerializeField]
	Board board;
	[SerializeField]
	PrepareArea prepareArea;
	[SerializeField]
	BlockGenerator blockGenerator;
	[SerializeField]
	FeatureManager featureManager;
	[SerializeField]
	UnityEngine.UI.Text slaPercentText;
	[SerializeField]
	UnityEngine.UI.Text moneyText;
	[SerializeField]
	GameObject gameoverOverlay;
	[SerializeField]
	GameObject gameoverText;
	[SerializeField]
	SoundManager soundManager;

	enum State
	{
		Idle,
		Begun,
		CoffeeIntake,
	}

	[SerializeField]
	State state = State.Idle;
	Block begunBlock;
	Block insertedBlock;
	[SerializeField]
	Direction insertedDirection;

	int startingPrepareBlocks = 2;
	int maxPrepareBlocks = 6;
	int prepareBlockInterval = 4;
	int prepareBlockCount = 0;

	int startingFeature = 1;
	int minFeatureGenerationSize = 2;
	int maxFeatureGenerationSize = 4;
	int maxFeatureSize = 5;
	int featureInterval = 8;
	int featureIntervalCount = 0;

	const int maxSLA = 10000;
	const int onFireSLA = 0;
	int sla = maxSLA;
	int slaRecoverSpeed = 100;

	const int startingMoney = 100;
	int money = startingMoney;

	const int catchFireChance = 80;
	const int maxNoFireCount = 10;
	const int warningDuration = 4;

	[SerializeField]
	Coffee coffee;
	[SerializeField]
	GameObject coffeeLastEffect;
	const int coffeeIntakeDuration = 1;
	int coffeeIntakeCount = 0;
	const int coffeeLastDuration = 8;
	int coffeeLastCount = 0;
	bool coffeeUsedForThisFire = false;


	Vector2 lastMousePosition, mousePosition;

	void Start ()
	{
		for (int i = 0; i < startingFeature; i++) {
			GenerateFeature ();
		}
		for (int i = 0; i < startingPrepareBlocks; i++) {
			prepareArea.AddBlock (blockGenerator.GenerateBlock ());
		}
	}

	// Update is called once per frame
	void Update ()
	{
		if (UpdateGameover ()) {
			return;
		}

		lastMousePosition = mousePosition;
		var mousePostionVector3 = board.transform.InverseTransformPoint (Camera.main.ScreenToWorldPoint (Input.mousePosition));
		mousePosition = new Vector2 (mousePostionVector3.x, mousePostionVector3.y);

		switch (state) {
		case State.Idle:
			UpdateIdle ();
			break;
		case State.CoffeeIntake:
			UpdateCoffeeIntake ();
			break;
		case State.Begun:
			UpdateBegun ();
			break;
		default:
			throw(new Exception (string.Format ("unhandled state {0}", state)));
		}
		UpdateBlockPushedColor ();
		UpdateTick ();
	}

	bool UpdateGameover ()
	{
		if (Input.GetKey (KeyCode.Escape)) {
			UnityEngine.SceneManagement.SceneManager.LoadScene ("Main");
			return true;
		}
		if (sla == 0 || money == 0) {
			coffeeLastEffect.SetActive (false);
			gameoverOverlay.SetActive (true);
			gameoverText.SetActive (true);
			if (Input.GetMouseButtonDown (0)) {
				UnityEngine.SceneManagement.SceneManager.LoadScene ("Main");
			}
			return true;
		}
		return false;
	}

	void UpdateIdle ()
	{
		if (Input.GetMouseButtonDown (0)) {
			var mousePosition = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			var localPostion = prepareArea.transform.InverseTransformPoint (mousePosition);
			var block = prepareArea.GetBlock (localPostion.x, localPostion.y);
			if (block != null) {
				begunBlock = block;
				prepareArea.RemoveBlock (block);
				board.AddBlock (block);
				soundManager.PlayPickup ();
				state = State.Begun;
			} else if (coffee.IsMouseHit ()) {
				state = State.CoffeeIntake;
			}
		}
	}

	void UpdateCoffeeIntake ()
	{
		if (Input.GetMouseButtonUp (0)) {
			state = State.Idle;
			coffeeIntakeCount = 0;
			coffee.SetComsumption (0);
		}
	}

	void UpdateBegun ()
	{
		var blockPoses = LineMath.IntegerPoints (lastMousePosition, mousePosition);
		if (blockPoses.Count > 0) {
			Vector2Int lastBlockPos = Vector2Int.zero;
			foreach (var blockPos in blockPoses) {
				Direction direction = BlockDirection (lastBlockPos, blockPos);
				int xStep = 0;
				int yStep = 0;
				switch (direction) {
				case Direction.East:
					xStep = 1;
					break;
				case Direction.South:
					yStep = -1;
					break;
				case Direction.West:
					xStep = -1;
					break;
				case Direction.North:
					yStep = 1;
					break;
				}
				int x = blockPos.x;
				int y = blockPos.y;
				List<Block> blocksToMove = new List<Block> ();
				for (var block = board.GetDisplayBlock (x, y);
					block != null && block != begunBlock;
					x += xStep, y += yStep, block = board.GetDisplayBlock (x, y)) {
					blocksToMove.Add (block);
				}
				foreach (var block in blocksToMove) {
					block.DisplayX += xStep;
					block.DisplayY += yStep;
				}
				lastBlockPos = blockPos;
			}
			begunBlock.DisplayX = lastBlockPos.x;
			begunBlock.DisplayY = lastBlockPos.y;
			var blockMoved = true;
			while (blockMoved) {
				blockMoved = false;
				foreach (var block in board.GetBlocks()) {
					if (block != begunBlock) {
						if (block.DisplayX != block.X) {
							var dist = block.X - block.DisplayX;
							var desired = block.DisplayX + dist / Mathf.Abs(dist);
							if (board.GetDisplayBlock(desired, block.DisplayY) == null) {
								block.DisplayX = desired;
								blockMoved = true;
							}
						}
						if (block.DisplayY != block.Y) {
							var dist = block.Y - block.DisplayY;
							var desired = block.DisplayY + dist / Mathf.Abs(dist);
							if (board.GetDisplayBlock(block.DisplayX, desired) == null) {
								block.DisplayY = desired;
								blockMoved = true;
							}
						}
					}
				}
			}
		}

		if (Input.GetMouseButtonUp (0)) {
			if (board.WithinBoundary (begunBlock.DisplayX, begunBlock.DisplayY)) {
				var blocksToRemove = new List<Block> ();
				foreach (var block in board.GetBlocks()) {
					if (!board.WithinBoundary (block.DisplayX, block.DisplayY)) {
						blocksToRemove.Add (block);
					} else {
						if (block.DisplayX != block.X || block.DisplayY != block.Y) {
							block.OnFire = false;
							block.OnWarning = false;
							block.NoFireCount = 0;
							block.OnWarningCount = 0;
						}
						block.SetAllPosition (block.DisplayX, block.DisplayY);
					}
				}
				foreach (var block in blocksToRemove) {
					board.RemoveBlock (block);
					block.gameObject.SetActive (false);
					Destroy (block.gameObject);
				}
				soundManager.PlayDrop ();
			} else {
				board.RemoveBlock (begunBlock);
				prepareArea.AddBlock (begunBlock);
				foreach (var block in board.GetBlocks()) {
					block.SetAllPosition (block.X, block.Y);
				}
			}
			begunBlock = null;
			state = State.Idle;
		}
	}

	Direction BlockDirection (Vector2Int a, Vector2Int b)
	{
		if (b.y > a.y) {
			return Direction.North;
		} else if (b.y < a.y) {
			return Direction.South;
		} else if (b.x < a.x) {
			return Direction.West;
		} else {
			return Direction.East;
		}
	}

	void UpdateBlockPushedColor ()
	{
		foreach (var block in board.GetBlocks()) {
			if (block != begunBlock) {
				if (block.DisplayX != block.X || block.DisplayY != block.Y) {
					block.Pushed = true;
				} else {
					block.Pushed = false;
				}
			}
		}
	}

	float timeCount = 0;
	const float tickInterval = 1;

	void UpdateTick ()
	{
		timeCount += Time.deltaTime;
		while (timeCount > 0) {
			timeCount -= 1;
			Tick ();
		}
	}

	void Tick ()
	{
		TickPrepare ();
		TickCoffee ();
		TickFeature ();
		TickFire ();
		TickSLA ();
		TickBGM ();
	}

	void TickFeature ()
	{
		featureIntervalCount++;
		if (featureIntervalCount >= featureInterval) {
			featureIntervalCount = 0;
			GenerateFeature ();
			if (featureManager.Count () > maxFeatureSize) {
				featureManager.Pop ();
				featureManager.RefreshPositions ();
			}
		}
	}

	void GenerateFeature ()
	{
		featureManager.Generate2 (UnityEngine.Random.Range (minFeatureGenerationSize, maxFeatureGenerationSize + 1));
	}

	void TickPrepare ()
	{
		prepareBlockCount++;
		if (prepareBlockCount >= prepareBlockInterval) {
			prepareBlockCount = 0;
			if (prepareArea.Count () <= maxPrepareBlocks) {
				prepareArea.AddBlock (blockGenerator.GenerateBlock ());
			}
		}
	}

	[SerializeField]
	AudioSource tadaSound;

	void TickSLA ()
	{
		BlockMap blocks = new BlockMap (board.GetBlocks ());
		bool everythingIsFine = true;
		foreach (var feature in featureManager.GetFeatures()) {
			var satisfied = feature.IsSatisfied (blocks, coffeeLastCount > 0);
			if (!satisfied) {
				sla -= feature.SLAEffect;
				everythingIsFine = false;
				feature.MarkAsUnSatisfied ();
			} else {
				money += feature.Income;
				if (!feature.LastSatisfied) {
					feature.MarkAsSatisfied ();
					tadaSound.Play ();
				}
			}
			feature.LastSatisfied = satisfied;
		}
		if (everythingIsFine) {
			sla += slaRecoverSpeed;
		}
		sla = Mathf.Clamp (sla, 0, maxSLA);
		var slaPercent = 100 * sla / maxSLA;
		slaPercentText.text = string.Format ("{0}%", slaPercent);

		var blockCount = blocks.Count ();
		if (state == State.Begun) {
			blockCount--;
		}
		money -= blockCount;
		if (money < 0) {
			money = 0;
		}
		moneyText.text = string.Format ("${0}", money);
	}

	void TickFire ()
	{
		foreach (var block in board.GetBlocks()) {
			if (begunBlock != null && begunBlock == block) {
				continue;
			}
			if (block.OnWarning) {
				block.OnWarningCount++;
				if (block.OnWarningCount > warningDuration) {
					block.OnWarning = false;
					block.OnFire = true;
				}
			} else if (!block.OnWarning && !block.OnFire) {
				if (UnityEngine.Random.Range (0, catchFireChance) < block.NoFireCount) {
					block.OnWarning = true;
					block.OnWarningCount = 0;
				} else {
					block.NoFireCount = Mathf.Clamp (block.NoFireCount + 1, 0, maxNoFireCount);
				}
			}
		}
	}

	void TickBGM ()
	{
		if (sla < onFireSLA) {
			soundManager.PlayOnFire ();
			return;
		}
		foreach (var block in board.GetBlocks()) {
			if (block.OnFire) {
				soundManager.PlayOnFire ();
				return;
			}
		}
		foreach (var block in board.GetBlocks()) {
			if (block.OnWarning) {
				soundManager.PlayImminent ();
				return;
			}
		}
		soundManager.PlayPeaceful ();
	}

	void TickCoffee ()
	{
		bool sometingOnFire = false;
		foreach (var block in board.GetBlocks()) {
			if (block.OnFire) {
				sometingOnFire = true;
				break;
			}
		}
		if (sometingOnFire && !coffeeUsedForThisFire) {
			coffee.SetActive (true);
		} 
		if (!sometingOnFire) {
			coffeeUsedForThisFire = false;
		}
		if (coffeeLastCount > 0) {
			coffeeLastCount--;
			if (coffeeLastCount == 0) {
				coffeeLastEffect.SetActive (false);
			}
		}
		if (state == State.CoffeeIntake) {
			TickCoffeeIntake ();
		}
	}

	void TickCoffeeIntake ()
	{
		coffeeIntakeCount++;
		coffee.SetComsumption ((float)coffeeIntakeCount / coffeeIntakeDuration);
		if (coffeeIntakeCount >= coffeeIntakeDuration) {
			coffeeLastCount = coffeeLastDuration;
			tadaSound.Play ();
			coffeeUsedForThisFire = true;
			coffee.SetActive (false);
			coffee.SetComsumption (0);
			coffeeLastEffect.SetActive (true);
			state = State.Idle;
		}
	}
}


public class BlockMap : IEnumerable<Block>
{
	Dictionary<int, Dictionary<int, Block>> blocks = new Dictionary<int, Dictionary<int, Block>> ();

	public BlockMap ()
	{
	}

	public BlockMap (IEnumerable<Block> existingBlocks)
	{
		foreach (var block in existingBlocks) {
			Add (block);
		}
	}

	public void Add (Block block)
	{
		Dictionary<int, Block> inner;
		if (!blocks.TryGetValue (block.X, out inner)) {
			inner = new Dictionary<int, Block> ();
			blocks.Add (block.X, inner);
		}
		inner.Add (block.Y, block);
	}

	public Block Get (int x, int y)
	{
		Dictionary<int, Block> inner;
		if (!blocks.TryGetValue (x, out inner)) {
			return null;
		}
		Block block;
		if (!inner.TryGetValue (y, out block)) {
			return null;
		}
		return block;
	}

	public int Count ()
	{
		int count = 0;
		foreach (var inner in blocks.Values) {
			count += inner.Count;
		}
		return count;
	}

	#region IEnumerable implementation

	public IEnumerator<Block> GetEnumerator ()
	{
		foreach (var inner in blocks.Values) {
			foreach (var block in inner.Values) {
				yield return block;
			}
		}
	}

	IEnumerator IEnumerable.GetEnumerator ()
	{
		return GetEnumerator ();
	}

	#endregion
}
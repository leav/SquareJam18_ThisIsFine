﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

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
		Inserted
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
	int minFeatureGenerationSize = 3;
	int maxFeatureGenerationSize = 4;
	int maxFeatureSize = 6;
	int featureInterval = 8;
	int featureIntervalCount = 0;

	const int maxSLA = 10000;
	const int onFireSLA = 3000;
	int sla = maxSLA;
	int slaRecoverSpeed = 100;

	const int startingMoney = 100;
	int money = startingMoney;

	const int catchFireChance = 30;
	const int maxNoFireCount = 10;
	const int warningDuration = 4;

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

		switch (state) {
		case State.Idle:
			UpdateIdle ();
			break;
		case State.Begun:
			UpdateBegun ();
			break;
		case State.Inserted:
			UpdateInserted ();
			break;
		default:
			throw(new Exception (string.Format ("unhandled state {0}", state)));
		}

		UpdateTick ();
	}

	bool UpdateGameover ()
	{
		if (sla == 0 || money == 0) {
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
				Debug.Log (block);
				begunBlock = block;
				prepareArea.RemoveBlock (block);
				board.AddBlock (block);
				state = State.Begun;
			}
		}
	}

	void UpdateBegun ()
	{
		var mousePosition = board.transform.InverseTransformPoint (Camera.main.ScreenToWorldPoint (Input.mousePosition));
		var x = Mathf.RoundToInt (mousePosition.x);
		var y = Mathf.RoundToInt (mousePosition.y);
		insertedBlock = board.GetBlock (x, y);
		if (insertedBlock != null && insertedBlock != begunBlock) {
			if (insertedBlock.DisplayX > begunBlock.DisplayX) {
				insertedDirection = Direction.East;
			} else if (insertedBlock.DisplayX < begunBlock.DisplayX) {
				insertedDirection = Direction.West;
			} else if (insertedBlock.DisplayY > begunBlock.DisplayY) {
				insertedDirection = Direction.North;
			} else {
				insertedDirection = Direction.South;
			}
			state = State.Inserted;
		}
		begunBlock.DisplayX = x;
		begunBlock.DisplayY = y;

		if (Input.GetMouseButtonUp (0)) {
			if (board.WithinBoundary (begunBlock.DisplayX, begunBlock.DisplayY)) {
				begunBlock.SetAllPosition (begunBlock.DisplayX, begunBlock.DisplayY);
			} else {
				board.RemoveBlock (begunBlock);
				prepareArea.AddBlock (begunBlock);
			}
			begunBlock = null;
			state = State.Idle;
		}
	}

	void UpdateInserted ()
	{
		foreach (Block block in board.GetBlocks()) {
			if (block != begunBlock) {
				block.DisplayX = block.X;
				block.DisplayY = block.Y;
			}
		}
		var mousePosition = Camera.main.ScreenToWorldPoint (Input.mousePosition);
		if (insertedDirection == Direction.North || insertedDirection == Direction.South) {
			begunBlock.DisplayY = Mathf.RoundToInt (mousePosition.y);
		} else {
			begunBlock.DisplayX = Mathf.RoundToInt (mousePosition.x);
		}
		var x = insertedBlock.X;
		var y = insertedBlock.Y;
		int offset = 0, xIncrement = 0, yIncrement = 0;
		switch (insertedDirection) {
		case Direction.East:
			offset = begunBlock.DisplayX - insertedBlock.X + 1;
			xIncrement = 1;
			break;
		case Direction.South:
			offset = insertedBlock.Y - begunBlock.DisplayY + 1;
			yIncrement = -1;
			break;
		case Direction.West:
			offset = insertedBlock.X - begunBlock.DisplayX + 1;
			xIncrement = -1;
			break;
		case Direction.North:
			offset = begunBlock.DisplayY - insertedBlock.Y + 1;
			yIncrement = 1;
			break;
		default:
			throw new Exception ("unhandled direction");
		}
		if (offset <= 0) {
			state = State.Begun;
			return;
		}
		while (offset > 0) {
			var block = board.GetBlock (x, y);
			if (block == null) {
				offset--;
			} else {
				block.DisplayX = block.X + xIncrement * offset;
				block.DisplayY = block.Y + yIncrement * offset;
			}
			x += xIncrement;
			y += yIncrement;
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
		TickFeature ();
		TickPrepare ();
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

	void TickSLA ()
	{
		BlockMap blocks = new BlockMap (board.GetBlocks ());
		int featureIndex = 0;
		bool everythingIsFine = true;
		foreach (var feature in featureManager.GetFeatures()) {
			if (!feature.IsSatisfied (blocks)) {
				Debug.Log (string.Format ("not satisfied for feature {0}!", featureIndex));
				sla -= feature.SLAEffect;
				everythingIsFine = false;
			} else {
				money += feature.Income;
			}
			featureIndex++;
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
		soundManager.PauseOnFire ();
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
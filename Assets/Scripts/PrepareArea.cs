using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrepareArea : MonoBehaviour {
	List<Block> blockQueue = new List<Block>();
	const int xOffset = 1;
	const int yOffset = -1;
	const int width = 3;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
		
	public void AddBlock(Block block) {
		blockQueue.Add (block);
		block.transform.SetParent (this.transform);
		RefreshPositions ();
	}

	public void RemoveBlock(Block block) {
		blockQueue.Remove (block);
		RefreshPositions ();
	}

	void RefreshPositions() {
		int x = 0;
		int y = 0;
		foreach (var block in blockQueue) {
			block.SetAllPosition(x, y);
			x += xOffset;
			if (x >= width) {
				x = 0;
				y += yOffset;
			}
		}
	}

	public Block GetBlock(int x, int y) {
		foreach (var block in blockQueue) {
			if (block.X == x && block.Y == y) {
				return block;
			}
		}
		return null;
	}

	public Block GetBlock(float x, float y) {
		return GetBlock (Mathf.RoundToInt (x), Mathf.RoundToInt (y));
	}

	public int Count() {
		return blockQueue.Count;
	}
}

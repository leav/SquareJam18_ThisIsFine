using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Board : MonoBehaviour
{
	List<Block> blocks = new List<Block> ();
	const int size = 7; // Should always be odd in order to hack around coordinates.

	// Use this for initialization
	void Start ()
	{
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	public IEnumerable<Block> GetBlocks ()
	{
		return blocks;
	}

	public Block GetBlock (int x, int y)
	{
		foreach (var block in blocks) {
			if (block.X == x && block.Y == y) {
				return block;
			}
		}
		return null;
	}

	public Block GetBlock (float x, float y)
	{
		return GetBlock (Mathf.RoundToInt (x), Mathf.RoundToInt (y));
	}

	public void AddBlock (Block block, int x, int y)
	{
		block.gameObject.transform.SetParent (this.transform);
		block.SetAllPosition (x, y);
		blocks.Add (block);
	}

	public void AddBlock (Block block)
	{
		var localPosition = this.transform.InverseTransformPoint (block.transform.position);
		AddBlock (block, Mathf.RoundToInt (localPosition.x), Mathf.RoundToInt (localPosition.y));
	}

	public void RemoveBlock(Block block) {
		blocks.Remove (block);
	}

	public bool WithinBoundary(int x, int y) {
		var radius = size / 2;
		return (x >= -radius) && (x <= radius) && (y >= -radius) && (y <= radius);
	}
}

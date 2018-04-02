﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Requirement.
/// Must have a block at 0, 0 unless the requirement is empty.
/// </summary>
public class Feature : MonoBehaviour {
	[SerializeField]
	List<Block> blocks = new List<Block>();
	public int Income {
		get;
		set;
	}
	public int SLAEffect {
		get;
		set;
	}

	public IEnumerable<Block> GetBlocks() {
		return blocks;
	}

	public void AddBlock(Block block) {
		block.transform.SetParent (this.transform);
		block.DisplayX = block.X;
		block.DisplayY = block.Y;
		blocks.Add (block);
		RefreshPositions ();
	}

	void RefreshPositions() {
		int minX = 0;
		int maxY = 0;
		foreach (var block in blocks) {
			if (block.X < minX) {
				minX = block.X;
			}
			if (block.Y > maxY) {
				maxY = block.Y;
			}
		}
		foreach (var block in blocks) {
			block.DisplayX = block.X - minX;
			block.DisplayY = block.Y - maxY;
		}
	}

	public bool IsSatisfied(BlockMap existingBlocks) {
		if (blocks.Count == 0) {
			return true;
		}
		foreach (var existing in existingBlocks) {
			bool satisfied = true;
			foreach (var block in blocks) {
				var mappedToBlock = existingBlocks.Get (existing.X + block.X, existing.Y + block.Y);
				if (mappedToBlock == null ||
					mappedToBlock.Color != block.Color ||
					mappedToBlock.OnFire
				) {
					satisfied = false;
					break;
				}
			}
			if (satisfied) {
				return true;
			}
		}
		return false;
	}

	public int Width() {
		int min = 0;
		int max = 0;
		foreach (var block in blocks) {
			if (block.X < min) {
				min = block.X;
			}
			if (block.X > max) {
				max = block.X;
			}
		}
		return max - min + 1;
	}

	public int Height() {
		int min = 0;
		int max = 0;
		foreach (var block in blocks) {
			if (block.Y < min) {
				min = block.Y;
			}
			if (block.Y > max) {
				max = block.Y;
			}
		}
		return max - min + 1;
	}

}
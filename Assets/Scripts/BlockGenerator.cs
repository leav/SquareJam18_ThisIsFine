using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BlockGenerator : MonoBehaviour {
	[SerializeField]
	GameObject blockPrefab;
	[SerializeField]
	Sprite blackSprite;
	[SerializeField]
	Sprite whiteSprite;

	public Block GenerateBlock ()
	{
		Block.ColorEnum color;
		if (UnityEngine.Random.Range (0, 2) == 0) {
			color = Block.ColorEnum.Black;
		} else {
			color = Block.ColorEnum.White;
		}
		return GenerateBlock (color);
	}

	public Block GenerateBlock (Block.ColorEnum color)
	{
		GameObject blockObject = Instantiate (blockPrefab);
		switch (color) {
		case Block.ColorEnum.Black:
			blockObject.GetComponent<SpriteRenderer> ().sprite = blackSprite;
			break;
		case Block.ColorEnum.White:
			blockObject.GetComponent<SpriteRenderer> ().sprite = whiteSprite;
			break;
		default:
			throw(new Exception (string.Format ("unhandled color {0}", color)));
		}
		return blockObject.GetComponent<Block> ();
	}
}

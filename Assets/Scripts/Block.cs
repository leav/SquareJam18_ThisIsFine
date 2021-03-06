﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Block : MonoBehaviour
{
	[SerializeField]
	GameObject fire;
	[SerializeField]
	GameObject warning;
	[SerializeField]
	AudioSource fireSound;
	[SerializeField]
	SpriteRenderer spriteRenderer;
	[SerializeField]
	UnityEngine.Color pushedColor;
	[SerializeField]
	UnityEngine.Color satisfiedColor;
	[SerializeField]
	UnityEngine.Color betaColor;
	UnityEngine.Color normalColor = UnityEngine.Color.white;

	public enum ColorEnum
	{
		Black,
		White
	}

	static public ColorEnum RandomColor ()
	{
		if (UnityEngine.Random.Range (0, 2) == 0) {
			return ColorEnum.Black;
		} else {
			return ColorEnum.White;
		}
	}

	public ColorEnum Color {
		get;
		set;
	}

	int _x;

	public int X {
		get{ return _x; }
		set{ _x = value; }
	}

	int _y;

	public int Y {
		get{ return _y; }
		set{ _y = value; }
	}

	Vector3 _displayPosition = new Vector3 ();

	public int DisplayX {
		get {
			return Mathf.RoundToInt (_displayPosition.x);
		}
		set {
			_displayPosition.x = Mathf.RoundToInt (value);
			this.transform.localPosition = _displayPosition;
		}
	}

	public int DisplayY {
		get {
			return Mathf.RoundToInt (_displayPosition.y);
		}
		set {
			_displayPosition.y = Mathf.RoundToInt (value);
			this.transform.localPosition = _displayPosition;
		}
	}

	public int NoFireCount {
		get;
		set;
	}

	public int OnWarningCount {
		get;
		set;
	}

	bool _onFire = false;

	public bool OnFire {
		get {
			return _onFire;
		}
		set {
			if (!_onFire && value) {
				fireSound.Play ();
			}
			_onFire = value;
			fire.SetActive (_onFire);
		}
	}

	bool _onWarning = false;

	public bool OnWarning {
		get { return _onWarning; }
		set { 
			_onWarning = value;
			warning.SetActive (_onWarning);
		}
	}

	bool _pushed = false;

	public bool Pushed {
		get { return _pushed; }
		set {
			_pushed = value;
			RefreshColor ();
		}
	}

	bool _satisfied = false;

	public bool Satisfied {
		get { return _satisfied; }
		set {
			_satisfied = value;
			RefreshColor ();
		}
	}

	bool _beta = false;
	public bool Beta {
		get { return _beta; }
		set { 
			_beta = value;
			RefreshColor ();
		}
	}

	void RefreshColor() {
		if (_pushed) {
			spriteRenderer.color = pushedColor;
		} else if (_satisfied) {
			spriteRenderer.color = satisfiedColor;
		} else if (_beta) {
			spriteRenderer.color = betaColor;
		} else {
			spriteRenderer.color = normalColor;
		}
	}

	public void SetAllPosition (int x, int y)
	{
		_displayPosition.x = x;
		_displayPosition.y = y;
		this.transform.localPosition = _displayPosition;
		this.X = x;
		this.Y = y;
	}
}

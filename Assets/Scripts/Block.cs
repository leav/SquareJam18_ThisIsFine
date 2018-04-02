using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Block : MonoBehaviour
{
	[SerializeField]
	GameObject fire;
	[SerializeField]
	GameObject warning;

	public enum ColorEnum
	{
		Black, White
	}

	static public ColorEnum RandomColor() {
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

	Vector3 _displayPosition = new Vector3();
	public int DisplayX {
		get {
			return Mathf.RoundToInt(_displayPosition.x);
		}
		set {
			_displayPosition.x = Mathf.RoundToInt(value);
			this.transform.localPosition = _displayPosition;
		}
	}

	public int DisplayY {
		get {
			return Mathf.RoundToInt(_displayPosition.y);
		}
		set {
			_displayPosition.y = Mathf.RoundToInt(value);
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
			_onFire = value;
			fire.SetActive (_onFire);
		}
	}

	bool _onWarning = false;
	public bool OnWarning {
		get { return _onWarning;}
		set { 
			_onWarning = value;
			warning.SetActive (_onWarning);
		}
	}

	public void SetAllPosition(int x, int y) {
		_displayPosition.x = x;
		_displayPosition.y = y;
		this.transform.localPosition = _displayPosition;
		this.X = x;
		this.Y = y;
	}
}

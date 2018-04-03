using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coffee : MonoBehaviour {

	[SerializeField]
	SpriteRenderer spriteRenderer;
	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Show() {
	}

	public bool IsMouseHit() {
		//Get the mouse position on the screen and send a raycast into the game world from that position.
		Vector2 worldPoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		RaycastHit2D hit = Physics2D.Raycast(worldPoint, Vector2.zero);

		//If something was hit, the RaycastHit2D.collider will not be null.
		if (hit.collider != null)
		{
			return hit.collider == this.GetComponent<Collider2D> ();
		}
		return false;
	}

	public void SetActive(bool active) {
		gameObject.SetActive (active);
	}

	public void SetComsumption(float level) {
		var color = Color.white;
		color.a = 1 - level;
		spriteRenderer.color = color;
	}
}

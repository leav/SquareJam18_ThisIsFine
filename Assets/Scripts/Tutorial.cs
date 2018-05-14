using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tutorial : MonoBehaviour {
	[SerializeField]
	List<GameObject> states = new List<GameObject> ();

	int state = 0;


	void OnEnable() {
		Debug.Log ("Tutorial OnEnable");
		SetState (0);
	}

	void SetState(int state) {
		Debug.Log (string.Format("SetState {0}", state));
		this.state = state;
		for (int i = 0; i < states.Count; i++) {
			states [i].SetActive (i == state);
		}
	}

	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonUp (0)) {

			Debug.Log ("Input.GetMouseButtonUp (0)");

			state++;
			if (state >= states.Count) {
				state = -1;
				this.enabled = false;
			}
			SetState (state);
		}
	}
}

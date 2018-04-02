using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour {

	[SerializeField]
	AudioSource onFire;

	// Use this for initialization
	void Start () {
		onFire.mute = true;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void PlayOnFire() {
		onFire.mute = false;
	}

	public void PauseOnFire() {
		onFire.mute = true;
	}
}

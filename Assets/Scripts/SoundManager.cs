using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour {


	[SerializeField]
	AudioSource peaceful;
	[SerializeField]
	AudioSource imminent;
	[SerializeField]
	AudioSource onFire;

	// Use this for initialization
	void Start () {
		imminent.mute = true;
		onFire.mute = true;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void PlayPeaceful() {
		peaceful.mute = false;
		imminent.mute = true;
		onFire.mute = true;
	}

	public void PlayImminent() {
		peaceful.mute = true;
		imminent.mute = false;
		onFire.mute = true;
	}

	public void PlayOnFire() {
		peaceful.mute = false;
		imminent.mute = true;
		onFire.mute = false;
	}
}

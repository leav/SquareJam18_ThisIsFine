﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour {


	[SerializeField]
	AudioSource peaceful;
	[SerializeField]
	AudioSource imminent;
	[SerializeField]
	AudioSource onFire;
	[SerializeField]
	AudioSource pickup;
	[SerializeField]
	AudioSource drop;

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

	public void PlayPickup() {
		pickup.Play ();
	}

	public void PlayDrop() {
		drop.Play ();
	}

	public void Pause() {
		peaceful.Pause ();
		imminent.Pause ();
		onFire.Pause ();
	}

	public void UnPause() {
		peaceful.UnPause ();
		imminent.UnPause ();
		onFire.UnPause ();
	}
}

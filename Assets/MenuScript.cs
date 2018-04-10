using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuScript : MonoBehaviour {

	public GameObject menuButton;
	public GameObject MenuPanel;
	private Animator anim;
	private bool isOpen = false;

	//UIHandler
	public GameObject uiObject;
	private UIManager UIHandler;

	void Start () {
		//unpause the game on start
		Time.timeScale = 1;
		//get the animator component
		anim = MenuPanel.GetComponent<Animator>();
		//disable it on start to stop it from playing the default animation
		anim.enabled = false;

		if (uiObject != null) {
			UIHandler = (UIManager)uiObject.GetComponent (typeof(UIManager));
		}
	}

	// Update is called once per frame
	public void Update () {
		//pause the game on escape key press and when the game is not already paused
		if(SwipeManager.Instance.isSwiping(SwipeDirection.Right) && !isOpen){
			OpenMenu ();
			menuButton.SetActive (false);
			UIHandler.userSelection ();
		}
		//unpause the game if its paused and the escape key is pressed
		else if(SwipeManager.Instance.isSwiping(SwipeDirection.Left) && isOpen){
			CloseMenu();
		}
	}

	public void onClickHamburger() {
		if (!isOpen) {
			OpenMenu ();
		} else {
			CloseMenu ();
		}
	}

	//function to pause the game
	public void OpenMenu(){
		//enable the animator component
		anim.enabled = true;
		//play the Slidein animation
		anim.Play("MenuSlideIn");
		//set the isPaused flag to true to indicate that the game is paused
		isOpen = true;
		//freeze the timescale
		Time.timeScale = 0;
	}
	//function to unpause the game
	public void CloseMenu(){
		//set the isPaused flag to false to indicate that the game is not paused
		isOpen = false;
		//play the SlideOut animation
		anim.Play("MenuSlideOut");
		//set back the time scale to normal time scale
		Time.timeScale = 1;
	}
}

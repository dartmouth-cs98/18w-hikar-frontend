using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuScript : MonoBehaviour {

	public GameObject menuButton;
	public GameObject menuBlockPanel;
	private Animator anim;
	private bool isOpen = false;
	public bool isErrorOpen = false;
	//UIHandler
	public GameObject uiObject;
	private UIManager uiHandler;

	//transition objects
	public TransitionalObject menuTransitionObject;
	public TransitionalObject panelTransitionObject;
	public TransitionalObject errorTransitionaObject;


	void Start () {
		Time.timeScale = 1;
		if (uiObject != null) {
			uiHandler = (UIManager)uiObject.GetComponent (typeof(UIManager));
		}
	}

	void Update () {
		if (SwipeManager.Instance.isSwiping (SwipeDirection.Right) && !isOpen) {
			OpenMenu ();
		} else if (SwipeManager.Instance.isSwiping (SwipeDirection.Left) && isOpen) {
			CloseMenu ();
		}
		if (isOpen) {
			uiHandler.userSelection ();
		}
	}

	public void onClickHamburger() {
		if (!isOpen) {
			OpenMenu ();
		} else {
			CloseMenu ();
		}
	}

	public void OpenMenu(){
		if (uiHandler.isHiking) {
			panelTransitionObject.TriggerFadeOut ();
			StartCoroutine (waitPanel(0.6f));
		}
		menuTransitionObject.TriggerTransition();
		isOpen = true;
		Time.timeScale = 0;
		menuBlockPanel.gameObject.SetActive (true);
	}

	public void CloseMenu(){
		isOpen = false;
		menuTransitionObject.TriggerFadeOut();
		if (uiHandler.isHiking && uiHandler.inAR) {
			StartCoroutine (waitPanel(1f));
			panelTransitionObject.TriggerTransition ();
		}
		Time.timeScale = 1;
		menuBlockPanel.gameObject.SetActive (false);
	}

	public IEnumerator waitPanel(float wait){
		yield return new WaitForSeconds (wait);
	}

	public void OpenError(){
		errorTransitionaObject.TriggerTransition ();
		isErrorOpen = true;
	}

	public void CloseError(){
		errorTransitionaObject.TriggerFadeOutIfActive ();
		isErrorOpen = false;
	}
}

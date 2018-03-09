using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneLoader : MonoBehaviour {


	private int scene = 1; //for topoScene

	private UnityEngine.UI.Text loadingText;


	// Use this for initialization
	void Start () {
		//loadingText = GameObject.FindGameObjectWithTag("loadingText").GetComponent<UnityEngine.UI.Text>();
		StartCoroutine(LoadNewScene());
	}
	
	// Update is called once per frame
	void Update () {
//		loadingText = GameObject.FindGameObjectWithTag("loadingText").GetComponent<UnityEngine.UI.Text>();
//		//animate transparency
//		loadingText.color = new Color(loadingText.color.r, loadingText.color.g, loadingText.color.b, Mathf.PingPong(Time.time, 1));
	}

	IEnumerator LoadNewScene() {
		
		// Start an asynchronous operation to load the scene that was passed to the LoadNewScene coroutine.
		AsyncOperation async = Application.LoadLevelAsync(scene);

		// While the asynchronous operation to load the new scene is not yet complete, continue waiting until it's done.
		while (!async.isDone) {
			yield return null;
		}

	}

}

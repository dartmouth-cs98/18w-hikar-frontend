using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LoadingScript : MonoBehaviour {
	[SerializeField]
	private int scene;
	[SerializeField]
	private Text loadingText;

	private string loadText;
	private string dots;

	private bool isLoading;

	void Start () {
		isLoading = false;
		dots = ".";
		loadText = "LOADING HIKAR";
		InvokeRepeating ("Loading", 0f, 0.1f);
	}

	void Update () {
		if (!isLoading) {
			isLoading = true;
			StartCoroutine (LoadNewScene ());
		}
			
	}

	IEnumerator LoadNewScene() {
		AsyncOperation async = Application.LoadLevelAsync(scene);
		while (!async.isDone) {
			yield return null;
		}
	}
	void Loading(){
		loadingText.text = loadText + dots;
		dots += ".";
		if (dots == "...")
			dots = ".";
	}
}

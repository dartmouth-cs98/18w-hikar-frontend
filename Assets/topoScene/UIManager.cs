using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using SimpleJSON;

public class UIManager : MonoBehaviour {

	//Setup
	private Mapbox.Utils.Vector2d[] trailHeads;
	private Hashtable trailTable;
	private List<GameObject> resultList;
	private GameObject result;
	public Text errorText;
	public Canvas loadingCanvas;
	public JSONNode parsedUser;

	// Log in and Sign up
	public InputField usernameValue;
	public InputField PasswordValue;

	//Trail UI + Setup
	private string currentSelectedTrail;
	public Button hikeButton;

	//Explore UI
	private List<string[]> nearbyTrails;
	private List<string> trailNames;
	public GameObject exploreTrailsPanel;

	//Your Places UI
	private string[] topTrails;
	public GameObject topTrailsPanel;

	//Settings UI
	public GameObject settingsPanel;
	public Slider radiusSlider;
	public Text radiusText;
	public Toggle annotationsToggle;

	//Annotation UI
	public Button createAnnotationButton;
	public Button submitAnnotationButton;
	public InputField annotationInput;
	public Dropdown styleDropdown;
	public Dropdown colorDropdown;

	//2D UI
	public InputField searchInput;
	public ScrollRect scrollView;
	public Button toggleARButton;
	public Button exitSelectionButton;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	//sceneHandler
	public GameObject sceneObject;
	private SceneManager sceneManager;

	//cameraHandler
	public GameObject cameraObject;
	private CameraHandler cameraHandler;

	//menuHandler
	public GameObject menuObject;
	private MenuScript menuHandler;

	//annotationHandler
	public GameObject annotationObject;
	private AnnotationHandler annotationHandler;

	//LoginHandler
	//	public GameObject loginObject;
	//	private LoginHandler loginHandler;
	public Button loginButton;

	void Start () {
		result = new GameObject ();
		resultList = new List<GameObject> ();
		nearbyTrails = new List<string[]> ();
		trailNames = new List<string> ();
		scrollView.gameObject.SetActive (false);
		annotationInput.gameObject.SetActive (false);		
		if(cameraObject != null) {
			cameraHandler = (CameraHandler) cameraObject.gameObject.GetComponent(typeof(CameraHandler));
		}
		if(menuObject != null) {
			menuHandler = (MenuScript) menuObject.gameObject.GetComponent(typeof(MenuScript));
		}
		if(wwwHandler != null) {
			wwwScript = (WWWHandler)wwwHandler.gameObject.GetComponent(typeof(WWWHandler)); 
		}
		if (annotationObject != null) {
			annotationHandler = (AnnotationHandler)annotationObject.gameObject.GetComponent (typeof(AnnotationHandler));
		}
		if (annotationObject != null) {
			annotationHandler = (AnnotationHandler)annotationObject.gameObject.GetComponent (typeof(AnnotationHandler));
		}
		if (sceneObject != null) {
			sceneManager = (SceneManager)sceneObject.gameObject.GetComponent (typeof(SceneManager));
		}
		radiusSlider.minValue = 1;
		radiusSlider.maxValue = 100;
		StartCoroutine(initUser());
		createAnnotationButton.onClick.AddListener (onClickAnnotation);
		submitAnnotationButton.onClick.AddListener (onAnnotationSubmit);
		exitSelectionButton.onClick.AddListener (disable2D);
		loginButton.onClick.AddListener (signInSubmit);
		hikeButton.onClick.AddListener (onHike);
	}

	public IEnumerator initUser() {
		CoroutineWithData userData = new CoroutineWithData(this, wwwScript.GetUserInfo ("User2"));
		yield return userData.coroutine;
		parsedUser = SimpleJSON.JSON.Parse (userData.result.ToString());	
		if (parsedUser ["radius"] != null)
			radiusSlider.value = parsedUser ["radius"].AsInt;
		else
			radiusSlider.value = 50;
		if (parsedUser ["toggleAnnotations"] != null)
			annotationsToggle.isOn = parsedUser ["toggleAnnotations"].AsBool;
		else
			annotationsToggle.isOn = true;
	}

	void Update() {
		if (scrollView.gameObject.activeSelf && scrollView.content.childCount > 0 || exploreTrailsPanel.gameObject.activeSelf) {
			if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer && Input.touchCount > 0) {
				PointerEventData pointerData = new PointerEventData(EventSystem.current);
				pointerData.position = Input.GetTouch(0).position;
				List<RaycastResult> hits = new List<RaycastResult>();
				EventSystem.current.RaycastAll(pointerData, hits);
				if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
					string resultText = hits [0].gameObject.GetComponent<Text> ().text;
					if (resultText != "Submit" && resultText != "Explore" && resultText != searchInput.text) {
						// Cancel search
						if (resultText != "_________") {
							Debug.Log (resultText);
							scrollView.gameObject.SetActive (false);
							SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMapObject").GetComponent<SearchMap> ();
							if (exploreTrailsPanel.gameObject.activeSelf) {
								string[] trailNameOnly = resultText.Split (new char[0]);
								StringBuilder trailName = new StringBuilder ();
								for (int i = 0; i < trailNameOnly.Length - 2; i++) {
									if (i == 0)
										trailName.Append (trailNameOnly [i]);
									else
										trailName.Append (" " + trailNameOnly [i]);
								}
								resultText = trailName.ToString ().Trim ();
							}
							//Quick search function from explore page
							if (exploreTrailsPanel.gameObject.activeSelf) {
								StartCoroutine (searchMap.getTrailForLocation (wwwScript, resultText));
								exploreTrailsPanel.gameObject.SetActive (false);
								searchInput.text = "";
								searchInput.gameObject.SetActive (true);
							}
							//Regular search function from search bar
							else {
								StartCoroutine (searchMap.getTrailForLocation (wwwScript, resultText));
								searchInput.text = "";
								scrollView.gameObject.SetActive (false);
							}
							cameraHandler.enableSearchMap (); //show search map if not currently showing
							hikeButton.gameObject.SetActive (true);
							currentSelectedTrail = resultText;
							createAnnotationButton.gameObject.SetActive (false);
							exitSelectionButton.gameObject.SetActive (true);
						} else {
							searchInput.text = "";
							scrollView.gameObject.SetActive (false);
						}
					}
				}
			}
			if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1)){
				PointerEventData pointerData = new PointerEventData(EventSystem.current);
				pointerData.position = Input.mousePosition;
				List<RaycastResult> hits = new List<RaycastResult>();
				EventSystem.current.RaycastAll(pointerData, hits);
				if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
					string resultText = hits [0].gameObject.GetComponent<Text> ().text;
					if (resultText != "Submit" && resultText != "Explore" && resultText != searchInput.text) {
						// Cancel search
						if (resultText != "_________") {
							Debug.Log (resultText);
							scrollView.gameObject.SetActive (false);
							SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMapObject").GetComponent<SearchMap> ();
							if (exploreTrailsPanel.gameObject.activeSelf) {
								string[] trailNameOnly = resultText.Split (new char[0]);
								StringBuilder trailName = new StringBuilder ();
								for (int i = 0; i < trailNameOnly.Length - 2; i++) {
									if (i == 0)
										trailName.Append (trailNameOnly [i]);
									else
										trailName.Append (" " + trailNameOnly [i]);
								}
								resultText = trailName.ToString ().Trim ();
							}
							//Quick search function from explore page
							if (exploreTrailsPanel.gameObject.activeSelf) {
								StartCoroutine (searchMap.getTrailForLocation (wwwScript, resultText));
								exploreTrailsPanel.gameObject.SetActive (false);
								searchInput.text = "";
								searchInput.gameObject.SetActive (true);
							}
							//Regular search function from search bar
							else {
								StartCoroutine (searchMap.getTrailForLocation (wwwScript, resultText));
								searchInput.text = "";
								scrollView.gameObject.SetActive (false);
								trailNames.Clear ();
							}
							cameraHandler.enableSearchMap (); //show search map if not currently showing
							hikeButton.gameObject.SetActive (true);
							currentSelectedTrail = resultText;
							createAnnotationButton.gameObject.SetActive (false);
							exitSelectionButton.gameObject.SetActive (true);
						} else {
							searchInput.text = "";
							scrollView.gameObject.SetActive (false);
						}
					}
				}
			}
		}
	}


	public void isLoading(bool enabled){
		if(enabled){
			loadingCanvas.gameObject.SetActive (true);
		} else {
			loadingCanvas.gameObject.SetActive(false);
		}
	}

	// When annotation button is clicked
	public void onClickAnnotation() {
		annotationInput.gameObject.SetActive (!annotationInput.gameObject.activeSelf);
	}

	public void onAnnotationSubmit() {
		if (annotationInput.text != "") {
			//TODO: Add switches between types of annotations
			//if billboard:

			StartCoroutine(annotationHandler.addBillboard (annotationInput.text, colorDropdown.value, styleDropdown.value));
		}
		styleDropdown.value = 0;
		colorDropdown.value = 0;
		annotationInput.text = "";
		annotationInput.gameObject.SetActive (!annotationInput.gameObject.activeSelf);
	}

	public void signInSubmit(){
		Debug.Log ("Got Here");
		StartCoroutine(wwwScript.PostSignIn (usernameValue.text, PasswordValue.text));
	}

	public void onHike() {
		StartCoroutine(wwwScript.UpdateUserTrail("User2", currentSelectedTrail));
		hikeButton.gameObject.SetActive (false);
	}

	public void disable2D() {
		cameraHandler.resetCams ();
		enable2D (false);
		exitSelectionButton.gameObject.SetActive (false);
		hikeButton.gameObject.SetActive (false);
	}

	public void enable2D(bool enabled) {
		if (enabled) {
			annotationInput.gameObject.SetActive (false);
			createAnnotationButton.gameObject.SetActive (false);
			searchInput.gameObject.SetActive (true);
			toggleARButton.gameObject.SetActive (true);
		} else {
			createAnnotationButton.gameObject.SetActive (true);
			toggleARButton.gameObject.SetActive (false);
			searchInput.gameObject.SetActive (false);
		}	
		cameraHandler.expand2D (enabled);
	}

	public void enablePlaces() {
		clearResults ();
		topTrailsPanel.gameObject.SetActive (true);
		for (int i = 0; i < parsedUser ["trailHistory"].Count; i++) {
			if (i < 5) {
				GameObject tempResult = (GameObject)Instantiate (result, topTrailsPanel.transform);
				Text text = tempResult.AddComponent<Text> ();
				text.font = Resources.GetBuiltinResource (typeof(Font), "Arial.ttf") as Font;
				text.fontSize = 50;
				RectTransform tempTransform = text.GetComponent<RectTransform> ();
				tempTransform.sizeDelta = new Vector2 (600f, 100f);
				text.transform.localScale = new Vector3 (1f, 0.5f, 1f);
				text.alignment = TextAnchor.MiddleLeft;
				text.color = Color.black;
				text.text = i + 1 + ". " + parsedUser ["trailHistory"] [i] [0].ToString ().Replace ("\"", "");
				resultList.Add (tempResult);
			} else {
				break;
			}
		}
	}

	public void clearDuplicateTrails(){
		nearbyTrails.Sort ((t1, t2) => float.Parse(t1 [1]).CompareTo (float.Parse(t2 [1])));
		int i = 0;
		while (trailNames.Count < 10 && i < nearbyTrails.Count) {
			if (!trailNames.Contains (nearbyTrails [i] [0])){
				trailNames.Add (nearbyTrails [i] [0]);
			} else {
				nearbyTrails.RemoveAt (i);
				i--;
			}
			i++;
		}
	}

	public void onValueChangedSearch() {
		clearResults ();
		scrollView.gameObject.SetActive (true);
		GameObject results = GameObject.FindGameObjectWithTag ("results");
		trailNames.Clear ();
		for (int i = 0; i < nearbyTrails.Count; i++) {
			// checking trails agaist search input 
			if (nearbyTrails [i][0].ToLower().Contains (searchInput.text.ToLower())) {
				if (!trailNames.Contains (nearbyTrails [i][0])) {
					GameObject tempResult = (GameObject)Instantiate (result, results.transform);
					tempResult.layer = 5;
					RectTransform tempRect = tempResult.AddComponent<RectTransform> ();
					tempRect.sizeDelta = new Vector2 (600, 40);
					//Add text
					Text text = tempResult.AddComponent<Text> ();
					text.font = Resources.GetBuiltinResource (typeof(Font), "Arial.ttf") as Font;
					text.fontSize = 35;
					text.color = Color.blue;
					text.text = nearbyTrails [i][0];
					resultList.Add (tempResult);
					trailNames.Add (text.text);
				}
			}
		}
	}

	public void enableExplore() {
		clearResults ();
		exploreTrailsPanel.gameObject.SetActive (true);
		try{
			trailNames.Clear ();
			int i = 0;
			while (i < 10 && i < nearbyTrails.Count) {
				GameObject tempResult = (GameObject)Instantiate (result, exploreTrailsPanel.transform);
				Text text = tempResult.AddComponent<Text> ();
				text.font = Resources.GetBuiltinResource (typeof(Font), "Arial.ttf") as Font;
				text.fontSize = 25;
				RectTransform tempTransform = text.GetComponent<RectTransform> ();
				tempTransform.sizeDelta = new Vector2 (400f, 100f);
				text.transform.localScale = new Vector3 (0.25f, 3f, 1f);
				text.color = Color.black;
				text.text = nearbyTrails [i] [0].ToString() + " " + (System.Math.Truncate(100* double.Parse(nearbyTrails [i] [1]))/100d).ToString() + " mi";
				resultList.Add (tempResult);
				i++;
			}
		} catch {
			errorText.gameObject.SetActive (true);
			errorText.color = Color.red;
			errorText.text = "Error: Our servers are down for maintenance";
		}
	}

	public void enableSettings() {
		settingsPanel.gameObject.SetActive (true);
	}

	public void resetUI() {
		annotationInput.gameObject.SetActive (false);
		createAnnotationButton.gameObject.SetActive (false);
		toggleARButton.gameObject.SetActive (false);
		searchInput.gameObject.SetActive (false);
		exploreTrailsPanel.gameObject.SetActive (false);
		topTrailsPanel.gameObject.SetActive (false);
		settingsPanel.gameObject.SetActive (false);
		errorText.gameObject.SetActive (false);
		hikeButton.gameObject.SetActive (false);
		exitSelectionButton.gameObject.SetActive (false);
	}

	public void userSelection() {
		if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer && Input.touchCount > 0) {
			PointerEventData pointerData = new PointerEventData (EventSystem.current);
			pointerData.position = Input.GetTouch (0).position;
			List<RaycastResult> hits = new List<RaycastResult> ();
			EventSystem.current.RaycastAll (pointerData, hits);
			if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
				string hit = hits [0].gameObject.GetComponent<Text> ().text;
				if (hit != null && hit != "_________") {
					cameraHandler.resetCams();
					resetUI ();
					if (hit == "Map") {
						enable2D (true);
					} else if (hit == "Explore") {
						enableExplore ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Your Places") {
						enablePlaces ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Settings") {
						enableSettings ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Logout") {
						Debug.Log ("Logout");
					}
					menuHandler.CloseMenu ();
				}
			}
		}
		if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1)) {
			PointerEventData pointerData = new PointerEventData(EventSystem.current);
			pointerData.position = Input.mousePosition;
			List<RaycastResult> hits = new List<RaycastResult>();
			EventSystem.current.RaycastAll(pointerData, hits);
			if (hits.Count > 0 && hits [0].gameObject.GetComponent<Text> () != null) {
				string hit = hits [0].gameObject.GetComponent<Text> ().text;
				if (hit != null && hit != "_________") {
					cameraHandler.resetCams();
					resetUI ();
					if (hit == "Map") {
						enable2D (true);
					} else if (hit == "Explore") {
						enableExplore ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Your Places") {
						enablePlaces ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Settings") {
						enableSettings ();
						cameraHandler.enableBackgroundTime ();
					} else if (hit == "Logout") {
						Debug.Log ("Logout");
					}

					menuHandler.CloseMenu ();
				}
			}
		}
	}

	public void clearResults() {
		//Clear the list
		for(int i = 0; i < resultList.Count; i++)
		{
			Object.Destroy (resultList [i]);
		}
		resultList.Clear ();
	}

	public void clearNearby() {
		nearbyTrails.Clear ();
	}

	public void populateNearby(string trailName, string trailDist) {
		string[] trail = new string[2];
		trail [0] = trailName.Replace("\"" , "");
		trail [1] = trailDist.ToString ();
		nearbyTrails.Add (trail);
	}

	public void setRadius() {
		radiusText.text = System.Math.Round (radiusSlider.value).ToString();
		sceneManager.updateRadius ((int)System.Math.Round (radiusSlider.value));
		sceneManager.updateNearby((int)System.Math.Round (radiusSlider.value));
		updateUserSettings ();
	}

	public void toggleAnnotations() {
		annotationHandler.enableAnnotations (annotationsToggle.isOn);
		updateUserSettings ();
	}

	public void updateUserSettings() {
		StartCoroutine(wwwScript.UpdateUserSettings("User2", radiusText.text, annotationsToggle.isOn.ToString()));
	}

	public void changeAnnotationFont() {
		Text annotation = annotationInput.GetComponentInChildren<Text> ();
		if (annotation.text != "") {
			if (styleDropdown.value == 0)
				annotation.fontStyle = FontStyle.Normal;
			else if (styleDropdown.value == 1)
				annotation.fontStyle = FontStyle.Bold;
			else if (styleDropdown.value == 2)
				annotation.fontStyle = FontStyle.Italic;
			else if (styleDropdown.value == 3)
				annotation.fontStyle = FontStyle.BoldAndItalic;
		}
	}

	public void changeAnnotationColor() {
		Text annotation = annotationInput.GetComponentInChildren<Text> ();
		if (annotation.text != "") {
			if (colorDropdown.value == 0)
				annotation.color = Color.black;
			else if (colorDropdown.value == 1)
				annotation.color = Color.red;
			else if (colorDropdown.value == 2)
				annotation.color = Color.blue;
			else if (colorDropdown.value == 3)
				annotation.color = Color.green;
		}
	}
}
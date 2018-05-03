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

	//Trail UI + Setup
	private string currentSelectedTrail;
	public Button hikeButton;

	//Explore UI
	private List<string[]> nearbyTrails;
	private List<string> trailNames;
	private bool explore = false;
	public GameObject exploreTrailsPanel;

	//Your Places UI
	private List<string[]> topTrails;
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

	void Start () {
		result = new GameObject ();
		resultList = new List<GameObject> ();
		nearbyTrails = new List<string[]> ();
		topTrails = new List<string[]> ();
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
		if (sceneObject != null) {
			sceneManager = (SceneManager)sceneObject.gameObject.GetComponent (typeof(SceneManager));
		}
		radiusSlider.minValue = 1;
		radiusSlider.maxValue = 100;
		radiusSlider.value = 50;
		createAnnotationButton.onClick.AddListener (onClickAnnotation);
		submitAnnotationButton.onClick.AddListener (onAnnotationSubmit);
		exitSelectionButton.onClick.AddListener (disable2D);
	}

	void Update(){
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
							SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMap").GetComponent<SearchMap> ();
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
								StartCoroutine (searchMap.getTrailData (wwwScript, resultText));
								exploreTrailsPanel.gameObject.SetActive (false);
								searchInput.text = "";
								searchInput.gameObject.SetActive (true);
							}
							//Regular search function from search bar
							else {
								StartCoroutine (searchMap.getTrailData (wwwScript, resultText));
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
							SearchMap searchMap = GameObject.FindGameObjectWithTag ("SearchMap").GetComponent<SearchMap> ();
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
								StartCoroutine (searchMap.getTrailData (wwwScript, resultText));
								exploreTrailsPanel.gameObject.SetActive (false);
								searchInput.text = "";
								searchInput.gameObject.SetActive (true);
							}
							//Regular search function from search bar
							else {
								StartCoroutine (searchMap.getTrailData (wwwScript, resultText));
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

			annotationHandler.addBillboard (annotationInput.text);
			annotationHandler.sendAnnotation("Billboard", annotationInput.text, sceneManager.currentLoc);
		}
		annotationInput.text = "";
		annotationInput.gameObject.SetActive (!annotationInput.gameObject.activeSelf);
	}

	public void onHike(SearchMap searchMap) {
		//this is what we will use to get search trail from UI
		StartCoroutine(searchMap.getTrailForLocation(wwwScript, currentSelectedTrail));
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
		topTrailsPanel.gameObject.SetActive (true);
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
				text.transform.position = new Vector3 (400f, 100f);
				text.transform.localScale = new Vector3 (0.25f, 3f, 1f);
				text.color = Color.black;
				text.text = System.String.Format("{0,-10} {1,10}", nearbyTrails [i] [0], (System.Math.Truncate(100* double.Parse(nearbyTrails [i] [1]))/100d).ToString() + " mi");
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
	}

	public void userSelection()
	{
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
		if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1))
		{
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

	public void populateNearby(string trailName, string trailDist){
		string[] trail = new string[2];
		trail [0] = trailName.Replace("\"" , "");
		trail [1] = trailDist.ToString ();
		nearbyTrails.Add (trail);
	}

	public void setRadius(){
		radiusText.text = System.Math.Round (radiusSlider.value).ToString();
		sceneManager.updateRadius ((int)System.Math.Round (radiusSlider.value));
		sceneManager.updateNearby((int)System.Math.Round (radiusSlider.value));
	}

	public void toggleAnnotations(){
		annotationHandler.enableAnnotations (annotationsToggle.isOn);
	}

	public void changeAnnotationFont(){
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

	public void changeAnnotationColor(){
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

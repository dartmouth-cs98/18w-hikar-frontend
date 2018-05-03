using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SimpleJSON;
using Mapbox.Unity.Location;

public class AnnotationHandler : MonoBehaviour 
{

	public Camera arCam;
	// Annotation assets
	public GameObject billboardAnnotation;
	public GameObject rayCastObject;

	private ArrayList billboards;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	//directionsHandler
	public GameObject directionsObject;
	private DirectionsHandler directionsHandler;

	//sceneHandler
	public GameObject sceneObject;
	private SceneManager sceneHandler;

	const float mileToLatLon = 1/69;

	void Start(){
		billboards = new ArrayList ();
		if (wwwHandler != null) {
			wwwScript = (WWWHandler)wwwHandler.gameObject.GetComponent (typeof(WWWHandler));
		}
		if (directionsObject != null) {
			directionsHandler = (DirectionsHandler)directionsObject.GetComponent (typeof(DirectionsHandler));
		}
		if (sceneObject != null) {
			sceneHandler = (SceneManager)sceneObject.GetComponent (typeof(SceneManager));
		}
	}
	public IEnumerator SetupMap() 
	{
		CoroutineWithData annotationData = new CoroutineWithData(this, wwwScript.GetAnnotation());
		yield return annotationData.coroutine;
		var parsedAnnotation = JSON.Parse (annotationData.result.ToString());

		//Instantiate all annotations here
		for (int i = 0; i < parsedAnnotation.Count; i++)
		{
			float annoLat = parsedAnnotation [i] ["lat"].AsFloat;
			float annoLon = parsedAnnotation [i] ["lon"].AsFloat;
			if (inRange (annoLat, annoLon))
			{
				GameObject tempAnnotation;
				if (parsedAnnotation [i] ["type"].Value == "billboard") {
					billboards.Add(Instantiate (billboardAnnotation, new Vector3 (annoLat, 0, annoLon), Quaternion.identity));
					tempAnnotation = (GameObject) billboards [billboards.Count - 1];
				} 
				else 
				{
					//TODO: figure this out with different meshes
					tempAnnotation = Instantiate (billboardAnnotation, new Vector3 (annoLat, 0, annoLon), Quaternion.identity);
				}
				tempAnnotation.SetActive (true);
				tempAnnotation.transform.Rotate (0, -90, 90);
				TextMesh annotation = tempAnnotation.GetComponentInChildren (typeof(TextMesh)) as TextMesh;
				// Word wrapping marginally adapted from https://answers.unity.com/questions/223906/textmesh-wordwrap.html
				string builder = "";
				annotation.text = "";
				float rowLimit = 10; //Guess and check to find sweet spot   
				string text = parsedAnnotation [i] ["text"].Value;
				string[] parts = text.Split(' ');
				for (int j = 0; j < parts.Length; j++)
				{
					annotation.text += parts[j] + " ";
					if (annotation.text.Length > rowLimit)
					{
						builder += annotation.text;
						builder = builder.TrimEnd() + System.Environment.NewLine;
						annotation.text = "";
					}
				}
				if(builder.Length != 0)
					annotation.text = builder;
				annotation.alignment = TextAlignment.Center;
			}
		}
	}

	private bool inRange(float x, float y)
	{
		if (sceneObject != null) {
			sceneHandler = (SceneManager)sceneObject.GetComponent (typeof(SceneManager));
		}
		if (x <= (sceneHandler.currentLoc.LatitudeLongitude.x + (sceneHandler.radius * mileToLatLon)) 
			&& x >= (sceneHandler.currentLoc.LatitudeLongitude.x - (sceneHandler.radius * mileToLatLon))) 
		{
			if (y <= (sceneHandler.currentLoc.LatitudeLongitude.y + (sceneHandler.radius * mileToLatLon))
				&& y >= (sceneHandler.currentLoc.LatitudeLongitude.y - (sceneHandler.radius * mileToLatLon)))
			{
				return true;
			}
		}
		return false;
	}

	public void sendAnnotation (string type, string text, Location userLoc) {
		StartCoroutine(wwwScript.PostAnnotation (type, text, userLoc.LatitudeLongitude.x, userLoc.LatitudeLongitude.y));
	}

	public void addBillboard(string text){
		GameObject billboard = Instantiate(GameObject.FindGameObjectWithTag("billboardObject"));
		billboard.GetComponentInChildren<TextMesh>().text = text;

		//Place the billboard aligned to the map

		Vector3 correctPos = Camera.main.ViewportPointToRay (new Vector3 (0.5F, 0.5F, 0)).GetPoint (10);
		Debug.Log ("X: " + correctPos.x + " Y: " + correctPos.y + " Z: " +correctPos.z);

		Vector3 billboardRayOrigin = new Vector3 (correctPos.x, rayCastObject.gameObject.transform.position.y, correctPos.z);

		float height = directionsHandler.castRaycastDownAtPosition (billboardRayOrigin);
		if (height != billboardRayOrigin.y) {
			directionsHandler.setTotalOffset();
			height -= directionsHandler.totalOffset;
		}
		billboard.transform.position = new Vector3 (correctPos.x, height, correctPos.z);
		billboards.Add (billboard);
	}

	public void enableAnnotations(bool toggle){
		foreach (GameObject billboard in billboards) {
			if (!toggle) {
				Debug.Log ("Disabling annotations");
				billboard.gameObject.SetActive (false);
			} else {
				Debug.Log ("Enabling annotations");
				billboard.gameObject.SetActive (true);
			}
		}
	}
	
	void Update () {
		// Billboard the billboards
		if (billboards.Count != 0) {
			foreach (GameObject billboard in billboards) {
				if(arCam.transform.position.z > billboard.transform.position.z)
					billboard.transform.eulerAngles = new Vector3 (0, Mathf.Atan((arCam.transform.position.x-billboard.transform.position.x)/(arCam.transform.position.z - billboard.transform.position.z)) * (180/Mathf.PI) + 180, 90);
				else
					billboard.transform.eulerAngles = new Vector3 (0, Mathf.Atan((arCam.transform.position.x-billboard.transform.position.x)/(arCam.transform.position.z - billboard.transform.position.z)) * (180/Mathf.PI), 90);
			}
		}
	}
}

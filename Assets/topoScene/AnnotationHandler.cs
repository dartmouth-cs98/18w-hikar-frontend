using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SimpleJSON;

public class AnnotationHandler : MonoBehaviour 
{

	public Camera m_Camera;
	// Annotation assets
	public GameObject billboardAnnotation;
	private ArrayList billboards;

	//wwwHandler
	public GameObject wwwHandler;
	private WWWHandler wwwScript;

	private Vector2 currentLocation;


	//hardcoded radius
	private int radius = 5;

	void Start(){
		billboards = new ArrayList ();
		if (wwwHandler != null) {
			wwwScript = (WWWHandler)wwwHandler.gameObject.GetComponent (typeof(WWWHandler));
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
		if (x <= (currentLocation.x + radius) && x >= (currentLocation.x - radius)) 
		{
			if (y <= (currentLocation.y + radius) && y >= (currentLocation.y - radius))
			{
				return true;
			}
		}
		return false;
	}

	public void updateLoc(Vector2 currentVec)
	{
		currentLocation = currentVec;
	}

	public void sendAnnotation (string text) {
		string type = "Billboard";
		float lat = Input.location.lastData.latitude;
		float lon = Input.location.lastData.longitude;
		var id = StartCoroutine(wwwScript.PostAnnotation (type, text, lat, lon));
	}

	public void addBillboard(string text){
		Debug.Log ("ADDED");
		GameObject billboard = Instantiate(GameObject.FindGameObjectWithTag("billboardObject"));
		billboard.GetComponentInChildren<TextMesh>().text = text;
		//Place the billboard in world-forward position
		billboard.transform.position = Vector3.forward * 10;
		billboards.Add (billboard);
	}

	public void enableAnnotations(bool toggle){
		Debug.Log ("here1");

		foreach (GameObject billboard in billboards) {
			Debug.Log ("here3");

			if (!toggle) {
				Debug.Log ("Disabling annotations");
				billboard.gameObject.SetActive (false);
			} else {
				Debug.Log ("Enabling annotations");
				billboard.gameObject.SetActive (true);
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		// Billboard the billboards
		if (billboards.Count != 0) {
			foreach (GameObject billboard in billboards) {
				if(m_Camera.transform.position.z > billboard.transform.position.z)
					billboard.transform.eulerAngles = new Vector3 (0, Mathf.Atan((m_Camera.transform.position.x-billboard.transform.position.x)/(m_Camera.transform.position.z - billboard.transform.position.z)) * (180/Mathf.PI) + 180, 90);
				else
					billboard.transform.eulerAngles = new Vector3 (0, Mathf.Atan((m_Camera.transform.position.x-billboard.transform.position.x)/(m_Camera.transform.position.z - billboard.transform.position.z)) * (180/Mathf.PI), 90);
			}
		}
	}
}

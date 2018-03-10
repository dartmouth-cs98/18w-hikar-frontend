﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;

public class AnnotationHandler : MonoBehaviour 
{
	public Camera m_Camera;
	// Annotation assets
	public GameObject billboardAnnotation;
	private ArrayList billboards = new ArrayList();

	private Vector2 currentLocation;

	//hardcoded radius
	private int radius = 5;

	public IEnumerator SetupMap(WWWHandler wwwScript) 
	{
		CoroutineWithData annotationData = new CoroutineWithData(this, wwwScript.GetAnnotation());
		yield return annotationData.coroutine;
		CoroutineWithData nodeData = new CoroutineWithData(this, wwwScript.GetNode());
		yield return nodeData.coroutine;
		//		print("result is " + annotationData.result.ToString());
		var parsedAnnotation = SimpleJSON.JSON.Parse (annotationData.result.ToString());
		var parsedNode = SimpleJSON.JSON.Parse (nodeData.result.ToString ());

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
		//Instantiate all nodes here
//		for (int i = 0; i < parsedNode.Count; i++) {
//			if (inRange (parsedNode [i] ["lat"], parsedNode [i] ["long"])) 
//			{
//				print ("hi");
//			}
//		}
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
	void Start () {

	}

	public void addBillboard(GameObject billboard){

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
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;

public class SearchMap : MonoBehaviour {


	[SerializeField]
	AbstractMap map;

	[SerializeField]
	Camera camera;

	[SerializeField]
	DirectionsHandler directions;


	Vector3 cameraPosition;





	void Awake () {

		//camera = GameObject.FindGameObjectWithTag("SearchCamera");
		cameraPosition = camera.transform.position;
	}
	

	public void searchForLocation(Mapbox.Utils.Vector2d location){
		Debug.Log("Searching for Map at: " + location);
		camera.transform.position = cameraPosition;
		map.Initialize(location, 16);
	}


	public IEnumerator getTrailForLocation(WWWHandler www, string trailName){

		//store all waypoints as Vec2ds
		List<Mapbox.Utils.Vector2d> waypointList = new List<Mapbox.Utils.Vector2d>();

		//parse data
		CoroutineWithData nodeData = new CoroutineWithData(this, www.GetTrail(trailName));
		yield return nodeData.coroutine;
		var parsedNode = SimpleJSON.JSON.Parse (nodeData.result.ToString ());

		double south = double.MinValue;
		double north = double.MaxValue;
		double west = double.MinValue;
		double east = double.MaxValue;



		//Mapbox.Utils.Vector2dBounds bounds = new Mapbox.Utils.Vector2dBounds


		for(int i = 0; i < parsedNode["geometry"]["coordinates"].Count; i++) {

			double lat = parsedNode["geometry"]["coordinates"][i][1].AsDouble;
			double lon = parsedNode["geometry"]["coordinates"][i][0].AsDouble;

			Mapbox.Utils.Vector2d vec2d = new Mapbox.Utils.Vector2d(lat, lon);

			waypointList.Add(vec2d);

			//set map center to first 
			if(i == 0){ 
				searchForLocation(vec2d);
			}

		}

		directions.getDirectionsFromLatLngs(waypointList);

	}

}

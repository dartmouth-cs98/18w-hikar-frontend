using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;
using SimpleJSON;

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
		map.UpdateMap(location, 16);
	}

	public void loadMapWithBounds(Mapbox.Utils.Vector2dBounds bounds){
		Debug.Log("Bounding Map at: " + bounds);
		camera.transform.position = cameraPosition;
		map.UpdateMap(bounds.Center, 16);


		/* //trying to get a tilecover given a bounds
		HashSet<Mapbox.Map.UnwrappedTileId> tiles = Mapbox.Map.TileCover.GetWithWebMerc(bounds, 16);

		IReadOnlyList<Mapbox.Map.UnwrappedTileId> tileList = tiles.ToReadOnlyList();

		Debug.Log(tileList.ToString());

		for(int i = 0; i < tileList.Count; i++){
			Mapbox.Map.UnwrappedTileId tile = tileList[i];
			Debug.Log(tile.ToString());
			map.MapVisualizer.LoadTile(tile);
		}
		*/



	}

	// This instantiates the map for the trail location for search camera
	public IEnumerator getTrailForLocation(WWWHandler www, string trailName){

		//store all waypoints as Vec2ds
		List<Mapbox.Utils.Vector2d> waypointList = new List<Mapbox.Utils.Vector2d>();

		//parse data
		CoroutineWithData trailData = new CoroutineWithData(this, www.GetTrail(trailName));
		yield return trailData.coroutine;
		var parsedTrail = SimpleJSON.JSON.Parse (trailData.result.ToString ());

		//used to calculate the bounds for the trail
		double south = double.MaxValue;
		double north = double.MinValue;
		double west = double.MaxValue;
		double east = double.MinValue;

		double latHead = 0;
		double lonHead = 0;

		for(int i = 0; i < parsedTrail["geometry"]["coordinates"].Count; i++) {
			if (i == 0) {
				latHead = parsedTrail["geometry"]["coordinates"][0][1].AsDouble;
				lonHead = parsedTrail["geometry"]["coordinates"][0][0].AsDouble;
			}

			double lat = parsedTrail["geometry"]["coordinates"][i][1].AsDouble;
			double lon = parsedTrail["geometry"]["coordinates"][i][0].AsDouble;

			Mapbox.Utils.Vector2d vec2d = new Mapbox.Utils.Vector2d(lat, lon);

			waypointList.Add(vec2d);


			//find the ne,sw bounds
			if(lat < south)
				south = lat;
			if(lat > north)
				north = lat;
			if(lon < west)
				west = lon;
			if(lon > east)
				east = lon;

		}

		Mapbox.Utils.Vector2d ne = new Mapbox.Utils.Vector2d(north, east);
		Mapbox.Utils.Vector2d sw = new Mapbox.Utils.Vector2d(south, west);
		Mapbox.Utils.Vector2dBounds bounds = new Mapbox.Utils.Vector2dBounds(sw, ne);
		loadMapWithBounds(bounds);

		directions.getDirectionsFromLatLngs(waypointList);

		if (latHead != 0 || lonHead != 0) {
			Mapbox.Utils.Vector2d searchLoc = new Mapbox.Utils.Vector2d (latHead, lonHead);
			searchForLocation (searchLoc);
		}
	}


	//Simply returns the superficial trailhead data
	public IEnumerator getTrailData(WWWHandler www, string trailName){
		CoroutineWithData trailData = new CoroutineWithData(this, www.GetTrail(trailName));
		yield return trailData.coroutine;
		var parsedTrail = JSON.Parse (trailData.result.ToString());
		//TODO: get a trailhead lat/lon
		double lat = parsedTrail["geometry"]["coordinates"][0][1].AsDouble;
		double lon = parsedTrail["geometry"]["coordinates"][0][0].AsDouble;
		Mapbox.Utils.Vector2d searchLoc = new Mapbox.Utils.Vector2d (lat, lon);
		searchForLocation (searchLoc);
	}
}

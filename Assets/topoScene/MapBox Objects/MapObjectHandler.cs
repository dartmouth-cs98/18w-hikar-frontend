using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapObjectHandler : MonoBehaviour {

	private Mapbox.Unity.Map.AbstractMap basicMap;

	public void initiliazeMap(Vector2 latLong, int zoomFactor) {

		//convert Vector2 to proper format
		Mapbox.Utils.Vector2d MBLatLong = new Mapbox.Utils.Vector2d((double)latLong.x, (double)latLong.y);
		Debug.Log(MBLatLong);

		//initialize map at location
		basicMap = (Mapbox.Unity.Map.AbstractMap)GetComponent(typeof(Mapbox.Unity.Map.AbstractMap));
		basicMap.Initialize(MBLatLong, zoomFactor);
	}

}

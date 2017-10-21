using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class JPInput : NetworkBehaviour {
	Plane groundPlane = new Plane (new Vector3 (0, 0, 0), new Vector3 (-100, 0, -100), new Vector3 (100, 0, -100));
	public GameObject marker;
	// Use this for initialization
	void Start () {
		if(isServer) {
			marker = GameObject.Find("Marker");
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown(0)) {
			print ("CLICK");
			RaycastHit hit;
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			Debug.DrawRay (ray.origin, ray.direction * 100000, Color.yellow, 0.0f, false);
			float rayDistance;
			if (groundPlane.Raycast (ray, out rayDistance)) {
				CmdSendLocation(ray.GetPoint (rayDistance));
			}
		}
	}

	[Command]
	public void CmdSendLocation(Vector2 pos) {
		marker.transform.position = pos;
	}
}

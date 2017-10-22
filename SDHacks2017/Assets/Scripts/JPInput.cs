using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class JPInput : NetworkBehaviour {
	Plane groundPlane = new Plane (new Vector3 (0, 0, 0), new Vector3 (-100, 0, -100), new Vector3 (100, 0, -100));
	public GameObject marker;
	public GameObject controlPanel;
	public int playerNumber;
	GameObject selectedShip;
	int controlScheme = 0;
	public GameObject[] shipList;
	public GameObject[] spawnedShipList;
	public Color picked;
	// Use this for initialization
	void Start () {
		if(isServer) {
			spawnedShipList = new GameObject[shipList.Length];
			marker = GameObject.Find("Marker");
			for(int count = 0; count < shipList.Length; count ++) {
				GameObject obj = (GameObject)Instantiate (shipList [count], new Vector3 (count * 10, transform.position.y, transform.position.z), transform.rotation);
				obj.name = "Player" + playerNumber + "Ship" + count;
				//obj.GetComponent<TTMovement> ().shipController = obj.transform.GetChild (0).gameObject;
				//obj.transform.GetChild (0).gameObject.SetActive(false);
				//CmdSpawnShip (obj);
				NetworkServer.Spawn (obj);
				obj.GetComponent<TTMovement> ().RpcSetName (playerNumber, count);
				spawnedShipList [count] = obj;
			}

		}
		if (isLocalPlayer) {
			//GameObject.Find ("HitCubeParent").transform.GetChild (0).gameObject.GetComponent<> ();
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown(0)) {
			//print ("CLICK");
			RaycastHit hit;
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			Debug.DrawRay (ray.origin, ray.direction * 100000, Color.yellow, 0.0f, false);
			float rayDistance;
			if (Physics.Raycast(ray, out hit)) {
				if (hit.collider.gameObject.transform.name.Contains ("Ship")) {
					if (hit.collider.gameObject.name.Contains ("Player" + playerNumber)) {
						//print ("PlayerControlled");
						if (selectedShip == null) {
							selectedShip = hit.collider.gameObject;
							selectedShip.GetComponent<TTMovement> ().activateController (true);
							CmdSetSelectedShip (hit.collider.gameObject.name);
						} else {
							if (controlScheme > 1) {
								CmdSetTarget (hit.collider.gameObject.name);
								CmdSetMode (controlScheme);

								selectedShip.GetComponent<TTMovement> ().activateController (false);
								selectedShip = null;
								CmdClearSelectedShip ();
								controlScheme = 0;
							} else {
								selectedShip.GetComponent<TTMovement> ().activateController (false);
								selectedShip = null;
								CmdClearSelectedShip ();
								controlScheme = 0;
							}
						}
					
					}
				}
				if (hit.collider.gameObject.name.Contains ("Control")) {
					if(selectedShip != null) {
						controlPanel = hit.collider.gameObject;
						picked = new Color(0.5F, 0.5F, 0.5F, 1F);
						controlPanel.GetComponent<Renderer> ().material.color = picked; //changing selected button's color
						if (hit.collider.gameObject.name.Contains ("Move")) {
							controlScheme = 1;

						} else if (hit.collider.gameObject.name.Contains ("Defend")) {
							controlScheme = 2;

						} else if (hit.collider.gameObject.name.Contains ("Attack")) {
							controlScheme = 3;

						}
					}
				}
				//print(hit.collider.gameObject.name);
			} else if (groundPlane.Raycast (ray, out rayDistance)) {
				//marker.transform.position = ray.GetPoint(rayDistance);
				//print (ray.GetPoint (rayDistance));
				if((selectedShip != null) && (controlScheme == 1)) {
					//print ("sending pos");
					CmdSetLocation(ray.GetPoint (rayDistance));
					CmdSetMode (1);
					selectedShip.GetComponent<TTMovement> ().activateController (false);

					selectedShip = null;
					CmdClearSelectedShip ();
					controlScheme = 0;

				} else {
					if (selectedShip != null) {
						selectedShip.GetComponent<TTMovement> ().activateController (false);
						selectedShip = null;
						CmdClearSelectedShip ();
					}
					controlScheme = 0;
				}
			}
		}
	}
	[Command]
	public void CmdSpawnShip (GameObject ship) {
		NetworkServer.Spawn (ship);
	}
	[Command]
	public void CmdSetSelectedShip (string name) {
		selectedShip = GameObject.Find (name);
	}
	[Command]
	public void CmdClearSelectedShip () {
		if (controlPanel != null){
			controlPanel.GetComponent<Renderer> ().material.color = new Color (0.8F,0.8F,0.8F,1F);
		}
		selectedShip = null;
	}

	[Command]
	public void CmdSetMode (int mode) {
		selectedShip.GetComponent<TTMovement> ().setMode (mode);
	}

	[Command]
	public void CmdSetTarget (string targetName) {
		selectedShip.GetComponent<TTMovement> ().setTarget (GameObject.Find(targetName));
	}

	[Command]
	public void CmdSetLocation (Vector3 pos) {
		//print (pos);
		selectedShip.GetComponent<TTMovement> ().setPos (pos);
		//marker.transform.position = pos;
	}
}

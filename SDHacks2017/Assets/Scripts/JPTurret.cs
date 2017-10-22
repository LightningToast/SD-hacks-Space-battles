using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JPTurret : MonoBehaviour {
	float currRotation = 0;
	int direction = 1;
	public float rotationSpeed;
	public float maxDirection = 180.0f;
	public float xDistance;
	public float yDistance;
	public GameObject target;
	bool tracking = false;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 distance = target.transform.position - this.transform.position;
		if((distance.x > 0)&&(distance.x < xDistance)) {
			if((distance.z < yDistance/xDistance*distance.x)&&(distance.z > -yDistance/xDistance*distance.x)) {
				print ("Object Found");
				tracking = true;
			}
		}
		if (!tracking) {
			currRotation += direction * rotationSpeed;
			this.transform.rotation = Quaternion.Euler (new Vector3 (0, currRotation, 0));
			if (currRotation > maxDirection) {
				direction = -1;
			} else if (currRotation < -maxDirection) {
				direction = 1;
			}
		} else {
			var lookPos = target.transform.position - transform.position;
			lookPos.y = 0;
			var rotation = Quaternion.LookRotation(lookPos);
			print(rotation);
			float step = 10f * Time.deltaTime;
			transform.rotation = Quaternion.RotateTowards(transform.rotation, rotation, step);
		}
	}
	public void setTarget (GameObject obj) {
		tracking = true;
		target = obj;
	}
	public void getNearbyEnemies (GameObject[] enemies) {
		for (int count = 0; count < enemies.Length; count ++) {
			Vector3 distance = enemies [count].transform.position - this.transform.position;
			if((distance.x > 0)&&(distance.x < xDistance)) {
				if((distance.y < yDistance/xDistance*distance.x)&&(distance.y > -yDistance/xDistance*distance.x)) {
					
				}
			}
		}
	}
}

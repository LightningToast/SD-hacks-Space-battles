using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JPTurret : MonoBehaviour {
	float currRotation = 0;
	int direction = 1;
	public float rotationSpeed;
	public float maxDirection = 180.0f;
	public GameObject target;
	bool tracking = true;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
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
}

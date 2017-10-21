using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JPEnemyTracking : MonoBehaviour {
	GameObject[] enemies;
	public float maxRange;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		for (int count = 0; count < enemies.Length; count ++) {
			if (Vector3.Distance(this.transform.position, enemies[count].transform.position) > maxRange) {
				
			}
		}
	}
}

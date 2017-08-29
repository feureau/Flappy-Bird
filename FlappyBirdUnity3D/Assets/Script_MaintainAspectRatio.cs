using UnityEngine;

public class Script_MaintainAspectRatio : MonoBehaviour {
	// Use this for initialization
	public float horizontalFOV = 103.0f;

	public float targetHorizontalAspectRatio = 16.0f;
	public float targetVerticalAspectRatio = 9.0f;

	private void SetVerticalFOV(float hFOV) {
		float targetaspect = targetHorizontalAspectRatio / targetVerticalAspectRatio; // set the desired aspect ratio

		// current viewport height should be scaled by this amount
		float scaleheight = GetComponent<Camera>().aspect / targetaspect;

		// if scaled height is less than current height, add letterbox
		if (scaleheight <= 1.0f) {
			float hFOVrad = hFOV * Mathf.Deg2Rad;
			float camH = Mathf.Tan(hFOVrad * 0.5f) / GetComponent<Camera>().aspect;
			float vFOVrad = Mathf.Atan(camH) * 2;
			GetComponent<Camera>().fieldOfView = vFOVrad * Mathf.Rad2Deg;
			//print("VFOV" + GetComponent<Camera>().fieldOfView);
		} else // add pillarbox
		  {
			float hFOVrad = hFOV * Mathf.Deg2Rad;
			float camH = Mathf.Tan(hFOVrad * 0.5f) / targetaspect;
			float vFOVrad = Mathf.Atan(camH) * 2;
			GetComponent<Camera>().fieldOfView = vFOVrad * Mathf.Rad2Deg;
			//print("VFOV" + GetComponent<Camera>().fieldOfView);
		}
	}
	private void Start() {
		SetVerticalFOV(horizontalFOV);
	}
	// Update is called once per frame
	private void Update() {
	}
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StayInside : MonoBehaviour {

    public Transform MinimapCam;
    public float MinimapSize;
    Vector3 TempV3;


    // Update is called once per frame
    void Update()
    {
        TempV3 = transform.parent.transform.position;
        TempV3.y = transform.position.y;
        transform.position = TempV3;
    }

    void LateUpdate()
    {
        transform.position = new Vector3(
            Mathf.Clamp(transform.position.x, MinimapCam.position.x - MinimapSize, MinimapSize + MinimapCam.position.x),
            transform.position.y,
            Mathf.Clamp(transform.position.z, MinimapCam.position.z - MinimapSize, MinimapSize + MinimapCam.position.z)
        );
    }
}

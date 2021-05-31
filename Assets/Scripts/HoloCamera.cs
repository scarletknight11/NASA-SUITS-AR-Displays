using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HoloCamera : MonoBehaviour {

    WebCamTexture webcam;

    void Start() {
        webcam = new WebCamTexture();
        webcam.Play();
    }

    public void TakePhoto()
    {
        Debug.Log("Take Photo");
    }
    
}

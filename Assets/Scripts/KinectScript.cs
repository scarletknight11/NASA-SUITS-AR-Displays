using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Azure.Kinect.Sensor;
using System;

public class KinectScript : MonoBehaviour {

    Device device;
    int width, height, num;
    Mesh mesh; //Used for Drawing Shape
    Vector3[] vertices; //Position of each point.
    Color32[] colors; //Color of each point.
    int[] indices; //Index list of drawing point

    // Start is called before the first frame update
    void Start()
    {
        InitKinect();
        InitMesh(); //Initialization of mesh
    }

    void InitMesh()
    {
        //See the next page
        mesh = new Mesh();
        //Enable drawing more than 65535 points
        mesh.indexFormat =
        UnityEngine.Rendering.IndexFormat.UInt32;
        //allocation of memory for treating information to
        //draw point cloud.
        vertices = new Vector3[num];
        colors = new Color32[num];
        indices = new int[num];

        //See next page

    }

    void InitKinect()
    {
        //See Next Page.
        device = Device.Open(0); //OpenKinect
        device.StartCameras(new DeviceConfiguration
        {
            ColorFormat = ImageFormat.ColorBGRA32,
            ColorResolution = ColorResolution.R720p,
            DepthMode = DepthMode.NFOV_Unbinned,
            SynchronizedImagesOnly = true,
            CameraFPS = FPS.FPS30,
        });

        //Calculation of total number of pixel.
        width = device.GetCalibration().
            DepthCameraCalibration.ResolutionWidth;
        height = device.GetCalibration().
            DepthCameraCalibration.ResolutionHeight;
        num = height * width;
    }

    void OnDestroy()
    {
        device.StopCameras();
    }
}

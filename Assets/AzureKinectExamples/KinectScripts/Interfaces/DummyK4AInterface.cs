using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// DummyK4AInterface is dummy sensor-interface to the Azure Kinect sensors.
    /// </summary>
    public class DummyK4AInterface : DepthSensorBase
    {

        public override KinectInterop.DepthSensorPlatform GetSensorPlatform()
        {
            return KinectInterop.DepthSensorPlatform.DummyK4A;
        }

        public override List<KinectInterop.SensorDeviceInfo> GetAvailableSensors()
        {
            List<KinectInterop.SensorDeviceInfo> alSensorInfo = new List<KinectInterop.SensorDeviceInfo>();

            KinectInterop.SensorDeviceInfo sensorInfo = new KinectInterop.SensorDeviceInfo();
            sensorInfo.sensorId = "DummyK4A";
            sensorInfo.sensorName = "Dummy Kinect-for-Azure";
            sensorInfo.sensorCaps = KinectInterop.FrameSource.TypeAll;

            alSensorInfo.Add(sensorInfo);

            return alSensorInfo;
        }

        public override KinectInterop.SensorData OpenSensor(KinectManager kinectManager, KinectInterop.FrameSource dwFlags, bool bSyncDepthAndColor, bool bSyncBodyAndDepth)
        {
            // save initial parameters
            base.OpenSensor(kinectManager, dwFlags, bSyncDepthAndColor, bSyncBodyAndDepth);

            List<KinectInterop.SensorDeviceInfo> alSensors = GetAvailableSensors();
            if (deviceIndex < 0 || deviceIndex >= alSensors.Count)
                return null;

            sensorDeviceId = alSensors[deviceIndex].sensorId;
            sensorPlatform = KinectInterop.DepthSensorPlatform.DummyK4A;

            KinectInterop.SensorData sensorData = new KinectInterop.SensorData();
            sensorData.sensorIntPlatform = sensorPlatform;

            sensorData.sensorId = alSensors[deviceIndex].sensorId;
            sensorData.sensorName = alSensors[deviceIndex].sensorName;
            sensorData.sensorCaps = alSensors[deviceIndex].sensorCaps;

            sensorData.colorImageWidth = 1920;  // 1080p
            sensorData.colorImageHeight = 1080;

            sensorData.depthImageWidth = 640;  // NFOV Unbinned
            sensorData.depthImageHeight = 576;

            sensorData.depthCamIntr = JsonUtility.FromJson<KinectInterop.CameraIntrinsics>(jsonDepthCamIntr);
            sensorData.colorCamIntr = JsonUtility.FromJson<KinectInterop.CameraIntrinsics>(jsonColorCamIntr);
            sensorData.depth2ColorExtr = JsonUtility.FromJson<KinectInterop.CameraExtrinsics>(jsonDepth2ColorExtr);
            sensorData.color2DepthExtr = JsonUtility.FromJson<KinectInterop.CameraExtrinsics>(jsonColor2DepthExtr);

            float[] r = sensorData.depth2ColorExtr.rotation;
            float[] t = sensorData.depth2ColorExtr.translation;

            depth2colorCamMat = new Matrix4x4(new Vector4(r[0], r[3], r[6], 0), new Vector4(r[1], r[4], r[7], 0), new Vector4(r[2], r[5], r[8], 0), new Vector4(t[0] * 0.001f, t[1] * 0.001f, t[2] * 0.001f, 1));
            //Debug.Log("Depth2colorCamMat Pos: " + (Vector3)depth2colorCamMat.GetColumn(3) + ", Rot: " + depth2colorCamMat.rotation.eulerAngles);

            // flip color & depth image vertically
            sensorData.colorImageScale = new Vector3(-1f, -1f, 1f);
            sensorData.depthImageScale = new Vector3(-1f, -1f, 1f);
            sensorData.infraredImageScale = new Vector3(-1f, -1f, 1f);
            sensorData.sensorSpaceScale = new Vector3(-1f, -1f, 1f);
            sensorData.unitToMeterFactor = 0.001f;

            // depth camera offset & matrix z-flip
            sensorRotOffset = Vector3.zero;  // new Vector3(6f, 0f, 0f);   // the depth camera is tilted 6 degrees downwards
            sensorRotFlipZ = true;
            sensorRotIgnoreY = true;

            // color camera data & intrinsics
            sensorData.colorImageFormat = TextureFormat.BGRA32;
            sensorData.colorImageStride = 4;  // 4 bytes per pixel

            if(consoleLogMessages)
                Debug.Log("D" + deviceIndex + " DummyK4A-sensor opened");

            return sensorData;
        }

        public override void CloseSensor(KinectInterop.SensorData sensorData)
        {
            if (consoleLogMessages)
                Debug.Log("D" + deviceIndex + " DummyK4A-sensor closed");
        }


        private const string jsonDepthCamIntr = "{ \"cameraType\": 0, \"width\": 640, \"height\": 576, \"ppx\": 319.3891296386719, \"ppy\": 339.0096435546875," +
            "\"fx\": 505.0830078125, \"fy\": 505.2060546875, \"distType\": 4, \"distCoeffs\": [0.45811858773231509,-0.09587264806032181,-0.008291528560221196,0.7999407649040222,-0.01724848523736,-0.03864333778619766]," +
            "\"codx\": 0.0, \"cody\": 0.0, \"p2\": -0.00007324512989725918, \"p1\": -0.00015797713422216475, \"maxRadius\": 0.0, \"hFOV\": 64.7133560180664, \"vFOV\": 59.371849060058597 }";

        private const string jsonColorCamIntr = "{ \"cameraType\": 1,  \"width\": 1920, \"height\": 1080, \"ppx\": 953.6868286132813, \"ppy\": 553.8844604492188," +
            "\"fx\": 903.1810913085938, \"fy\": 903.4053955078125, \"distType\": 4, \"distCoeffs\": [0.8302328586578369,-2.98026442527771,1.6583690643310547,0.7071738839149475,-2.815004825592041,1.5919547080993653]," +
            "\"codx\": 0.0, \"cody\": 0.0, \"p2\": -0.0001697207917459309, \"p1\": 0.0007688929326832295, \"maxRadius\": 0.0, \"hFOV\": 93.49346160888672, \"vFOV\": 61.73675537109375 }";

        private const string jsonDepth2ColorExtr = "{ \"rotation\": [0.9999944567680359,0.003319731680676341,-0.00013891232083551586,-0.0032980330288410188," +
            "0.9968001842498779,0.07986554503440857,0.00040359998820349574,-0.07986464351415634,0.9968056082725525]," +
            "\"translation\": [-31.988178253173829,-2.296376943588257,4.040627956390381] }";

        private const string jsonColor2DepthExtr = "{ \"rotation\": [1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0]," +
            "\"translation\": [0.0,0.0,0.0] }";
    }
}

#if (UNITY_STANDALONE_WIN)
using UnityEngine;
using System.Collections;
using Windows.Kinect;
using System.Runtime.InteropServices;
//using Microsoft.Kinect.Face;
using System.Collections.Generic;
using System;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// Kinect2Interface is sensor-interface to the Kinect-v2 sensors.
    /// </summary>
    public class Kinect2Interface : DepthSensorBase
    {
        // change this to false, if you aren't using Kinect-v2 only and want KM to check for available sensors
        public static bool sensorAlwaysAvailable = true;

        [Tooltip("Whether the detected users face backwards or not.")]
        public bool usersFaceBackwards = false;

        public KinectSensor kinectSensor;
        public CoordinateMapper coordMapper;

        private BodyFrameReader bodyFrameReader;
        private BodyIndexFrameReader bodyIndexFrameReader;
        private ColorFrameReader colorFrameReader;
        private DepthFrameReader depthFrameReader;
        private InfraredFrameReader infraredFrameReader;

        private MultiSourceFrameReader multiSourceFrameReader;
        private MultiSourceFrame multiSourceFrame;

        private ColorFrame msColorFrame = null;
        private DepthFrame msDepthFrame = null;
        private InfraredFrame msInfraredFrame = null;
        private BodyFrame msBodyFrame = null;
        private BodyIndexFrame msBodyIndexFrame = null;


        private int kinectBodyCount = 0;
        private int kinectJointCount = 0;
        private Body[] kinectBodyData;

        private bool floorPlaneDetected = false;
        private Windows.Kinect.Vector4 vFloorPlane;


        // depth sensor settings
        [System.Serializable]
        public class K2SensorSettings : DepthSensorBase.BaseSensorSettings
        {
            public bool usersFaceBackwards;
        }


        public override KinectInterop.DepthSensorPlatform GetSensorPlatform()
        {
            return KinectInterop.DepthSensorPlatform.KinectV2;
        }


        public override System.Type GetSensorSettingsType()
        {
            return typeof(K2SensorSettings);
        }


        public override BaseSensorSettings GetSensorSettings(BaseSensorSettings settings)
        {
            if (settings == null)
            {
                settings = new K2SensorSettings();
            }

            K2SensorSettings extSettings = (K2SensorSettings)base.GetSensorSettings(settings);
            extSettings.usersFaceBackwards = usersFaceBackwards;

            return settings;
        }

        public override void SetSensorSettings(BaseSensorSettings settings)
        {
            if (settings == null)
                return;

            base.SetSensorSettings(settings);

            K2SensorSettings extSettings = (K2SensorSettings)settings;
            usersFaceBackwards = extSettings.usersFaceBackwards;
        }

        public override List<KinectInterop.SensorDeviceInfo> GetAvailableSensors()
        {
            List<KinectInterop.SensorDeviceInfo> alSensorInfo = new List<KinectInterop.SensorDeviceInfo>();
            KinectInterop.SensorDeviceInfo sensorInfo = new KinectInterop.SensorDeviceInfo();

            KinectSensor sensor = KinectSensor.GetDefault();
            if (sensor != null)
            {
                if (sensorAlwaysAvailable)
                {
                    sensorInfo.sensorId = "KinectV2";
                    sensorInfo.sensorName = "Kinect-v2 Sensor";
                    sensorInfo.sensorCaps = KinectInterop.FrameSource.TypeAll; // & ~KinectInterop.FrameSource.TypePose;
                    if (consoleLogMessages)
                        Debug.Log(string.Format("  D{0}: {1}, id: {2}", 0, sensorInfo.sensorName, sensorInfo.sensorId));

                    alSensorInfo.Add(sensorInfo);

                    return alSensorInfo;
                }
                else
                {
                    // check for available sensor
                    if (!sensor.IsOpen)
                    {
                        sensor.Open();
                    }

                    float fWaitTime = Time.realtimeSinceStartup + 3f;
                    while (!sensor.IsAvailable && Time.realtimeSinceStartup < fWaitTime)
                    {
                        // wait for availability
                    }

                    if (sensor.IsAvailable)
                    {
                        sensorInfo.sensorId = "KinectV2";
                        sensorInfo.sensorName = "Kinect-v2 Sensor";
                        sensorInfo.sensorCaps = KinectInterop.FrameSource.TypeAll; // & ~KinectInterop.FrameSource.TypePose;
                        if (consoleLogMessages)
                            Debug.Log(string.Format("  D{0}: {1}, id: {2}", 0, sensorInfo.sensorName, sensorInfo.sensorId));

                        alSensorInfo.Add(sensorInfo);
                    }

                    if (sensor.IsOpen)
                    {
                        sensor.Close();
                    }

                    fWaitTime = Time.realtimeSinceStartup + 3f;
                    while (sensor.IsOpen && Time.realtimeSinceStartup < fWaitTime)
                    {
                        // wait for sensor to close
                    }
                }

                sensor = null;
            }

            //if(alSensorInfo.Count == 0)
            //{
            //    Debug.Log("  No sensor devices found.");
            //}

            return alSensorInfo;
        }

        public override KinectInterop.SensorData OpenSensor(KinectManager kinectManager, KinectInterop.FrameSource dwFlags, bool bSyncDepthAndColor, bool bSyncBodyAndDepth)
        {
            // save initial parameters
            base.OpenSensor(kinectManager, dwFlags, bSyncDepthAndColor, bSyncBodyAndDepth);

            if (deviceStreamingMode == KinectInterop.DeviceStreamingMode.PlayRecording)
            {
                Debug.LogWarning("Please use Kinect Studio v2.0 to play the sensor data recording!");
                //return null;
            }

            List<KinectInterop.SensorDeviceInfo> alSensors = GetAvailableSensors();
            if (deviceIndex >= alSensors.Count)
            {
                Debug.LogError("  D" + deviceIndex + " is not available. You can set the device index to -1, to disable it.");
                return null;
            }

            // try to get reference to the default sensor
            sensorDeviceId = alSensors[deviceIndex].sensorId;
            sensorPlatform = KinectInterop.DepthSensorPlatform.KinectV2;

            kinectSensor = KinectSensor.GetDefault();
            if (kinectSensor == null)
            {
                Debug.LogError("Kinect-v2 sensor not found!");
                return null;
            }

            KinectInterop.SensorData sensorData = new KinectInterop.SensorData();
            sensorData.sensorIntPlatform = sensorPlatform;

            sensorData.sensorId = alSensors[deviceIndex].sensorId;
            sensorData.sensorName = alSensors[deviceIndex].sensorName;
            sensorData.sensorCaps = alSensors[deviceIndex].sensorCaps;

            // get reference to the coordinate mapper
            coordMapper = kinectSensor.CoordinateMapper;

            // flip color & depth image vertically
            sensorData.colorImageScale = new Vector3(1f, -1f, 1f);
            sensorData.depthImageScale = new Vector3(1f, -1f, 1f);
            sensorData.infraredImageScale = new Vector3(1f, -1f, 1f);
            sensorData.sensorSpaceScale = new Vector3(1f, 1f, 1f);
            sensorData.unitToMeterFactor = 1f;

            // depth camera offset & matrix z-flip
            sensorRotOffset = Vector3.zero;   // if for instance the depth camera is tilted downwards
            sensorRotFlipZ = false;
            sensorRotIgnoreY = false;

            // color
            var frameDesc = kinectSensor.ColorFrameSource.CreateFrameDescription(ColorImageFormat.Rgba);
            sensorData.colorImageWidth = frameDesc.Width;
            sensorData.colorImageHeight = frameDesc.Height;

            sensorData.colorImageFormat = TextureFormat.RGBA32;
            sensorData.colorImageStride = 4;  // 4 bytes per pixel

            if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0)
            {
                if (!isSyncDepthAndColor)
                    colorFrameReader = kinectSensor.ColorFrameSource.OpenReader();

                rawColorImage = new byte[frameDesc.LengthInPixels * frameDesc.BytesPerPixel];

                sensorData.colorImageTexture = new Texture2D(sensorData.colorImageWidth, sensorData.colorImageHeight, TextureFormat.RGBA32, false);
                sensorData.colorImageTexture.wrapMode = TextureWrapMode.Clamp;
                sensorData.colorImageTexture.filterMode = FilterMode.Point;
            }

            // depth
            sensorData.depthImageWidth = kinectSensor.DepthFrameSource.FrameDescription.Width;
            sensorData.depthImageHeight = kinectSensor.DepthFrameSource.FrameDescription.Height;

            if ((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
            {
                if (!isSyncDepthAndColor)
                    depthFrameReader = kinectSensor.DepthFrameSource.OpenReader();

                rawDepthImage = new ushort[kinectSensor.DepthFrameSource.FrameDescription.LengthInPixels];
                sensorData.depthImage = new ushort[kinectSensor.DepthFrameSource.FrameDescription.LengthInPixels];
            }

            // infrared
            if ((dwFlags & KinectInterop.FrameSource.TypeInfrared) != 0)
            {
                if (!isSyncDepthAndColor)
                    infraredFrameReader = kinectSensor.InfraredFrameSource.OpenReader();

                rawInfraredImage = new ushort[kinectSensor.InfraredFrameSource.FrameDescription.LengthInPixels];
                sensorData.infraredImage = new ushort[kinectSensor.InfraredFrameSource.FrameDescription.LengthInPixels];

                minInfraredValue = 0f;
                maxInfraredValue = 10000f;
            }

            if ((dwFlags & (KinectInterop.FrameSource.TypeBody | KinectInterop.FrameSource.TypeBodyIndex)) != 0)
            {
                if ((dwFlags & KinectInterop.FrameSource.TypeBodyIndex) != 0)
                {
                    if (!(isSyncDepthAndColor && isSyncBodyAndDepth))
                        bodyIndexFrameReader = kinectSensor.BodyIndexFrameSource.OpenReader();

                    //rawBodyIndexImage = new byte[kinectSensor.BodyIndexFrameSource.FrameDescription.LengthInPixels];  // created by InitBodyTracking()
                }

                if ((dwFlags & KinectInterop.FrameSource.TypeBody) != 0)
                {
                    if (!(isSyncDepthAndColor && isSyncBodyAndDepth))
                        bodyFrameReader = kinectSensor.BodyFrameSource.OpenReader();

                    kinectBodyCount = 6;
                    kinectJointCount = 25;
                    kinectBodyData = new Body[kinectBodyCount];
                }

                // init body tracking data
                InitBodyTracking(dwFlags, sensorData);
            }

            // don't get all frames
            getAllSensorFrames = false;

            //if(!kinectSensor.IsOpen)
            {
                //Debug.Log("Opening sensor, available: " + kinectSensor.IsAvailable);
                kinectSensor.Open();
            }

            float fWaitTime = Time.realtimeSinceStartup + 3f;
            while (!kinectSensor.IsAvailable && Time.realtimeSinceStartup < fWaitTime)
            {
                // wait for sensor to be available
            }

            //fWaitTime = Time.realtimeSinceStartup + 3f;
            while (!kinectSensor.IsOpen && Time.realtimeSinceStartup < fWaitTime)
            {
                // wait for sensor to open
            }

            if (consoleLogMessages)
                Debug.Log("D" + deviceIndex + " K2-sensor " + (kinectSensor.IsOpen ? "opened" : "closed") + ", available: " + kinectSensor.IsAvailable);

            if (isSyncDepthAndColor && dwFlags != KinectInterop.FrameSource.TypeNone && kinectSensor.IsOpen)
            {
                multiSourceFrameReader = kinectSensor.OpenMultiSourceFrameReader((FrameSourceTypes)((int)dwFlags & 0x3F));
            }

            //if (deviceMode == KinectInterop.DepthSensorMode.CreateRecording)
            //{
            //    Debug.LogWarning("Please use Kinect Studio v2.0 to save sensor data recordings.");
            //}

            return sensorData;
        }

        public override void CloseSensor(KinectInterop.SensorData sensorData)
        {
            base.CloseSensor(sensorData);

            if (coordMapper != null)
            {
                coordMapper = null;
            }

            if (colorFrameReader != null)
            {
                colorFrameReader.Dispose();
                colorFrameReader = null;
            }

            if (depthFrameReader != null)
            {
                depthFrameReader.Dispose();
                depthFrameReader = null;
            }

            if (infraredFrameReader != null)
            {
                infraredFrameReader.Dispose();
                infraredFrameReader = null;
            }

            if (bodyFrameReader != null)
            {
                bodyFrameReader.Dispose();
                bodyFrameReader = null;
            }

            if (bodyIndexFrameReader != null)
            {
                bodyIndexFrameReader.Dispose();
                bodyIndexFrameReader = null;
            }

            if (multiSourceFrameReader != null)
            {
                multiSourceFrameReader.Dispose();
                multiSourceFrameReader = null;
            }

            if (kinectSensor != null)
            {
                //if (kinectSensor.IsOpen)
                {
                    //Debug.Log("Closing sensor, available: " + kinectSensor.IsAvailable);
                    kinectSensor.Close();
                }

                float fWaitTime = Time.realtimeSinceStartup + 3f;
                while (kinectSensor.IsOpen && Time.realtimeSinceStartup < fWaitTime)
                {
                    // wait for sensor to close
                }

                if (consoleLogMessages)
                    Debug.Log("D" + deviceIndex + " K2-sensor " + (kinectSensor.IsOpen ? "opened" : "closed") + ", available: " + kinectSensor.IsAvailable);

                kinectSensor = null;
            }
        }

        public override void PollSensorFrames(KinectInterop.SensorData sensorData)
        {
            // check for single-source or multi-source frames
            if (multiSourceFrameReader == null)
            {
                // single source - check for color frame
                if (colorFrameReader != null)
                {
                    msColorFrame = colorFrameReader.AcquireLatestFrame();
                }

                // check for depth frame
                if (depthFrameReader != null)
                {
                    msDepthFrame = depthFrameReader.AcquireLatestFrame();
                }

                // check for IR frame
                if (infraredFrameReader != null)
                {
                    msInfraredFrame = infraredFrameReader.AcquireLatestFrame();
                }

                // check for body index frame
                if (bodyIndexFrameReader != null)
                {
                    msBodyIndexFrame = bodyIndexFrameReader.AcquireLatestFrame();
                }

                // check for body frame
                if (bodyFrameReader != null)
                {
                    msBodyFrame = bodyFrameReader.AcquireLatestFrame();
                }

                // process currently read sensor frames
                ProcessSensorFrames(sensorData);
            }
            else
            {
                // multi-source frames
                multiSourceFrame = multiSourceFrameReader.AcquireLatestFrame();

                if (multiSourceFrame != null)
                {
                    // try to get all frames at once
                    msColorFrame = (frameSourceFlags & KinectInterop.FrameSource.TypeColor) != 0 ? multiSourceFrame.ColorFrameReference.AcquireFrame() : null;
                    msDepthFrame = (frameSourceFlags & KinectInterop.FrameSource.TypeDepth) != 0 ? multiSourceFrame.DepthFrameReference.AcquireFrame() : null;
                    msInfraredFrame = (frameSourceFlags & KinectInterop.FrameSource.TypeInfrared) != 0 ? multiSourceFrame.InfraredFrameReference.AcquireFrame() : null;
                    msBodyFrame = (frameSourceFlags & KinectInterop.FrameSource.TypeBody) != 0 ? multiSourceFrame.BodyFrameReference.AcquireFrame() : null;
                    msBodyIndexFrame = (frameSourceFlags & KinectInterop.FrameSource.TypeBodyIndex) != 0 ? multiSourceFrame.BodyIndexFrameReference.AcquireFrame() : null;

                    bool bAllSet =
                        ((frameSourceFlags & KinectInterop.FrameSource.TypeColor) == 0 || msColorFrame != null) &&
                        ((frameSourceFlags & KinectInterop.FrameSource.TypeDepth) == 0 || msDepthFrame != null) &&
                        ((frameSourceFlags & KinectInterop.FrameSource.TypeInfrared) == 0 || msInfraredFrame != null);

                    if(isSyncBodyAndDepth)
                    {
                        bAllSet &= ((frameSourceFlags & KinectInterop.FrameSource.TypeBody) == 0 || msBodyFrame != null) &&
                        ((frameSourceFlags & KinectInterop.FrameSource.TypeBodyIndex) == 0 || msBodyIndexFrame != null);
                    }

                    if (bAllSet)
                    {
                        // process currently read sensor frames
                        ProcessSensorFrames(sensorData);
                    }

                    //release all frames
                    if (msColorFrame != null)
                    {
                        msColorFrame.Dispose();
                        msColorFrame = null;
                    }

                    if (msDepthFrame != null)
                    {
                        msDepthFrame.Dispose();
                        msDepthFrame = null;
                    }

                    if (msInfraredFrame != null)
                    {
                        msInfraredFrame.Dispose();
                        msInfraredFrame = null;
                    }

                    if (msBodyFrame != null)
                    {
                        msBodyFrame.Dispose();
                        msBodyFrame = null;
                    }

                    if (msBodyIndexFrame != null)
                    {
                        msBodyIndexFrame.Dispose();
                        msBodyIndexFrame = null;
                    }

                    if (multiSourceFrame != null)
                    {
                        multiSourceFrame = null;
                    }
                }
            }
        }

        // processes the currently read sensor frames
        // todo: provide thread sync
        private void ProcessSensorFrames(KinectInterop.SensorData sensorData)
        {
            // depth frame
            ulong depthFrameTime = msDepthFrame != null ? (ulong)msDepthFrame.RelativeTime.Ticks : 0;

            if (msDepthFrame != null)
            {
                if (getAllSensorFrames || rawDepthTimestamp == sensorData.lastDepthFrameTime)
                {
                    lock (depthFrameLock)
                    {
                        var pDepthData = GCHandle.Alloc(rawDepthImage, GCHandleType.Pinned);
                        msDepthFrame.CopyFrameDataToIntPtr(pDepthData.AddrOfPinnedObject(), (uint)rawDepthImage.Length * sizeof(ushort));
                        pDepthData.Free();

                        rawDepthTimestamp = (ulong)msDepthFrame.RelativeTime.Ticks;
                        //Debug.Log("RawDepthTimestamp: " + rawDepthTimestamp);
                    }
                }

                msDepthFrame.Dispose();
                msDepthFrame = null;
            }

            // color frame
            if (msColorFrame != null)
            {
                if(getAllSensorFrames || rawColorTimestamp == sensorData.lastColorFrameTime)
                {
                    lock (colorFrameLock)
                    {
                        var pColorData = GCHandle.Alloc(rawColorImage, GCHandleType.Pinned);
                        msColorFrame.CopyConvertedFrameDataToIntPtr(pColorData.AddrOfPinnedObject(), (uint)rawColorImage.Length, ColorImageFormat.Rgba);
                        pColorData.Free();

                        rawColorTimestamp = isSyncDepthAndColor && depthFrameTime != 0 ? depthFrameTime : (ulong)msColorFrame.RelativeTime.Ticks;
                        //Debug.Log("RawColorTimestamp: " + rawColorTimestamp);
                    }
                }

                msColorFrame.Dispose();
                msColorFrame = null;
            }

            // infrared frame
            if (msInfraredFrame != null)
            {
                if(getAllSensorFrames || rawInfraredTimestamp == sensorData.lastInfraredFrameTime)
                {
                    lock (infraredFrameLock)
                    {
                        var pInfraredData = GCHandle.Alloc(rawInfraredImage, GCHandleType.Pinned);
                        msInfraredFrame.CopyFrameDataToIntPtr(pInfraredData.AddrOfPinnedObject(), (uint)rawInfraredImage.Length * sizeof(ushort));
                        pInfraredData.Free();

                        rawInfraredTimestamp = isSyncDepthAndColor && depthFrameTime != 0 ? depthFrameTime : (ulong)msInfraredFrame.RelativeTime.Ticks;
                        //Debug.Log("RawInfraredTimestamp: " + rawInfraredTimestamp);
                    }
                }

                msInfraredFrame.Dispose();
                msInfraredFrame = null;
            }

            // body index frame
            //bool bProcessBodyFrame = (getAllSensorFrames || rawBodyTimestamp == sensorData.lastBodyFrameTime);

            if (msBodyIndexFrame != null)
            {
                //if(bProcessBodyFrame)
                if (getAllSensorFrames || rawBodyIndexTimestamp == sensorData.lastBodyIndexFrameTime)
                {
                    lock (bodyTrackerLock)
                    {
                        var pBodyIndexData = GCHandle.Alloc(rawBodyIndexImage, GCHandleType.Pinned);
                        msBodyIndexFrame.CopyFrameDataToIntPtr(pBodyIndexData.AddrOfPinnedObject(), (uint)rawBodyIndexImage.Length);
                        pBodyIndexData.Free();

                        rawBodyIndexTimestamp = isSyncBodyAndDepth && depthFrameTime != 0 ? depthFrameTime : (ulong)msBodyIndexFrame.RelativeTime.Ticks;
                        //Debug.Log("RawBodyIndexTimestamp: " + rawBodyIndexTimestamp);
                    }
                }

                msBodyIndexFrame.Dispose();
                msBodyIndexFrame = null;
            }

            // body frame
            if (msBodyFrame != null)
            {
                //if (bProcessBodyFrame)
                if(getAllSensorFrames || rawBodyTimestamp == sensorData.lastBodyFrameTime)
                {
                    lock (bodyTrackerLock)
                    {
                        ProcessBodyFrame(msBodyFrame, depthFrameTime, sensorData);
                    }

                    if (floorPlaneDetected && ((frameSourceFlags & KinectInterop.FrameSource.TypePose) != 0))
                    {
                        lock (poseFrameLock)
                        {
                            // update the sensor pose
                            if(vFloorPlane.X != 0f || vFloorPlane.Y != 0f || vFloorPlane.Z != 0f)
                            {
                                Vector3 vFloorNormal = new Vector3(vFloorPlane.X, vFloorPlane.Y, vFloorPlane.Z);
                                rawPoseRotation = Quaternion.FromToRotation(vFloorNormal, Vector3.up);

                                if (vFloorPlane.W != 0f)
                                {
                                    rawPosePosition = new Vector3(0f, vFloorPlane.W, 0f) - initialPosePosition;
                                }

                                rawPoseTimestamp = rawBodyTimestamp;
                            }
                        }
                    }
                }

                msBodyFrame.Dispose();
                msBodyFrame = null;
            }
        }


        // processes the acquired body frame
        private void ProcessBodyFrame(BodyFrame frame, ulong depthFrameTime, KinectInterop.SensorData sensorData)
        {
            frame.GetAndRefreshBodyData(kinectBodyData);
            rawBodyTimestamp = isSyncBodyAndDepth && depthFrameTime != 0 ? depthFrameTime : (ulong)frame.RelativeTime.Ticks;
            //Debug.Log("RawBodyTimestamp: " + rawBodyTimestamp);

            // get the floor plane
            vFloorPlane = frame.FloorClipPlane;
            floorPlaneDetected = true;

            frame.Dispose();
            frame = null;

            // get sensor-to-world matrix
            Matrix4x4 sensorToWorld = GetSensorToWorldMatrix();
            float scaleX = sensorData.depthImageScale.x;
            //float scaleY = sensorData.depthImageScale.y;

            // create the needed slots
            while (alTrackedBodies.Count < kinectBodyCount)
            {
                alTrackedBodies.Add(new KinectInterop.BodyData((int)KinectInterop.JointType.Count));
            }

            trackedBodiesCount = 0;

            for (int i = 0; i < kinectBodyCount; i++)
            {
                Body body = kinectBodyData[i];

                if (body == null)
                    continue;

                KinectInterop.BodyData bodyData = alTrackedBodies[(int)trackedBodiesCount];

                bodyData.liTrackingID = body.TrackingId;
                bodyData.iBodyIndex = i;
                bodyData.bIsTracked = body.IsTracked;

                if (!bodyData.bIsTracked)
                    continue;

                // cache the body joints (following the advice of Brian Chasalow)
                Dictionary<Windows.Kinect.JointType, Windows.Kinect.Joint> bodyJoints = body.Joints;

                for (int jKJ = 0; jKJ < kinectJointCount; jKJ++)
                {
                    Windows.Kinect.Joint joint = bodyJoints[(Windows.Kinect.JointType)jKJ];

                    int j = KinectJoint2JointType[jKJ];

                    if (j >= 0)
                    {
                        KinectInterop.JointData jointData = bodyData.joint[j];

                        jointData.trackingState = (KinectInterop.TrackingState)joint.TrackingState;

                        float jPosZ = (bIgnoreZCoordinates && j > 0) ? bodyData.joint[0].kinectPos.z : joint.Position.Z;
                        jointData.kinectPos = new Vector3(joint.Position.X, joint.Position.Y, joint.Position.Z);
                        jointData.position = sensorToWorld.MultiplyPoint3x4(new Vector3(joint.Position.X * scaleX, joint.Position.Y, jPosZ));

                        jointData.orientation = Quaternion.identity;

                        if (j == 0)
                        {
                            bodyData.kinectPos = jointData.kinectPos;
                            bodyData.position = jointData.position;
                            bodyData.orientation = jointData.orientation;
                            //floorPlaneDetected = true;
                        }

                        bodyData.joint[j] = jointData;
                    }
                }

                bodyJoints.Clear();

                // hand states
                bodyData.leftHandState = (KinectInterop.HandState)body.HandLeftState;
                bodyData.rightHandState = (KinectInterop.HandState)body.HandRightState;
                //bodyData.leftHandConfidence = (KinectInterop.TrackingConfidence)body.HandLeftConfidence;
                //bodyData.rightHandConfidence = (KinectInterop.TrackingConfidence)body.HandRightConfidence;

                if (usersFaceBackwards)
                {
                    // switch the left and right joints
                    SwitchLeftRightJoints(ref bodyData);
                }

                // estimate additional joints
                CalcBodySpecialJoints(ref bodyData);

                // filter joint positions
                if (jointPositionFilter != null)
                {
                    jointPositionFilter.UpdateFilter(ref bodyData);
                }

                // calculate bone dirs
                KinectInterop.CalcBodyJointDirs(ref bodyData);

                // calculate joint orientations
                CalcBodyJointOrients(ref bodyData);

                // body orientation
                bodyData.normalRotation = bodyData.joint[0].normalRotation;
                bodyData.mirroredRotation = bodyData.joint[0].mirroredRotation;

                alTrackedBodies[(int)trackedBodiesCount] = bodyData;
                trackedBodiesCount++;

                //Debug.Log("  (T)User ID: " + bodyData.liTrackingID + ", body: " + (trackedBodiesCount - 1) + ", bi: " + bodyData.iBodyIndex + ", pos: " + bodyData.joint[0].kinectPos + ", rot: " + bodyData.joint[0].normalRotation.eulerAngles);
            }

            // clean up user history
            if (jointPositionFilter != null)
            {
                jointPositionFilter.CleanUpUserHistory();
            }
        }

        // switch the left and right body joints
        private void SwitchLeftRightJoints(ref KinectInterop.BodyData bodyData)
        {
            //SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.ClavicleLeft, (int)KinectInterop.JointType.ClavicleRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.ShoulderLeft, (int)KinectInterop.JointType.ShoulderRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.ElbowLeft, (int)KinectInterop.JointType.ElbowRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.WristLeft, (int)KinectInterop.JointType.WristRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.HandLeft, (int)KinectInterop.JointType.HandRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.ThumbLeft, (int)KinectInterop.JointType.ThumbRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.HandtipLeft, (int)KinectInterop.JointType.HandtipRight);

            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.HipLeft, (int)KinectInterop.JointType.HipRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.KneeLeft, (int)KinectInterop.JointType.KneeRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.AnkleLeft, (int)KinectInterop.JointType.AnkleRight);
            SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.FootLeft, (int)KinectInterop.JointType.FootRight);

            //SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.EyeLeft, (int)KinectInterop.JointType.EyeRight);
            //SwitchJointsData(ref bodyData, (int)KinectInterop.JointType.EarLeft, (int)KinectInterop.JointType.EarRight);
        }

        // switches the positional data of two joints
        private void SwitchJointsData(ref KinectInterop.BodyData bodyData, int jointL, int jointR)
        {
            KinectInterop.TrackingState trackingStateL = bodyData.joint[jointL].trackingState;
            Vector3 kinectPosL = bodyData.joint[jointL].kinectPos;
            Vector3 positionL = bodyData.joint[jointL].position;

            KinectInterop.TrackingState trackingStateR = bodyData.joint[jointR].trackingState;
            Vector3 kinectPosR = bodyData.joint[jointR].kinectPos;
            Vector3 positionR = bodyData.joint[jointR].position;

            bodyData.joint[jointL].trackingState = trackingStateR;
            bodyData.joint[jointL].kinectPos = kinectPosR;
            bodyData.joint[jointL].position = positionR;

            bodyData.joint[jointR].trackingState = trackingStateL;
            bodyData.joint[jointR].kinectPos = kinectPosL;
            bodyData.joint[jointR].position = positionL;
        }

        // estimates additional joints for the given body
        protected override void CalcBodySpecialJoints(ref KinectInterop.BodyData bodyData)
        {
            // clavicle right
            {
                int l = (int)KinectInterop.JointType.ClavicleLeft;
                int r = (int)KinectInterop.JointType.ClavicleRight;

                KinectInterop.JointData jointData = bodyData.joint[r];
                jointData.trackingState = bodyData.joint[l].trackingState;
                jointData.orientation = bodyData.joint[l].orientation;

                jointData.kinectPos = bodyData.joint[l].kinectPos;
                jointData.position = bodyData.joint[l].position;

                bodyData.joint[r] = jointData;
            }

            // spine naval
            {
                int p = (int)KinectInterop.JointType.Pelvis;
                int sc = (int)KinectInterop.JointType.SpineChest;
                int sn = (int)KinectInterop.JointType.SpineNaval;

                KinectInterop.JointData jointData = bodyData.joint[sn];
                jointData.trackingState = bodyData.joint[sc].trackingState;
                jointData.orientation = bodyData.joint[sc].orientation;

                Vector3 posChest = bodyData.joint[sc].kinectPos;
                Vector3 posPelvis = bodyData.joint[p].kinectPos;
                jointData.kinectPos = (posPelvis + posChest) * 0.5f;

                posChest = bodyData.joint[sc].position;
                posPelvis = bodyData.joint[p].position;
                jointData.position = (posPelvis + posChest) * 0.5f;

                bodyData.joint[sn] = jointData;
            }

            // ankle left
            int knee = (int)KinectInterop.JointType.KneeLeft;
            int ank = (int)KinectInterop.JointType.AnkleLeft;
            int foot = (int)KinectInterop.JointType.FootLeft;

            if (bodyData.joint[knee].trackingState != KinectInterop.TrackingState.NotTracked &&
               bodyData.joint[ank].trackingState != KinectInterop.TrackingState.NotTracked &&
               bodyData.joint[foot].trackingState != KinectInterop.TrackingState.NotTracked)
            {
                Vector3 vAnkDir = bodyData.joint[ank].kinectPos - bodyData.joint[knee].kinectPos;
                Vector3 vFootDir = bodyData.joint[foot].kinectPos - bodyData.joint[ank].kinectPos;

                Vector3 vFootProj = Vector3.Project(vFootDir, vAnkDir);
                bodyData.joint[ank].kinectPos += vFootProj;

                vAnkDir = bodyData.joint[ank].position - bodyData.joint[knee].position;
                vFootDir = bodyData.joint[foot].position - bodyData.joint[ank].position;

                vFootProj = Vector3.Project(vFootDir, vAnkDir);
                bodyData.joint[ank].position += vFootProj;
            }

            // ankle right
            knee = (int)KinectInterop.JointType.KneeRight;
            ank = (int)KinectInterop.JointType.AnkleRight;
            foot = (int)KinectInterop.JointType.FootRight;

            if (bodyData.joint[knee].trackingState != KinectInterop.TrackingState.NotTracked &&
               bodyData.joint[ank].trackingState != KinectInterop.TrackingState.NotTracked &&
               bodyData.joint[foot].trackingState != KinectInterop.TrackingState.NotTracked)
            {
                Vector3 vAnkDir = bodyData.joint[ank].kinectPos - bodyData.joint[knee].kinectPos;
                Vector3 vFootDir = bodyData.joint[foot].kinectPos - bodyData.joint[ank].kinectPos;

                Vector3 vFootProj = Vector3.Project(vFootDir, vAnkDir);
                bodyData.joint[ank].kinectPos += vFootProj;

                vAnkDir = bodyData.joint[ank].position - bodyData.joint[knee].position;
                vFootDir = bodyData.joint[foot].position - bodyData.joint[ank].position;

                vFootProj = Vector3.Project(vFootDir, vAnkDir);
                bodyData.joint[ank].position += vFootProj;
            }
        }


        protected static readonly int[] KinectJoint2JointType =
        {
            (int)KinectInterop.JointType.Pelvis,
            (int)KinectInterop.JointType.SpineChest,
            (int)KinectInterop.JointType.Neck,
            (int)KinectInterop.JointType.Head,

            (int)KinectInterop.JointType.ShoulderLeft,
            (int)KinectInterop.JointType.ElbowLeft,
            (int)KinectInterop.JointType.WristLeft,
            (int)KinectInterop.JointType.HandLeft,

            (int)KinectInterop.JointType.ShoulderRight,
            (int)KinectInterop.JointType.ElbowRight,
            (int)KinectInterop.JointType.WristRight,
            (int)KinectInterop.JointType.HandRight,

            (int)KinectInterop.JointType.HipLeft,
            (int)KinectInterop.JointType.KneeLeft,
            (int)KinectInterop.JointType.AnkleLeft,
            (int)KinectInterop.JointType.FootLeft,

            (int)KinectInterop.JointType.HipRight,
            (int)KinectInterop.JointType.KneeRight,
            (int)KinectInterop.JointType.AnkleRight,
            (int)KinectInterop.JointType.FootRight,

            (int)KinectInterop.JointType.ClavicleLeft,

            (int)KinectInterop.JointType.HandtipLeft,
            (int)KinectInterop.JointType.ThumbLeft,
            (int)KinectInterop.JointType.HandtipRight,
            (int)KinectInterop.JointType.ThumbRight
        };


        public override bool UpdateSensorData(KinectInterop.SensorData sensorData, KinectManager kinectManager, bool isPlayMode)
        {
            base.UpdateSensorData(sensorData, kinectManager, isPlayMode);

            if (sensorData.depthCamIntr == null && coordMapper != null)
            {
                lock (depthFrameLock)
                {
                    // get depth camera intrinsics
                    CameraIntrinsics depthCamIntr = coordMapper.GetDepthCameraIntrinsics();

                    if (depthCamIntr.PrincipalPointX != 0f && depthCamIntr.PrincipalPointY != 0f)
                    {
                        GetDepthCameraIntrinsics(depthCamIntr, ref sensorData.depthCamIntr, sensorData.depthImageWidth, sensorData.depthImageHeight);
                    }
                }
            }

            if (sensorData.colorCamIntr == null && coordMapper != null)
            {
                lock (colorFrameLock)
                {
                    GetColorCameraIntrinsics(ref sensorData.colorCamIntr, sensorData.colorImageWidth, sensorData.colorImageHeight);
                }
            }

            if((sensorData.depth2ColorExtr == null || sensorData.color2DepthExtr == null) && 
                sensorData.depthCamIntr != null && sensorData.colorCamIntr != null)
            {
                GetDepth2ColorCameraExtrinsics(ref sensorData.depth2ColorExtr);
                GetColor2DepthCameraExtrinsics(ref sensorData.color2DepthExtr);
            }

            return true;
        }


        // gets the depth camera intrinsics
        private void GetDepthCameraIntrinsics(CameraIntrinsics camIntr, ref KinectInterop.CameraIntrinsics intr, int camWidth, int camHeight)
        {
            intr = new KinectInterop.CameraIntrinsics();

            intr.cameraType = 0;
            intr.width = camWidth;
            intr.height = camHeight;

            intr.ppx = camIntr.PrincipalPointX;
            intr.ppy = camHeight - camIntr.PrincipalPointY;

            intr.fx = camIntr.FocalLengthX;
            intr.fy = camIntr.FocalLengthY;

            intr.distCoeffs = new float[3];
            intr.distCoeffs[0] = camIntr.RadialDistortionSecondOrder;
            intr.distCoeffs[1] = camIntr.RadialDistortionFourthOrder;
            intr.distCoeffs[2] = camIntr.RadialDistortionSixthOrder;

            intr.distType = KinectInterop.DistortionType.BrownConrady;

            EstimateFOV(intr);
        }


        // gets the color camera intrinsics
        private void GetColorCameraIntrinsics(ref KinectInterop.CameraIntrinsics intr, int camWidth, int camHeight)
        {
            intr = new KinectInterop.CameraIntrinsics();

            intr.cameraType = 1;
            intr.width = camWidth;
            intr.height = camHeight;

            intr.ppx = 946.0374f;
            intr.ppy = camHeight - 537.392f;

            intr.fx = 1065.267f;
            intr.fy = 1065.409f;

            intr.distCoeffs = new float[3];
            intr.distCoeffs[0] = 0.014655f;
            intr.distCoeffs[1] = -0.000476f;
            intr.distCoeffs[2] = 0f;

            intr.distType = KinectInterop.DistortionType.BrownConrady;

            EstimateFOV(intr);
        }


        // gets the depth to color camera extrinsics
        private void GetDepth2ColorCameraExtrinsics(ref KinectInterop.CameraExtrinsics extr)
        {
            extr = new KinectInterop.CameraExtrinsics();

            extr.rotation = new float[9];

            extr.translation = new float[3];
        }


        // gets the color to depth camera extrinsics
        private void GetColor2DepthCameraExtrinsics(ref KinectInterop.CameraExtrinsics extr)
        {
            extr = new KinectInterop.CameraExtrinsics();

            extr.rotation = new float[9];

            extr.translation = new float[3];
        }


        // unprojects plane point into the space
        public override Vector3 UnprojectPoint(KinectInterop.CameraIntrinsics intr, Vector2 pixel, float depth)
        {
            float x = (pixel.x - intr.ppx) / intr.fx;
            float y = (intr.ppy - pixel.y) / intr.fy;

            // undistort
            float r2 = x * x + y * y;
            float f = 1 - intr.distCoeffs[0] * r2 - intr.distCoeffs[1] * r2 * r2 - intr.distCoeffs[2] * r2 * r2 * r2;

            x = x * f * depth;
            y = y * f * depth;

            return new Vector3(x, y, depth);
        }


        // projects space point onto a plane
        public override Vector2 ProjectPoint(KinectInterop.CameraIntrinsics intr, Vector3 point)
        {
            float x = point.x / point.z;
            float y = point.y / point.z;

            // distort
            float r2 = x * x + y * y;
            float f = 1f + intr.distCoeffs[0] * r2 + intr.distCoeffs[1] * r2 * r2 + intr.distCoeffs[2] * r2 * r2 * r2;

            x = x * f * intr.fx + intr.ppx;
            y = intr.ppy - y * f * intr.fy;

            return new Vector2(x, y);
        }


        // transforms a point from one space to another
        public override Vector3 TransformPoint(KinectInterop.CameraExtrinsics extr, Vector3 point)
        {
            float toPointX = extr.rotation[0] * point.x + extr.rotation[3] * point.y + extr.rotation[6] * point.z + extr.translation[0];
            float toPointY = extr.rotation[1] * point.x + extr.rotation[4] * point.y + extr.rotation[7] * point.z + extr.translation[1];
            float toPointZ = extr.rotation[2] * point.x + extr.rotation[5] * point.y + extr.rotation[8] * point.z + extr.translation[2];

            return new Vector3(toPointX, toPointY, toPointZ);
        }


        public override void PollCoordTransformFrames(KinectInterop.SensorData sensorData)
        {
            if (lastDepthCoordFrameTime != rawDepthTimestamp)
            {
                lastDepthCoordFrameTime = rawDepthTimestamp;

                //// depth2space frame
                //if (depth2SpaceCoordFrame != null)
                //{
                //    lock (depth2SpaceFrameLock)
                //    {
                //        MapDepthFrameToSpaceCoords(sensorData, ref depth2SpaceCoordFrame);
                //        lastDepth2SpaceFrameTime = lastDepthCoordFrameTime;
                //    }
                //}

                // depth2color frame
                if (depthCamColorCoordFrame != null && rawDepthImage != null)
                {
                    lock (depthCamColorFrameLock)
                    {
                        var pDepthData = GCHandle.Alloc(rawDepthImage, GCHandleType.Pinned);
                        var pColorCoordsData = GCHandle.Alloc(depthCamColorCoordFrame, GCHandleType.Pinned);

                        coordMapper.MapDepthFrameToColorSpaceUsingIntPtr(
                            pDepthData.AddrOfPinnedObject(),
                            rawDepthImage.Length * sizeof(ushort),
                            pColorCoordsData.AddrOfPinnedObject(),
                            (uint)depthCamColorCoordFrame.Length);

                        pColorCoordsData.Free();
                        pDepthData.Free();

                        //int di = (sensorData.depthImageHeight / 2) * sensorData.depthImageWidth + (sensorData.depthImageWidth / 2);
                        //Debug.Log("d2cCoordData: " + depth2ColorCoordFrame[di]);

                        lastDepthCamColorFrameTime = lastDepthCoordFrameTime;
                        //Debug.Log("DepthCamColorFrameTime: " + lastDepthCamColorFrameTime);
                    }
                }

                // color2depth frame
                if (colorCamDepthCoordFrame != null)
                {
                    lock (colorCamDepthFrameLock)
                    {
                        var pDepthData = GCHandle.Alloc(rawDepthImage, GCHandleType.Pinned);
                        var pDepthCoordsData = GCHandle.Alloc(colorCamDepthCoordFrame, GCHandleType.Pinned);

                        coordMapper.MapColorFrameToDepthSpaceUsingIntPtr(
                            pDepthData.AddrOfPinnedObject(),
                            (uint)rawDepthImage.Length * sizeof(ushort),
                            pDepthCoordsData.AddrOfPinnedObject(),
                            (uint)colorCamDepthCoordFrame.Length);

                        //int ci = (sensorData.colorImageHeight / 2) * sensorData.colorImageWidth + (sensorData.colorImageWidth / 2);
                        //Debug.Log("c2dCoordData: " + color2DepthCoordFrame[ci]);

                        pDepthCoordsData.Free();
                        pDepthData.Free();

                        lastColorCamDepthFrameTime = lastDepthCoordFrameTime;
                        if (pointCloudInfraredBuffer != null)
                            lastColorCamInfraredFrameTime = lastDepthCoordFrameTime;

                        //Debug.Log("ColorCamDepthFrameTime: " + lastColorCamDepthFrameTime);
                    }
                }
            }
        }


        //public override bool UpdateSensorData(KinectInterop.SensorData sensorData)
        //{
        //    base.UpdateSensorData(sensorData);
        //    return true;
        //}


        // creates the point-cloud vertex shader and its respective buffers, as needed
        protected override bool CreatePointCloudVertexShader(KinectInterop.SensorData sensorData)
        {
            if (pointCloudResolution != PointCloudResolution.ColorCameraResolution)
            {
                return base.CreatePointCloudVertexShader(sensorData);
            }

            // for K2 color camera resolution only
            pointCloudVertexRes = GetPointCloudTexResolution(sensorData);
            pointCloudPlayerIndices = GetPointCloudPlayerIndices();

            if (pointCloudVertexRT == null)
            {
                pointCloudVertexRT = new RenderTexture(pointCloudVertexRes.x, pointCloudVertexRes.y, 0, RenderTextureFormat.ARGBHalf);
                pointCloudVertexRT.enableRandomWrite = true;
                pointCloudVertexRT.Create();
            }

            if (pointCloudVertexShader == null)
            {
                if(pointCloudPlayerIndices == null)
                    pointCloudVertexShader = Resources.Load("PointCloudVertexShaderCRK2") as ComputeShader;
                else
                    pointCloudVertexShader = Resources.Load("PointCloudBodyVertexShaderCRK2") as ComputeShader;

                pointCloudVertexKernel = pointCloudVertexShader != null ? pointCloudVertexShader.FindKernel("BakeVertexTexColorResK2") : -1;
            }

            if (pointCloudSpaceBuffer == null)
            {
                int spaceBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight * 3;
                pointCloudSpaceBuffer = new ComputeBuffer(spaceBufferLength, sizeof(float));

                // depth2space table
                //int depthImageLength = sensorData.depthImageWidth * sensorData.depthImageHeight;
                //Vector3[] depth2SpaceTable = new Vector3[depthImageLength];

                //for (int dy = 0, di = 0; dy < sensorData.depthImageHeight; dy++)
                //{
                //    for (int dx = 0; dx < sensorData.depthImageWidth; dx++, di++)
                //    {
                //        Vector2 depthPos = new Vector2(dx, dy);
                //        depth2SpaceTable[di] = MapDepthPointToSpaceCoords(sensorData, depthPos, 1000);
                //    }
                //}

                Vector3[] depth2SpaceTable = GetDepthCameraSpaceTable(sensorData);
                pointCloudSpaceBuffer.SetData(depth2SpaceTable);
                depth2SpaceTable = null;
            }

            if (pointCloudDepthBuffer == null)
            {
                int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                pointCloudDepthBuffer = new ComputeBuffer(depthBufferLength, sizeof(uint));
            }

            if (pointCloudCoordBuffer == null)
            {
                int coordBufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight * 2;  // Vector2 = 2 x float
                pointCloudCoordBuffer = new ComputeBuffer(coordBufferLength, sizeof(float));
            }

            if (colorCamDepthCoordFrame == null)
            {
                colorCamDepthCoordFrame = new Vector2[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }

            if (pointCloudPlayerIndices != null)
            {
                int biBufferLength = pointCloudVertexRes.x * pointCloudVertexRes.y / 4;
                pointCloudBodyIndexBuffer = new ComputeBuffer(biBufferLength, sizeof(uint));
            }

            return true;
        }


        // updates the point-cloud vertex shader with the actual data
        protected override bool UpdatePointCloudVertexShader(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if (pointCloudResolution != PointCloudResolution.ColorCameraResolution)
            {
                return base.UpdatePointCloudVertexShader(sensorData, kinectManager);
            }

            // for K2 color camera resolution only
            if (pointCloudVertexShader != null && sensorData.depthImage != null && pointCloudVertexRT != null &&
                sensorData.lastDepth2SpaceFrameTime != sensorData.lastDepthFrameTime)
            {
                sensorData.lastDepth2SpaceFrameTime = sensorData.lastDepthFrameTime;

                KinectInterop.SetComputeBufferData(pointCloudDepthBuffer, sensorData.depthImage, sensorData.depthImage.Length >> 1, sizeof(uint));

                lock (colorCamDepthFrameLock)
                {
                    int coordBufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight * 2;
                    KinectInterop.SetComputeBufferData(pointCloudCoordBuffer, colorCamDepthCoordFrame, coordBufferLength, sizeof(float));
                }

                if (GetPointCloudBodyIndices(sensorData, kinectManager, pointCloudPlayerIndices, ref pointCloudBodyIndices))
                {
                    // body index
                    if (pointCloudBodyIndexBuffer != null && sensorData.bodyIndexImage != null)
                    {
                        KinectInterop.SetComputeBufferData(pointCloudBodyIndexBuffer, sensorData.bodyIndexImage, sensorData.bodyIndexImage.Length >> 2, sizeof(uint));
                        pointCloudVertexShader.SetBuffer(pointCloudVertexKernel, "BodyIndexMap", pointCloudBodyIndexBuffer);
                    }

                    // body params
                    int uCount = pointCloudBodyIndices.Length;
                    pointCloudVertexShader.SetInt("BodyIndexAll", uCount == 1 && pointCloudPlayerIndices[0] == -1 ? 1 : 0);

                    pointCloudVertexShader.SetInt("BodyIndex0", uCount > 0 ? pointCloudBodyIndices[0] : -1);
                    pointCloudVertexShader.SetInt("BodyIndex1", uCount > 1 ? pointCloudBodyIndices[1] : -1);
                    pointCloudVertexShader.SetInt("BodyIndex2", uCount > 2 ? pointCloudBodyIndices[2] : -1);
                    pointCloudVertexShader.SetInt("BodyIndex3", uCount > 3 ? pointCloudBodyIndices[3] : -1);
                    pointCloudVertexShader.SetInt("BodyIndex4", uCount > 4 ? pointCloudBodyIndices[4] : -1);

                    //Debug.Log("All: " + (pointCloudPlayerIndices[0] == -1 ? 1 : 0) + ", Ind: " +
                    //    (uCount > 0 ? pointCloudBodyIndices[0] : -1) + " " +
                    //    (uCount > 1 ? pointCloudBodyIndices[1] : -1) + " " +
                    //    (uCount > 2 ? pointCloudBodyIndices[2] : -1) + " " +
                    //    (uCount > 3 ? pointCloudBodyIndices[3] : -1) + " " +
                    //    (uCount > 4 ? pointCloudBodyIndices[4] : -1));
                }

                KinectInterop.SetComputeShaderInt2(pointCloudVertexShader, "PointCloudRes", pointCloudVertexRes.x, pointCloudVertexRes.y);
                KinectInterop.SetComputeShaderInt2(pointCloudVertexShader, "DepthRes", sensorData.depthImageWidth, sensorData.depthImageHeight);
                KinectInterop.SetComputeShaderFloat2(pointCloudVertexShader, "SpaceScale", sensorData.sensorSpaceScale.x, sensorData.sensorSpaceScale.y);
                pointCloudVertexShader.SetInt("MinDepth", (int)(minDepthDistance * 1000f));
                pointCloudVertexShader.SetInt("MaxDepth", (int)(maxDepthDistance * 1000f));
                pointCloudVertexShader.SetBuffer(pointCloudVertexKernel, "SpaceTable", pointCloudSpaceBuffer);
                pointCloudVertexShader.SetBuffer(pointCloudVertexKernel, "DepthMap", pointCloudDepthBuffer);
                pointCloudVertexShader.SetBuffer(pointCloudVertexKernel, "ColorToDepthMap", pointCloudCoordBuffer);
                pointCloudVertexShader.SetTexture(pointCloudVertexKernel, "PointCloudVertexTex", pointCloudVertexRT);
                pointCloudVertexShader.Dispatch(pointCloudVertexKernel, pointCloudVertexRes.x / 8, pointCloudVertexRes.y / 8, 1);

                if (pointCloudVertexTexture != null)
                {
                    Graphics.Blit(pointCloudVertexRT, pointCloudVertexTexture);
                }

                return true;
            }

            return false;
        }


        // creates the point-cloud color shader and its respective buffers, as needed
        protected override bool CreatePointCloudColorShader(KinectInterop.SensorData sensorData)
        {
            if (pointCloudResolution != PointCloudResolution.DepthCameraResolution)
            {
                return base.CreatePointCloudColorShader(sensorData);
            }

            // for K2 depth camera resolution only
            if (pointCloudColorRT == null)
            {
                pointCloudColorRT = new RenderTexture(sensorData.depthImageWidth, sensorData.depthImageHeight, 0, RenderTextureFormat.ARGB32);
                pointCloudColorRT.enableRandomWrite = true;
                pointCloudColorRT.Create();
            }

            if (pointCloudColorShader == null)
            {
                pointCloudColorShader = Resources.Load("PointCloudColorShaderK2") as ComputeShader;
                pointCloudColorKernel = pointCloudColorShader != null ? pointCloudColorShader.FindKernel("BakeColorTex") : -1;
            }

            if (pointCloudCoordBuffer == null)
            {
                int coordBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight * 2;  // Vector2 = 2 x float
                pointCloudCoordBuffer = new ComputeBuffer(coordBufferLength, sizeof(float));
            }

            if (depthCamColorCoordFrame == null)
            {
                depthCamColorCoordFrame = new Vector2[sensorData.depthImageWidth * sensorData.depthImageHeight];
            }

            return true;
        }


        // updates the point-cloud color shader with the actual data
        protected override bool UpdatePointCloudColorShader(KinectInterop.SensorData sensorData)
        {
            if (pointCloudResolution != PointCloudResolution.DepthCameraResolution)
            {
                return base.UpdatePointCloudColorShader(sensorData);
            }

            // for K2 depth camera resolution only
            if (pointCloudColorShader != null && pointCloudCoordBuffer != null && sensorData.colorImageTexture != null && pointCloudColorRT != null &&
                sensorData.lastDepthCamColorFrameTime != lastDepthCamColorFrameTime)
            {
                sensorData.lastDepthCamColorFrameTime = lastDepthCamColorFrameTime;

                lock (depthCamColorFrameLock)
                {
                    int coordBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight * 2;
                    KinectInterop.SetComputeBufferData(pointCloudCoordBuffer, depthCamColorCoordFrame, coordBufferLength, sizeof(float));
                }

                KinectInterop.SetComputeShaderInt2(pointCloudColorShader, "DepthRes", sensorData.depthImageWidth, sensorData.depthImageHeight);
                pointCloudColorShader.SetBuffer(pointCloudColorKernel, "DepthToColorMap", pointCloudCoordBuffer);
                pointCloudColorShader.SetTexture(pointCloudColorKernel, "ColorTex", sensorData.colorImageTexture);
                pointCloudColorShader.SetTexture(pointCloudColorKernel, "PointCloudColorTex", pointCloudColorRT);
                pointCloudColorShader.Dispatch(pointCloudColorKernel, sensorData.depthImageWidth / 8, sensorData.depthImageHeight / 8, 1);

                if(pointCloudColorTexture != null)
                {
                    Graphics.Blit(pointCloudColorRT, pointCloudColorTexture);
                }

                if (sensorData.depthCamColorImageTexture != null)
                {
                    Texture2D depth2colorTex2d  = (Texture2D)sensorData.depthCamColorImageTexture;
                    KinectInterop.RenderTex2Tex2D(pointCloudColorTexture, ref depth2colorTex2d);
                }

                return true;
            }

            return false;
        }


        // creates the color-depth shader and its respective buffers, as needed
        protected override bool CreateColorDepthShader(KinectInterop.SensorData sensorData)
        {
            if (colorDepthShader == null)
            {
                colorDepthShader = Resources.Load("ColorDepthShaderK2") as ComputeShader;
                colorDepthKernel = colorDepthShader != null ? colorDepthShader.FindKernel("BakeColorDepth") : -1;
            }

            if (pointCloudDepthBuffer == null)
            {
                int bufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                pointCloudDepthBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
            }

            if (pointCloudCoordBuffer == null)
            {
                int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight * 2;  // Vector2 = 2 x float
                pointCloudCoordBuffer = new ComputeBuffer(bufferLength, sizeof(float));
            }

            if (colorCamDepthCoordFrame == null)
            {
                colorCamDepthCoordFrame = new Vector2[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }

            if (sensorData.colorDepthTexture == null)
            {
                sensorData.colorDepthTexture = new RenderTexture(sensorData.colorImageWidth, sensorData.colorImageHeight, 0, RenderTextureFormat.ARGB32);
                //sensorData.colorDepthTexture.enableRandomWrite = true;
                sensorData.colorDepthTexture.Create();
            }

            colorDepthShaderInited = true;

            return true;
        }


        // updates the color-depth shader with the actual data
        protected override bool UpdateColorDepthShader(KinectInterop.SensorData sensorData)
        {
            // for K2 depth camera resolution only
            if (colorDepthShader != null && pointCloudDepthBuffer != null && pointCloudCoordBuffer != null && colorCamDepthCoordFrame != null)
            {
                if (/**sensorData.usedColorDepthBufferTime == sensorData.lastColorDepthBufferTime && */
                    sensorData.lastColorDepthBufferTime != lastColorCamDepthFrameTime)
                {
                    sensorData.lastColorDepthBufferTime = lastColorCamDepthFrameTime;

                    if (sensorData.colorImageTexture != null)
                    {
                        Graphics.Blit(sensorData.colorImageTexture, sensorData.colorDepthTexture);
                    }

                    KinectInterop.SetComputeBufferData(pointCloudDepthBuffer, sensorData.depthImage, sensorData.depthImage.Length >> 1, sizeof(uint));

                    lock (colorCamDepthFrameLock)
                    {
                        int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight * 2;
                        KinectInterop.SetComputeBufferData(pointCloudCoordBuffer, colorCamDepthCoordFrame, bufferLength, sizeof(float));
                    }

                    if(sensorData.colorDepthBuffer != null)
                    {
                        KinectInterop.SetComputeShaderInt2(colorDepthShader, "_ColorRes", sensorData.colorImageWidth, sensorData.colorImageHeight);
                        KinectInterop.SetComputeShaderInt2(colorDepthShader, "_DepthRes", sensorData.depthImageWidth, sensorData.depthImageHeight);

                        colorDepthShader.SetBuffer(colorDepthKernel, "_DepthMap", pointCloudDepthBuffer);
                        colorDepthShader.SetBuffer(colorDepthKernel, "_Color2DepthMap", pointCloudCoordBuffer);
                        //colorDepthShader.SetTexture(colorDepthKernel, "_ColorTex", sensorData.colorImageTexture);
                        colorDepthShader.SetBuffer(colorDepthKernel, "_ColorDepthMap", sensorData.colorDepthBuffer);
                        colorDepthShader.Dispatch(colorDepthKernel, sensorData.colorImageWidth / 8, sensorData.colorImageHeight / 8, 1);

                        if (sensorData.colorCamDepthImage != null)
                        {
                            sensorData.colorDepthBuffer.GetData(sensorData.colorCamDepthImage);
                            sensorData.lastColorCamDepthFrameTime = lastColorCamDepthFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }


        // creates the color-infrared shader and its respective buffers, as needed
        protected override bool CreateColorInfraredShader(KinectInterop.SensorData sensorData)
        {
            if (colorInfraredShader == null)
            {
                colorInfraredShader = Resources.Load("ColorInfraredShaderK2") as ComputeShader;
                colorInfraredKernel = colorInfraredShader != null ? colorInfraredShader.FindKernel("BakeColorInfrared") : -1;
            }

            if (pointCloudInfraredBuffer == null)
            {
                int bufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                pointCloudInfraredBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
            }

            if (pointCloudCoordBuffer == null)
            {
                int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight * 2;  // Vector2 = 2 x float
                pointCloudCoordBuffer = new ComputeBuffer(bufferLength, sizeof(float));
            }

            if (colorCamDepthCoordFrame == null)
            {
                colorCamDepthCoordFrame = new Vector2[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }

            if (sensorData.colorInfraredTexture == null)
            {
                sensorData.colorInfraredTexture = new RenderTexture(sensorData.colorImageWidth, sensorData.colorImageHeight, 0, RenderTextureFormat.ARGB32);
                //sensorData.colorInfraredTexture.enableRandomWrite = true;
                sensorData.colorInfraredTexture.Create();
            }

            Shader infraredImageShader = Shader.Find("Kinect/InfraredImageShader");
            if (infraredImageShader)
            {
                sensorData.colorInfraredMaterial = new Material(infraredImageShader);
            }

            colorInfraredShaderInited = true;

            return true;
        }


        // updates the color-infrared shader with the actual data
        protected override bool UpdateColorInfraredShader(KinectInterop.SensorData sensorData)
        {
            // for K2 depth camera resolution only
            if (colorInfraredShader != null && pointCloudInfraredBuffer != null && pointCloudCoordBuffer != null && colorCamDepthCoordFrame != null)
            {
                if (/**sensorData.usedColorInfraredBufferTime == sensorData.lastColorInfraredBufferTime && */
                    sensorData.lastColorInfraredBufferTime != lastColorCamInfraredFrameTime)
                {
                    sensorData.lastColorInfraredBufferTime = lastColorCamInfraredFrameTime;
                    //Debug.Log("LastColorCamInfraredFrameTime: " + lastColorCamInfraredFrameTime);

                    //if (sensorData.colorImageTexture != null)
                    //{
                    //    Graphics.Blit(sensorData.colorImageTexture, sensorData.colorInfraredTexture);
                    //}

                    KinectInterop.SetComputeBufferData(pointCloudInfraredBuffer, sensorData.infraredImage, sensorData.infraredImage.Length >> 1, sizeof(uint));

                    lock (colorCamDepthFrameLock)
                    {
                        int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight * 2;
                        KinectInterop.SetComputeBufferData(pointCloudCoordBuffer, colorCamDepthCoordFrame, bufferLength, sizeof(float));
                    }

                    if (sensorData.colorInfraredBuffer != null)
                    {
                        KinectInterop.SetComputeShaderInt2(colorInfraredShader, "_ColorRes", sensorData.colorImageWidth, sensorData.colorImageHeight);
                        KinectInterop.SetComputeShaderInt2(colorInfraredShader, "_DepthRes", sensorData.depthImageWidth, sensorData.depthImageHeight);

                        colorInfraredShader.SetBuffer(colorInfraredKernel, "_InfraredMap", pointCloudInfraredBuffer);
                        colorInfraredShader.SetBuffer(colorInfraredKernel, "_Color2DepthMap", pointCloudCoordBuffer);
                        //colorInfraredShader.SetTexture(colorInfraredKernel, "_ColorTex", sensorData.colorImageTexture);
                        colorInfraredShader.SetBuffer(colorInfraredKernel, "_ColorInfraredMap", sensorData.colorInfraredBuffer);
                        colorInfraredShader.Dispatch(colorInfraredKernel, sensorData.colorImageWidth / 8, sensorData.colorImageHeight / 8, 1);

                        if (sensorData.colorCamInfraredImage != null)
                        {
                            sensorData.colorInfraredBuffer.GetData(sensorData.colorCamInfraredImage);
                            sensorData.lastColorCamInfraredFrameTime = lastColorCamInfraredFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }


        // creates the color-depth shader and its respective buffers, as needed
        protected override bool CreateColorBodyIndexShader(KinectInterop.SensorData sensorData)
        {
            if (colorBodyIndexShader == null)
            {
                colorBodyIndexShader = Resources.Load("ColorBodyIndexShaderK2") as ComputeShader;
                colorBodyIndexKernel = colorBodyIndexShader != null ? colorBodyIndexShader.FindKernel("BakeColorBodyIndex") : -1;
            }

            if (bodyIndexBuffer == null)
            {
                int bufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 4;
                bodyIndexBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
            }

            if (pointCloudCoordBuffer == null)
            {
                int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight * 2;  // Vector2 = 2 x float
                pointCloudCoordBuffer = new ComputeBuffer(bufferLength, sizeof(float));
            }

            if (colorCamDepthCoordFrame == null)
            {
                colorCamDepthCoordFrame = new Vector2[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }

            if (sensorData.colorBodyIndexTexture == null)
            {
                sensorData.colorBodyIndexTexture = new RenderTexture(sensorData.colorImageWidth, sensorData.colorImageHeight, 0, RenderTextureFormat.ARGB32);
                //sensorData.colorBodyIndexTexture.enableRandomWrite = true;
                sensorData.colorBodyIndexTexture.Create();
            }

            colorBodyIndexShaderInited = true;

            return true;
        }


        // updates the color body index shader with the actual data
        protected override bool UpdateColorBodyIndexShader(KinectInterop.SensorData sensorData)
        {
            // for K2 depth camera resolution only
            if (colorBodyIndexShader != null && bodyIndexBuffer != null && pointCloudCoordBuffer != null && colorCamDepthCoordFrame != null)
            {
                if (/**sensorData.usedColorBodyIndexBufferTime == sensorData.lastColorBodyIndexBufferTime && */
                    sensorData.bodyIndexImage != null && sensorData.lastColorBodyIndexBufferTime != lastColorCamDepthFrameTime)
                {
                    sensorData.lastColorBodyIndexBufferTime = lastColorCamDepthFrameTime;

                    if (sensorData.colorImageTexture != null)
                    {
                        Graphics.Blit(sensorData.colorImageTexture, sensorData.colorBodyIndexTexture);
                    }

                    KinectInterop.SetComputeBufferData(bodyIndexBuffer, sensorData.bodyIndexImage, sensorData.bodyIndexImage.Length >> 2, sizeof(uint));

                    lock (colorCamDepthFrameLock)
                    {
                        int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight * 2;
                        KinectInterop.SetComputeBufferData(pointCloudCoordBuffer, colorCamDepthCoordFrame, bufferLength, sizeof(float));
                    }

                    if(sensorData.colorBodyIndexBuffer != null)
                    {
                        KinectInterop.SetComputeShaderInt2(colorBodyIndexShader, "_ColorRes", sensorData.colorImageWidth, sensorData.colorImageHeight);
                        KinectInterop.SetComputeShaderInt2(colorBodyIndexShader, "_DepthRes", sensorData.depthImageWidth, sensorData.depthImageHeight);

                        colorBodyIndexShader.SetBuffer(colorBodyIndexKernel, "_BodyIndexMap", bodyIndexBuffer);
                        colorBodyIndexShader.SetBuffer(colorBodyIndexKernel, "_Color2DepthMap", pointCloudCoordBuffer);
                        //colorBodyIndexShader.SetTexture(colorBodyIndexKernel, "_ColorTex", sensorData.colorImageTexture);
                        colorBodyIndexShader.SetBuffer(colorBodyIndexKernel, "_ColorBodyIndexMap", sensorData.colorBodyIndexBuffer);
                        colorBodyIndexShader.Dispatch(colorBodyIndexKernel, sensorData.colorImageWidth / 8, sensorData.colorImageHeight / 8, 1);

                        if (sensorData.colorCamBodyIndexImage != null)
                        {
                            sensorData.colorBodyIndexBuffer.GetData(sensorData.colorCamBodyIndexImage);
                            sensorData.lastColorCamBodyIndexFrameTime = lastColorCamDepthFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }


        public override Vector3 MapDepthPointToSpaceCoords(KinectInterop.SensorData sensorData, Vector2 depthPos, ushort depthVal)
        {
            Vector3 vPoint = Vector3.zero;

            if (coordMapper != null && depthPos != Vector2.zero)
            {
                DepthSpacePoint depthPoint = new DepthSpacePoint();
                depthPoint.X = depthPos.x;
                depthPoint.Y = depthPos.y;

                DepthSpacePoint[] depthPoints = new DepthSpacePoint[1];
                depthPoints[0] = depthPoint;

                ushort[] depthVals = new ushort[1];
                depthVals[0] = depthVal;

                CameraSpacePoint[] camPoints = new CameraSpacePoint[1];
                coordMapper.MapDepthPointsToCameraSpace(depthPoints, depthVals, camPoints);

                CameraSpacePoint camPoint = camPoints[0];
                vPoint.x = camPoint.X;
                vPoint.y = camPoint.Y;
                vPoint.z = camPoint.Z;
            }

            return vPoint;
        }

        public override Vector2 MapSpacePointToDepthCoords(KinectInterop.SensorData sensorData, Vector3 spacePos)
        {
            Vector2 vPoint = Vector2.zero;

            if (coordMapper != null)
            {
                CameraSpacePoint camPoint = new CameraSpacePoint();
                camPoint.X = spacePos.x;
                camPoint.Y = spacePos.y;
                camPoint.Z = spacePos.z;

                CameraSpacePoint[] camPoints = new CameraSpacePoint[1];
                camPoints[0] = camPoint;

                DepthSpacePoint[] depthPoints = new DepthSpacePoint[1];
                coordMapper.MapCameraPointsToDepthSpace(camPoints, depthPoints);

                DepthSpacePoint depthPoint = depthPoints[0];

                if (depthPoint.X >= 0 && depthPoint.X < sensorData.depthImageWidth &&
                   depthPoint.Y >= 0 && depthPoint.Y < sensorData.depthImageHeight)
                {
                    vPoint.x = depthPoint.X;
                    vPoint.y = depthPoint.Y;
                }
            }

            return vPoint;
        }

        public override Vector2 MapDepthPointToColorCoords(KinectInterop.SensorData sensorData, Vector2 depthPos, ushort depthVal)
        {
            Vector2 vPoint = Vector2.zero;

            if (coordMapper != null && depthPos != Vector2.zero)
            {
                DepthSpacePoint depthPoint = new DepthSpacePoint();
                depthPoint.X = depthPos.x;
                depthPoint.Y = depthPos.y;

                DepthSpacePoint[] depthPoints = new DepthSpacePoint[1];
                depthPoints[0] = depthPoint;

                ushort[] depthVals = new ushort[1];
                depthVals[0] = depthVal;

                ColorSpacePoint[] colPoints = new ColorSpacePoint[1];
                coordMapper.MapDepthPointsToColorSpace(depthPoints, depthVals, colPoints);

                ColorSpacePoint colPoint = colPoints[0];
                vPoint.x = colPoint.X;
                vPoint.y = colPoint.Y;
            }

            return vPoint;
        }

        //public override bool MapDepthFrameToSpaceCoords(KinectInterop.SensorData sensorData, ref Vector3[] vSpaceCoords)
        //{
        //    if (coordMapper != null && sensorData.depthImage != null)
        //    {
        //        var pDepthData = GCHandle.Alloc(sensorData.depthImage, GCHandleType.Pinned);
        //        var pSpaceCoordsData = GCHandle.Alloc(vSpaceCoords, GCHandleType.Pinned);

        //        coordMapper.MapDepthFrameToCameraSpaceUsingIntPtr(
        //            pDepthData.AddrOfPinnedObject(),
        //            sensorData.depthImage.Length * sizeof(ushort),
        //            pSpaceCoordsData.AddrOfPinnedObject(),
        //            (uint)vSpaceCoords.Length);

        //        pSpaceCoordsData.Free();
        //        pDepthData.Free();

        //        return true;
        //    }

        //    return false;
        //}

        //public override bool MapDepthFrameToColorCoords(KinectInterop.SensorData sensorData, ref Vector2[] vColorCoords)
        //{
        //    if (coordMapper != null && sensorData.colorImageTexture != null && sensorData.depthImage != null)
        //    {
        //        var pDepthData = GCHandle.Alloc(sensorData.depthImage, GCHandleType.Pinned);
        //        var pColorCoordsData = GCHandle.Alloc(vColorCoords, GCHandleType.Pinned);

        //        coordMapper.MapDepthFrameToColorSpaceUsingIntPtr(
        //            pDepthData.AddrOfPinnedObject(),
        //            sensorData.depthImage.Length * sizeof(ushort),
        //            pColorCoordsData.AddrOfPinnedObject(),
        //            (uint)vColorCoords.Length);

        //        pColorCoordsData.Free();
        //        pDepthData.Free();

        //        return true;
        //    }

        //    return false;
        //}

        //public override bool MapColorFrameToDepthCoords(KinectInterop.SensorData sensorData, ref Vector2[] vDepthCoords)
        //{
        //    if (coordMapper != null && sensorData.colorImageTexture != null && sensorData.depthImage != null)
        //    {
        //        var pDepthData = GCHandle.Alloc(sensorData.depthImage, GCHandleType.Pinned);
        //        var pDepthCoordsData = GCHandle.Alloc(vDepthCoords, GCHandleType.Pinned);

        //        coordMapper.MapColorFrameToDepthSpaceUsingIntPtr(
        //            pDepthData.AddrOfPinnedObject(),
        //            (uint)sensorData.depthImage.Length * sizeof(ushort),
        //            pDepthCoordsData.AddrOfPinnedObject(),
        //            (uint)vDepthCoords.Length);

        //        pDepthCoordsData.Free();
        //        pDepthData.Free();

        //        return true;
        //    }

        //    return false;
        //}


        // enables or disables color camera depth frame processing
        public override void EnableColorCameraDepthFrame(KinectInterop.SensorData sensorData, bool isEnable)
        {
            base.EnableColorCameraDepthFrame(sensorData, isEnable);

            if (isEnable && sensorData.colorDepthBuffer == null)
            {
                if (sensorData.colorImageWidth > 0 && sensorData.colorImageHeight > 0)
                {
                    int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight / 2;
                    sensorData.colorDepthBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
                }
            }
            else if (!isEnable && sensorData.colorDepthBuffer != null)
            {
                sensorData.colorDepthBuffer.Release();
                sensorData.colorDepthBuffer.Dispose();
                sensorData.colorDepthBuffer = null;
            }
        }

        // enables or disables color camera body-index frame processing
        public override void EnableColorCameraBodyIndexFrame(KinectInterop.SensorData sensorData, bool isEnable)
        {
            base.EnableColorCameraBodyIndexFrame(sensorData, isEnable);

            if (isEnable && sensorData.colorBodyIndexBuffer == null)
            {
                if (sensorData.colorImageWidth > 0 && sensorData.colorImageHeight > 0)
                {
                    int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight / 4;
                    sensorData.colorBodyIndexBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
                }
            }
            else if (!isEnable && sensorData.colorBodyIndexBuffer != null)
            {
                sensorData.colorBodyIndexBuffer.Release();
                sensorData.colorBodyIndexBuffer.Dispose();
                sensorData.colorBodyIndexBuffer = null;
            }
        }

    }
}

#endif
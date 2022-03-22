using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Intel.RealSense;
using System.Threading;
using System;
using System.Linq;
using System.Runtime.InteropServices;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// RealSenseInterface is sensor-interface to the RealSense sensors.
    /// </summary>
    public class RealSenseInterface : DepthSensorBase
    {
        [Tooltip("Color camera resolution.")]
        public ColorCameraMode colorCameraMode = ColorCameraMode._640_x_480_30Fps;
        public enum ColorCameraMode : int { _320_x_180_30Fps = 10, _320_x_240_30Fps = 15, _424_x_240_30Fps = 20, _640_x_360_30Fps = 30, _640_x_480_30Fps = 35, _848_x_480_30Fps = 40, _1280_x_720_30Fps = 60, _1920_x_1080_30Fps = 70 }

        [Tooltip("Depth camera resolution.")]
        public DepthCameraMode depthCameraMode = DepthCameraMode._640_x_480_30Fps;
        public enum DepthCameraMode : int { _424_x_240_30Fps = 20, _480_x_270_30Fps = 25, _640_x_360_30Fps = 30, _640_x_480_30Fps = 35, _848_x_480_30Fps = 40, _1280_x_720_30Fps = 60, _1920_x_1080_30Fps = 70 }


        // realsense pipeline
        private Pipeline m_pipeline = null;

        //public bool Streaming { get; protected set; }
        private PipelineProfile activeProfile = null;

        // current frame number
        //private ulong currentFrameNumber = 0;
        //private ulong currentFrameTimestamp = 0;

        // stream profiles
        private VideoStreamProfile depthStreamProfile = null;
        private VideoStreamProfile colorStreamProfile = null;

        // raw infrared data
        protected byte[] rawInfraredImage1 = null;
        protected byte[] rawInfraredImage2 = null; // used by BT
        protected ushort[] rawInfraredImageBT = null;

        // raw IMU data
        private RealSensePoseData rsPoseData;

        // rs frame holder
        protected RealSenseFrames rsFrames = new RealSenseFrames();


        // depth sensor settings
        [System.Serializable]
        public class RSSensorSettings : DepthSensorBase.BaseSensorSettings
        {
            public int colorCameraMode;
            public int depthCameraMode;
        }


        [StructLayout(LayoutKind.Sequential)]
        struct RealSensePoseData
        {
            public Vector3 translation;
            public Vector3 velocity;
            public Vector3 acceleration;
            public Quaternion rotation;
            public Vector3 angular_velocity;
            public Vector3 angular_acceleration;
            public int tracker_confidence;
            public int mapper_confidence;
        }

        // rs frame set
        public class RealSenseFrames
        {
            public VideoFrame colorFrame = null;
            public VideoFrame depthFrame = null;
            public VideoFrame infraredFrame = null;
            public PoseFrame poseFrame = null;
            public ulong deviceTimestamp = 0;

            public void DisposeFrames()
            {
                if (colorFrame != null)
                {
                    colorFrame.Dispose();
                    colorFrame = null;
                }

                if (depthFrame != null)
                {
                    depthFrame.Dispose();
                    depthFrame = null;
                }

                if (infraredFrame != null)
                {
                    infraredFrame.Dispose();
                    infraredFrame = null;
                }

                if (poseFrame != null)
                {
                    poseFrame.Dispose();
                    poseFrame = null;
                }
            }
        }


        public override KinectInterop.DepthSensorPlatform GetSensorPlatform()
        {
            return KinectInterop.DepthSensorPlatform.RealSense;
        }


        public override System.Type GetSensorSettingsType()
        {
            return typeof(RSSensorSettings);
        }


        public override BaseSensorSettings GetSensorSettings(BaseSensorSettings settings)
        {
            if (settings == null)
            {
                settings = new RSSensorSettings();
            }

            RSSensorSettings extSettings = (RSSensorSettings)base.GetSensorSettings(settings);

            extSettings.colorCameraMode = (int)colorCameraMode;
            extSettings.depthCameraMode = (int)depthCameraMode;

            return settings;
        }

        public override void SetSensorSettings(BaseSensorSettings settings)
        {
            if (settings == null)
                return;

            base.SetSensorSettings(settings);

            RSSensorSettings extSettings = (RSSensorSettings)settings;
            colorCameraMode = (ColorCameraMode)extSettings.colorCameraMode;
            depthCameraMode = (DepthCameraMode)extSettings.depthCameraMode;
        }

        public override List<KinectInterop.SensorDeviceInfo> GetAvailableSensors()
        {
            List<KinectInterop.SensorDeviceInfo> alSensorInfo = new List<KinectInterop.SensorDeviceInfo>();

            using (var ctx = new Context())
            {
                DeviceList devices = ctx.QueryDevices();

                for(int i = 0; i < devices.Count; i++)
                {
                    using (Intel.RealSense.Device device = devices[i])
                    {
                        KinectInterop.SensorDeviceInfo sensorInfo = new KinectInterop.SensorDeviceInfo();
                        sensorInfo.sensorId = device.Info[CameraInfo.SerialNumber];
                        sensorInfo.sensorName = device.Info[CameraInfo.Name];

                        if (sensorInfo.sensorName.StartsWith("Intel RealSense D"))
                            sensorInfo.sensorCaps = KinectInterop.FrameSource.TypeColor | KinectInterop.FrameSource.TypeDepth | KinectInterop.FrameSource.TypeInfrared;
                        else if (sensorInfo.sensorName.StartsWith("Intel RealSense T"))
                            sensorInfo.sensorCaps = KinectInterop.FrameSource.TypePose;
                        else
                            sensorInfo.sensorCaps = KinectInterop.FrameSource.TypeNone;

                        if (consoleLogMessages)
                            Debug.Log(string.Format("  D{0}: {1}, id: {2}", i, sensorInfo.sensorName, sensorInfo.sensorId));

                        alSensorInfo.Add(sensorInfo);
                    }
                }
            }

            //if (alSensorInfo.Count == 0)
            //{
            //    Debug.Log("  No sensor devices found.");
            //}

            return alSensorInfo;
        }


        public override KinectInterop.SensorData OpenSensor(KinectManager kinectManager, KinectInterop.FrameSource dwFlags, bool bSyncDepthAndColor, bool bSyncBodyAndDepth)
        {
            // save initial parameters
            base.OpenSensor(kinectManager, dwFlags, bSyncDepthAndColor, bSyncBodyAndDepth);

            // color settings
            int colorWidth = 0, colorHeight = 0, colorFps = 0;
            ParseCameraMode(colorCameraMode.ToString(), out colorWidth, out colorHeight, out colorFps);

            // depth settings
            int depthWidth = 0, depthHeight = 0, depthFps = 0;
            ParseCameraMode(depthCameraMode.ToString(), out depthWidth, out depthHeight, out depthFps);

            string sensorName = "Intel RealSense";
            KinectInterop.FrameSource sensorCaps = KinectInterop.FrameSource.TypeColor | KinectInterop.FrameSource.TypeDepth | KinectInterop.FrameSource.TypeInfrared; ;

            try
            {
                m_pipeline = new Pipeline();

                using (Config config = new Config())
                {
                    if(deviceStreamingMode == KinectInterop.DeviceStreamingMode.PlayRecording)
                    {
                        if (string.IsNullOrEmpty(recordingFile))
                        {
                            Debug.LogError("PlayRecording selected, but the path to recording file is missing.");
                            return null;
                        }

                        if(!System.IO.File.Exists(recordingFile))
                        {
                            Debug.LogError("PlayRecording selected, but the recording file cannot be found: " + recordingFile);
                            return null;
                        }

                        sensorPlatform = KinectInterop.DepthSensorPlatform.RealSense;
                        sensorDeviceId = KinectInterop.GetFileName(recordingFile, false);

                        // playback from file
                        if (consoleLogMessages)
                            Debug.Log("Playing back: " + recordingFile);
                        config.EnableDeviceFromFile(recordingFile, false);
                    }
                    else
                    {
                        // get the list of available sensors
                        List<KinectInterop.SensorDeviceInfo> alSensors = GetAvailableSensors();
                        if (deviceIndex >= alSensors.Count)
                        {
                            Debug.LogError("  D" + deviceIndex + " is not available. You can set the device index to -1, to disable it.");
                            return null;
                        }

                        // sensor serial number
                        sensorPlatform = KinectInterop.DepthSensorPlatform.RealSense;
                        sensorDeviceId = alSensors[deviceIndex].sensorId;
                        sensorName = alSensors[deviceIndex].sensorName;
                        sensorCaps = alSensors[deviceIndex].sensorCaps;

                        config.EnableDevice(sensorDeviceId);

                        // color
                        if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0)
                        {
                            //Debug.Log(string.Format("Color camera mode: {0} x {1} @ {2} FPS", colorWidth, colorHeight, colorFps));
                            config.EnableStream(Stream.Color, -1, colorWidth, colorHeight, Format.Rgb8, colorFps);
                        }

                        // depth
                        if ((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
                        {
                            //Debug.Log(string.Format("Depth camera mode: {0} x {1} @ {2} FPS", depthWidth, depthHeight, depthFps));
                            config.EnableStream(Stream.Depth, -1, depthWidth, depthHeight, Format.Z16, depthFps);
                        }

                        // infrared
                        if ((dwFlags & KinectInterop.FrameSource.TypeInfrared) != 0 /**|| (dwFlags & KinectInterop.FrameSource.TypeBody) != 0*/)
                        {
                            //Debug.Log(string.Format("Infrared camera mode: {0} x {1} @ {2} FPS", depthWidth, depthHeight, depthFps));
                            config.EnableStream(Stream.Infrared, 1, depthWidth, depthHeight, Format.Y8, depthFps);
                            //config.EnableStream(Stream.Infrared, 2, depthWidth, depthHeight, Format.Y8, depthFps);
                        }

                        // pose
                        if ((dwFlags & KinectInterop.FrameSource.TypePose) != 0)
                        {
                            config.EnableStream(Stream.Pose, Format.SixDOF);
                        }

                        //// record to file
                        //if(deviceMode == KinectInterop.DepthSensorMode.CreateRecording && !string.IsNullOrEmpty(deviceFilePath))
                        //{
                        //    if (!string.IsNullOrEmpty(deviceFilePath))
                        //    {
                        //        config.EnableRecordToFile(deviceFilePath);
                        //    }
                        //    else
                        //    {
                        //        Debug.LogError("Record selected, but the path to recording file is missing.");
                        //    }
                        //}
                    }

                    activeProfile = m_pipeline.Start(config);
                }
            }
            catch (Exception ex)
            {
                Debug.LogError("RealSenseInterface: " + ex.ToString());
            }

            // check if the profile was successfully created
            if(activeProfile == null)
                return null;

            KinectInterop.SensorData sensorData = new KinectInterop.SensorData();
            sensorData.sensorIntPlatform = sensorPlatform;

            sensorData.sensorId = sensorDeviceId;
            sensorData.sensorName = sensorName;
            sensorData.sensorCaps = sensorCaps;

            // flip color & depth images vertically
            sensorData.colorImageScale = new Vector3(-1f, -1f, 1f);
            sensorData.depthImageScale = new Vector3(-1f, -1f, 1f);
            sensorData.infraredImageScale = new Vector3(-1f, -1f, 1f);
            sensorData.sensorSpaceScale = new Vector3(-1f, -1f, 1f);
            sensorData.unitToMeterFactor = 1f;

            // depth camera offset & matrix z-flip
            sensorRotOffset = Vector3.zero;   // if for instance the depth camera is tilted downwards
            sensorRotFlipZ = true;
            sensorRotIgnoreY = false;

            // color
            sensorData.colorImageWidth = colorWidth;
            sensorData.colorImageHeight = colorHeight;

            sensorData.colorImageFormat = TextureFormat.RGB24;
            sensorData.colorImageStride = 3;  // 3 bytes per pixel

            if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0)
            {
                rawColorImage = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight * 3];

                sensorData.colorImageTexture = new Texture2D(sensorData.colorImageWidth, sensorData.colorImageHeight, TextureFormat.RGB24, false);
                sensorData.colorImageTexture.wrapMode = TextureWrapMode.Clamp;
                sensorData.colorImageTexture.filterMode = FilterMode.Point;
            }

            // depth
            sensorData.depthImageWidth = depthWidth;
            sensorData.depthImageHeight = depthHeight;

            if ((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
            {
                rawDepthImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];
                sensorData.depthImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];
            }

            // infrared
            if ((dwFlags & KinectInterop.FrameSource.TypeInfrared) != 0 || (dwFlags & KinectInterop.FrameSource.TypeBody) != 0)
            {
                rawInfraredImage1 = new byte[sensorData.depthImageWidth * sensorData.depthImageHeight];
                rawInfraredImage2 = new byte[sensorData.depthImageWidth * sensorData.depthImageHeight];
                rawInfraredImageBT = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];

                rawInfraredImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];
                sensorData.infraredImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];

                minInfraredValue = 0f;
                maxInfraredValue = 1000f;
            }

            // don't get all frames
            getAllSensorFrames = false;

            if (consoleLogMessages)
                Debug.Log("D" + deviceIndex + " RealSense-sensor opened: " + sensorDeviceId);

            return sensorData;
        }


        // parses the given camera mode and returns width, height and fps
        private void ParseCameraMode(string sCameraMode, out int camWidth, out int camHeight, out int camFps)
        {
            camWidth = camHeight = camFps = 0;

            if (string.IsNullOrEmpty(sCameraMode))
                throw new Exception("Invalid camera mode" + sCameraMode);

            // _640_x_360_30Fps
            string[] asModeParts = sCameraMode.Split("_".ToCharArray());
            if(asModeParts.Length != 5)
                throw new Exception("Invalid camera mode" + sCameraMode);

            camWidth = int.Parse(asModeParts[1]);
            camHeight = int.Parse(asModeParts[3]);

            int iF = asModeParts[4].IndexOf('F');
            if (iF >= 0)
                asModeParts[4] = asModeParts[4].Substring(0, iF);

            camFps = int.Parse(asModeParts[4]);
        }


        public override void CloseSensor(KinectInterop.SensorData sensorData)
        {
            base.CloseSensor(sensorData);

            if (activeProfile != null)
            {
                activeProfile.Dispose();
                activeProfile = null;
            }

            if (m_pipeline != null)
            {
                m_pipeline.Dispose();
                m_pipeline = null;
            }

            if (consoleLogMessages)
                Debug.Log("D" + deviceIndex + " RealSense-sensor closed: " + sensorDeviceId);
        }


        public override void EnablePoseStream(KinectInterop.SensorData sensorData, bool bEnable)
        {
            base.EnablePoseStream(sensorData, bEnable);

            if ((frameSourceFlags & KinectInterop.FrameSource.TypePose) != 0)
            {
                // todo
            }
            else
            {
                // todo
            }
        }


        public override void PollSensorFrames(KinectInterop.SensorData sensorData)
        {
            FrameSet frames;
            if (m_pipeline.PollForFrames(out frames))
            {
                //using (frames)
                //    RaiseSampleEvent(frames);

                using (frames)
                {
                    try
                    {
                        rsFrames.colorFrame = frames.ColorFrame;
                        rsFrames.depthFrame = frames.DepthFrame;
                        rsFrames.infraredFrame = frames.InfraredFrame;
                        rsFrames.poseFrame = frames.PoseFrame;
                        rsFrames.deviceTimestamp = (ulong)(frames.Timestamp * 1000.0);

                        //currentFrameNumber = frames.Number;
                        //currentFrameTimestamp = (ulong)(frames.Timestamp * 1000.0);

                        // check for color-depth sync
                        if(!isSyncDepthAndColor || (rsFrames.colorFrame != null && rsFrames.depthFrame != null))
                        {
                            ProcessCameraFrames(sensorData, rsFrames);
                        }

                        rsFrames.DisposeFrames();
                        //pipelineFrameNumber++;
                    }
                    catch (Exception e)
                    {
                        Debug.LogException(e);
                    }
                }
            }
        }

        private void ProcessCameraFrames(KinectInterop.SensorData sensorData, RealSenseFrames frames)
        {
            //Capture btCapture = null;
            //if (bodyTracker != null)
            //{
            //    // body frame
            //    if (frames.depthFrame != null && frames.infraredFrame != null)
            //    {
            //        Capture capture = GetBodyTrackerCapture(sensorData, frames);
            //        btCapture = PollBodyFrame(sensorData, capture);
            //        capture?.Dispose();
            //    }
            //}

            // check for body & depth sync
            //if (!isSyncBodyAndDepth || btCapture != null /**|| bodyTracker == null*/)
            {
            //    if (isSyncBodyAndDepth && btCapture != null)
            //    {
            //        ulong depthFrameTime = isSyncDepthAndColor && btCapture.Depth != null ? (ulong)btCapture.Depth.DeviceTimestamp.Ticks : 0;

            //        // body-tracker frame
            //        if (btCapture.Depth != null && rawDepthImage != null && (getAllSensorFrames || rawDepthTimestamp == sensorData.lastDepthFrameTime))
            //        {
            //            lock (depthFrameLock)
            //            {
            //                //btCapture.Depth.CopyTo(rawDepthImage, 0, 0, rawDepthImage.Length);
            //                KinectInterop.CopyBytes(btCapture.Depth.GetBuffer(), (int)btCapture.Depth.Size, rawDepthImage, rawDepthImage.Length, sizeof(ushort));
            //                rawDepthTimestamp = (ulong)btCapture.Depth.DeviceTimestamp.Ticks;
            //                //Debug.Log("D" + deviceIndex + " RawDepthTimestamp: " + rawDepthTimestamp);
            //            }
            //        }

            //        if (btCapture.Color != null && rawColorImage != null && (getAllSensorFrames || rawColorTimestamp == sensorData.lastColorFrameTime))
            //        {
            //            lock (colorFrameLock)
            //            {
            //                //btCapture.Color.CopyBytesTo(rawColorImage, 0, 0, rawColorImage.Length);
            //                KinectInterop.CopyBytes(btCapture.Color.GetBuffer(), (int)btCapture.Color.Size, rawColorImage, rawColorImage.Length, sizeof(byte));
            //                rawColorTimestamp = depthFrameTime != 0 ? depthFrameTime : (ulong)btCapture.Color.DeviceTimestamp.Ticks;
            //                //Debug.Log("D" + deviceIndex + " RawColorTimestamp: " + rawColorTimestamp);
            //            }
            //        }

            //        if (btCapture.IR != null && rawInfraredImage != null && (getAllSensorFrames || rawInfraredTimestamp == sensorData.lastInfraredFrameTime))
            //        {
            //            lock (infraredFrameLock)
            //            {
            //                //btCapture.IR.CopyTo(rawInfraredImage, 0, 0, rawInfraredImage.Length);
            //                KinectInterop.CopyBytes(btCapture.IR.GetBuffer(), (int)btCapture.IR.Size, rawInfraredImage, rawInfraredImage.Length, sizeof(ushort));
            //                rawInfraredTimestamp = depthFrameTime != 0 ? depthFrameTime : (ulong)btCapture.IR.DeviceTimestamp.Ticks;
            //                //Debug.Log("D" + deviceIndex + " RawInfraredTimestamp: " + rawInfraredTimestamp);
            //            }
            //        }
            //    }
            //    else
                {
                    // sensor frame
                    ulong depthFrameTime = isSyncDepthAndColor && frames.depthFrame != null ? frames.deviceTimestamp : 0;

                    if (frames.depthFrame != null && rawDepthImage != null && (getAllSensorFrames || rawDepthTimestamp == sensorData.lastDepthFrameTime))
                    {
                        lock (depthFrameLock)
                        {
                            frames.depthFrame.CopyTo<ushort>(rawDepthImage);
                            rawDepthTimestamp = frames.deviceTimestamp;
                            //Debug.Log("D" + deviceIndex + " RawDepthTimestamp: " + rawDepthTimestamp);
                        }
                    }

                    if (frames.colorFrame != null && rawColorImage != null && (getAllSensorFrames || rawColorTimestamp == sensorData.lastColorFrameTime))
                    {
                        lock (colorFrameLock)
                        {
                            KinectInterop.CopyBytes(frames.colorFrame.Data, rawColorImage.Length, rawColorImage, rawColorImage.Length, sizeof(byte));
                            rawColorTimestamp = depthFrameTime != 0 ? depthFrameTime : frames.deviceTimestamp;
                            //Debug.Log("D" + deviceIndex + " RawColorTimestamp: " + rawColorTimestamp);
                        }
                    }

                    if (frames.infraredFrame != null && rawInfraredImage != null && (getAllSensorFrames || rawInfraredTimestamp == sensorData.lastInfraredFrameTime))
                    {
                        lock (infraredFrameLock)
                        {
                            frames.infraredFrame.CopyTo<byte>(rawInfraredImage1);
                            for (int i = 0; i < rawInfraredImage1.Length; i++)
                            {
                                rawInfraredImage[i] = (ushort)(rawInfraredImage1[i] << 4);
                            }

                            rawInfraredTimestamp = depthFrameTime != 0 ? depthFrameTime : frames.deviceTimestamp;
                            //Debug.Log("D" + deviceIndex + " RawInfraredTimestamp: " + rawInfraredTimestamp);
                        }
                    }
                }
            }

            // color & depth stream profiles
            if(frames.colorFrame != null)
            {
                colorStreamProfile = frames.colorFrame.Profile.As<VideoStreamProfile>();
            }

            if(frames.depthFrame != null)
            {
                depthStreamProfile = frames.depthFrame.Profile.As<VideoStreamProfile>();
            }

            //// dispose body capture
            //if (btCapture != null)
            //{
            //    btCapture.Dispose();
            //}

            // check for pose frame
            if (frames.poseFrame != null)
            {
                frames.poseFrame.CopyTo(out rsPoseData);

                lock (poseFrameLock)
                {
                    rawPosePosition = new Vector3(rsPoseData.translation.x, rsPoseData.translation.y, -rsPoseData.translation.z);  // (1, 1, -1)
                    rawPoseRotation = new Quaternion(-rsPoseData.rotation.x, -rsPoseData.rotation.y, rsPoseData.rotation.z, rsPoseData.rotation.w);  // (-1, -1, 1, 1);

                    rawPoseTimestamp = frames.deviceTimestamp;
                    //Debug.Log("D" + deviceIndex + " RawPoseTimestamp: " + rawPoseTimestamp);
                }
            }
        }


        //// converts the raw image data to capture 
        //protected Capture GetBodyTrackerCapture(KinectInterop.SensorData sensorData, RealSenseFrames rsFrames)
        //{
        //    Capture capture = new Capture();

        //    int depthW = sensorData.depthImageWidth;
        //    int depthH = sensorData.depthImageHeight;

        //    if (rsFrames.colorFrame != null && rawColorImage != null)
        //    {
        //        Image colorImage = new Image(ImageFormat.ColorBGRA32, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * 4);
        //        KinectInterop.CopyBytes(rsFrames.colorFrame.Data, colorImage.GetBuffer(), rawColorImage.Length);
        //        colorImage.DeviceTimestamp = TimeSpan.FromTicks((long)rsFrames.deviceTimestamp);
        //        capture.Color = colorImage;
        //    }

        //    if (rsFrames.depthFrame != null && rawDepthImage != null)
        //    {
        //        Image depthImage = new Image(ImageFormat.Depth16, depthW, depthH, depthW * sizeof(ushort));
        //        KinectInterop.CopyBytes(rsFrames.depthFrame.Data, depthImage.GetBuffer(), rawDepthImage.Length * sizeof(ushort));
        //        depthImage.DeviceTimestamp = TimeSpan.FromTicks((long)rsFrames.deviceTimestamp);
        //        capture.Depth = depthImage;
        //    }

        //    if (rsFrames.infraredFrame != null && rawInfraredImage2 != null && rawInfraredImageBT != null)
        //    {
        //        Image infraredFrame = new Image(ImageFormat.IR16, depthW, depthH, depthW * sizeof(ushort));
        //        rsFrames.infraredFrame.CopyTo<byte>(rawInfraredImage2);

        //        for (int i = 0; i < rawInfraredImage2.Length; i++)
        //        {
        //            rawInfraredImageBT[i] = (ushort)(rawInfraredImage2[i] << 4);
        //        }

        //        KinectInterop.CopyBytes(rawInfraredImageBT, rawInfraredImageBT.Length, sizeof(ushort), infraredFrame.GetBuffer(), (int)infraredFrame.Size);
        //        infraredFrame.DeviceTimestamp = TimeSpan.FromTicks((long)rsFrames.deviceTimestamp);
        //        capture.IR = infraredFrame;
        //    }

        //    return capture;
        //}


        public override bool UpdateSensorData(KinectInterop.SensorData sensorData, KinectManager kinectManager, bool isPlayMode)
        {
            base.UpdateSensorData(sensorData, kinectManager, isPlayMode);

            if(sensorData.colorCamIntr == null && colorStreamProfile != null)
            {
                lock (colorFrameLock)
                {
                    Intel.RealSense.Intrinsics colorCamIntr = colorStreamProfile.GetIntrinsics();

                    if (colorCamIntr.model != Distortion.None)
                    {
                        GetCameraIntrinsics(colorCamIntr, ref sensorData.colorCamIntr, 1);
                    }
                }
            }

            if (sensorData.depthCamIntr == null && depthStreamProfile != null)
            {
                lock (depthFrameLock)
                {
                    Intel.RealSense.Intrinsics depthCamIntr = depthStreamProfile.GetIntrinsics();
                    //Debug.Log("RS distType: " + depthCamIntr.model);

                    if (depthCamIntr.model != Distortion.None || deviceStreamingMode == KinectInterop.DeviceStreamingMode.PlayRecording)
                    {
                        GetCameraIntrinsics(depthCamIntr, ref sensorData.depthCamIntr, 0);

                        if (depthCamIntr.model == Distortion.None && deviceStreamingMode == KinectInterop.DeviceStreamingMode.PlayRecording)
                        {
                            // workaround for playback mode (model & coeffs are missing there)
                            sensorData.depthCamIntr.distType = KinectInterop.DistortionType.BrownConrady;
                        }

                        // body & body-index data
                        if ((frameSourceFlags & KinectInterop.FrameSource.TypeBody) != 0)
                        {
                            Debug.LogWarning("Body tracking is not supported for RealSense sensors!");

                            //if(depthCamIntr.width == 640 && depthCamIntr.height == 480)
                            //{
                            //    Calibration cal = GetBodyTrackerCalibration(sensorData.depthCamIntr);
                            //    InitBodyTracking(frameSourceFlags, sensorData, cal, true);

                            //    if (isSyncBodyAndDepth && bodyTracker == null)
                            //    {
                            //        // don't sync body and depth if the body tracker can't be created
                            //        isSyncBodyAndDepth = false;
                            //    }
                            //}
                        }
                    }
                }
            }

            if(sensorData.depth2ColorExtr == null && depthStreamProfile != null && colorStreamProfile != null)
            {
                lock (depthFrameLock)
                {
                    lock (colorFrameLock)
                    {
                        Intel.RealSense.Extrinsics depth2ColorExtr = depthStreamProfile.GetExtrinsicsTo(colorStreamProfile);
                        GetCameraExtrinsics(depth2ColorExtr, ref sensorData.depth2ColorExtr);
                    }
                }
            }

            if (sensorData.color2DepthExtr == null && colorStreamProfile != null && depthStreamProfile != null)
            {
                lock (colorFrameLock)
                {
                    lock (depthFrameLock)
                    {
                        Intel.RealSense.Extrinsics color2DepthExtr = colorStreamProfile.GetExtrinsicsTo(depthStreamProfile);
                        GetCameraExtrinsics(color2DepthExtr, ref sensorData.color2DepthExtr);
                    }
                }
            }

            return true;
        }


        // gets the given camera intrinsics
        private void GetCameraIntrinsics(Intel.RealSense.Intrinsics camIntr, ref KinectInterop.CameraIntrinsics intr, int camType)
        {
            intr = new KinectInterop.CameraIntrinsics();

            intr.cameraType = camType;
            intr.width = camIntr.width;
            intr.height = camIntr.height;

            intr.ppx = camIntr.ppx;
            intr.ppy = camIntr.ppy;

            intr.fx = camIntr.fx;
            intr.fy = camIntr.fy;

            intr.distCoeffs = new float[camIntr.coeffs.Length];
            camIntr.coeffs.CopyTo(intr.distCoeffs, 0);

            intr.distType = (KinectInterop.DistortionType)camIntr.model;

            EstimateFOV(intr);
        }


        // gets the given camera extrinsics
        private void GetCameraExtrinsics(Intel.RealSense.Extrinsics camExtr, ref KinectInterop.CameraExtrinsics extr)
        {
            extr = new KinectInterop.CameraExtrinsics();

            extr.rotation = new float[camExtr.rotation.Length];
            camExtr.rotation.CopyTo(extr.rotation, 0);

            extr.translation = new float[camExtr.translation.Length];
            camExtr.translation.CopyTo(extr.translation, 0);
        }


        // unprojects plane point into the space
        public override Vector3 UnprojectPoint(KinectInterop.CameraIntrinsics intr, Vector2 pixel, float depth)
        {
            float x = (pixel.x - intr.ppx) / intr.fx;
            float y = (pixel.y - intr.ppy) / intr.fy;

            if (intr.distType == KinectInterop.DistortionType.InverseBrownConrady)
            {
                float r2 = x * x + y * y;
                float f = 1 + intr.distCoeffs[0] * r2 + intr.distCoeffs[1] * r2 * r2 + intr.distCoeffs[4] * r2 * r2 * r2;

                float ux = x * f + 2 * intr.distCoeffs[2] * x * y + intr.distCoeffs[3] * (r2 + 2 * x * x);
                float uy = y * f + 2 * intr.distCoeffs[3] * x * y + intr.distCoeffs[2] * (r2 + 2 * y * y);

                x = ux;
                y = uy;
            }

            Vector3 point = new Vector3(depth * x, depth * y, depth);

            return point;
        }


        // projects space point onto a plane
        public override Vector2 ProjectPoint(KinectInterop.CameraIntrinsics intr, Vector3 point)
        {
            float x = point.x / point.z;
            float y = point.y / point.z;

            if (intr.distType == KinectInterop.DistortionType.ModifiedBrownConrady)
            {
                float r2 = x * x + y * y;
                float f = 1f + intr.distCoeffs[0] * r2 + intr.distCoeffs[1] * r2 * r2 + intr.distCoeffs[4] * r2 * r2 * r2;

                x *= f;
                y *= f;

                float dx = x + 2f * intr.distCoeffs[2] * x * y + intr.distCoeffs[3] * (r2 + 2 * x * x);
                float dy = y + 2f * intr.distCoeffs[3] * x * y + intr.distCoeffs[2] * (r2 + 2 * y * y);

                x = dx;
                y = dy;
            }

            if (intr.distType == KinectInterop.DistortionType.Theta)
            {
                float r = (float)Math.Sqrt(x * x + y * y);
                float rd = (1f / intr.distCoeffs[0] * (float)Math.Atan(2f * r * (float)Math.Tan(intr.distCoeffs[0] / 2f)));

                x *= rd / r;
                y *= rd / r;
            }

            Vector2 pixel = new Vector2(x * intr.fx + intr.ppx, y * intr.fy + intr.ppy);

            return pixel;
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

                // depth2color frame
                if (depthCamColorDataFrame != null)
                {
                    lock (depthCamColorFrameLock)
                    {
                        TransformColorFrameToDepthCamResolution(sensorData, depthCamColorDataFrame);

                        lastDepthCamColorFrameTime = lastDepthCoordFrameTime;
                        //Debug.Log("DepthCamColorFrameTime: " + lastDepthCamColorFrameTime);
                    }
                }

                // color2depth frame
                if (colorCamDepthDataFrame != null)
                {
                    lock (colorCamDepthFrameLock)
                    {
                        TransformDepthFrameToColorCamResolution(sensorData, colorCamDepthDataFrame);

                        lastColorCamDepthFrameTime = lastDepthCoordFrameTime;
                        //Debug.Log("ColorCamDepthFrameTime: " + lastColorCamDepthFrameTime);
                    }
                }

                // color2infrared frame
                if (colorCamInfraredDataFrame != null)
                {
                    lock (colorCamInfraredFrameLock)
                    {
                        TransformInfraredFrameToColorCamResolution(sensorData, colorCamInfraredDataFrame);

                        lastColorCamInfraredFrameTime = lastDepthCoordFrameTime;
                        //Debug.Log("ColorCamInfraredFrameTime: " + lastColorCamInfraredFrameTime);
                    }
                }
            }
        }


        // transforms the color frame to depth-camera resolution
        protected bool TransformColorFrameToDepthCamResolution(KinectInterop.SensorData sensorData, byte[] c2dColorFrame)
        {
            if (rawDepthImage != null && rawColorImage != null && sensorData.depthCamIntr != null && sensorData.colorCamIntr != null && sensorData.depth2ColorExtr != null)
            {
                int depthImageW = sensorData.depthImageWidth;
                int depthImageH = sensorData.depthImageHeight;

                int colorImageW = sensorData.colorImageWidth;
                int colorImageS = sensorData.colorImageStride;

                int mapImageLen = depthImageW * depthImageH * colorImageS;
                if (c2dColorFrame == null || c2dColorFrame.Length != mapImageLen)
                {
                    throw new Exception("d2cColorFrame is not big enough. Should be " + mapImageLen + " bytes.");
                }

                for (int dy = 0, dIndex = 0, d2cIndex = 0; dy < depthImageH; dy++)
                {
                    for (int dx = 0; dx < depthImageW; dx++, dIndex++, d2cIndex += colorImageS)
                    {
                        ushort depthVal = rawDepthImage[dIndex];

                        if (depthVal != 0)
                        {
                            Vector2 depthPos = new Vector2(dx, dy);

                            Vector3 depthSpacePos = UnprojectPoint(sensorData.depthCamIntr, depthPos, (float)depthVal / 1000f);
                            Vector3 colorSpacePos = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos);
                            Vector2 colorFramePos = ProjectPoint(sensorData.colorCamIntr, colorSpacePos);

                            int cIndex = ((int)colorFramePos.x + (int)colorFramePos.y * colorImageW) * colorImageS;

                            if (cIndex >= 0 && (cIndex + colorImageS - 1) < rawColorImage.Length)
                            {
                                c2dColorFrame[d2cIndex] = rawColorImage[cIndex];
                                c2dColorFrame[d2cIndex + 1] = rawColorImage[cIndex + 1];
                                c2dColorFrame[d2cIndex + 2] = rawColorImage[cIndex + 2];
                                //c2dColorFrame[d2cIndex + 3] = 255;
                            }
                        }
                        else
                        {
                            c2dColorFrame[d2cIndex] = 0;
                            c2dColorFrame[d2cIndex + 1] = 0;
                            c2dColorFrame[d2cIndex + 2] = 0;
                            //c2dColorFrame[d2cIndex + 3] = 0;
                        }
                    }
                }

                return true;
            }

            return false;
        }


        // transforms the depth frame to color-camera resolution
        protected bool TransformDepthFrameToColorCamResolution(KinectInterop.SensorData sensorData, ushort[] d2cDepthFrame)
        {
            if (rawDepthImage != null && rawColorImage != null && sensorData.depthCamIntr != null && sensorData.colorCamIntr != null && sensorData.depth2ColorExtr != null)
            {
                int depthImageW = sensorData.depthImageWidth;
                int depthImageH = sensorData.depthImageHeight;

                int colorImageW = sensorData.colorImageWidth;
                int colorImageH = sensorData.colorImageHeight;

                int mapImageLen = sensorData.colorImageWidth * sensorData.colorImageHeight;
                if (d2cDepthFrame == null || d2cDepthFrame.Length != mapImageLen)
                {
                    throw new Exception("d2cDepthFrame is not big enough. Should be " + mapImageLen + " ushorts.");
                }

                //Intrinsics depthIntr = depthStreamProfile.GetIntrinsics();
                //Intrinsics colorIntr = colorStreamProfile.GetIntrinsics();
                //Extrinsics d2cExtr = depthStreamProfile.GetExtrinsicsTo(colorStreamProfile);

                for (int dy = 0, dIndex = 0; dy < depthImageH; dy++)
                {
                    for (int dx = 0; dx < depthImageW; dx++, dIndex++)
                    {
                        ushort depthVal = rawDepthImage[dIndex];

                        if (depthVal != 0)
                        {
                            float depth = (float)depthVal * 0.001f;

                            Vector2 depthPos1 = new Vector2(dx - 0.5f, dy - 0.5f);
                            Vector3 depthSpacePos1 = UnprojectPoint(sensorData.depthCamIntr, depthPos1, depth);
                            Vector3 colorSpacePos1 = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos1);
                            Vector2 colorPos1 = ProjectPoint(sensorData.colorCamIntr, colorSpacePos1);

                            int colorPos1X = Mathf.RoundToInt(colorPos1.x);
                            int colorPos1Y = Mathf.RoundToInt(colorPos1.y);

                            Vector2 depthPos2 = new Vector2(dx + 0.5f, dy + 0.5f);
                            Vector3 depthSpacePos2 = UnprojectPoint(sensorData.depthCamIntr, depthPos2, depth);
                            Vector3 colorSpacePos2 = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos2);
                            Vector2 colorPos2 = ProjectPoint(sensorData.colorCamIntr, colorSpacePos2);

                            int colorPos2X = Mathf.RoundToInt(colorPos2.x);
                            int colorPos2Y = Mathf.RoundToInt(colorPos2.y);

                            if (colorPos1X < 0 || colorPos1Y < 0 || colorPos2X >= colorImageW || colorPos2Y >= colorImageH)
                                continue;

                            for (int y = colorPos1Y; y <= colorPos2Y; y++)
                            {
                                int cIndex = y * colorImageW + colorPos1X;

                                for (int x = colorPos1X; x <= colorPos2X; x++, cIndex++)
                                {
                                    d2cDepthFrame[cIndex] = depthVal;
                                }
                            }
                        }
                        else
                        {
                            //d2cDepthFrame[cIndex] = 0;
                        }
                    }
                }

                return true;
            }

            return false;
        }


        // transforms the infrared frame to color-camera resolution
        protected bool TransformInfraredFrameToColorCamResolution(KinectInterop.SensorData sensorData, ushort[] d2cInfraredFrame)
        {
            if (rawDepthImage != null && rawColorImage != null && rawInfraredImage != null &&
                sensorData.depthCamIntr != null && sensorData.colorCamIntr != null && sensorData.depth2ColorExtr != null)
            {
                int depthImageW = sensorData.depthImageWidth;
                int depthImageH = sensorData.depthImageHeight;

                int colorImageW = sensorData.colorImageWidth;
                int colorImageH = sensorData.colorImageHeight;

                int mapImageLen = sensorData.colorImageWidth * sensorData.colorImageHeight;
                if (d2cInfraredFrame == null || d2cInfraredFrame.Length != mapImageLen)
                {
                    throw new Exception("d2cInfraredFrame is not big enough. Should be " + mapImageLen + " ushorts.");
                }

                for (int dy = 0, dIndex = 0; dy < depthImageH; dy++)
                {
                    for (int dx = 0; dx < depthImageW; dx++, dIndex++)
                    {
                        ushort depthVal = rawDepthImage[dIndex];

                        if (depthVal != 0)
                        {
                            float depth = (float)depthVal * 0.001f;

                            Vector2 depthPos1 = new Vector2(dx - 0.5f, dy - 0.5f);
                            Vector3 depthSpacePos1 = UnprojectPoint(sensorData.depthCamIntr, depthPos1, depth);
                            Vector3 colorSpacePos1 = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos1);
                            Vector2 colorPos1 = ProjectPoint(sensorData.colorCamIntr, colorSpacePos1);

                            int colorPos1X = Mathf.RoundToInt(colorPos1.x);
                            int colorPos1Y = Mathf.RoundToInt(colorPos1.y);

                            Vector2 depthPos2 = new Vector2(dx + 0.5f, dy + 0.5f);
                            Vector3 depthSpacePos2 = UnprojectPoint(sensorData.depthCamIntr, depthPos2, depth);
                            Vector3 colorSpacePos2 = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos2);
                            Vector2 colorPos2 = ProjectPoint(sensorData.colorCamIntr, colorSpacePos2);

                            int colorPos2X = Mathf.RoundToInt(colorPos2.x);
                            int colorPos2Y = Mathf.RoundToInt(colorPos2.y);

                            if (colorPos1X < 0 || colorPos1Y < 0 || colorPos2X >= colorImageW || colorPos2Y >= colorImageH)
                                continue;

                            ushort irValue = rawInfraredImage[dIndex];
                            //ushort irValue = sensorData.infraredImage[dIndex];
                            for (int y = colorPos1Y; y <= colorPos2Y; y++)
                            {
                                int cIndex = y * colorImageW + colorPos1X;

                                for (int x = colorPos1X; x <= colorPos2X; x++, cIndex++)
                                {
                                    d2cInfraredFrame[cIndex] = irValue;
                                }
                            }
                        }
                        else
                        {
                            //d2cInfraredFrame[cIndex] = 0;
                        }
                    }
                }

                return true;
            }

            return false;
        }

    }
}

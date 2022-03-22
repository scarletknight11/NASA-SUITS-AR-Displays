using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Azure.Kinect.Sensor;
using System;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// Kinect4AzureInterface is sensor-interface to the Azure Kinect sensors.
    /// </summary>
    public class Kinect4AzureInterface : DepthSensorBase
    {
        // body tracking sdk's tools folder - used to copy the needed libraries and files.
        // TODO - please change the path below, if the BT-SDK tools-folder in your case is different 
        internal const string BODY_TRACKING_TOOLS_FOLDER = "C:/Program Files/Azure Kinect Body Tracking SDK/tools";

        // body tracking model file name - lite or full model
        internal const string BODY_TRACKING_FULL_MODEL_FILE = "dnn_model_2_0_op11.onnx";
        internal const string BODY_TRACKING_LITE_MODEL_FILE = "dnn_model_2_0_lite_op11.onnx";


        [Tooltip("Color camera resolution.")]
        public ColorCameraMode colorCameraMode = ColorCameraMode._1920_x_1080_30Fps;
        public enum ColorCameraMode : int { _1280_x_720_30Fps = 1, _1920_x_1080_30Fps = 2, _2560_x_1440_30Fps = 3, _2048_x_1536_30Fps = 4, _3840_x_2160_30Fps = 5, _4096_x_3072_15Fps = 6 }

        [Tooltip("Depth camera mode.")]
        public DepthCameraMode depthCameraMode = DepthCameraMode._640_x_576_30Fps_3_86mNfov;
        public enum DepthCameraMode : int { _320_x_288_30Fps_5_46mNfov = 1, _640_x_576_30Fps_3_86mNfov = 2, _512_x_512_30Fps_2_88mWfov = 3, _1024x1024_15Fps_2_21mWfov = 4, PassiveIR_30Fps = 5 }

        [Tooltip("Camera frames per second.")]
        public CameraFPS cameraFPS = CameraFPS._30_FPS;
        public enum CameraFPS : int { _5_FPS = 0, _15_FPS = 1, _30_FPS = 2 }

        [Tooltip("Device sync mode, in case of multiple wired sensors.")]
        public WiredSyncMode deviceSyncMode = WiredSyncMode.Standalone;

        [Tooltip("Subordinate device delay off master (in usec), in case of multiple wired sensors.")]
        public int subDeviceDelayUsec = 0;

        [Tooltip("Whether to flip the IMU rotation.")]
        private bool flipImuRotation = false;

        [Tooltip("Temporal smoothing used by the Azure Kinect Body Tracking SDK.")]
        [Range(0f, 1f)]
        public float bodyTemporalSmoothing = 0f;

        [Tooltip("Playback position in seconds.")]
        [Range(-1f, 30f)]
        public float playbackPosSeconds = -1f;

        [Tooltip("Whether to loop the playback, when end of recording is reached.")]
        public bool loopPlayback = false;

        [Tooltip("Sensor orientation hint to the Body Tracking SDK.")]
        public k4abt_sensor_orientation_t bodyTrackingSensorOrientation = k4abt_sensor_orientation_t.K4ABT_SENSOR_ORIENTATION_DEFAULT;

        [Tooltip("Processing mode to be used by the Body Tracking SDK.")]
        public k4abt_tracker_processing_mode_t bodyTrackingProcessingMode = k4abt_tracker_processing_mode_t.K4ABT_TRACKER_PROCESSING_MODE_GPU_CUDA;

        [Tooltip("Model type (full or lite), to be used by the Body Tracking SDK.")]
        public BodyTrackingModelType bodyTrackingModelType = BodyTrackingModelType.FullModel;
        public enum BodyTrackingModelType : int { FullModel = 0, LiteModel = 1 }

        [Tooltip("Whether to try to detect the floor plane, to estimate the sensor position and rotation.")]
        public bool detectFloorForPoseEstimation = true;


        // references to the sensor
        public Device kinectSensor = null;
        //public Calibration coordMapper;  // moved to DepthSensorBase
        //public Transformation coordMapperTransform = null;  // moved to DepthSensorBase
        private Image d2cColorData = null;
        private Image c2dDepthData = null;

        private Image c2dInfraredData = null;
        private Image c2IrDepthImage = null;
        private Image c2IrCustomImage = null;

        // buffered captures
        private const int BUF_CAPTURES_SIZE = 10;
        private Capture[] bufCaptures = new Capture[BUF_CAPTURES_SIZE];
        //private long[] bufCapTimes = new long[BUF_CAPTURES_SIZE];

        // current sensor capture
        private Capture sensorCapture = null;
        private object sensorCaptureLock = new object();
        private bool isSensorMaster = true;
        private long lastPlayTime = 0;

        // master camera depth frame time
        private static Kinect4AzureSyncher sensorSyncher = null;
        private int syncSensorIndex = -1;

        // master-sub delay & start offset
        private long expSensorDelay = 0;
        private long startTimeOffset = 0;

        // playback and record
        public Playback kinectPlayback = null;
        private long playbackStartTime = 0;

        // status of the cameras
        private bool isCamerasStarted = false;
        private bool isImuStarted = false;

        // current frame number
        //private ulong currentFrameNumber = 0;
        private TimeSpan timeToWait = TimeSpan.Zero;

        // imu
        private ImuSample lastImuSample = null;
        private ImuSample curImuSample = null;

        private AHRS.MahonyAHRS imuAhrs = null;
        private Quaternion imuTurnRot1 = Quaternion.identity;
        private Quaternion imuTurnRot2 = Quaternion.identity;
        //private bool lastFlipImuRot = false;

        private Quaternion imuRotation = Quaternion.identity;
        private float prevRotZ = 0f;
        private float[] prevQuat = new float[4];

        private Vector3 imuYawAtStart = Vector3.zero;
        private Quaternion imuFixAtStart = Quaternion.identity;
        private bool imuYawAtStartSet = false;

        // TODO: to be removed later
        //public event Action<ImuSample, ulong, ulong> OnImuSample;

        // reference to the floor detector
        public KinectFloorDetector floorDetector = null;

        // body tracker
        private BodyTracking bodyTracker = null;
        private k4abt_skeleton_t bodySkeletonData;
        private int btQueueCount = 0;
        private int btQueueWaitTime = 0;
        private ulong btQueueTime = 0;

        private System.Threading.Thread bodyTrackerThread = null;
        private System.Threading.AutoResetEvent bodyTrackerStopEvent = null;
        //private Capture bodyInputCapture = null;
        private Capture bodyOutputCapture = null;
        private object bodyCaptureLock = new object();

        protected float leftHandFingerAngle = 0f;
        protected float rightHandFingerAngle = 0f;
        protected ulong lastHandStatesTimestamp = 0;

        // coord mapper transformation & BI image
        public Calibration coordMapperCalib;
        public Transformation coordMapperTransform = null;
        private Image c2BtDepthImage = null, c2BodyIndexImage = null;
        private Image bodyIndexImage = null;

        // internal body frame data
        private K4abtFrameData btFrameData;
        // last temporal smoothing
        private float lastTemporalSmoothing = 0f;


        // depth sensor settings
        [System.Serializable]
        public class K4ASensorSettings : DepthSensorBase.BaseSensorSettings
        {
            public int colorCameraMode;
            public int depthCameraMode;
            public int cameraFPS = 2;  // by-default value
            public int deviceSyncMode;
            public int subDeviceDelayUsec;
            public bool flipImuRotation;
            public float bodyTemporalSmoothing = 0f;  // by-default value
            public float playbackPosSeconds;
            public bool loopPlayback;
            public int bodyTrackingSensorOrientation = (int)k4abt_sensor_orientation_t.K4ABT_SENSOR_ORIENTATION_DEFAULT;  // by-default value
            public int bodyTrackingProcessingMode = (int)k4abt_tracker_processing_mode_t.K4ABT_TRACKER_PROCESSING_MODE_GPU_CUDA;  // by-default value
            public bool detectFloorForPoseEstimation = true;  // by-default value
        }


        public override KinectInterop.DepthSensorPlatform GetSensorPlatform()
        {
            return KinectInterop.DepthSensorPlatform.Kinect4Azure;
        }


        public override System.Type GetSensorSettingsType()
        {
            return typeof(K4ASensorSettings);
        }


        public override BaseSensorSettings GetSensorSettings(BaseSensorSettings settings)
        {
            if(settings == null)
            {
                settings = new K4ASensorSettings();
            }

            K4ASensorSettings extSettings = (K4ASensorSettings)base.GetSensorSettings(settings);

            extSettings.colorCameraMode = (int)colorCameraMode;
            extSettings.depthCameraMode = (int)depthCameraMode;
            extSettings.cameraFPS = (int)cameraFPS;
            extSettings.deviceSyncMode = (int)deviceSyncMode;
            extSettings.subDeviceDelayUsec = subDeviceDelayUsec;
            extSettings.flipImuRotation = flipImuRotation;
            extSettings.bodyTemporalSmoothing = bodyTemporalSmoothing;
            extSettings.playbackPosSeconds = playbackPosSeconds;
            extSettings.loopPlayback = loopPlayback;
            extSettings.bodyTrackingSensorOrientation = (int)bodyTrackingSensorOrientation;
            extSettings.bodyTrackingProcessingMode = (int)bodyTrackingProcessingMode;
            extSettings.detectFloorForPoseEstimation = detectFloorForPoseEstimation;

            return settings;
        }

        public override void SetSensorSettings(BaseSensorSettings settings)
        {
            if (settings == null)
                return;

            base.SetSensorSettings(settings);

            K4ASensorSettings extSettings = (K4ASensorSettings)settings;
            colorCameraMode = (ColorCameraMode)extSettings.colorCameraMode;
            depthCameraMode = (DepthCameraMode)extSettings.depthCameraMode;
            cameraFPS = (CameraFPS)extSettings.cameraFPS;
            deviceSyncMode = (WiredSyncMode)extSettings.deviceSyncMode;

            subDeviceDelayUsec = extSettings.subDeviceDelayUsec;
            flipImuRotation = extSettings.flipImuRotation;
            bodyTemporalSmoothing = extSettings.bodyTemporalSmoothing;
            playbackPosSeconds = extSettings.playbackPosSeconds;
            loopPlayback = extSettings.loopPlayback;

            bodyTrackingSensorOrientation = (k4abt_sensor_orientation_t)extSettings.bodyTrackingSensorOrientation;
            bodyTrackingProcessingMode = (k4abt_tracker_processing_mode_t)extSettings.bodyTrackingProcessingMode;
            detectFloorForPoseEstimation = extSettings.detectFloorForPoseEstimation;
        }

        public override List<KinectInterop.SensorDeviceInfo> GetAvailableSensors()
        {
            List<KinectInterop.SensorDeviceInfo> alSensorInfo = new List<KinectInterop.SensorDeviceInfo>();

            int deviceCount = Device.GetInstalledCount();
            for (int i = 0; i < deviceCount; i++)
            {
                KinectInterop.SensorDeviceInfo sensorInfo = new KinectInterop.SensorDeviceInfo();
                sensorInfo.sensorId = i.ToString();
                sensorInfo.sensorName = "Kinect4Azure";

                sensorInfo.sensorCaps = KinectInterop.FrameSource.TypeAll;

                if (consoleLogMessages)
                    Debug.Log(string.Format("  D{0}: {1}, id: {2}", i, sensorInfo.sensorName, sensorInfo.sensorId));

                alSensorInfo.Add(sensorInfo);
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

            // try to open the sensor or play back the recording
            KinectInterop.SensorData sensorData = new KinectInterop.SensorData();

            string sensorName = "Kinect4Azure";
            KinectInterop.FrameSource sensorCaps = KinectInterop.FrameSource.TypeAll;

            if (deviceStreamingMode == KinectInterop.DeviceStreamingMode.PlayRecording)
            {
                if (string.IsNullOrEmpty(recordingFile))
                {
                    Debug.LogError("Playback selected, but the path to recording file is missing.");
                    return null;
                }

                if (!System.IO.File.Exists(recordingFile))
                {
                    Debug.LogError("PlayRecording selected, but the recording file cannot be found: " + recordingFile);
                    return null;
                }

                if (consoleLogMessages)
                    Debug.Log("Playing back: " + recordingFile);
                kinectPlayback = new Playback(recordingFile);

                sensorPlatform = KinectInterop.DepthSensorPlatform.Kinect4Azure;
                sensorDeviceId = KinectInterop.GetFileName(recordingFile, false); // deviceIndex.ToString();
                //Debug.Log("D" + deviceIndex + " ID: " + sensorDeviceId);

                colorCameraMode = (ColorCameraMode)kinectPlayback.playback_config.color_resolution;
                depthCameraMode = (DepthCameraMode)kinectPlayback.playback_config.depth_mode;
                cameraFPS = (CameraFPS)kinectPlayback.playback_config.camera_fps;
                deviceSyncMode = kinectPlayback.playback_config.wired_sync_mode;

                coordMapperCalib = kinectPlayback.playback_calibration;
                playbackStartTime = 0;

                // expected master-slave delay & start offset
                expSensorDelay = (kinectPlayback.playback_config.subordinate_delay_off_master_usec + kinectPlayback.playback_config.depth_delay_off_color_usec) * 10;  // us->ticks
                startTimeOffset = kinectPlayback.playback_config.start_timestamp_offset_usec * 10;
                //Debug.Log("D" + deviceIndex + " SensorDelay: " + expSensorDelay + ", StartTimeOfs: " + startTimeOffset);

                //Debug.Log(string.Format("color_track_enabled: {0}, depth_track_enabled: {1}, ir_track_enabled: {2}, imu_track_enabled: {3}, depth_delay_off_color_usec: {4}",
                //    kinectPlayback.playback_config.color_track_enabled, kinectPlayback.playback_config.depth_track_enabled,
                //    kinectPlayback.playback_config.ir_track_enabled, kinectPlayback.playback_config.imu_track_enabled,
                //    kinectPlayback.playback_config.depth_delay_off_color_usec));
            }
            else
            {
                List<KinectInterop.SensorDeviceInfo> alSensors = GetAvailableSensors();
                if (deviceIndex >= alSensors.Count)
                {
                    Debug.LogError("  D" + deviceIndex + " is not available. You can set the device index to -1, to disable it.");
                    return null;
                }

                kinectSensor = Device.Open(deviceIndex);
                if (kinectSensor == null)
                {
                    Debug.LogError("  D" + deviceIndex + " cannot be opened.");
                    return null;
                }

                // try to open the sensor
                sensorPlatform = KinectInterop.DepthSensorPlatform.Kinect4Azure;
                sensorDeviceId = kinectSensor.SerialNum;
                //Debug.Log("D" + deviceIndex + " ID: " + sensorDeviceId);

                sensorName = alSensors[deviceIndex].sensorName;
                sensorCaps = alSensors[deviceIndex].sensorCaps;

                if (deviceSyncMode == WiredSyncMode.Master && (dwFlags & KinectInterop.FrameSource.TypeColor) == 0)
                {
                    // fix by Andreas Pedroni - master requires color camera on
                    dwFlags |= KinectInterop.FrameSource.TypeColor;
                }

                DeviceConfiguration kinectConfig = new DeviceConfiguration();
                kinectConfig.SynchronizedImagesOnly = isSyncDepthAndColor;
                kinectConfig.WiredSyncMode = deviceSyncMode;
                kinectConfig.SuboridinateDelayOffMaster = new TimeSpan(subDeviceDelayUsec * 10);

                // color
                kinectConfig.ColorFormat = ImageFormat.ColorBGRA32;
                if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0)
                {
                    kinectConfig.ColorResolution = (ColorResolution)colorCameraMode;
                }
                else
                {
                    kinectConfig.ColorResolution = ColorResolution.Off;
                }

                // depth
                if ((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
                {
                    kinectConfig.DepthMode = (DepthMode)depthCameraMode;
                }
                else
                {
                    kinectConfig.DepthMode = DepthMode.Off;
                }

                // fps
                if ((colorCameraMode == ColorCameraMode._4096_x_3072_15Fps || depthCameraMode == DepthCameraMode._1024x1024_15Fps_2_21mWfov) &&
                    (cameraFPS == CameraFPS._30_FPS))
                {
                    cameraFPS = CameraFPS._15_FPS;
                    kinectConfig.CameraFPS = FPS.FPS15;
                }
                else
                {
                    kinectConfig.CameraFPS = (FPS)cameraFPS;
                }

                // infrared
                if ((dwFlags & KinectInterop.FrameSource.TypeInfrared) != 0)
                {
                    if(kinectConfig.DepthMode == DepthMode.Off)
                    {
                        kinectConfig.DepthMode = DepthMode.PassiveIR;
                        depthCameraMode = DepthCameraMode.PassiveIR_30Fps;
                    }
                }

                // check for at least one frame type
                if((dwFlags & KinectInterop.FrameSource.TypeColor) != 0 || 
                    (dwFlags & KinectInterop.FrameSource.TypeDepth) != 0 || 
                    (dwFlags & KinectInterop.FrameSource.TypeInfrared) != 0)
                {
                    // start the cameras
                    kinectSensor.StartCameras(kinectConfig);
                    isCamerasStarted = true;
                }
                else
                {
                    Debug.LogWarning("Sensor cameras are not started, because color, depth & IR frames are all disabled.");
                }

                if ((dwFlags & KinectInterop.FrameSource.TypePose) != 0)
                {
                    // start the IMU
                    kinectSensor.StartImu();
                    isImuStarted = true;

                    // create floor detector, if needed
                    if(detectFloorForPoseEstimation)
                    {
                        floorDetector = new KinectFloorDetector();
                    }
                }

                // get reference to the coordinate mapper
                if(isCamerasStarted)
                {
                    coordMapperCalib = kinectSensor.GetCalibration();
                }

                // expected master-slave delay
                expSensorDelay = kinectConfig.SuboridinateDelayOffMaster.Ticks + kinectConfig.DepthDelayOffColor.Ticks;
            }

            // reset the frame number
            //currentFrameNumber = 0;

            sensorData.sensorIntPlatform = sensorPlatform;
            sensorData.startTimeOffset = startTimeOffset;

            sensorData.sensorId = sensorDeviceId;
            sensorData.sensorName = sensorName;
            sensorData.sensorCaps = sensorCaps;

            // flip color & depth image horizontally and vertically
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

            if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0)
            {
                CameraCalibration colorCamera = coordMapperCalib.ColorCameraCalibration;
                sensorData.colorImageWidth = colorCamera.ResolutionWidth;
                sensorData.colorImageHeight = colorCamera.ResolutionHeight;

                //rawColorImage = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight * 4];

                sensorData.colorImageTexture = new Texture2D(sensorData.colorImageWidth, sensorData.colorImageHeight, TextureFormat.BGRA32, false);
                sensorData.colorImageTexture.wrapMode = TextureWrapMode.Clamp;
                sensorData.colorImageTexture.filterMode = FilterMode.Point;
            }

            // depth camera data & intrinsics
            if ((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
            {
                CameraCalibration depthCamera = coordMapperCalib.DepthCameraCalibration;
                sensorData.depthImageWidth = depthCamera.ResolutionWidth;
                sensorData.depthImageHeight = depthCamera.ResolutionHeight;

                //rawDepthImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];
                sensorData.depthImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];
            }

            // infrared data
            if ((dwFlags & KinectInterop.FrameSource.TypeInfrared) != 0)
            {
                if (sensorData.depthImageWidth == 0 || sensorData.depthImageHeight == 0)
                {
                    CameraCalibration depthCamera = coordMapperCalib.DepthCameraCalibration;
                    sensorData.depthImageWidth = depthCamera.ResolutionWidth;
                    sensorData.depthImageHeight = depthCamera.ResolutionHeight;
                }

                //rawInfraredImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];
                sensorData.infraredImage = new ushort[sensorData.depthImageWidth * sensorData.depthImageHeight];

                minInfraredValue = 0f;
                maxInfraredValue = 1000f;
            }

            // imu data
            if (kinectPlayback != null || (dwFlags & KinectInterop.FrameSource.TypePose) != 0)
            {
                imuAhrs = new AHRS.MahonyAHRS(0.0006f, 5f);  // 600us

                imuTurnRot1 = Quaternion.Euler(0f, 90f, 90f);
                imuTurnRot2 = Quaternion.Euler(90f, !flipImuRotation ? 90f : -90f, 0f);
                //lastFlipImuRot = flipImuRotation;
            }

            // calibration data
            if (isCamerasStarted || kinectPlayback != null)
            {
                GetCameraIntrinsics(CalibrationDeviceType.Color, coordMapperCalib.ColorCameraCalibration, ref sensorData.colorCamIntr);
                GetCameraIntrinsics(CalibrationDeviceType.Depth, coordMapperCalib.DepthCameraCalibration, ref sensorData.depthCamIntr);
                GetCameraExtrinsics(coordMapperCalib.ColorCameraCalibration.Extrinsics, ref sensorData.depth2ColorExtr);
                GetCameraExtrinsics(coordMapperCalib.DepthCameraCalibration.Extrinsics, ref sensorData.color2DepthExtr);

                float[] r = sensorData.depth2ColorExtr.rotation;
                float[] t = sensorData.depth2ColorExtr.translation;

                depth2colorCamMat = new Matrix4x4(new Vector4(r[0], r[3], r[6], 0), new Vector4(r[1], r[4], r[7], 0), new Vector4(r[2], r[5], r[8], 0), new Vector4(t[0] * 0.001f, t[1] * 0.001f, t[2] * 0.001f, 1));
                //Debug.Log("Depth2colorCamMat Pos: " + ((Vector3)depth2colorCamMat.GetColumn(3) * 100f) + ", Rot: " + depth2colorCamMat.rotation.eulerAngles);

                //sensorData.sensorInterface = this;
                //KinectInterop.SaveSensorIntrExtr(sensorData);
            }

            // body & body-index data
            if ((dwFlags & (KinectInterop.FrameSource.TypeBody | KinectInterop.FrameSource.TypeBodyIndex)) != 0)
            {
                InitBodyTracking(dwFlags, sensorData, coordMapperCalib, true);

                if(isSyncBodyAndDepth && bodyTracker == null)
                {
                    // don't sync body and depth if the body tracker can't be created
                    isSyncBodyAndDepth = false;
                }
            }

            // don't get all frames
            getAllSensorFrames = false;

            // check if this sensor is master or subordinate
            isSensorMaster = deviceSyncMode != WiredSyncMode.Subordinate;

            // init the floor detector, if needed
            if (floorDetector != null)
            {
                floorDetector.InitFloorDetector(this, sensorData, MAX_DEPTH_DISTANCE_MM);
                floorDetector.minFloorPointCount = 1024;
            }

            if (consoleLogMessages)
                Debug.Log("D" + deviceIndex + " Kinect4Azure-sensor opened: " + sensorDeviceId);

            return sensorData;
        }


        public override void CloseSensor(KinectInterop.SensorData sensorData)
        {
            base.CloseSensor(sensorData);

            if (sensorCapture != null)
            {
                sensorCapture.Dispose();
                sensorCapture = null;
            }

            if (d2cColorData != null)
            {
                d2cColorData.Dispose();
                d2cColorData = null;
            }

            if (c2dDepthData != null)
            {
                c2dDepthData.Dispose();
                c2dDepthData = null;
            }

            if (c2dInfraredData != null)
            {
                c2dInfraredData.Dispose();
                c2dInfraredData = null;
            }

            if(c2IrDepthImage != null)
            {
                c2IrDepthImage.Dispose();
                c2IrDepthImage = null;
            }

            if (c2IrCustomImage != null)
            {
                c2IrCustomImage.Dispose();
                c2IrCustomImage = null;
            }

            if (coordMapperTransform != null)
            {
                // dispose coord-mapper transform
                coordMapperTransform.Dispose();
                coordMapperTransform = null;
            }

            if(kinectPlayback != null)
            {
                // close the playback file
                kinectPlayback.Dispose();
                kinectPlayback = null;
            }

            if(sensorSyncher != null)
            {
                sensorSyncher.StopSyncher();
                sensorSyncher = null;
            }

            if (kinectSensor != null)
            {
                // stop cameras, if needed
                if(isCamerasStarted)
                {
                    isCamerasStarted = false;
                    kinectSensor.StopCameras();
                }

                // stop IMU, if needed
                if(isImuStarted)
                {
                    isImuStarted = false;
                    kinectSensor.StopImu();
                }

                // close the sensor
                kinectSensor.Dispose();
                kinectSensor = null;
            }

            // finish the floor detector, if needed
            if (floorDetector != null)
            {
                floorDetector.FinishFloorDetector();
                floorDetector = null;
            }

            if (consoleLogMessages)
                Debug.Log("D" + deviceIndex + " Kinect4Azure-sensor closed: " + sensorDeviceId);
        }


        public override float GetBodyTrackerOrientationAngle()
        {
            if(bodyTracker != null)
            {
                return bodyTracker.GetSensorOrientationAngle();
            }

            return 0f;
        }


        public override void EnablePoseStream(KinectInterop.SensorData sensorData, bool bEnable)
        {
            base.EnablePoseStream(sensorData, bEnable);

            if((frameSourceFlags & KinectInterop.FrameSource.TypePose) != 0)
            {
                if(kinectSensor != null)
                {
                    // start the IMU
                    if(!isImuStarted)
                    {
                        kinectSensor.StartImu();
                        isImuStarted = true;
                    }

                    // create floor detector, if needed
                    if (detectFloorForPoseEstimation && floorDetector == null)
                    {
                        floorDetector = new KinectFloorDetector();
                        floorDetector.InitFloorDetector(this, sensorData, MAX_DEPTH_DISTANCE_MM);
                        floorDetector.minFloorPointCount = 1024;
                    }
                }
            }
            else
            {
                if(kinectSensor != null)
                {
                    // stop IMU, if needed
                    if (isImuStarted)
                    {
                        isImuStarted = false;
                        kinectSensor.StopImu();
                    }

                    // finish the floor detector, if needed
                    if (floorDetector != null)
                    {
                        floorDetector.FinishFloorDetector();
                        floorDetector = null;
                    }
                }
            }
        }


        public override bool EnableSensorSync(KinectInterop.SensorData sensorData, bool bEnable)
        {
            if(bEnable)
            {
                // start master-sub frame syncher
                if (deviceSyncMode != WiredSyncMode.Standalone)
                {
                    if (sensorSyncher == null)
                    {
                        sensorSyncher = new Kinect4AzureSyncher();
                    }

                    syncSensorIndex = sensorSyncher.StartSyncherForSensor(this, sensorData, deviceSyncMode == WiredSyncMode.Master, expSensorDelay);
                }

                return (syncSensorIndex >= 0);
            }
            else
            {
                // stop master-sub frame syncher
                bool bHasSyncher = (sensorSyncher != null);

                if (bHasSyncher)
                {
                    sensorSyncher.StopSyncher();
                    sensorSyncher = null;
                    syncSensorIndex = -1;
                }

                return bHasSyncher;
            }
        }

        public override bool IsSensorMaster()
        {
            if (sensorSyncher != null && syncSensorIndex >= 0)
            {
                return (sensorSyncher.GetMasterIndex() == syncSensorIndex);
            }

            return false;
        }

        public override bool IsSensorFrameSynched(ulong frameTime, ulong masterTime)
        {
            if(sensorSyncher != null && syncSensorIndex >= 0)
            {
                return sensorSyncher.IsSensorFrameSynched(syncSensorIndex, frameTime, masterTime);
            }

            return false;
        }


        public override bool UpdateSensorData(KinectInterop.SensorData sensorData, KinectManager kinectManager, bool isPlayMode)
        {
            lock (sensorCaptureLock)
            {
                if (sensorCapture != null)
                {
                    // color frame
                    if (sensorCapture.Color != null && sensorData.lastColorFrameTime != currentColorTimestamp && !isPlayMode)
                    {
                        //lock (colorFrameLock)
                        {
                            Texture2D colorImageTex2D = sensorData.colorImageTexture as Texture2D;
                            if (colorImageTex2D != null)
                            {
                                colorImageTex2D.LoadRawTextureData(sensorCapture.Color.GetBuffer(), (int)sensorCapture.Color.Size);
                                colorImageTex2D.Apply();
                            }

                            sensorData.lastColorFrameTime = currentColorTimestamp;
                            //Debug.Log("D" + deviceIndex + " UpdateColorTimestamp: " + currentColorTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                        }
                    }

                    // depth frame
                    if (sensorCapture.Depth != null && sensorData.lastDepthFrameTime != currentDepthTimestamp && !isPlayMode)
                    {
                        //lock (depthFrameLock)
                        {
                            // depth image
                            if (sensorData.depthImage != null)
                            {
                                //KinectInterop.CopyBytes(rawDepthImage, sizeof(ushort), sensorData.depthImage, sizeof(ushort));
                                KinectInterop.CopyBytes(sensorCapture.Depth.GetBuffer(), (int)sensorCapture.Depth.Size, sensorData.depthImage, sensorData.depthImage.Length, sizeof(ushort));
                            }

                            sensorData.lastDepthFrameTime = currentDepthTimestamp;
                            //Debug.Log("D" + deviceIndex + " UpdateDepthTimestamp: " + currentDepthTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                        }
                    }

                    // infrared frame
                    if (sensorCapture.IR != null && sensorData.lastInfraredFrameTime != currentInfraredTimestamp && !isPlayMode)
                    {
                        //lock (infraredFrameLock)
                        {
                            if (sensorData.infraredImage != null)
                            {
                                //KinectInterop.CopyBytes(rawInfraredImage, sizeof(ushort), sensorData.infraredImage, sizeof(ushort));
                                KinectInterop.CopyBytes(sensorCapture.IR.GetBuffer(), (int)sensorCapture.IR.Size, sensorData.infraredImage, sensorData.infraredImage.Length, sizeof(ushort));
                            }

                            sensorData.lastInfraredFrameTime = currentInfraredTimestamp;
                            //Debug.Log("D" + deviceIndex + " UpdateInfraredTimestamp: " + currentDepthTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                        }
                    }
                }
            }

            // body index frame
            if (sensorData.lastBodyIndexFrameTime != currentBodyIndexTimestamp)
            {
                lock (bodyTrackerLock)
                {
                    // body index image
                    if (bodyIndexImage != null && sensorData.bodyIndexImage != null)
                    {
                        KinectInterop.CopyBytes(bodyIndexImage.GetBuffer(), (int)bodyIndexImage.Size, sensorData.bodyIndexImage, sensorData.bodyIndexImage.Length, sizeof(byte));
                    }

                    sensorData.lastBodyIndexFrameTime = currentBodyIndexTimestamp;
                    //Debug.Log("D" + deviceIndex + " UpdateBodyIndexTimestamp: " + currentBodyIndexTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                }
            }

            // update the floor detector, if needed
            if (detectFloorForPoseEstimation && floorDetector != null)
            {
                if(floorDetector.UpdateFloorDetector(sensorData.depthImage, sensorData.lastDepthFrameTime, ref depthFrameLock, minDepthDistance, maxDepthDistance))
                {
                    lock (poseFrameLock)
                    {
                        Vector3 vSensorPosition = floorDetector.GetSensorPosition();
                        Quaternion qSensorRotation = floorDetector.GetSensorRotation();

                        if (sensorRotFlipZ)
                        {
                            Vector3 vSensorRotEuler = qSensorRotation.eulerAngles;
                            vSensorRotEuler.z = -vSensorRotEuler.z;
                            qSensorRotation = Quaternion.Euler(vSensorRotEuler);
                        }

                        rawPosePosition = vSensorPosition - initialPosePosition;
                        rawPoseRotation = Quaternion.Euler(-sensorRotOffset) * qSensorRotation;

                        currentPoseTimestamp = floorDetector.GetDepthTimestamp();
                    }
                }
            }

            // upate the body temporal smoothing, if needed
            if(bodyTracker != null && lastTemporalSmoothing != bodyTemporalSmoothing)
            {
                lastTemporalSmoothing = bodyTemporalSmoothing;
                bodyTracker.SetTemporalSmoothing(bodyTemporalSmoothing);
                //Debug.Log("BodyTemporalSmoothing: " + bodyTemporalSmoothing);
            }

            bool bSuccess = base.UpdateSensorData(sensorData, kinectManager, isPlayMode);

            return bSuccess;
        }


        // creates the point-cloud color shader and its respective buffers, as needed
        protected override bool CreatePointCloudColorShader(KinectInterop.SensorData sensorData)
        {
            pointCloudColorRes = GetPointCloudTexResolution(sensorData);

            if (pointCloudResolution == PointCloudResolution.DepthCameraResolution)
            {
                if (pointCloudAlignedColorTex == null)
                {
                    pointCloudAlignedColorTex = new Texture2D(sensorData.depthImageWidth, sensorData.depthImageHeight, sensorData.colorImageFormat, false);
                }
            }

            return true;
        }

        // updates the point-cloud color shader with the actual data
        protected override bool UpdatePointCloudColorShader(KinectInterop.SensorData sensorData)
        {
            if (pointCloudResolution == PointCloudResolution.DepthCameraResolution)
            {
                if (pointCloudAlignedColorTex != null && d2cColorData != null && sensorData.lastDepthCamColorFrameTime != lastDepthCamColorFrameTime)
                {
                    lock (sensorCaptureLock)
                    {
                        sensorData.lastDepthCamColorFrameTime = lastDepthCamColorFrameTime;

                        pointCloudAlignedColorTex.LoadRawTextureData(d2cColorData.GetBuffer(), (int)d2cColorData.Size);
                        pointCloudAlignedColorTex.Apply();

                        if (sensorData.depthCamColorImageTexture != null)
                        {
                            Graphics.CopyTexture(pointCloudAlignedColorTex, sensorData.depthCamColorImageTexture);
                        }
                    }

                    if (pointCloudColorRT != null)
                    {
                        Graphics.CopyTexture(pointCloudAlignedColorTex, pointCloudColorRT);
                    }

                    if (pointCloudColorTexture != null)
                    {
                        Graphics.Blit(pointCloudAlignedColorTex, pointCloudColorTexture);  // CopyTexture
                    }

                    return true;
                }
            }
            else
            {
                return base.UpdatePointCloudColorShader(sensorData);
            }

            return false;
        }

        // creates the point-cloud vertex shader and its respective buffers, as needed
        protected override bool CreatePointCloudVertexShader(KinectInterop.SensorData sensorData)
        {
            bool bResult = base.CreatePointCloudVertexShader(sensorData);
            
            // don't use colorCamDepthDataFrame
            colorCamDepthDataFrame = null;

            return bResult;
        }

        // updates the point-cloud vertex shader with the actual data
        protected override bool UpdatePointCloudVertexShader(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if (pointCloudVertexShader != null && pointCloudVertexRT != null && 
                (sensorData.lastDepth2SpaceFrameTime != lastColorCamDepthFrameTime))
            {
                if (pointCloudResolution == PointCloudResolution.ColorCameraResolution)
                {
                    if (c2dDepthData != null)
                    {
                        lock (sensorCaptureLock)
                        {
                            KinectInterop.SetComputeBufferData(pointCloudDepthBuffer, c2dDepthData.GetBuffer(), (int)c2dDepthData.Size, sizeof(byte));
                        }
                    }

                    //sensorData.lastDepth2SpaceFrameTime = lastColorCamDepthFrameTime;   // updated in DepthSensorBase below
                    //Debug.Log("LastColorCamDepthFrameTime: " + lastColorCamDepthFrameTime);
                }
            }

            return base.UpdatePointCloudVertexShader(sensorData, kinectManager);
        }

        // creates the color-depth shader and its respective buffers, as needed
        protected override bool CreateColorDepthShader(KinectInterop.SensorData sensorData)
        {
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
            if (c2dDepthData != null)
            {
                if (/**sensorData.usedColorDepthBufferTime == sensorData.lastColorDepthBufferTime && */
                    sensorData.lastColorDepthBufferTime != lastColorCamDepthFrameTime)
                {
                    lock (sensorCaptureLock)
                    {
                        sensorData.lastColorDepthBufferTime = lastColorCamDepthFrameTime;

                        if (sensorData.colorImageTexture != null)
                        {
                            Graphics.Blit(sensorData.colorImageTexture, sensorData.colorDepthTexture);
                        }

                        if (sensorData.colorDepthBuffer != null)
                        {
                            KinectInterop.SetComputeBufferData(sensorData.colorDepthBuffer, c2dDepthData.GetBuffer(), (int)c2dDepthData.Size, sizeof(byte));
                        }

                        if (sensorData.colorCamDepthImage != null)
                        {
                            KinectInterop.CopyBytes(c2dDepthData.GetBuffer(), (int)c2dDepthData.Size, sensorData.colorCamDepthImage, sensorData.colorCamDepthImage.Length, sizeof(ushort));
                            sensorData.lastColorCamDepthFrameTime = lastColorCamDepthFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }

        // enables or disables color camera depth frame processing
        public override void EnableColorCameraDepthFrame(KinectInterop.SensorData sensorData, bool isEnable)
        {
            if (isEnable && colorCamDepthDataFrame == null)
            {
                sensorData.colorCamDepthImage = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }
            else if (!isEnable && colorCamDepthDataFrame != null)
            {
                sensorData.colorCamDepthImage = null;
            }
        }

        // creates the color-infrared shader and its respective buffers, as needed
        protected override bool CreateColorInfraredShader(KinectInterop.SensorData sensorData)
        {
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
            if (c2dInfraredData != null)
            {
                if (/**sensorData.usedColorInfraredBufferTime == sensorData.lastColorInfraredBufferTime && */
                    sensorData.lastColorInfraredBufferTime != lastColorCamInfraredFrameTime)
                {
                    lock (sensorCaptureLock)
                    {
                        sensorData.lastColorInfraredBufferTime = lastColorCamInfraredFrameTime;

                        //if (sensorData.colorImageTexture != null)
                        //{
                        //    Graphics.Blit(sensorData.colorImageTexture, sensorData.colorInfraredTexture);
                        //}

                        if (sensorData.colorInfraredBuffer != null)
                        {
                            KinectInterop.SetComputeBufferData(sensorData.colorInfraredBuffer, c2dInfraredData.GetBuffer(), (int)c2dInfraredData.Size, sizeof(byte));
                        }

                        if (sensorData.colorCamInfraredImage != null)
                        {
                            KinectInterop.CopyBytes(c2dInfraredData.GetBuffer(), (int)c2dInfraredData.Size, sensorData.colorCamInfraredImage, sensorData.colorCamInfraredImage.Length, sizeof(ushort));
                            sensorData.lastColorCamInfraredFrameTime = lastColorCamInfraredFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }

        // enables or disables color camera infrared frame processing
        public override void EnableColorCameraInfraredFrame(KinectInterop.SensorData sensorData, bool isEnableRawData, bool isEnableTexture)
        {
            if (isEnableRawData && sensorData.colorCamInfraredImage == null)
            {
                sensorData.colorCamInfraredImage = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }
            else if (!isEnableRawData && sensorData.colorCamInfraredImage != null)
            {
                sensorData.colorCamInfraredImage = null;
            }

            if (isEnableTexture && sensorData.colorInfraredBuffer == null)
            {
                if (sensorData.colorImageWidth > 0 && sensorData.colorImageHeight > 0)
                {
                    int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight / 2;
                    sensorData.colorInfraredBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
                }
            }
            else if (!isEnableTexture && sensorData.colorInfraredBuffer != null)
            {
                sensorData.colorInfraredBuffer.Release();
                sensorData.colorInfraredBuffer.Dispose();
                sensorData.colorInfraredBuffer = null;
            }
        }

        // creates the color-camera body index shader and its respective buffers, as needed
        protected override bool CreateColorBodyIndexShader(KinectInterop.SensorData sensorData)
        {
            if (sensorData.colorBodyIndexTexture == null)
            {
                sensorData.colorBodyIndexTexture = new RenderTexture(sensorData.colorImageWidth, sensorData.colorImageHeight, 0, RenderTextureFormat.ARGB32);
                //sensorData.colorBodyIndexTexture.enableRandomWrite = true;
                sensorData.colorBodyIndexTexture.Create();
            }

            colorBodyIndexShaderInited = true;

            return true;
        }

        // updates the color-camera body index shader with the actual data
        protected override bool UpdateColorBodyIndexShader(KinectInterop.SensorData sensorData)
        {
            if (c2BodyIndexImage != null)
            {
                if (/**sensorData.usedColorBodyIndexBufferTime == sensorData.lastColorBodyIndexBufferTime && */
                    sensorData.lastColorBodyIndexBufferTime != lastColorCamBodyIndexFrameTime)
                {
                    lock (bodyTrackerLock)
                    {
                        sensorData.lastColorBodyIndexBufferTime = lastColorCamBodyIndexFrameTime;

                        if (sensorData.colorImageTexture != null)
                        {
                            Graphics.Blit(sensorData.colorImageTexture, sensorData.colorBodyIndexTexture);
                        }

                        if (sensorData.colorBodyIndexBuffer != null)
                        {
                            KinectInterop.SetComputeBufferData(sensorData.colorBodyIndexBuffer, c2BodyIndexImage.GetBuffer(), (int)c2BodyIndexImage.Size, sizeof(byte));
                        }

                        if (sensorData.colorCamBodyIndexImage != null)
                        {
                            KinectInterop.CopyBytes(c2BodyIndexImage.GetBuffer(), (int)c2BodyIndexImage.Size, sensorData.colorCamBodyIndexImage, sensorData.colorCamBodyIndexImage.Length, sizeof(byte));
                            sensorData.lastColorCamBodyIndexFrameTime = lastColorCamBodyIndexFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }

        // enables or disables color camera body-index frame processing
        public override void EnableColorCameraBodyIndexFrame(KinectInterop.SensorData sensorData, bool isEnable)
        {
            if (isEnable && colorCamBodyIndexFrame == null)
            {
                sensorData.colorCamBodyIndexImage = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }
            else if (!isEnable && colorCamBodyIndexFrame != null)
            {
                sensorData.colorCamBodyIndexImage = null;
            }
        }


        public override void PollSensorFrames(KinectInterop.SensorData sensorData)
        {
            try
            {
                if (kinectPlayback != null)
                {
                    if (kinectPlayback.IsEndOfStream() && !loopPlayback && playbackPosSeconds < 0f)
                        return;

                    if(playbackStartTime == 0)
                    {
                        // start time
                        playbackStartTime = DateTime.Now.Ticks;
                    }

                    long currentPlayTime = isSensorMaster || syncSensorIndex < 0 || sensorSyncher == null ? 
                        (playbackPosSeconds < 0f ? (DateTime.Now.Ticks - playbackStartTime) :
                        (long)(playbackPosSeconds * 10000000)) : sensorSyncher.GetMasterPlayTime();  // for sub - get master time

                    if (sensorSyncher != null && syncSensorIndex >= 0)
                    {
                        // subs sync to master time
                        if (isSensorMaster)
                        {
                            sensorSyncher.SetMasterPlayTime(currentPlayTime);  // master capture
                        }
                        else if (currentPlayTime == lastPlayTime)
                        {
                            //Debug.Log("D" + deviceIndex + " Ignoring sub playTime: " + currentPlayTime + ", minTime: " + GetMinSensorFrameTime());
                            return;  // don't process again the same sub capture
                        }
                    }

                    lastPlayTime = currentPlayTime;
                    //Debug.Log("D" + deviceIndex + " PlayTime: " + currentPlayTime + ", isMaster: " + isSensorMaster);

                    if ((frameSourceFlags & (KinectInterop.FrameSource)0x7F) != 0)
                    {
                        kinectPlayback.SeekTimestamp((ulong)(currentPlayTime / 10));
                        Capture capture = kinectPlayback.GetNextCapture();

                        //Debug.Log("D" + deviceIndex + " playTime: " + currentPlayTime + ", startTime: " + startTimeOffset + ", recTime: " + (currentPlayTime + startTimeOffset));

                        if (capture != null)
                        {
                            //long capTimeStamp = capture.Depth != null ? capture.Depth.DeviceTimestamp.Ticks :
                            //    capture.Color != null ? capture.Color.DeviceTimestamp.Ticks : 0;
                            //Debug.Log("D" + deviceIndex + " Got capture. Timestamp: " + capTimeStamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                            ProcessCameraFrames(sensorData, capture);
                            //capture.Dispose();

                            //currentFrameNumber++;
                        }
                        else
                        {
                            if (consoleLogMessages)
                                Debug.Log("End of recording reached: " + recordingFile);

                            if(loopPlayback)
                            {
                                if (consoleLogMessages)
                                    Debug.Log("Looping playback...");
                                playbackStartTime = DateTime.Now.Ticks;
                            }
                        }

                    }

                    //if ((frameSourceFlags & KinectInterop.FrameSource.TypePose) != 0)
                    //{
                    //    ImuSample imuSample = kinectPlayback.GetNextImuSample();

                    //    while (imuSample != null)
                    //    {
                    //        ProcessImuFrame(imuSample);

                    //        ulong imuTimestamp = (ulong)imuSample.AccelerometerTimestamp.Ticks;
                    //        if (kinectPlayback.IsEndOfStream() || imuTimestamp >= rawDepthTimestamp)
                    //            break;

                    //        imuSample = kinectPlayback.GetNextImuSample();
                    //    }
                    //}
                }
                else
                {
                    if (isCamerasStarted)
                    {
                        int ci = 0;
                        for (ci = 0; ci < BUF_CAPTURES_SIZE; ci++)
                        {
                            Capture cap = kinectSensor.GetCapture(timeToWait);
                            if (cap == null)
                                break;

                            bufCaptures[ci] = cap;
                            //bufCapTimes[ci] = cap.Depth != null ? cap.Depth.DeviceTimestamp.Ticks :
                            //    cap.Color != null ? cap.Color.DeviceTimestamp.Ticks : 0;
                        }

                        int bufCaptureLen = ci;
                        if (bufCaptureLen > 0)
                        {
                            if (sensorSyncher != null && syncSensorIndex >= 0)  // check for synched device
                            {
                                // process all captures
                                for (ci = 0; ci < bufCaptureLen; ci++)
                                {
                                    //long capTimeStamp = bufCaptures[ci].Depth != null ? bufCaptures[ci].Depth.DeviceTimestamp.Ticks :
                                    //    bufCaptures[ci].Color != null ? bufCaptures[ci].Color.DeviceTimestamp.Ticks : 0;
                                    //Debug.Log("D" + deviceIndex + " Got capture. Timestamp: " + capTimeStamp + ", CapIndex: " + ci + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                                    ProcessCameraFrames(sensorData, bufCaptures[ci]);
                                }
                            }
                            else
                            {
                                // process the last capture only
                                int lastCapIndex = bufCaptureLen - 1;
                                for (ci = 0; ci < lastCapIndex; ci++)
                                {
                                    //Debug.LogWarning("D" + deviceIndex + " Disposing capture. Timestamp: " + bufCapTimes[ci] + ", CapIndex: " + ci);
                                    bufCaptures[ci].Dispose();
                                }

                                //long capTimeStamp = bufCaptures[lastCapIndex].Depth != null ? bufCaptures[lastCapIndex].Depth.DeviceTimestamp.Ticks :
                                //        bufCaptures[lastCapIndex].Color != null ? bufCaptures[lastCapIndex].Color.DeviceTimestamp.Ticks : 0;
                                //Debug.Log("D" + deviceIndex + " Got capture. Timestamp: " + capTimeStamp + ", CapIndex: " + lastCapIndex + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                                ProcessCameraFrames(sensorData, bufCaptures[lastCapIndex]);
                            }
                        }

                        //Capture capture = kinectSensor.GetCapture(timeToWait);
                        //int maxCaptures = 3;

                        //while (capture != null)
                        //{
                        //    long capTimestamp = capture.Depth != null ? capture.Depth.DeviceTimestamp.Ticks :
                        //        capture.Color != null ? capture.Color.DeviceTimestamp.Ticks : 0;
                        //    Debug.Log("D" + deviceIndex + " Got capture. Timestamp: " + capTimestamp + ", CapCount: " + maxCaptures + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                        //    // check if there is other capture in the queue
                        //    Capture nextCapture = null; // kinectSensor.GetCapture(timeToWait);  // 

                        //    if (nextCapture == null || (sensorSyncher != null && syncSensorIndex >= 0))
                        //    {
                        //        ProcessCameraFrames(sensorData, capture);
                        //        //capture.Dispose();
                        //    }
                        //    else
                        //    {
                        //        capTimestamp = capture.Depth != null ? capture.Depth.DeviceTimestamp.Ticks :
                        //            capture.Color != null ? capture.Color.DeviceTimestamp.Ticks : 0;
                        //        Debug.LogWarning("D" + deviceIndex + " Disposing capture. Timestamp: " + capTimestamp);

                        //        capture.Dispose();
                        //    }

                        //    // don't allow endless loop
                        //    if (--maxCaptures <= 0)
                        //        break;

                        //    capture = kinectSensor.GetCapture(timeToWait); // nextCapture;  // 
                        //    //currentFrameNumber++;
                        //}
                    }

                    if (isImuStarted)
                    {
                        ImuSample imuSample = kinectSensor.GetImuSample(timeToWait);

                        while(imuSample != null)
                        {
                            ProcessImuFrame(imuSample);
                            imuSample = kinectSensor.GetImuSample(timeToWait);
                        }
                    }
                }
            }
            catch (System.TimeoutException)
            {
                // do nothing
            }
            catch (System.Exception ex)
            {
                Debug.LogException(ex);
            }
        }


        // processes the camera frames
        private void ProcessCameraFrames(KinectInterop.SensorData sensorData, Capture capture)
        {
            Capture btCapture = null;

            if (bodyTracker != null)
            {
                // check for synched capture
                if (sensorSyncher != null && syncSensorIndex >= 0 && capture != null && capture.Depth != null)
                {
                    //Debug.Log("D" + deviceIndex + " Syncher-UpdatePushBtCapture. Timestamp: " + capture.Depth.DeviceTimestamp.Ticks + ", startTime: " + startTimeOffset + ", diff: " + (capture.Depth.DeviceTimestamp.Ticks - startTimeOffset));
                    sensorSyncher.UpdatePushBtCapture(syncSensorIndex, capture.Depth.DeviceTimestamp.Ticks - startTimeOffset, capture);
                    return;
                }

                // check for available body frame capture
                btCapture = PollBodyFrame(sensorData, capture);

                if(isSyncBodyAndDepth)
                {
                    if(capture != null)
                    {
                        //long capTimestamp = capture.Depth != null ? capture.Depth.DeviceTimestamp.Ticks :
                        //    capture.Color != null ? capture.Color.DeviceTimestamp.Ticks : 0;
                        //Debug.LogWarning("D" + deviceIndex + " Disposing non-bt capture. Timestamp: " + capTimestamp + ", BtCapTimestamp: " + (btCapture != null && btCapture.Depth != null ? btCapture.Depth.DeviceTimestamp.Ticks : 0));

                        capture.Dispose();
                        capture = null;
                    }

                    // process the body tracking capture
                    capture = btCapture;

                    //if (btCapture != null && btCapture.Depth != null)
                    //    Debug.Log("D" + deviceIndex + " PolledBtCapture, Timestamp: " + btCapture.Depth.DeviceTimestamp.Ticks);
                }
            }

            if (capture != null && (!isSyncBodyAndDepth || btCapture != null))
            {
                // check for synched capture
                if (sensorSyncher != null && syncSensorIndex >= 0)
                {
                    long capTimestamp = capture.Depth != null ? capture.Depth.DeviceTimestamp.Ticks :
                        capture.Color != null ? capture.Color.DeviceTimestamp.Ticks : 0;

                    //Debug.Log("D" + deviceIndex + " Syncher-UpdateCapture. Timestamp: " + capTimestamp);
                    sensorSyncher.UpdateCapture(syncSensorIndex, capTimestamp - startTimeOffset, capture);
                    return;
                }

                ProcessSensorCapture(sensorData, capture);
            }
            //else
            //{
            //    bool diffCaps = capture != null && btCapture != null && !capture.NativeEquals(btCapture);

            //    if(capture != null)
            //    {
            //        long capTimestamp = capture.Depth != null ? capture.Depth.DeviceTimestamp.Ticks :
            //            capture.Color != null ? capture.Color.DeviceTimestamp.Ticks : 0;

            //        Debug.LogError("D" + deviceIndex + " Leaking capture. Timestamp: " + capTimestamp);
            //    }

            //    if (btCapture != null && diffCaps)
            //    {
            //        long capTimestamp = btCapture.Depth != null ? btCapture.Depth.DeviceTimestamp.Ticks :
            //            btCapture.Color != null ? btCapture.Color.DeviceTimestamp.Ticks : 0;

            //        Debug.LogError("D" + deviceIndex + " Leaking bt-capture. Timestamp: " + capTimestamp);
            //    }
            //}

            if (btCapture != null)
            {
                // dispose body capture
                //btCapture.Dispose();
            }
        }

        // processes the bt-capture, if any
        public void ProcessBtSensorCapture(KinectInterop.SensorData sensorData)
        {
            Capture btCapture = PollBodyFrame(sensorData, null);
            ProcessSensorCapture(sensorData, btCapture);
        }

        // processes the given camera capture
        public void ProcessSensorCapture(KinectInterop.SensorData sensorData, Capture capture)
        {
            if (capture == null)
                return;

            lock (sensorCaptureLock)
            {
                // save the current capture
                if (sensorCapture != null)
                {
                    //long capTimestamp = sensorCapture.Depth != null ? sensorCapture.Depth.DeviceTimestamp.Ticks :
                    //    sensorCapture.Color != null ? sensorCapture.Color.DeviceTimestamp.Ticks : 0;
                    //Debug.LogWarning("D" + deviceIndex + " Disposing sensor capture. Timestamp: " + capTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                    sensorCapture.Dispose();
                    sensorCapture = null;
                }

                if (capture != null)
                {
                    sensorCapture = capture;
                }

                // depth frame time
                ulong depthFrameTime = isSyncDepthAndColor && capture.Depth != null ? (ulong)capture.Depth.DeviceTimestamp.Ticks : 0;

                // depth frame
                if (capture.Depth != null && (frameSourceFlags & KinectInterop.FrameSource.TypeDepth) != 0 && /**rawDepthImage != null &&*/
                    (getAllSensorFrames || rawDepthTimestamp == sensorData.lastDepthFrameTime))
                {
                    //lock (depthFrameLock)
                    {
                        //KinectInterop.CopyBytes(capture.Depth.GetBuffer(), (int)capture.Depth.Size, rawDepthImage, rawDepthImage.Length, sizeof(ushort));
                        rawDepthTimestamp = (ulong)capture.Depth.DeviceTimestamp.Ticks;
                        //Debug.Log("D" + deviceIndex + " RawDepthTimestamp: " + rawDepthTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                    }
                }

                // color frame
                if (capture.Color != null && (frameSourceFlags & KinectInterop.FrameSource.TypeColor) != 0 && /**rawColorImage != null &&*/
                    (getAllSensorFrames || rawColorTimestamp == sensorData.lastColorFrameTime))
                {
                    //lock (colorFrameLock)
                    {
                        //KinectInterop.CopyBytes(capture.Color.GetBuffer(), (int)capture.Color.Size, rawColorImage, rawColorImage.Length, sizeof(byte));
                        rawColorTimestamp = depthFrameTime != 0 ? depthFrameTime : (ulong)capture.Color.DeviceTimestamp.Ticks;
                        //Debug.Log("D" + deviceIndex + " RawColorTimestamp: " + rawColorTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                    }
                }

                // infrared frame
                if (capture.IR != null && (frameSourceFlags & KinectInterop.FrameSource.TypeInfrared) != 0 && /**rawInfraredImage != null &&*/
                    (getAllSensorFrames || rawInfraredTimestamp == sensorData.lastInfraredFrameTime))
                {
                    //lock (infraredFrameLock)
                    {
                        //KinectInterop.CopyBytes(capture.IR.GetBuffer(), (int)capture.IR.Size, rawInfraredImage, rawInfraredImage.Length, sizeof(ushort));
                        rawInfraredTimestamp = depthFrameTime != 0 ? depthFrameTime : (ulong)capture.IR.DeviceTimestamp.Ticks;
                        //Debug.Log("D" + deviceIndex + " RawInfraredTimestamp: " + rawInfraredTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                    }
                }

                // transformation data frames
                ulong depthFrameTime2 = depthFrameTime != 0 ? depthFrameTime : capture.Depth != null ? (ulong)capture.Depth.DeviceTimestamp.Ticks : 0;
                ProcessTransformedFrames(sensorData, capture, depthFrameTime2);

                //if ((pointCloudAlignedColorTex != null || pointCloudDepthBuffer != null || sensorData.colorDepthBuffer != null || 
                //    sensorData.colorCamDepthImage != null || sensorData.colorInfraredBuffer != null || sensorData.colorCamInfraredImage != null) &&
                //    capture.Color != null && capture.Depth != null && (!isSyncDepthAndColor || (rawColorTimestamp == rawDepthTimestamp)))
                //{
                //    if (coordMapperTransform == null)
                //    {
                //        coordMapperTransform = coordMapperCalib.CreateTransformation();
                //    }

                //    //ulong depthFrameDeviceTimestamp = (ulong)capture.Depth.DeviceTimestamp.Ticks;
                //    if (pointCloudAlignedColorTex != null && lastDepthCamColorFrameTime != rawDepthTimestamp)
                //    {
                //        if (d2cColorData == null)
                //        {
                //            d2cColorData = new Image(ImageFormat.ColorBGRA32, sensorData.depthImageWidth, sensorData.depthImageHeight, sensorData.depthImageWidth * sensorData.colorImageStride);
                //        }

                //        //lock (depthCamColorFrameLock)
                //        {
                //            coordMapperTransform.ColorImageToDepthCamera(capture.Depth, capture.Color, d2cColorData);
                //            //d2cColorData.CopyTo<byte>(depthCamColorDataFrame, 0, 0, depthCamColorDataFrame.Length);
                //            lastDepthCamColorFrameTime = rawDepthTimestamp;
                //            //Debug.Log("D" + deviceIndex + " DepthCamColorFrameTime: " + lastDepthCamColorFrameTime + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                //        }
                //    }

                //    if ((pointCloudDepthBuffer != null || sensorData.colorDepthBuffer != null || sensorData.colorCamDepthImage != null) && 
                //        lastColorCamDepthFrameTime != rawDepthTimestamp)
                //    {
                //        if (c2dDepthData == null)
                //        {
                //            c2dDepthData = new Image(ImageFormat.Depth16, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(ushort));
                //        }

                //        //lock (colorCamDepthFrameLock)
                //        {
                //            coordMapperTransform.DepthImageToColorCamera(capture.Depth, c2dDepthData);
                //            //c2dDepthData.CopyTo<ushort>(colorCamDepthDataFrame, 0, 0, colorCamDepthDataFrame.Length);
                //            lastColorCamDepthFrameTime = rawDepthTimestamp;
                //            //Debug.Log("D" + deviceIndex + " ColorCamDepthFrameTime: " + lastColorCamDepthFrameTime + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                //        }
                //    }

                //    if ((sensorData.colorInfraredBuffer != null || sensorData.colorCamInfraredImage != null) && capture.IR != null &&
                //        lastColorCamInfraredFrameTime != rawDepthTimestamp)
                //    {
                //        if (c2IrDepthImage == null)
                //        {
                //            c2IrDepthImage = new Image(ImageFormat.Depth16, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(ushort));
                //        }

                //        if (c2IrCustomImage == null)
                //        {
                //            c2IrCustomImage = new Image(ImageFormat.Custom16, capture.IR.WidthPixels, capture.IR.HeightPixels, capture.IR.StrideBytes);
                //        }

                //        if (c2dInfraredData == null)
                //        {
                //            c2dInfraredData = new Image(ImageFormat.Custom16, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(ushort));
                //        }

                //        //lock (colorCamDepthFrameLock)
                //        {
                //            int iIrImageLen = capture.IR.StrideBytes * capture.IR.HeightPixels;
                //            c2IrCustomImage.CopyBytesFrom(capture.IR.GetBuffer(), iIrImageLen, iIrImageLen);

                //            coordMapperTransform.DepthImageToColorCameraCustom(capture.Depth, c2IrCustomImage, c2IrDepthImage, c2dInfraredData, TransformationInterpolationType.Nearest, 0);
                //            lastColorCamInfraredFrameTime = rawDepthTimestamp;
                //            //Debug.Log("D" + deviceIndex + " ColorCamInfraredFrameTime: " + lastColorCamInfraredFrameTime + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                //        }
                //    }
                //}
            }

        }


        // creates the transformed sensor frames, if needed
        private void ProcessTransformedFrames(KinectInterop.SensorData sensorData, Capture capture, ulong depthFrameTime)
        {
            if ((pointCloudAlignedColorTex != null || pointCloudDepthBuffer != null || sensorData.colorDepthBuffer != null ||
                sensorData.colorCamDepthImage != null || sensorData.colorInfraredBuffer != null || sensorData.colorCamInfraredImage != null) &&
                capture != null && capture.Color != null && capture.Depth != null && 
                (!isSyncDepthAndColor || (rawColorTimestamp == depthFrameTime && rawDepthTimestamp == depthFrameTime)))
            {
                if (coordMapperTransform == null)
                {
                    coordMapperTransform = coordMapperCalib.CreateTransformation();
                }

                //ulong depthFrameDeviceTimestamp = (ulong)capture.Depth.DeviceTimestamp.Ticks;
                if (pointCloudAlignedColorTex != null && lastDepthCamColorFrameTime != rawDepthTimestamp)
                {
                    if (d2cColorData == null)
                    {
                        d2cColorData = new Image(ImageFormat.ColorBGRA32, sensorData.depthImageWidth, sensorData.depthImageHeight, sensorData.depthImageWidth * sensorData.colorImageStride);
                    }

                    //lock (depthCamColorFrameLock)
                    {
                        coordMapperTransform.ColorImageToDepthCamera(capture.Depth, capture.Color, d2cColorData);
                        //d2cColorData.CopyTo<byte>(depthCamColorDataFrame, 0, 0, depthCamColorDataFrame.Length);
                        lastDepthCamColorFrameTime = rawDepthTimestamp;
                        //Debug.Log("D" + deviceIndex + " DepthCamColorFrameTime: " + lastDepthCamColorFrameTime + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                    }
                }

                if (((pointCloudDepthBuffer != null && pointCloudResolution == PointCloudResolution.ColorCameraResolution) || 
                    sensorData.colorDepthBuffer != null || sensorData.colorCamDepthImage != null) &&
                    lastColorCamDepthFrameTime != rawDepthTimestamp)
                {
                    if (c2dDepthData == null)
                    {
                        c2dDepthData = new Image(ImageFormat.Depth16, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(ushort));
                    }

                    //lock (colorCamDepthFrameLock)
                    {
                        coordMapperTransform.DepthImageToColorCamera(capture.Depth, c2dDepthData);
                        //c2dDepthData.CopyTo<ushort>(colorCamDepthDataFrame, 0, 0, colorCamDepthDataFrame.Length);
                        lastColorCamDepthFrameTime = rawDepthTimestamp;
                        //Debug.Log("D" + deviceIndex + " ColorCamDepthFrameTime: " + lastColorCamDepthFrameTime + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                    }
                }

                if ((sensorData.colorInfraredBuffer != null || sensorData.colorCamInfraredImage != null) && capture.IR != null &&
                    lastColorCamInfraredFrameTime != rawDepthTimestamp)
                {
                    if (c2IrDepthImage == null)
                    {
                        c2IrDepthImage = new Image(ImageFormat.Depth16, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(ushort));
                    }

                    if (c2IrCustomImage == null)
                    {
                        c2IrCustomImage = new Image(ImageFormat.Custom16, capture.IR.WidthPixels, capture.IR.HeightPixels, capture.IR.StrideBytes);
                    }

                    if (c2dInfraredData == null)
                    {
                        c2dInfraredData = new Image(ImageFormat.Custom16, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(ushort));
                    }

                    //lock (colorCamDepthFrameLock)
                    {
                        int iIrImageLen = capture.IR.StrideBytes * capture.IR.HeightPixels;
                        c2IrCustomImage.CopyBytesFrom(capture.IR.GetBuffer(), iIrImageLen, iIrImageLen);

                        coordMapperTransform.DepthImageToColorCameraCustom(capture.Depth, c2IrCustomImage, c2IrDepthImage, c2dInfraredData, TransformationInterpolationType.Nearest, 0);
                        lastColorCamInfraredFrameTime = rawDepthTimestamp;
                        //Debug.Log("D" + deviceIndex + " ColorCamInfraredFrameTime: " + lastColorCamInfraredFrameTime + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                    }
                }
            }

            // transformed body index frame
            //Debug.Log("  depthFrameTime: " + depthFrameTime + ", rawBodyIndexTimestamp: " + rawBodyIndexTimestamp + ", lastColorCamBodyIndexFrameTime: " + lastColorCamBodyIndexFrameTime);
            if ((sensorData.colorCamBodyIndexImage != null || sensorData.colorBodyIndexBuffer != null) &&
                capture != null && capture.Color != null && capture.Depth != null && bodyIndexImage != null &&
                (!isSyncBodyAndDepth || (rawBodyIndexTimestamp == depthFrameTime)) && (rawBodyIndexTimestamp != lastColorCamBodyIndexFrameTime))
            {
                if (coordMapperTransform == null)
                {
                    coordMapperTransform = coordMapperCalib.CreateTransformation();
                }

                if (c2BtDepthImage == null)
                {
                    c2BtDepthImage = new Image(ImageFormat.Depth16, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(ushort));
                }

                if (c2BodyIndexImage == null)
                {
                    c2BodyIndexImage = new Image(ImageFormat.Custom8, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(byte));
                }

                //lock (colorCamBodyIndexFrameLock)
                {
                    lock (bodyTrackerLock)
                    {
                        coordMapperTransform.DepthImageToColorCameraCustom(capture.Depth, bodyIndexImage, c2BtDepthImage, c2BodyIndexImage, TransformationInterpolationType.Linear, 255);
                        //c2BodyIndexImage.CopyTo<byte>(colorCamBodyIndexFrame, 0, 0, colorCamBodyIndexFrame.Length);
                        //System.IO.File.WriteAllBytes("ColorCamBodyIndexFrame.bin", colorCamBodyIndexFrame);
                        lastColorCamBodyIndexFrameTime = rawBodyIndexTimestamp;
                        //Debug.Log("D" + deviceIndex + " ColorCamBodyIndexFrameTime: " + lastColorCamBodyIndexFrameTime + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                    }
                }
            }

        }


        //// in playback mode - waits until the given time stamp
        //private void WaitForPlaybackTimestamp(string frameSource, long frameTimestamp)
        //{
        //    long currentPlayTime = DateTime.Now.Ticks - playbackStartTime;

        //    if (currentPlayTime < frameTimestamp)
        //    {
        //        Debug.Log("Waiting for " + frameSource + " timestamp " + frameTimestamp + ". Current play time is: " + currentPlayTime);
        //    }

        //    while (currentPlayTime < frameTimestamp)
        //    {
        //        currentPlayTime = DateTime.Now.Ticks - playbackStartTime;
        //    }
        //}

        // processes the IMU frame
        private void ProcessImuFrame(ImuSample imuSample)
        {
            if (kinectPlayback != null)
            {
                //WaitForPlaybackTimestamp("acc", imuSample.AccelerometerTimestampInUsec);
                //WaitForPlaybackTimestamp("gyro", imuSample.GyroTimestampInUsec);
            }

            lastImuSample = curImuSample;
            curImuSample = imuSample;

            if (!flipImuRotation && lastImuSample == null && Mathf.Abs(imuSample.AccelerometerSample.Y) >= 1f)
            {
                // check for rolled imu
                flipImuRotation = true;
                imuTurnRot2 = Quaternion.Euler(90f, -90f, 0f);
            }

            if (!detectFloorForPoseEstimation && lastImuSample != null && imuAhrs != null && 
                imuSample.AccelerometerTimestamp.Ticks != lastImuSample.AccelerometerTimestamp.Ticks)
            {
                prevRotZ = imuRotation.eulerAngles.z;
                Array.Copy(imuAhrs.Quaternion, prevQuat, prevQuat.Length);

                imuAhrs.SamplePeriod = ((imuSample.AccelerometerTimestamp.Ticks - lastImuSample.AccelerometerTimestamp.Ticks) / 10) * 0.000001f;
                imuAhrs.Update(imuSample.GyroSample.X, imuSample.GyroSample.Y, imuSample.GyroSample.Z, imuSample.AccelerometerSample.X, imuSample.AccelerometerSample.Y, imuSample.AccelerometerSample.Z);

                float[] ahrsQuat = imuAhrs.Quaternion;
                imuRotation = new Quaternion(ahrsQuat[1], ahrsQuat[2], ahrsQuat[3], ahrsQuat[0]);
                Quaternion transRotation = imuTurnRot2 * imuRotation * imuTurnRot1;

                if (imuAhrs.E2 < 0.0001f && Mathf.Abs(imuRotation.eulerAngles.z - prevRotZ) <= 0.1f)
                {
                    // correct the continuous yaw, when imu doesn't move
                    Array.Copy(prevQuat, imuAhrs.Quaternion, prevQuat.Length);

                    ahrsQuat = prevQuat;
                    imuRotation = new Quaternion(ahrsQuat[1], ahrsQuat[2], ahrsQuat[3], ahrsQuat[0]);
                    transRotation = imuTurnRot2 * imuRotation * imuTurnRot1;

                    if (!imuYawAtStartSet)
                    {
                        // initial yaw
                        imuYawAtStartSet = true;
                        imuYawAtStart = new Vector3(0f, transRotation.eulerAngles.y, 0f);
                        imuFixAtStart = Quaternion.Inverse(Quaternion.Euler(imuYawAtStart));
                    }
                }

                if (imuYawAtStartSet)
                {
                    // fix the initial yaw
                    transRotation = imuFixAtStart * transRotation;
                }

                lock (poseFrameLock)
                {
                    // rawPosePosition
                    rawPoseRotation = transRotation;
                    rawPoseRotation = Quaternion.Euler(6f, 0f, 0f) * rawPoseRotation;  // the depth camera is tilted 6 degrees down

                    rawPoseTimestamp = (ulong)imuSample.AccelerometerTimestamp.Ticks;
                    //poseFrameNumber = currentFrameNumber;
                }
            }

            //var onImuSample = OnImuSample;
            //if(onImuSample != null)
            //{
            //    onImuSample.Invoke(imuSample, rawDepthTimestamp, rawColorTimestamp);
            //}

            if (detectFloorForPoseEstimation && floorDetector != null)
            {
                // update imu up-vector
                System.Numerics.Vector3 accSample = imuSample.AccelerometerSample;
                Vector3 vAccSample = new Vector3(accSample.X, accSample.Y, accSample.Z);

                int iAccDepth = (int)CalibrationDeviceType.Accel * (int)CalibrationDeviceType.Num + (int)CalibrationDeviceType.Depth;
                float[] accDepthRot = coordMapperCalib.DeviceExtrinsics[iAccDepth].Rotation;

                Vector3 Rx = new Vector3(accDepthRot[0], accDepthRot[1], accDepthRot[2]);
                Vector3 Ry = new Vector3(accDepthRot[3], accDepthRot[4], accDepthRot[5]);
                Vector3 Rz = new Vector3(accDepthRot[6], accDepthRot[7], accDepthRot[8]);

                Vector3 imuUpVector = new Vector3(Vector3.Dot(Rx, vAccSample), Vector3.Dot(Ry, vAccSample), Vector3.Dot(Rz, vAccSample));
                //Debug.Log("accSample: " + vAccSample + ", upVector: " + imuUpVector);

                floorDetector.UpdateImuUpVector(imuUpVector);
            }
        }


        // initializes the body-data structures and starts the body tracking
        public bool InitBodyTracking(KinectInterop.FrameSource dwFlags, KinectInterop.SensorData sensorData, Calibration calibration, bool bCreateTracker)
        {
            try
            {
                if ((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)  // check for depth stream
                {
                    string bodyTrackingPath = BODY_TRACKING_TOOLS_FOLDER;
                    if (!string.IsNullOrEmpty(bodyTrackingPath) && bodyTrackingPath[bodyTrackingPath.Length - 1] != '/' && bodyTrackingPath[bodyTrackingPath.Length - 1] != '\\')
                    {
                        bodyTrackingPath += "/";
                    }

                    if (!string.IsNullOrEmpty(bodyTrackingPath) && !bodyTrackingPath.EndsWith("/tools/") && !bodyTrackingPath.EndsWith("\\tools\\") && !bodyTrackingPath.EndsWith("\\tools/"))
                    {
                        bodyTrackingPath += "tools/";
                    }

                    if (!KinectInterop.IsFolderExist(bodyTrackingPath))
                    {
                        Debug.LogWarning("BT-Folder not found: " + bodyTrackingPath);
                    }

                    // copy the needed libraries
                    //KinectInterop.CopyFolderFile(bodyTrackingPath, "cublas64_100.dll", ".");  // v1.0.1
                    //KinectInterop.CopyFolderFile(bodyTrackingPath, "cudart64_100.dll", ".");
                    //KinectInterop.CopyFolderFile(bodyTrackingPath, "cudnn64_7.dll", ".");

                    KinectInterop.CopyFolderFile(bodyTrackingPath, "cublas64_11.dll", ".");  // v1.1.0
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "cublasLt64_11.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "cudart64_110.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "cudnn_cnn_infer64_8.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "cudnn_ops_infer64_8.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "cudnn64_8.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "cufft64_10.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "directml.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "myelin64_1.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "nvinfer.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "nvinfer_plugin.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "nvrtc64_111_0.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "nvrtc-builtins64_111.dll", ".");

                    KinectInterop.CopyFolderFile(bodyTrackingPath, "onnxruntime.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "onnxruntime_providers_shared.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "onnxruntime_providers_tensorrt.dll", ".");
                    KinectInterop.CopyFolderFile(bodyTrackingPath, "vcomp140.dll", ".");

                    //KinectInterop.CopyFolderFile(bodyTrackingPath, "dnn_model_2_0.onnx", ".");
                    string bodyTrackingModelFile = BODY_TRACKING_FULL_MODEL_FILE;
                    if (bodyTrackingModelType == BodyTrackingModelType.LiteModel)
                        bodyTrackingModelFile = BODY_TRACKING_LITE_MODEL_FILE;
                    KinectInterop.CopyFolderFile(bodyTrackingPath, bodyTrackingModelFile, ".");

                    // init basic variables
                    base.InitBodyTracking(dwFlags, sensorData);
                    rawBodyIndexImage = null;  // don't use BI buffering

                    btQueueCount = 0;
                    btQueueWaitTime = 0;  // MAX_BODY_QUEUE_LENGTH <= 1 ? 0 : -1;
                    //Debug.Log("MaxQueueLen: " + MAX_BODY_QUEUE_LENGTH  + ", WaitTime: " + btQueueWaitTime);

                    if (bCreateTracker)
                    {
                        k4abt_tracker_configuration_t btConfig = new k4abt_tracker_configuration_t();
                        btConfig.sensor_orientation = bodyTrackingSensorOrientation;
                        btConfig.processing_mode = bodyTrackingProcessingMode;  // k4abt_tracker_processing_mode_t.K4ABT_TRACKER_PROCESSING_MODE_GPU_CUDA;
                        btConfig.gpu_device_id = 0;  // 1st GPU
                        btConfig.model_path = bodyTrackingModelFile;
                        //Debug.Log("Loading BT model: " + bodyTrackingModelFile);

                        bodyTracker = new BodyTracking(calibration, btConfig);
                        bodyTracker.SetTemporalSmoothing(bodyTemporalSmoothing);  // 0f
                        //Debug.Log("BodyTemporalSmoothing: " + bodyTemporalSmoothing);

                        bodySkeletonData = bodyTracker.CreateBodySkeleton();
                        btFrameData = new K4abtFrameData(bodyTracker, 0);
                        //Debug.Log("Body tracker successfully started.");

                        // start body-tracker thread
                        bodyTrackerStopEvent = new System.Threading.AutoResetEvent(false);
                        bodyTrackerThread = new System.Threading.Thread(() => BodyTrackerThread(sensorData));
                        bodyTrackerThread.Name = "BT-" + GetType().Name + deviceIndex;
                        bodyTrackerThread.IsBackground = true;
                        bodyTrackerThread.Start();
                    }
                }
                else
                {
                    Debug.LogWarning("Body tracked not started! Please enable the depth stream, to allow tracking of the users.");
                }
            }
            catch (System.Exception ex)
            {
                Debug.LogError("Can't create body tracker for " + GetType().Name + deviceIndex + "!");
                Debug.LogException(ex);
            }

            return (bodyTracker != null);
        }


        // stops the body tracker and releases its data
        public override void StopBodyTracking(KinectInterop.SensorData sensorData)
        {
            if (bodyTrackerThread != null)
            {
                //Debug.Log("Stopping BT thread: " + bodyTrackerThread.Name);

                // stop the frame-polling thread
                bodyTrackerStopEvent.Set();
                bodyTrackerThread.Join();

                bodyTrackerThread = null;
                bodyTrackerStopEvent.Dispose();
                bodyTrackerStopEvent = null;

                //Debug.Log("BT thread stopped.");
            }

            if (bodyTracker != null)
            {
                // wait for all enqueued frames to pop
                int maxWaitTime = 5000;

                while (btQueueCount > 0 && maxWaitTime > 0)
                {
                    IntPtr bodyFrameHandle = bodyTracker.PollBodyFrame(1000);

                    if (bodyFrameHandle != IntPtr.Zero)
                    {
                        ulong bodyFrameTime = bodyTracker.GetBodyFrameTimestampUsec(bodyFrameHandle);

                        Image bodyIndexImage = bodyTracker.GetBodyIndexMap(bodyFrameHandle);
                        bodyIndexImage.Dispose();

                        Capture btCapture = bodyTracker.GetCapture(bodyFrameHandle);
                        btCapture.Dispose();

                        bodyTracker.ReleaseBodyFrame(bodyFrameHandle);
                        bodyFrameHandle = IntPtr.Zero;

                        lock (bodyCaptureLock)
                        {
                            btQueueCount--;
                        }

                        //Debug.Log("D" + deviceIndex + " PoppedBodyTimestamp: " + bodyFrameTime + ", QueueLen: " + btQueueCount);
                    }

                    maxWaitTime -= 1000;
                }

                if (btQueueCount > 0 && maxWaitTime <= 0)
                {
                    Debug.LogWarning("Timed out waiting to pop all BT-frames. QueueCount: " + btQueueCount);
                }

                bodyTracker.ShutdownBodyTracker();
                bodyTracker.Dispose();
                bodyTracker = null;

                lock (bodyCaptureLock)
                {
                    btQueueCount = 0;
                    btQueueWaitTime = 0;
                }

                //Debug.Log("Body tracker shut down.");
            }

            // dispose BI image
            bodyIndexImage?.Dispose();
            bodyIndexImage = null;

            // dispose transform images
            c2BtDepthImage?.Dispose();
            c2BtDepthImage = null;

            c2BodyIndexImage?.Dispose();
            c2BodyIndexImage = null;

            coordMapperTransform?.Dispose();
            coordMapperTransform = null;

            // invoke the base method
            base.StopBodyTracking(sensorData);
        }


        // polls for new body frame
        private Capture PollBodyFrame(KinectInterop.SensorData sensorData, Capture capture)
        {
            Capture bodyCapture = null;

            if (bodyOutputCapture != null)
            {
                lock (bodyCaptureLock)
                {
                    bodyCapture = bodyOutputCapture;
                    bodyOutputCapture = null;
                }

                //Debug.Log("D" + deviceIndex + " PollBodyCapture Time: " + bodyCapture.Depth.DeviceTimestamp.Ticks + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
            }

            // push the new capture
            if(capture != null)
            {
                PushBodyFrame(sensorData, capture, false);
            }

            return bodyCapture;
        }


        // polls the body tracker for frames and updates the body-related data in a thread
        private void BodyTrackerThread(KinectInterop.SensorData sensorData)
        {
            if (sensorData == null)
                return;

            while (!bodyTrackerStopEvent.WaitOne(0))
            {
                try
                {
                    // poll for body frames
                    PollBodyFrameInternal(sensorData);

                    System.Threading.Thread.Sleep(KinectInterop.THREAD_SLEEP_TIME_MS);  // 10ms
                }
                catch (Exception ex)
                {
                    Debug.LogException(ex);
                }
            }
        }


        // maximum queue length
        private const int MAX_BODY_QUEUE_LENGTH = 3;


        // pushes new body frame into bt-processing queue, if possible
        public bool PushBodyFrame(KinectInterop.SensorData sensorData, Capture capture, bool waitInfinite)
        {
            bool bEnqueued = false;

            if (capture != null && capture.Depth != null && btQueueCount < MAX_BODY_QUEUE_LENGTH &&
                (getAllSensorFrames || rawBodyTimestamp == sensorData.lastBodyFrameTime))
            {
                bEnqueued = bodyTracker.EnqueueCapture(capture, !waitInfinite ? btQueueWaitTime : -1);

                if (bEnqueued)
                {
                    lock (bodyCaptureLock)
                    {
                        // queued
                        btQueueCount++;
                        btQueueTime = (ulong)DateTime.Now.Ticks;
                        //Debug.Log("Push btQueueCount: " + btQueueCount);

                        //if (btQueueWaitTime > 0)
                        //    btQueueWaitTime--;
                    }

                    //Debug.Log("D" + deviceIndex + " PushBodyTimestamp: " + capture.Depth.DeviceTimestamp.Ticks + ", QueueLen: " + btQueueCount + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                }
                else
                {
                    //Debug.LogWarning("D" + deviceIndex + " PushBodyCapture failed! Timestamp:" + capture.Depth.DeviceTimestamp.Ticks + " QueueCount: " + btQueueCount);
                    //btQueueWaitTime++;
                }
            }
            else
            {
                //long capTimestamp = capture != null && capture.Depth != null ? capture.Depth.DeviceTimestamp.Ticks : 0;
                //Debug.LogWarning("D" + deviceIndex + " PushBodyCapture - invalid. Timestamp:" + capTimestamp + " QueueCount: " + btQueueCount);
            }

            return bEnqueued;
        }

        // disposes the body frame images and releases the body frame
        private void DisposeBodyFrame(IntPtr bodyFrameHandle)
        {
            Image bodyIndexImage = bodyTracker.GetBodyIndexMap(bodyFrameHandle);
            bodyIndexImage?.Dispose();

            Capture btCapture = bodyTracker.GetCapture(bodyFrameHandle);
            //Debug.Log("Disposing BT frame - timestamp: " + bodyFrameHandle);
            btCapture.Dispose();

            bodyTracker.ReleaseBodyFrame(bodyFrameHandle);
        }

        // internal body-tracking polling method (used by the BT-thread)
        private void PollBodyFrameInternal(KinectInterop.SensorData sensorData)
        {
            if (bodyTracker != null && btQueueCount > 0)
            {
                // check for available body frame
                IntPtr bodyFrameHandle = bodyTracker.PollBodyFrame(0);

                while (bodyFrameHandle != IntPtr.Zero)
                {
                    lock (bodyCaptureLock)
                    {
                        if (btQueueCount > 0)
                            btQueueCount--;
                        //Debug.Log("Poll btQueueCount: " + btQueueCount);
                    }

                    //Debug.Log("D" + deviceIndex + " PopBodyTimestamp: " + bodyTracker.GetBodyFrameTimestampUsec(bodyFrameHandle) + ", QueueLen: " + btQueueCount + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                    // check if there is other frame in the queue
                    IntPtr bodyFrameHandleNext = bodyTracker.PollBodyFrame(0);

                    if(bodyFrameHandleNext == IntPtr.Zero || (sensorSyncher != null && syncSensorIndex >= 0))
                    {
                        long btTimestamp = (long)bodyTracker.GetBodyFrameTimestampUsec(bodyFrameHandle);

                        // process the body frame
                        bool processBodyData = sensorSyncher == null || syncSensorIndex < 0;
                        ProcessBodyFrame(sensorData, bodyFrameHandle, processBodyData);

                        // check for synched capture
                        if (sensorSyncher != null && syncSensorIndex >= 0)
                        {
                            //Debug.Log("D" + deviceIndex + " Syncher-UpdateBtFrame. Timestamp: " + btTimestamp);
                            sensorSyncher.UpdateBtFrame(syncSensorIndex, btTimestamp - startTimeOffset);
                        }
                    }
                    else
                    {
                        //Debug.LogWarning("D" + deviceIndex + " Disposing body frame. Timestamp: " + bodyTracker.GetBodyFrameTimestampUsec(bodyFrameHandle) + ", QueueLen: " + btQueueCount);
                        DisposeBodyFrame(bodyFrameHandle);
                    }

                    // go to the next frame
                    bodyFrameHandle = bodyFrameHandleNext;
                }

            }
        }


        // K4A body tracker frame data
        private struct K4abtFrameData
        {
            public ulong btFrameTimestamp;

            public Capture btFrameCapture;
            public Image bodyIndexImage;

            public uint numberOfBodies;
            public ulong[] bodyIds;
            public k4abt_skeleton_t[] bodySkeletons;


            // create new BtFrameData
            public K4abtFrameData(BodyTracking bodyTracker, int capacity)
            {
                btFrameTimestamp = 0;
                btFrameCapture = null;
                bodyIndexImage = null;

                numberOfBodies = 0;
                bodyIds = new ulong[capacity];
                bodySkeletons = new k4abt_skeleton_t[capacity];

                for(int i = 0; i < capacity; i++)
                {
                    bodyIds[i] = 0;
                    bodySkeletons[i] = bodyTracker.CreateBodySkeleton();
                }
            }
        }


        // processes the given body frame
        public void ProcessBodyFrame(KinectInterop.SensorData sensorData, IntPtr bodyFrameHandle, bool processFrameData)
        {
            if (bodyFrameHandle != IntPtr.Zero || processFrameData)
            {
                Capture btCapture = null;

                lock (bodyTrackerLock)
                {
                    if (bodyFrameHandle != IntPtr.Zero)
                    {
                        btFrameData.btFrameTimestamp = bodyTracker.GetBodyFrameTimestampUsec(bodyFrameHandle);
                        //Debug.Log("D" + deviceIndex + " Processing body frame. Timestamp: " + btFrameData.btFrameTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                        btFrameData.btFrameCapture?.Dispose();
                        btFrameData.btFrameCapture = bodyTracker.GetCapture(bodyFrameHandle);

                        btFrameData.bodyIndexImage?.Dispose();
                        btFrameData.bodyIndexImage = bodyTracker.GetBodyIndexMap(bodyFrameHandle);

                        btFrameData.numberOfBodies = bodyTracker.GetNumberOfBodies(bodyFrameHandle);
                        uint numBodies = btFrameData.numberOfBodies;

                        // create the needed slots
                        if (btFrameData.bodyIds.Length < numBodies)
                        {
                            int btArrLen = btFrameData.bodyIds.Length;
                            Array.Resize<ulong>(ref btFrameData.bodyIds, (int)numBodies);

                            for(int i = btArrLen; i < numBodies; i++)
                            {
                                btFrameData.bodyIds[i] = 0;
                            }
                        }

                        while (btFrameData.bodySkeletons.Length < numBodies)
                        {
                            int btArrLen = btFrameData.bodySkeletons.Length;
                            Array.Resize<k4abt_skeleton_t>(ref btFrameData.bodySkeletons, (int)numBodies);

                            for (int i = btArrLen; i < numBodies; i++)
                            {
                                btFrameData.bodySkeletons[i] = bodyTracker.CreateBodySkeleton();
                            }
                        }

                        for (int i = 0; i < numBodies; i++)
                        {
                            btFrameData.bodyIds[i] = bodyTracker.GetBodyId(bodyFrameHandle, (uint)i);

                            //k4abt_skeleton_t bodySkeleton = btFrameData.bodySkeletons[i];
                            bodyTracker.GetBodySkeleton(bodyFrameHandle, (uint)i, ref btFrameData.bodySkeletons[i]);
                            //btFrameData.bodySkeletons[i] = bodySkeleton;
                        }

                        // release body frame
                        bodyTracker.ReleaseBodyFrame(bodyFrameHandle);
                        bodyFrameHandle = IntPtr.Zero;
                    }

                    if (processFrameData)
                    {
                        //Debug.Log("D" + deviceIndex + " Processing bt-frame data. Timestamp: " + btFrameData.btFrameTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                        // get body tracking capture
                        btCapture = btFrameData.btFrameCapture;
                        btFrameData.btFrameCapture = null;  // don't dispose it on next body frame

                        ulong depthFrameTime = isSyncBodyAndDepth && btCapture != null && btCapture.Depth != null ? (ulong)btCapture.Depth.DeviceTimestamp.Ticks : 0;
                        if ((frameSourceFlags & KinectInterop.FrameSource.TypeBodyIndex) != 0 && 
                            (getAllSensorFrames || rawBodyIndexTimestamp == sensorData.lastBodyIndexFrameTime))
                        {
                            // get body index frame
                            bodyIndexImage?.Dispose();
                            bodyIndexImage = btFrameData.bodyIndexImage;
                            btFrameData.bodyIndexImage = null;  // don't dispose it on next body frame
                            //bodyIndexImage.CopyBytesTo(rawBodyIndexImage, 0, 0, rawBodyIndexImage.Length);

                            rawBodyIndexTimestamp = depthFrameTime != 0 ? depthFrameTime : btFrameData.btFrameTimestamp;
                            //Debug.Log("D" + deviceIndex + " RawBodyIndexTimestamp: " + rawBodyIndexTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));

                            // transformed body index frame
                            //ProcessTransformedFrames(sensorData, btCapture, depthFrameTime);  // moved to ProcessSensorCapture()

                            //if ((sensorData.colorCamBodyIndexImage != null || sensorData.colorBodyIndexBuffer != null) &&
                            //    btCapture != null && btCapture.Color != null && btCapture.Depth != null &&
                            //    (!isSyncBodyAndDepth || (rawBodyIndexTimestamp == depthFrameTime)) && (rawBodyIndexTimestamp != lastColorCamBodyIndexFrameTime))
                            //{
                            //    if (coordMapperTransform == null)
                            //    {
                            //        coordMapperTransform = coordMapperCalib.CreateTransformation();
                            //    }

                            //    if (c2BtDepthImage == null)
                            //    {
                            //        c2BtDepthImage = new Image(ImageFormat.Depth16, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(ushort));
                            //    }

                            //    if (c2BodyIndexImage == null)
                            //    {
                            //        c2BodyIndexImage = new Image(ImageFormat.Custom8, sensorData.colorImageWidth, sensorData.colorImageHeight, sensorData.colorImageWidth * sizeof(byte));
                            //    }

                            //    //lock (colorCamBodyIndexFrameLock)
                            //    {
                            //        coordMapperTransform.DepthImageToColorCameraCustom(btCapture.Depth, bodyIndexImage, c2BtDepthImage, c2BodyIndexImage, TransformationInterpolationType.Linear, 255);
                            //        //c2BodyIndexImage.CopyTo<byte>(colorCamBodyIndexFrame, 0, 0, colorCamBodyIndexFrame.Length);
                            //        //System.IO.File.WriteAllBytes("ColorCamBodyIndexFrame.bin", colorCamBodyIndexFrame);
                            //        lastColorCamBodyIndexFrameTime = rawBodyIndexTimestamp;
                            //        //Debug.Log("D" + deviceIndex + " ColorCamBodyIndexFrameTime: " + lastColorCamBodyIndexFrameTime);
                            //    }
                            //}

                            // dispose image
                            //bodyIndexImage.Dispose();
                        }

                        if ((frameSourceFlags & KinectInterop.FrameSource.TypeBody) != 0 && 
                            (getAllSensorFrames || rawBodyTimestamp == sensorData.lastBodyFrameTime))
                        {
                            trackedBodiesCount = btFrameData.numberOfBodies;
                            rawBodyTimestamp = (depthFrameTime != 0 ? depthFrameTime : btFrameData.btFrameTimestamp) + trackedBodiesCount;
                            //Debug.Log("D" + deviceIndex + " RawBodyTimestamp: " + rawBodyTimestamp + ", BodyCount: " + trackedBodiesCount + ", QueueLen: " + btQueueCount);

                            // create the needed slots
                            while (alTrackedBodies.Count < trackedBodiesCount)
                            {
                                alTrackedBodies.Add(new KinectInterop.BodyData((int)KinectInterop.JointType.Count));
                            }

                            // get sensor-to-world matrix
                            Matrix4x4 sensorToWorld = GetSensorToWorldMatrix();
                            Quaternion sensorRotInv = GetSensorRotationNotZFlipped(true);
                            float scaleX = sensorData.sensorSpaceScale.x * 0.001f;
                            float scaleY = sensorData.sensorSpaceScale.y * 0.001f;

                            for (int i = 0; i < trackedBodiesCount; i++)
                            {
                                KinectInterop.BodyData bodyData = alTrackedBodies[i];

                                bodyData.liTrackingID = btFrameData.bodyIds[i];
                                bodyData.iBodyIndex = i;
                                bodyData.bIsTracked = true;

                                //bodyTracker.GetBodySkeleton(bodyFrameHandle, (uint)i, ref bodySkeletonData);
                                k4abt_skeleton_t bodySkeleton = btFrameData.bodySkeletons[i];

                                for (int jBT = 0; jBT < (int)k4abt_joint_type.K4ABT_JOINT_COUNT; jBT++)
                                {
                                    k4abt_joint_t jointBT = bodySkeleton.joints[jBT];
                                    int j = BtJoint2JointType[jBT];

                                    if (j >= 0)
                                    {
                                        KinectInterop.JointData jointData = bodyData.joint[j];

                                        jointData.trackingState = BtConf2TrackingState[(int)jointBT.confidence_level];  // (KinectInterop.TrackingState)jointBT.confidence_level;

                                        if (jointData.trackingState == KinectInterop.TrackingState.NotTracked && _Hand2ElbowJoint.ContainsKey(j))
                                        {
                                            // infer hand joints, if the elbows are also inferred
                                            int jElbow = _Hand2ElbowJoint[j];
                                            if (bodyData.joint[jElbow].trackingState != KinectInterop.TrackingState.NotTracked)
                                            {
                                                jointData.trackingState = KinectInterop.TrackingState.Inferred;
                                                //Debug.Log("Set " + (KinectInterop.JointType)j + " as inferred. " + (KinectInterop.JointType)jElbow + " is: " + bodyData.joint[jElbow].trackingState);
                                            }
                                        }

                                        float jPosZ = (bIgnoreZCoordinates && j > 0) ? bodyData.joint[0].kinectPos.z : jointBT.position.Z * 0.001f;
                                        jointData.kinectPos = new Vector3(jointBT.position.X * 0.001f, jointBT.position.Y * 0.001f, jointBT.position.Z * 0.001f);
                                        jointData.position = sensorToWorld.MultiplyPoint3x4(new Vector3(jointBT.position.X * scaleX, jointBT.position.Y * scaleY, jPosZ));

                                        //if (j == (int)KinectInterop.JointType.WristLeft)
                                        //{
                                        //    Debug.Log(string.Format("{0} - {1:F2}, {2} -> {3}", (KinectInterop.JointType)j, jPosZ, jointBT.confidence_level, jointData.trackingState));
                                        //}

                                        jointData.orientation = new Quaternion(jointBT.orientation.X, jointBT.orientation.Y, jointBT.orientation.Z, jointBT.orientation.W);
                                        jointData.orientation = sensorRotInv * jointData.orientation;

                                        if (j == 0)
                                        {
                                            bodyData.kinectPos = jointData.kinectPos;
                                            bodyData.position = jointData.position;
                                            bodyData.orientation = jointData.orientation;
                                        }

                                        bodyData.joint[j] = jointData;
                                    }
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

                                // estimate hand states
                                CalcBodyHandStates(ref bodyData, rawBodyTimestamp);

                                alTrackedBodies[i] = bodyData;
                                //Debug.Log("  (T)User ID: " + bodyData.liTrackingID + ", body: " + i + ", bi: " + bodyData.iBodyIndex + ", pos: " + bodyData.joint[0].kinectPos + ", rot: " + bodyData.joint[0].normalRotation.eulerAngles + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                            }

                            // clean up user history
                            if (jointPositionFilter != null)
                            {
                                jointPositionFilter.CleanUpUserHistory();
                            }
                        }
                    }
                }

                if(processFrameData && btCapture != null)
                {
                    // save the body-frame capture
                    lock (bodyCaptureLock)
                    {
                        if (bodyOutputCapture != null)
                        {
                            //Debug.LogWarning("D" + deviceIndex + " Disposing bt-frame capture. Time: " + bodyOutputCapture.Depth.DeviceTimestamp.Ticks);

                            bodyOutputCapture.Dispose();
                            bodyOutputCapture = null;
                        }

                        bodyOutputCapture = btCapture;
                        //Debug.Log("D" + deviceIndex + " Bt-frame capture set. Timestamp: " + btCapture.Depth.DeviceTimestamp.Ticks + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                    }
                }
            }

        }


        // estimates hand states for the given body
        private void CalcBodyHandStates(ref KinectInterop.BodyData bodyData, ulong bodyTimestamp)
        {
            ulong uTimeDelta = bodyTimestamp - lastHandStatesTimestamp;
            float fTimeDelta = (float)uTimeDelta / 10000000f;
            float fTimeSmooth = 5f * fTimeDelta;

            int h = (int)KinectInterop.JointType.WristLeft;
            int f = (int)KinectInterop.JointType.HandtipLeft;
            float lHandFingerAngle = 0f;

            if (bodyData.joint[h].trackingState != KinectInterop.TrackingState.NotTracked &&
                bodyData.joint[f].trackingState != KinectInterop.TrackingState.NotTracked)
            {
                lHandFingerAngle = Quaternion.Angle(bodyData.joint[h].normalRotation, bodyData.joint[f].normalRotation);

                lHandFingerAngle = (leftHandFingerAngle + lHandFingerAngle) / 2f;  // Mathf.Lerp(leftHandFingerAngle, lHandFingerAngle, fTimeSmooth);
                bodyData.leftHandState = (lHandFingerAngle >= 40f) ? KinectInterop.HandState.Closed : KinectInterop.HandState.Open;  // 50f
                //bodyData.leftHandState = (lHandFingerAngle >= 40f) ? KinectInterop.HandState.Closed : KinectInterop.HandState.Open;  // 50f
            }
            else
            {
                bodyData.leftHandState = KinectInterop.HandState.NotTracked;
            }

            h = (int)KinectInterop.JointType.WristRight;
            f = (int)KinectInterop.JointType.HandtipRight;
            float rHandFingerAngle = 0f;

            if (bodyData.joint[h].trackingState != KinectInterop.TrackingState.NotTracked &&
                bodyData.joint[f].trackingState != KinectInterop.TrackingState.NotTracked)
            {
                rHandFingerAngle = Quaternion.Angle(bodyData.joint[h].normalRotation, bodyData.joint[f].normalRotation);

                rHandFingerAngle = (rightHandFingerAngle + rHandFingerAngle) / 2f;  // Mathf.Lerp(rightHandFingerAngle, rHandFingerAngle, fTimeSmooth);
                bodyData.rightHandState = (rHandFingerAngle >= 40f) ? KinectInterop.HandState.Closed : KinectInterop.HandState.Open;  // 50f
                //bodyData.rightHandState = (rHandFingerAngle >= 40f) ? KinectInterop.HandState.Closed : KinectInterop.HandState.Open; // 50f
            }
            else
            {
                bodyData.rightHandState = KinectInterop.HandState.NotTracked;
            }

            //Debug.Log("LHA: " + (int)lHandFingerAngle + ", RHA: " + (int)rHandFingerAngle +
            //    ", LH: " + bodyData.leftHandState + ", RH: " + bodyData.rightHandState + ", Timestamp: " + bodyTimestamp);

            if(fTimeSmooth >= 1f)
            {
                leftHandFingerAngle = lHandFingerAngle;
                rightHandFingerAngle = rHandFingerAngle;
                lastHandStatesTimestamp = bodyTimestamp;
            }
        }

        private static readonly KinectInterop.TrackingState[] BtConf2TrackingState =
        {
            KinectInterop.TrackingState.Inferred,   // K4ABT_JOINT_CONFIDENCE_NONE
            KinectInterop.TrackingState.NotTracked, // K4ABT_JOINT_CONFIDENCE_LOW
            KinectInterop.TrackingState.Tracked,    // K4ABT_JOINT_CONFIDENCE_MEDIUM
            KinectInterop.TrackingState.HighConf    // K4ABT_JOINT_CONFIDENCE_HIGH
        };

        private static readonly int[] BtJoint2JointType =
        {
            (int)KinectInterop.JointType.Pelvis,
            (int)KinectInterop.JointType.SpineNaval,
            (int)KinectInterop.JointType.SpineChest,
            (int)KinectInterop.JointType.Neck,

            (int)KinectInterop.JointType.ClavicleLeft,
            (int)KinectInterop.JointType.ShoulderLeft,
            (int)KinectInterop.JointType.ElbowLeft,
            (int)KinectInterop.JointType.WristLeft,

            (int)KinectInterop.JointType.HandLeft,
            (int)KinectInterop.JointType.HandtipLeft,
            (int)KinectInterop.JointType.ThumbLeft,

            (int)KinectInterop.JointType.ClavicleRight,
            (int)KinectInterop.JointType.ShoulderRight,
            (int)KinectInterop.JointType.ElbowRight,
            (int)KinectInterop.JointType.WristRight,

            (int)KinectInterop.JointType.HandRight,
            (int)KinectInterop.JointType.HandtipRight,
            (int)KinectInterop.JointType.ThumbRight,

            (int)KinectInterop.JointType.HipLeft,
            (int)KinectInterop.JointType.KneeLeft,
            (int)KinectInterop.JointType.AnkleLeft,
            (int)KinectInterop.JointType.FootLeft,

            (int)KinectInterop.JointType.HipRight,
            (int)KinectInterop.JointType.KneeRight,
            (int)KinectInterop.JointType.AnkleRight,
            (int)KinectInterop.JointType.FootRight,

            (int)KinectInterop.JointType.Head,

            (int)KinectInterop.JointType.Nose,
            (int)KinectInterop.JointType.EyeLeft,
            (int)KinectInterop.JointType.EarLeft,
            (int)KinectInterop.JointType.EyeRight,
            (int)KinectInterop.JointType.EarRight
        };

        // wrist, hand & finger joints
        private static readonly Dictionary<int, int> _Hand2ElbowJoint = new Dictionary<int, int>
        {
            { (int)KinectInterop.JointType.WristLeft, (int)KinectInterop.JointType.ElbowLeft },
            { (int)KinectInterop.JointType.HandLeft, (int)KinectInterop.JointType.ElbowLeft },
            { (int)KinectInterop.JointType.HandtipLeft, (int)KinectInterop.JointType.ElbowLeft },
            { (int)KinectInterop.JointType.ThumbLeft, (int)KinectInterop.JointType.ElbowLeft },

            { (int)KinectInterop.JointType.WristRight, (int)KinectInterop.JointType.ElbowRight },
            { (int)KinectInterop.JointType.HandRight, (int)KinectInterop.JointType.ElbowRight },
            { (int)KinectInterop.JointType.HandtipRight, (int)KinectInterop.JointType.ElbowRight },
            { (int)KinectInterop.JointType.ThumbRight, (int)KinectInterop.JointType.ElbowRight }
        };

        // calculates all joint orientations for the given body
        protected override void CalcBodyJointOrients(ref KinectInterop.BodyData bodyData)
        {
            base.CalcBodyJointOrients(ref bodyData);

            if (bodyData.bIsTracked)
            {
                if (bIgnoreZCoordinates)
                {
                    //base.CalcBodyJointOrients(ref bodyData);
                    return;
                }

                //for (int j = 0; j < (int)KinectInterop.JointType.Count; j++)
                {
                    // additionally estimate head orientation (hinted by Garrett Tuer)
                    int j = (int)KinectInterop.JointType.Head;

                    if (bodyData.joint[j].trackingState != KinectInterop.TrackingState.NotTracked)
                    {
                        Quaternion jointOrient = bodyData.joint[j].orientation;
                        Quaternion jointOrientNormal = jointOrient * _JointTurnCS[j] * _JointBaseOrient[j];
                        if (bIgnoreZCoordinates)
                            jointOrientNormal = Quaternion.Euler(0f, 0f, jointOrientNormal.eulerAngles.z);
                        bodyData.joint[j].normalRotation = jointOrientNormal;

                        Vector3 mirroredAngles = jointOrientNormal.eulerAngles;
                        mirroredAngles.y = -mirroredAngles.y;
                        mirroredAngles.z = -mirroredAngles.z;
                        bodyData.joint[j].mirroredRotation = Quaternion.Euler(mirroredAngles);
                    }
                }
            }
        }

        // base orientations
        private static readonly Quaternion[] _JointBaseOrient =
        {
            Quaternion.LookRotation(Vector3.left, Vector3.back),  // Pelvis
            Quaternion.LookRotation(Vector3.left, Vector3.back),
            Quaternion.LookRotation(Vector3.left, Vector3.back),
            Quaternion.LookRotation(Vector3.left, Vector3.back),
            Quaternion.LookRotation(Vector3.left, Vector3.back),

            Quaternion.LookRotation(Vector3.down, Vector3.back),  // ClavicleL
            Quaternion.LookRotation(Vector3.down, Vector3.back),
            Quaternion.LookRotation(Vector3.down, Vector3.back),
            Quaternion.LookRotation(Vector3.down, Vector3.back),
            Quaternion.LookRotation(Vector3.down, Vector3.back),

            Quaternion.LookRotation(Vector3.up, Vector3.forward),  // ClavicleR
            Quaternion.LookRotation(Vector3.up, Vector3.forward),
            Quaternion.LookRotation(Vector3.up, Vector3.forward),
            Quaternion.LookRotation(Vector3.up, Vector3.forward),
            Quaternion.LookRotation(Vector3.up, Vector3.forward),

            Quaternion.LookRotation(Vector3.left, Vector3.back),  // HipL
            Quaternion.LookRotation(Vector3.left, Vector3.back),
            Quaternion.LookRotation(Vector3.left, Vector3.back),
            Quaternion.LookRotation(Vector3.left, Vector3.back),

            Quaternion.LookRotation(Vector3.left, Vector3.forward),  // HipR
            Quaternion.LookRotation(Vector3.left, Vector3.forward),
            Quaternion.LookRotation(Vector3.left, Vector3.forward),
            Quaternion.LookRotation(Vector3.left, Vector3.forward),

            Quaternion.LookRotation(Vector3.left, Vector3.back),  // Nose
            Quaternion.LookRotation(Vector3.left, Vector3.back),
            Quaternion.LookRotation(Vector3.left, Vector3.back),
            Quaternion.LookRotation(Vector3.left, Vector3.back),
            Quaternion.LookRotation(Vector3.left, Vector3.back),

            Quaternion.LookRotation(Vector3.down, Vector3.back),  // FingersL
            Quaternion.LookRotation(Vector3.down, Vector3.back),
            Quaternion.LookRotation(Vector3.up, Vector3.forward),  // FingersR
            Quaternion.LookRotation(Vector3.up, Vector3.forward)
        };

        // turn cs rotations
        private static readonly Quaternion[] _JointTurnCS =
        {
            Quaternion.Euler(0f, 90f, 90f),  // Pelvis
            Quaternion.Euler(0f, 90f, 90f),
            Quaternion.Euler(0f, 90f, 90f),
            Quaternion.Euler(0f, 90f, 90f),
            Quaternion.Euler(0f, 90f, 90f),

            Quaternion.Euler(180f, 0f, 180f),  // ClavicleL
            Quaternion.Euler(180f, 0f, 180f),
            Quaternion.Euler(180f, 0f, 180f),
            Quaternion.Euler(-90f, 0f, 180f),
            Quaternion.Euler(-90f, 0f, 180f),

            Quaternion.Euler(0f, 180f, 0f),  // ClavicleR
            Quaternion.Euler(0f, 180f, 0f),
            Quaternion.Euler(0f, 180f, 0f),
            Quaternion.Euler(-90f, 0f, 180f),
            Quaternion.Euler(-90f, 0f, 180f),

            Quaternion.Euler(0f, 90f, 90f),  // HipL
            Quaternion.Euler(0f, 90f, 90f),
            Quaternion.Euler(0f, 90f, 90f),
            Quaternion.Euler(90f, 0f, 0f),

            Quaternion.Euler(0f, 90f, -90f),  // HipR
            Quaternion.Euler(0f, 90f, -90f),
            Quaternion.Euler(0f, 90f, -90f),
            Quaternion.Euler(90f, 0f, 180f),

            Quaternion.Euler(0f, 90f, 90f),  // Nose
            Quaternion.Euler(90f, 0f, 0f),
            Quaternion.Euler(0f, -90f, -90f),
            Quaternion.Euler(90f, 0f, 0f),
            Quaternion.Euler(0f, 90f, 90f),

            Quaternion.Euler(-90f, 0f, 180f),  // FingersL
            Quaternion.Euler(-90f, 0f, 180f),
            Quaternion.Euler(-90f, 0f, 180f),  // FingersR
            Quaternion.Euler(-90f, 0f, 180f)
        };


        // gets the given camera intrinsics
        private void GetCameraIntrinsics(CalibrationDeviceType camType, CameraCalibration camParams, ref KinectInterop.CameraIntrinsics intr)
        {
            Intrinsics camIntr = camParams.Intrinsics;
            if (camIntr.Parameters.Length < 15)
                throw new System.Exception("Intrinsics length is less than expected: " + camIntr.ParameterCount);

            intr = new KinectInterop.CameraIntrinsics();

            intr.cameraType = (int)camType;
            intr.width = camParams.ResolutionWidth;
            intr.height = camParams.ResolutionHeight;

            // 0        float cx;
            // 1        float cy;
            intr.ppx = camIntr.Parameters[0];
            intr.ppy = camIntr.Parameters[1];

            // 2        float fx;            /**< Focal length x */
            // 3        float fy;            /**< Focal length y */
            intr.fx = camIntr.Parameters[2];
            intr.fy = camIntr.Parameters[3];

            // 4        float k1;
            // 5        float k2;
            // 6        float k3;
            // 7        float k4;
            // 8        float k5;
            // 9        float k6;
            intr.distCoeffs = new float[6];
            intr.distCoeffs[0] = camIntr.Parameters[4];
            intr.distCoeffs[1] = camIntr.Parameters[5];
            intr.distCoeffs[2] = camIntr.Parameters[6];
            intr.distCoeffs[3] = camIntr.Parameters[7];
            intr.distCoeffs[4] = camIntr.Parameters[8];
            intr.distCoeffs[5] = camIntr.Parameters[9];

            if (camIntr.Type == CalibrationModelType.Theta)
                intr.distType = KinectInterop.DistortionType.Theta;
            else if (camIntr.Type == CalibrationModelType.Polynomial3K)
                intr.distType = KinectInterop.DistortionType.Polynomial3K;
            else if (camIntr.Type == CalibrationModelType.Rational6KT)
                intr.distType = KinectInterop.DistortionType.Rational6KT;
            else
                intr.distType = (KinectInterop.DistortionType)camIntr.Type;

            // 10            float codx;
            // 11            float cody;
            intr.codx = camIntr.Parameters[10];
            intr.cody = camIntr.Parameters[11];

            // 12            float p2;
            // 13            float p1;
            intr.p2 = camIntr.Parameters[12];
            intr.p1 = camIntr.Parameters[13];

            // 14           float metric_radius;
            intr.maxRadius = camIntr.Parameters[14];

            EstimateFOV(intr);
        }


        // gets the given camera extrinsics
        private void GetCameraExtrinsics(Extrinsics camExtr, ref KinectInterop.CameraExtrinsics extr)
        {
            extr = new KinectInterop.CameraExtrinsics();

            extr.rotation = new float[camExtr.Rotation.Length];
            camExtr.Rotation.CopyTo(extr.rotation, 0);

            extr.translation = new float[camExtr.Translation.Length];
            camExtr.Translation.CopyTo(extr.translation, 0);
        }


        public override Vector2 MapDepthPointToColorCoords(KinectInterop.SensorData sensorData, Vector2 depthPos, ushort depthVal)
        {
            if (sensorData.depthCamIntr != null && sensorData.colorCamIntr != null && sensorData.depth2ColorExtr != null)
            {
                Vector3 depthSpacePos = UnprojectPoint(sensorData.depthCamIntr, depthPos, (float)depthVal);
                Vector3 colorSpacePos = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos);
                Vector2 colorPos = ProjectPoint(sensorData.colorCamIntr, colorSpacePos);

                return colorPos;
            }

            return Vector2.zero;
        }


        // unprojects plane point into the space
        public override Vector3 UnprojectPoint(KinectInterop.CameraIntrinsics intr, Vector2 pixel, float depth)
        {
            if (depth <= 0f)
                return Vector3.zero;

            System.Numerics.Vector2 fPixel = new System.Numerics.Vector2(pixel.x, pixel.y);
            System.Numerics.Vector3? fPoint = coordMapperCalib.TransformTo3D(fPixel, depth, (CalibrationDeviceType)intr.cameraType, (CalibrationDeviceType)intr.cameraType);
            Vector3 point = fPoint.HasValue ? new Vector3(fPoint.Value.X, fPoint.Value.Y, fPoint.Value.Z) : Vector3.zero;

            return point;
        }


        // projects space point onto a plane
        public override Vector2 ProjectPoint(KinectInterop.CameraIntrinsics intr, Vector3 point)
        {
            if (point == Vector3.zero)
                return Vector2.zero;

            System.Numerics.Vector3 fPoint = new System.Numerics.Vector3(point.x, point.y, point.z);
            System.Numerics.Vector2? fPixel = coordMapperCalib.TransformTo2D(fPoint, (CalibrationDeviceType)intr.cameraType, (CalibrationDeviceType)intr.cameraType);
            Vector2 pixel = fPixel.HasValue ? new Vector2(fPixel.Value.X, fPixel.Value.Y) : Vector2.zero;

            return pixel;
        }


        // transforms a point from one space to another
        public override Vector3 TransformPoint(KinectInterop.CameraExtrinsics extr, Vector3 point)
        {
            float toPointX = extr.rotation[0] * point.x + extr.rotation[1] * point.y + extr.rotation[2] * point.z + extr.translation[0];
            float toPointY = extr.rotation[3] * point.x + extr.rotation[4] * point.y + extr.rotation[5] * point.z + extr.translation[1];
            float toPointZ = extr.rotation[6] * point.x + extr.rotation[7] * point.y + extr.rotation[8] * point.z + extr.translation[2];
            Vector3 toPoint = new Vector3(toPointX, toPointY, toPointZ);

            return toPoint;
        }


        //public override bool MapDepthFrameToColorData(KinectInterop.SensorData sensorData, ref byte[] vColorFrameData)
        //{
        //    if(coordMapperTransform == null)
        //    {
        //        coordMapperTransform = coordMapper.CreateTransformation();
        //    }

        //    if(vColorFrameData == null)
        //    {
        //        vColorFrameData = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight * sensorData.colorImageStride];
        //    }

        //    return false;
        //}


        //public override bool MapColorFrameToDepthData(KinectInterop.SensorData sensorData, ref ushort[] vDepthFrameData)
        //{
        //    return false;
        //}


    }
}

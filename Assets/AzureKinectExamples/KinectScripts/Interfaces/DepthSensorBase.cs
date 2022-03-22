using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// DepthSensorBase is the base class of all sensor interface implementations.
    /// </summary>
    public abstract class DepthSensorBase : MonoBehaviour, DepthSensorInterface
    {
        // whether to get and process all possible sensor frames (true), or get new frames after the previous ones have been moved to sensor-data (false)
        protected bool getAllSensorFrames = true;

        // max depth distance in mm, used for initializing data arrays and compute buffers
        public const int MAX_DEPTH_DISTANCE_MM = 10000;

        [Tooltip("Device streaming mode, in means of connected sensor, recording or disabled.")]
        public KinectInterop.DeviceStreamingMode deviceStreamingMode = KinectInterop.DeviceStreamingMode.ConnectedSensor;

        [Tooltip("Index of the depth sensor in the list of currently connected sensors.")]
        public int deviceIndex = 0;

        [Tooltip("Path to the recording file, if the streaming mode is PlayRecording.")]
        public string recordingFile = string.Empty;

        //[Tooltip("Sensor position in space.")]
        //public Vector3 devicePosition = new Vector3(0f, 1f, 0f);

        //[Tooltip("Sensor rotation in space.")]
        //public Vector3 deviceRotation = new Vector3(0f, 0f, 0f);

        //[Tooltip("Whether the body tracking for this sensor is enabled or not.")]
        //internal bool bodyTrackingEnabled = false;

        [Tooltip("Minimum distance in meters, used for creating the depth-related images.")]
        [Range(0f, 10f)]
        public float minDepthDistance = 0.5f;

        [Tooltip("Maximum distance in meters, used for creating the depth-related images.")]
        [Range(0f, 10f)]
        public float maxDepthDistance = 10f;

        [Tooltip("Resolution of the generated point-cloud textures.")]
        public PointCloudResolution pointCloudResolution = PointCloudResolution.DepthCameraResolution;
        public enum PointCloudResolution : int { DepthCameraResolution = 0, ColorCameraResolution = 1 }

        [Tooltip("Render texture, used for point-cloud vertex mapping. The texture resolution should match the depth or color image resolution.")]
        public RenderTexture pointCloudVertexTexture = null;

        [Tooltip("Render texture, used for point-cloud color mapping. The texture resolution should match the depth or color image resolution.")]
        public RenderTexture pointCloudColorTexture = null;

        [Tooltip("List of comma-separated player indices to be included in the point cloud. Use -1 for all players, or empty list for full point cloud.")]
        public string pointCloudPlayerList = string.Empty;


        // initial parameters
        [HideInInspector]
        public KinectInterop.FrameSource frameSourceFlags;
        protected bool isSyncDepthAndColor = false;
        protected bool isSyncBodyAndDepth = false;
        protected bool consoleLogMessages = false;

        // sensor device-id & platform type
        protected string sensorDeviceId = null;
        protected KinectInterop.DepthSensorPlatform sensorPlatform = KinectInterop.DepthSensorPlatform.None;

        // initial pose parameters
        protected Vector3 initialPosePosition = Vector3.zero;
        protected Quaternion initialPoseRotation = Quaternion.identity;
        protected Matrix4x4 matTransformPose = Matrix4x4.identity;
        protected Matrix4x4 matLocalPose = Matrix4x4.identity;

        // frame numbers
        //protected ulong colorFrameNumber = 0;
        //protected ulong depthFrameNumber = 0;
        //protected ulong infraredFrameNumber = 0;
        //protected ulong poseFrameNumber = 0;

        // raw color data
        protected byte[] rawColorImage = null;
        protected ulong rawColorTimestamp = 0;
        protected ulong currentColorTimestamp = 0;
        public object colorFrameLock = new object();

        // raw depth data
        protected ushort[] rawDepthImage = null;
        protected ulong rawDepthTimestamp = 0;
        protected ulong currentDepthTimestamp = 0;
        public object depthFrameLock = new object();

        // raw infrared data
        protected ushort[] rawInfraredImage = null;
        protected ulong rawInfraredTimestamp = 0;
        protected ulong currentInfraredTimestamp = 0;
        public object infraredFrameLock = new object();

        // raw pose data
        protected Vector3 rawPosePosition = Vector3.zero;
        protected Quaternion rawPoseRotation = Quaternion.identity;
        protected ulong rawPoseTimestamp = 0;
        protected ulong currentPoseTimestamp = 0;
        public object poseFrameLock = new object();

        // sensor pose data
        protected Vector3 sensorPosePosition;
        protected Quaternion sensorPoseRotation;

        [HideInInspector]
        public Matrix4x4 depth2colorCamMat = Matrix4x4.identity;

        protected Vector3 sensorRotOffset = Vector3.zero;
        protected bool sensorRotFlipZ = false;
        protected bool sensorRotIgnoreY = false;
        [HideInInspector]
        public float sensorRotValueY = 0f;

        // body tracker
        protected bool bIgnoreZCoordinates = false;
        protected bool bIgnoreInferredJoints = false;

        // raw body data
        protected byte[] rawBodyIndexImage = null;
        protected uint trackedBodiesCount = 0;
        protected List<KinectInterop.BodyData> alTrackedBodies = null;
        protected ulong rawBodyTimestamp = 0;
        protected ulong rawBodyIndexTimestamp = 0;
        protected ulong currentBodyTimestamp = 0;
        protected ulong currentBodyIndexTimestamp = 0;
        public object bodyTrackerLock = new object();


        // depth image data
        protected int[] depthHistBufferData = null;
        protected int[] equalHistBufferData = null;
        protected int depthHistTotalPoints = 0;
        //protected ulong lastDepthImageTimestamp = 0;
        //protected object depthImageDataLock = new object();

        // infrared image data
        protected float minInfraredValue = 0f;
        protected float maxInfraredValue = 0f;

        // body image data
        protected int[] depthBodyBufferData = null;
        protected int[] equalBodyBufferData = null;
        protected int bodyHistTotalPoints = 0;
        //protected ulong lastBodyImageTimestamp = 0;
        //protected object bodyImageDataLock = new object();

        // last updated depth coord-frame time
        protected ulong lastDepthCoordFrameTime = 0;

        // point cloud vertex shader
        protected ComputeShader pointCloudVertexShader = null;
        protected int pointCloudVertexKernel = -1;

        protected Vector2Int pointCloudVertexRes = Vector2Int.zero;
        protected int[] pointCloudPlayerIndices = null;
        protected int[] pointCloudBodyIndices = null;

        protected RenderTexture pointCloudVertexRT = null;
        protected ComputeBuffer pointCloudSpaceBuffer = null;
        protected ComputeBuffer pointCloudDepthBuffer = null;
        protected ComputeBuffer pointCloudInfraredBuffer = null;
        protected ComputeBuffer pointCloudBodyIndexBuffer = null;

        // point cloud color shader
        protected ComputeShader pointCloudColorShader = null;
        protected int pointCloudColorKernel = -1;
        protected Vector2Int pointCloudColorRes = Vector2Int.zero;
        protected RenderTexture pointCloudColorRT = null;
        protected ComputeBuffer pointCloudCoordBuffer = null;
        protected Texture2D pointCloudAlignedColorTex = null;

        //// depth2space coords frame
        //protected Vector3[] depth2SpaceCoordFrame = null;
        //protected ulong lastDepth2SpaceFrameTime = 0;
        //protected object depth2SpaceFrameLock = new object();

        // space tables
        protected Vector3[] depth2SpaceTable = null;
        protected int depth2SpaceWidth = 0, depth2SpaceHeight = 0;
        protected Vector3[] color2SpaceTable = null;
        protected int color2SpaceWidth = 0, color2SpaceHeight = 0;
        //protected ushort[] lastDepthDataBuf = null;

        // depth cam color frame
        protected byte[] depthCamColorDataFrame = null;
        protected Vector2[] depthCamColorCoordFrame = null;
        protected ulong lastDepthCamColorFrameTime = 0;
        protected object depthCamColorFrameLock = new object();

        // color cam depth frame
        protected ushort[] colorCamDepthDataFrame = null;
        protected Vector2[] colorCamDepthCoordFrame = null;
        protected ulong lastColorCamDepthFrameTime = 0;
        protected object colorCamDepthFrameLock = new object();

        // color cam body index frame
        protected byte[] colorCamBodyIndexFrame = null;
        protected ulong lastColorCamBodyIndexFrameTime = 0;
        protected object colorCamBodyIndexFrameLock = new object();

        // color cam infrared frame
        protected ushort[] colorCamInfraredDataFrame = null;
        protected ulong lastColorCamInfraredFrameTime = 0;
        protected object colorCamInfraredFrameLock = new object();

        // color cam depth shader
        protected ComputeShader colorDepthShader = null;
        protected int colorDepthKernel = -1;
        protected bool colorDepthShaderInited = false;

        // color cam infrared shader
        protected ComputeShader colorInfraredShader = null;
        protected int colorInfraredKernel = -1;
        protected bool colorInfraredShaderInited = false;

        // color cam body index shader
        protected ComputeShader colorBodyIndexShader = null;
        protected int colorBodyIndexKernel = -1;
        protected bool colorBodyIndexShaderInited = false;
        protected ComputeBuffer bodyIndexBuffer = null;

        // user body merger
        protected KinectUserBodyMerger userBodyMerger = null;
        protected bool userBodyMergerInited = false;

        // joint position filter
        protected JointPositionsFilter jointPositionFilter = null;


        // base depth sensor settings
        [System.Serializable]
        public class BaseSensorSettings
        {
            public int deviceStreamingMode;
            public int deviceIndex;
            public string recordingFile = string.Empty;
            public float minDistance = 0.5f;
            public float maxDistance = 10f;
        }


        protected virtual void Awake()
        {
            // init raw sensor pose
            rawPosePosition = Vector3.zero;
            rawPoseRotation = Quaternion.identity;
            rawPoseTimestamp = (ulong)DateTime.Now.Ticks;

            sensorPosePosition = transform.position;
            sensorPoseRotation = transform.rotation;

            // initial pose params
            initialPosePosition = transform.position;
            initialPoseRotation = transform.rotation;

            matTransformPose.SetTRS(initialPosePosition, initialPoseRotation, Vector3.one);
        }



        public abstract KinectInterop.DepthSensorPlatform GetSensorPlatform();

        //public virtual bool InitSensorInterface(bool bCopyLibs, ref bool bNeedRestart)
        //{
        //    bNeedRestart = false;
        //    return true;
        //}

        //public virtual void FreeSensorInterface(bool bDeleteLibs)
        //{
        //}

        public virtual string GetSensorDeviceId()
        {
            return sensorDeviceId;
        }


        public virtual System.Type GetSensorSettingsType()
        {
            return typeof(BaseSensorSettings);
        }


        public virtual BaseSensorSettings GetSensorSettings(BaseSensorSettings settings)
        {
            if (settings == null)
            {
                settings = new BaseSensorSettings();
            }

            settings.deviceStreamingMode = (int)deviceStreamingMode;
            settings.deviceIndex = deviceIndex;
            settings.recordingFile = recordingFile;
            settings.minDistance = minDepthDistance;
            settings.maxDistance = maxDepthDistance;

            return settings;
        }


        public virtual void SetSensorSettings(BaseSensorSettings settings)
        {
            if (settings == null)
                return;

            deviceStreamingMode = (KinectInterop.DeviceStreamingMode)settings.deviceStreamingMode;
            deviceIndex = settings.deviceIndex;
            recordingFile = settings.recordingFile;
            minDepthDistance = settings.minDistance;
            maxDepthDistance = settings.maxDistance;
        }


        public abstract List<KinectInterop.SensorDeviceInfo> GetAvailableSensors();

        public virtual KinectInterop.SensorData OpenSensor(KinectManager kinectManager, KinectInterop.FrameSource dwFlags, bool bSyncDepthAndColor, bool bSyncBodyAndDepth)
        {
            // save the parameters for later
            frameSourceFlags = dwFlags;
            isSyncDepthAndColor = bSyncDepthAndColor && ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0) && ((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0);
            isSyncBodyAndDepth = bSyncBodyAndDepth && ((dwFlags & (KinectInterop.FrameSource.TypeBody | KinectInterop.FrameSource.TypeBodyIndex)) != 0) && ((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0);

            consoleLogMessages = kinectManager ? kinectManager.consoleLogMessages : false;

            if (kinectManager && kinectManager.jointPositionSmoothing != SmoothingType.None)
            {
                // joint position filter
                jointPositionFilter = new JointPositionsFilter();
                jointPositionFilter.Init(kinectManager.jointPositionSmoothing);
            }

            if ((dwFlags & KinectInterop.FrameSource.TypePose) != 0)
            {
                // clear sensor pose
                SetSensorToWorldMatrix(Vector3.zero, Quaternion.identity, true);
            }

            return null;
        }


        public virtual void CloseSensor(KinectInterop.SensorData sensorData)
        {
            // stop body tracking, if needed
            StopBodyTracking(sensorData);

            // dispose coord mapping shaders
            DisposePointCloudVertexShader(sensorData);
            DisposePointCloudColorShader(sensorData);

            DisposeColorDepthShader(sensorData);
            DisposeColorInfraredShader(sensorData);
            DisposeColorBodyIndexShader(sensorData);

            DisposeDepthTexShader(sensorData);
            DisposeInfraredTexShader(sensorData);
        }


        public virtual void EnablePoseStream(KinectInterop.SensorData sensorData, bool bEnable)
        {
            if (bEnable)
            {
                frameSourceFlags |= KinectInterop.FrameSource.TypePose;

                // clear sensor pose
                SetSensorToWorldMatrix(Vector3.zero, Quaternion.identity, true);
            }
            else
            {
                frameSourceFlags &= ~KinectInterop.FrameSource.TypePose;
            }
        }


        public virtual bool EnableSensorSync(KinectInterop.SensorData sensorData, bool bEnable)
        {
            return false;
        }

        public virtual bool IsSensorMaster()
        {
            return false;
        }

        public virtual bool IsSensorFrameSynched(ulong frameTime, ulong masterTime)
        {
            return false;
        }


        public virtual float GetMinInfraredValue()
        {
            return minInfraredValue;
        }

        public virtual float GetMaxInfraredValue()
        {
            return maxInfraredValue;
        }

        public virtual void SetMinMaxInfraredValues(float minValue, float maxValue)
        {
            minInfraredValue = minValue;
            maxInfraredValue = maxValue;
        }


        public virtual bool IsSensorDataValid()
        {
            return true;
        }

        public virtual float GetBodyTrackerOrientationAngle()
        {
            return 0f;
        }

        public virtual void InitSensorData(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            //if (sensorData.depthImage != null)
            //{
            //    depthImageBufferData = new int[sensorData.depthImage.Length];
            //}

            // depth image data
            if (kinectManager.getDepthFrames == KinectManager.DepthTextureType.DepthTexture)
            {
                depthHistBufferData = new int[MAX_DEPTH_DISTANCE_MM + 1];
                equalHistBufferData = new int[MAX_DEPTH_DISTANCE_MM + 1];
                //sensorData.depthHistBufferData = new int[equalHistBufferData.Length];
            }
            else
            {
                depthHistBufferData = null;
                equalHistBufferData = null;
                //sensorData.depthHistBufferData = null;
            }

            // body image data
            if (kinectManager.getBodyFrames == KinectManager.BodyTextureType.UserTexture)
            {
                depthBodyBufferData = new int[MAX_DEPTH_DISTANCE_MM + 1];
                equalBodyBufferData = new int[MAX_DEPTH_DISTANCE_MM + 1];
                //sensorData.bodyHistBufferData = new int[equalBodyBufferData.Length];
            }
            else
            {
                depthBodyBufferData = null;
                equalBodyBufferData = null;
                //sensorData.bodyHistBufferData = null;
            }

            lock (bodyTrackerLock)
            {
                // save the needed KM settings
                bIgnoreZCoordinates = kinectManager.ignoreZCoordinates;
                bIgnoreInferredJoints = kinectManager.ignoreInferredJoints;
            }
        }

        public virtual void PollSensorFrames(KinectInterop.SensorData sensorData)
        {
        }


        public virtual void PollCoordTransformFrames(KinectInterop.SensorData sensorData)
        {
        }


        public virtual void PollSensorFrameTimes(KinectInterop.SensorData sensorData)
        {
            //// depth-image data
            //if (lastDepthImageTimestamp != rawDepthTimestamp && rawDepthImage != null && depthHistBufferData != null)
            //{
            //    lock (depthImageDataLock)
            //    {
            //        Array.Clear(depthHistBufferData, 0, depthHistBufferData.Length);
            //        Array.Clear(equalHistBufferData, 0, equalHistBufferData.Length);
            //        histDataTotalPoints = 0;

            //        //int depthMinDistance = (int)(minDistance * 1000f);
            //        //int depthMaxDistance = (int)(maxDistance * 1000f);

            //        for (int i = 0; i < rawDepthImage.Length; i++)
            //        {
            //            int depth = rawDepthImage[i];
            //            int limDepth = (depth <= MAX_DEPTH_DISTANCE_MM) ? depth : 0;

            //            if (limDepth > 0)
            //            {
            //                depthHistBufferData[limDepth]++;
            //                histDataTotalPoints++;
            //            }
            //        }

            //        equalHistBufferData[0] = depthHistBufferData[0];
            //        for (int i = 1; i < depthHistBufferData.Length; i++)
            //        {
            //            equalHistBufferData[i] = equalHistBufferData[i - 1] + depthHistBufferData[i];
            //        }

            //        // make depth 0 equal to the max-depth
            //        equalHistBufferData[0] = equalHistBufferData[equalHistBufferData.Length - 1];

            //        lastDepthImageTimestamp = rawDepthTimestamp;
            //        //Debug.Log("lastDepthImageTimestamp: " + lastDepthImageTimestamp);
            //    }
            //}

            //// body-image data
            //if (lastBodyImageTimestamp != rawBodyIndexTimestamp && rawDepthImage != null && depthBodyBufferData != null)
            //{
            //    lock (bodyImageDataLock)
            //    {
            //        Array.Clear(depthBodyBufferData, 0, depthBodyBufferData.Length);
            //        Array.Clear(equalBodyBufferData, 0, equalBodyBufferData.Length);
            //        histBodyTotalPoints = 0;

            //        int depthMinDistance = (int)(minDistance * 1000f);
            //        int depthMaxDistance = (int)(maxDistance * 1000f);

            //        for (int i = 0; i < rawDepthImage.Length; i++)
            //        {
            //            int depth = rawDepthImage[i];
            //            //int limDepth = (depth <= MAX_DEPTH_DISTANCE_MM) ? depth : 0;
            //            int limDepth = (depth >= depthMinDistance && depth <= depthMaxDistance) ? depth : 0;

            //            if (/**rawBodyIndexImage[i] != 255 &&*/ limDepth > 0)
            //            {
            //                depthBodyBufferData[limDepth]++;
            //                histBodyTotalPoints++;
            //            }
            //        }

            //        if(histBodyTotalPoints > 0)
            //        {
            //            equalBodyBufferData[0] = depthBodyBufferData[0];
            //            for (int i = 1; i < depthBodyBufferData.Length; i++)
            //            {
            //                equalBodyBufferData[i] = equalBodyBufferData[i - 1] + depthBodyBufferData[i];
            //            }
            //        }

            //        lastBodyImageTimestamp = rawBodyIndexTimestamp;
            //        //Debug.Log("lastBodyImageTimestamp: " + lastBodyImageTimestamp);
            //    }
            //}

            // ...


            // set the frame timestamps
            if (currentColorTimestamp != rawColorTimestamp)
            {
                // new color frame
                currentColorTimestamp = rawColorTimestamp;
            }

            if (currentDepthTimestamp != rawDepthTimestamp)
            {
                // new depth frame
                currentDepthTimestamp = rawDepthTimestamp;
            }

            if (currentInfraredTimestamp != rawInfraredTimestamp)
            {
                // new depth frame
                currentInfraredTimestamp = rawInfraredTimestamp;
            }

            if (currentPoseTimestamp != rawPoseTimestamp)
            {
                // new pose frame
                currentPoseTimestamp = rawPoseTimestamp;
            }

            if (currentBodyTimestamp != rawBodyTimestamp)
            {
                // new body frame
                currentBodyTimestamp = rawBodyTimestamp;
            }

            if (currentBodyIndexTimestamp != rawBodyIndexTimestamp)
            {
                // new body index frame
                currentBodyIndexTimestamp = rawBodyIndexTimestamp;
            }
        }


        public virtual bool UpdateSensorData(KinectInterop.SensorData sensorData, KinectManager kinectManager, bool isPlayMode)
        {
            // color frame
            if (rawColorImage != null && sensorData.lastColorFrameTime != currentColorTimestamp && !isPlayMode)
            {
                lock (colorFrameLock)
                {
                    Texture2D colorImageTex2D = sensorData.colorImageTexture as Texture2D;
                    if (colorImageTex2D != null)
                    {
                        colorImageTex2D.LoadRawTextureData(rawColorImage);
                        colorImageTex2D.Apply();
                    }

                    sensorData.lastColorFrameTime = currentColorTimestamp;
                    //Debug.Log("D" + deviceIndex + " UpdateColorTimestamp: " + currentColorTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                }
            }

            // depth frame
            if (rawDepthImage != null && sensorData.lastDepthFrameTime != currentDepthTimestamp && !isPlayMode)
            {
                lock (depthFrameLock)
                {
                    // depth image
                    if (sensorData.depthImage != null)
                    {
                        //Buffer.BlockCopy(rawDepthImage, 0, sensorData.depthImage, 0, rawDepthImage.Length * sizeof(ushort));
                        KinectInterop.CopyBytes(rawDepthImage, sizeof(ushort), sensorData.depthImage, sizeof(ushort));
                    }

                    sensorData.lastDepthFrameTime = currentDepthTimestamp;
                    //Debug.Log("D" + deviceIndex + " UpdateDepthTimestamp: " + currentDepthTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                }
            }

            //// depth hist frame
            //if (equalHistBufferData != null && sensorData.lastDepthHistTime != lastDepthImageTimestamp && !isPlayMode)
            //{
            //    lock (depthImageDataLock)
            //    {
            //        if (sensorData.depthHistBufferData != null)
            //        {
            //            KinectInterop.CopyBytes(equalHistBufferData, sizeof(int), sensorData.depthHistBufferData, sizeof(int));
            //        }

            //        sensorData.depthHistTotalPoints = histDataTotalPoints;
            //        sensorData.lastDepthHistTime = lastDepthImageTimestamp;
            //        //Debug.Log("D" + deviceIndex + " UpdateDepthHistTimestamp: " + lastDepthImageTimestamp);
            //    }
            //}

            // infrared frame
            if (rawInfraredImage != null && sensorData.lastInfraredFrameTime != currentInfraredTimestamp && !isPlayMode)
            {
                lock (infraredFrameLock)
                {
                    if (sensorData.infraredImage != null)
                    {
                        //Buffer.BlockCopy(rawInfraredImage, 0, sensorData.infraredImage, 0, rawInfraredImage.Length * sizeof(ushort));
                        KinectInterop.CopyBytes(rawInfraredImage, sizeof(ushort), sensorData.infraredImage, sizeof(ushort));
                    }

                    sensorData.lastInfraredFrameTime = currentInfraredTimestamp;
                    //Debug.Log("D" + deviceIndex + " UpdateInfraredTimestamp: " + currentInfraredTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                }
            }

            // save the current pose frame time
            ulong lastSensorPoseFrameTime = sensorData.lastSensorPoseFrameTime;

            // pose frame
            if (sensorData.lastSensorPoseFrameTime != currentPoseTimestamp && !isPlayMode)
            {
                lock (poseFrameLock)
                {
                    Quaternion localPoseRot = rawPoseRotation;
                    if (sensorRotIgnoreY)
                    {
                        Vector3 localPoseRotEuler = localPoseRot.eulerAngles;
                        localPoseRotEuler.y = sensorRotValueY;
                        localPoseRot = Quaternion.Euler(localPoseRotEuler);
                    }

                    Quaternion corrPoseRotation = Quaternion.Euler(sensorRotOffset) * localPoseRot;
                    if(sensorRotFlipZ)
                    {
                        Vector3 corrPoseRotEuler = corrPoseRotation.eulerAngles;
                        corrPoseRotEuler.z = -corrPoseRotEuler.z;
                        corrPoseRotation = Quaternion.Euler(corrPoseRotEuler);
                    }

                    matLocalPose.SetTRS(rawPosePosition, corrPoseRotation, Vector3.one);
                    Matrix4x4 matTransform = matTransformPose * matLocalPose;

                    sensorPosePosition = matTransform.GetColumn(3);
                    sensorPoseRotation = matTransform.rotation;

                    sensorData.sensorPosePosition = sensorPosePosition;
                    sensorData.sensorPoseRotation = sensorPoseRotation;

                    sensorData.lastSensorPoseFrameTime = currentPoseTimestamp;
                    //Debug.Log("D" + deviceIndex + " UpdatePoseTimestamp: " + currentPoseTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                }
            }

            // check if the pose data has changed
            if (lastSensorPoseFrameTime != sensorData.lastSensorPoseFrameTime)
            {
                ApplySensorPoseUpdate(kinectManager);
            }

            // body frame
            if(sensorData.lastBodyFrameTime != currentBodyTimestamp)
            {
                lock (bodyTrackerLock)
                {
                    // number of bodies
                    sensorData.trackedBodiesCount = trackedBodiesCount;

                    // create the needed slots
                    if (sensorData.alTrackedBodies.Length < trackedBodiesCount)
                    {
                        //sensorData.alTrackedBodies.Add(new KinectInterop.BodyData((int)KinectInterop.JointType.Count));
                        Array.Resize<KinectInterop.BodyData>(ref sensorData.alTrackedBodies, (int)trackedBodiesCount);

                        for (int i = 0; i < trackedBodiesCount; i++)
                        {
                            sensorData.alTrackedBodies[i] = new KinectInterop.BodyData((int)KinectInterop.JointType.Count);
                        }
                    }

                    //alTrackedBodies.CopyTo(sensorData.alTrackedBodies);
                    for (int i = 0; i < trackedBodiesCount; i++)
                    {
                        //sensorData.alTrackedBodies[i] = alTrackedBodies[i];
                        //KinectInterop.CopyBytes<KinectInterop.BodyData>(alTrackedBodies[i], ref sensorData.alTrackedBodies[i]);
                        alTrackedBodies[i].CopyTo(ref sensorData.alTrackedBodies[i]);

                        //KinectInterop.BodyData bodyData = sensorData.alTrackedBodies[i];
                        //Debug.Log("  (U)User ID: " + bodyData.liTrackingID + ", body: " + i + ", bi: " + bodyData.iBodyIndex + ", pos: " + bodyData.joint[0].kinectPos + ", rot: " + bodyData.joint[0].normalRotation.eulerAngles);
                    }

                    sensorData.lastBodyFrameTime = currentBodyTimestamp;
                    //Debug.Log("D" + deviceIndex + " UpdateBodyTimestamp: " + currentBodyTimestamp + ", BodyCount: " + trackedBodiesCount + ", Now: " + DateTime.Now.Ticks /*.ToString("HH:mm:ss.fff")*/);
                }
            }

            // body index frame
            if (sensorData.lastBodyIndexFrameTime != currentBodyIndexTimestamp)
            {
                lock (bodyTrackerLock)
                {
                    // body index image
                    if (rawBodyIndexImage != null && sensorData.bodyIndexImage != null)
                    {
                        KinectInterop.CopyBytes(rawBodyIndexImage, sizeof(byte), sensorData.bodyIndexImage, sizeof(byte));
                    }

                    sensorData.lastBodyIndexFrameTime = currentBodyIndexTimestamp;
                    //Debug.Log("D" + deviceIndex + " UpdateBodyIndexTimestamp: " + currentBodyIndexTimestamp + ", Now: " + DateTime.Now.ToString("HH:mm:ss.fff"));
                }
            }

            //// body hist frame
            //if (equalBodyBufferData != null && sensorData.lastBodyHistTime != lastBodyImageTimestamp && !isPlayMode)
            //{
            //    lock (bodyImageDataLock)
            //    {
            //        if (sensorData.bodyHistBufferData != null)
            //        {
            //            KinectInterop.CopyBytes(equalBodyBufferData, sizeof(int), sensorData.bodyHistBufferData, sizeof(int));
            //        }

            //        sensorData.bodyHistTotalPoints = histBodyTotalPoints;
            //        sensorData.lastBodyHistTime = lastBodyImageTimestamp;
            //        //Debug.Log("D" + deviceIndex + " UpdateBodyHistTimestamp: " + lastBodyImageTimestamp);
            //    }
            //}

            return true;
        }


        // applies the sensor-pose update to transform position & rotation, if needed
        protected void ApplySensorPoseUpdate(KinectManager kinectManager)
        {
            if (kinectManager.getPoseFrames != KinectManager.PoseUsageType.RawPoseData)
            {
                switch (kinectManager.getPoseFrames)
                {
                    case KinectManager.PoseUsageType.DisplayInfo:
                        if (kinectManager.statusInfoText != null)
                        {
                            kinectManager.statusInfoText.text = string.Format("Sensor position: ({0:F2}, {1:F2}, {2:F2}), rotation: {3}",
                                sensorPosePosition.x, sensorPosePosition.y, sensorPosePosition.z, sensorPoseRotation.eulerAngles);
                        }
                        break;

                    case KinectManager.PoseUsageType.UpdateTransform:
                        transform.position = sensorPosePosition;  // sensorData.sensorPosePosition;
                        transform.rotation = sensorPoseRotation;  // sensorData.sensorPoseRotation;
                                                                  //sensorData.sensorTransformUpdated = true;
                        break;
                }
            }
        }


        // returns the anchor position of the background raw image
        public virtual Vector2 GetBackgroundImageAnchorPos(KinectInterop.SensorData sensorData)
        {
            return Vector2.zero;
        }


        // returns the point cloud texture resolution
        public virtual Vector2Int GetPointCloudTexResolution(KinectInterop.SensorData sensorData)
        {
            Vector2Int texRes = Vector2Int.zero;

            switch (pointCloudResolution)
            {
                case PointCloudResolution.DepthCameraResolution:
                    texRes = new Vector2Int(sensorData.depthImageWidth, sensorData.depthImageHeight);
                    break;

                case PointCloudResolution.ColorCameraResolution:
                    texRes = new Vector2Int(sensorData.colorImageWidth, sensorData.colorImageHeight);
                    break;
            }

            if(texRes == Vector2Int.zero)
            {
                throw new Exception("Unsupported point cloud resolution: " + pointCloudResolution + " or the respective image is not available.");
            }

            return texRes;
        }


        // returns the list of point-cloud player indices, or null if the list is empty
        public virtual int[] GetPointCloudPlayerIndices()
        {
            if (string.IsNullOrEmpty(pointCloudPlayerList))
                return null;

            string[] asPlayerIndices = pointCloudPlayerList.Split(",".ToCharArray());
            int[] aiPlayerIndices = new int[asPlayerIndices.Length];

            for(int i = 0; i < asPlayerIndices.Length; i++)
            {
                if (!int.TryParse(asPlayerIndices[i].Trim(), out aiPlayerIndices[i]))
                    aiPlayerIndices[i] = -1;
            }

            return aiPlayerIndices;
        }


        // creates the point-cloud vertex shader and its respective buffers, as needed
        protected virtual bool CreatePointCloudVertexShader(KinectInterop.SensorData sensorData)
        {
            if (sensorData.depthCamIntr == null || sensorData.depthCamIntr.distType == KinectInterop.DistortionType.None)
                return false;

            pointCloudVertexRes = GetPointCloudTexResolution(sensorData);
            pointCloudPlayerIndices = GetPointCloudPlayerIndices();

            if (pointCloudVertexRT == null)
            {
                pointCloudVertexRT = KinectInterop.CreateRenderTexture(pointCloudVertexRT, pointCloudVertexRes.x, pointCloudVertexRes.y, RenderTextureFormat.ARGBHalf);
                //pointCloudVertexRT.enableRandomWrite = true;
                pointCloudVertexRT.Create();
            }

            if (pointCloudVertexShader == null)
            {
                if(pointCloudPlayerIndices == null)
                    pointCloudVertexShader = Resources.Load("PointCloudVertexShaderAll") as ComputeShader;
                else
                    pointCloudVertexShader = Resources.Load("PointCloudBodyVertexShaderAll") as ComputeShader;

                pointCloudVertexKernel = pointCloudVertexShader != null ? pointCloudVertexShader.FindKernel("BakeVertexTex") : -1;
            }

            if (pointCloudSpaceBuffer == null)
            {
                int spaceBufferLength = pointCloudVertexRes.x * pointCloudVertexRes.y * 3;
                pointCloudSpaceBuffer = new ComputeBuffer(spaceBufferLength, sizeof(float));

                // depth2space table
                //Debug.Log("Started creating space tables...");
                //float fTimeStart = Time.realtimeSinceStartup;

                //int depthImageLength = pointCloudVertexRes.x * pointCloudVertexRes.y;
                //Vector3[] depth2SpaceTable = new Vector3[depthImageLength];

                //for (int dy = 0, di = 0; dy < pointCloudVertexRes.y; dy++)
                //{
                //    for (int dx = 0; dx < pointCloudVertexRes.x; dx++, di++)
                //    {
                //        Vector2 depthPos = new Vector2(dx, dy);
                //        depth2SpaceTable[di] = pointCloudResolution == PointCloudResolution.ColorCameraResolution ?
                //            MapColorPointToSpaceCoords(sensorData, depthPos, 1000) : MapDepthPointToSpaceCoords(sensorData, depthPos, 1000);
                //    }
                //}

                depth2SpaceTable = pointCloudResolution == PointCloudResolution.ColorCameraResolution ?
                    GetColorCameraSpaceTable(sensorData) : GetDepthCameraSpaceTable(sensorData);

                //// parallelize for gaining time
                //System.Threading.Tasks.Parallel.For(0, pointCloudVertexRes.y, dy =>
                //{
                //    int di = dy * pointCloudVertexRes.x;

                //    for (var dx = 0; dx < pointCloudVertexRes.x; dx++, di++)
                //    {
                //        Vector2 depthPos = new Vector2(dx, dy);
                //        depth2SpaceTable[di] = pointCloudResolution == PointCloudResolution.ColorCameraResolution ?
                //            MapColorPointToSpaceCoords(sensorData, depthPos, 1000) : MapDepthPointToSpaceCoords(sensorData, depthPos, 1000);
                //    }
                //});

                //Debug.Log("depth2SpaceTable: " + depth2SpaceTable);
                pointCloudSpaceBuffer.SetData(depth2SpaceTable);
                depth2SpaceTable = null;
                //Debug.Log("Finished creating space tables in " + (Time.realtimeSinceStartup - fTimeStart) + "s");
            }

            if (pointCloudDepthBuffer == null)
            {
                int depthBufferLength = pointCloudVertexRes.x * pointCloudVertexRes.y / 2;
                pointCloudDepthBuffer = new ComputeBuffer(depthBufferLength, sizeof(uint));
            }

            if (pointCloudResolution == PointCloudResolution.ColorCameraResolution && colorCamDepthDataFrame == null)
            {
                colorCamDepthDataFrame = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }

            if (pointCloudPlayerIndices != null)
            {
                // body index buffer
                int biBufferLength = pointCloudVertexRes.x * pointCloudVertexRes.y / 4;

                if (pointCloudResolution == PointCloudResolution.ColorCameraResolution && sensorData.colorBodyIndexBuffer == null)
                    sensorData.colorBodyIndexBuffer = new ComputeBuffer(biBufferLength, sizeof(uint));
                else if(pointCloudResolution == PointCloudResolution.DepthCameraResolution && pointCloudBodyIndexBuffer == null)
                    pointCloudBodyIndexBuffer = new ComputeBuffer(biBufferLength, sizeof(uint));
            }

            return true;
        }


        // disposes the point-cloud vertex shader and its respective buffers
        protected virtual void DisposePointCloudVertexShader(KinectInterop.SensorData sensorData)
        {
            if (pointCloudSpaceBuffer != null)
            {
                pointCloudSpaceBuffer.Dispose();
                pointCloudSpaceBuffer = null;
            }

            if (pointCloudDepthBuffer != null)
            {
                pointCloudDepthBuffer.Dispose();
                pointCloudDepthBuffer = null;
            }

            if (pointCloudResolution == PointCloudResolution.ColorCameraResolution && sensorData.colorBodyIndexBuffer != null)
            {
                sensorData.colorBodyIndexBuffer.Dispose();
                sensorData.colorBodyIndexBuffer = null;
            }

            if (pointCloudBodyIndexBuffer != null)
            {
                pointCloudBodyIndexBuffer.Dispose();
                pointCloudBodyIndexBuffer = null;
            }

            if (pointCloudCoordBuffer != null)
            {
                // K2 color camera resolution
                pointCloudCoordBuffer.Dispose();
                pointCloudCoordBuffer = null;
            }

            if (pointCloudVertexRT != null)
            {
                pointCloudVertexRT.Release();
                pointCloudVertexRT = null;
            }

            if (colorCamDepthDataFrame != null)
            {
                colorCamDepthDataFrame = null;
            }

            if (colorCamDepthCoordFrame != null)
            {
                colorCamDepthCoordFrame = null;
            }

            if (pointCloudVertexShader != null)
            {
                pointCloudVertexShader = null;
            }
        }


        // converts player indices to body indices. Returns true on successful conversion. Returns false, if the playerIndices array is null.
        protected bool GetPointCloudBodyIndices(KinectInterop.SensorData sensorData, KinectManager kinectManager, int[] playerIndices, ref int[] bodyIndices)
        {
            if (playerIndices == null || kinectManager == null || kinectManager.userManager == null)
                return false;

            if(bodyIndices == null || bodyIndices.Length != playerIndices.Length)
            {
                bodyIndices = new int[playerIndices.Length];
            }

            if (!userBodyMergerInited && KinectManager.Instance != null && KinectManager.Instance.IsInitialized())
            {
                userBodyMerger = KinectManager.Instance.GetUserBodyMerger();
                userBodyMergerInited = true;
            }

            for (int i = 0; i < playerIndices.Length; i++)
            {
                int iPlayer = playerIndices[i];
                ulong userId = iPlayer >= 0 && iPlayer < KinectInterop.Constants.MaxBodyCount ? kinectManager.userManager.aUserIndexIds[iPlayer] : 0;

                if(userBodyMerger != null && userId > 0)
                {
                    userId = userBodyMerger.GetSensorTrackingId(sensorData.sensorIndex, userId);
                }

                bodyIndices[i] = -1;
                for (int b = 0; b < sensorData.trackedBodiesCount; b++)
                {
                    if (sensorData.alTrackedBodies[b].bIsTracked && sensorData.alTrackedBodies[b].liTrackingID == userId)
                    {
                        bodyIndices[i] = sensorData.alTrackedBodies[b].iBodyIndex;
                        break;
                    }
                }

                //Debug.Log("playerIndex: " + iPlayer + ", userId: " + userId + ", bodyIndex: " + bodyIndices[i]);
            }

            return true;
        }

        // updates the point-cloud vertex shader with the actual data
        protected virtual bool UpdatePointCloudVertexShader(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if (pointCloudVertexShader != null && pointCloudVertexRT != null &&
                ((sensorData.lastDepth2SpaceFrameTime != sensorData.lastDepthFrameTime) || 
                (sensorData.lastDepth2SpaceFrameTime != lastColorCamDepthFrameTime)))
            {
                if (pointCloudResolution == PointCloudResolution.ColorCameraResolution)
                {
                    if(colorCamDepthDataFrame != null)
                    {
                        lock (colorCamDepthFrameLock)
                        {
                            int bufLength = colorCamDepthDataFrame.Length >> 1;
                            if(pointCloudDepthBuffer == null || pointCloudDepthBuffer.count != bufLength)
                            {
                                pointCloudDepthBuffer = KinectInterop.CreateComputeBuffer(pointCloudDepthBuffer, bufLength, sizeof(uint));
                                //Debug.Log("Created pointCloudDepthBuffer with len: " + bufLength);
                            }

                            KinectInterop.SetComputeBufferData(pointCloudDepthBuffer, colorCamDepthDataFrame, bufLength, sizeof(uint));
                        }
                    }

                    sensorData.lastDepth2SpaceFrameTime = lastColorCamDepthFrameTime;
                }
                else
                {
                    if(sensorData.depthImage != null)
                    {
                        int bufLength = sensorData.depthImage.Length >> 1;
                        if (pointCloudDepthBuffer == null || pointCloudDepthBuffer.count != bufLength)
                        {
                            pointCloudDepthBuffer = KinectInterop.CreateComputeBuffer(pointCloudDepthBuffer, bufLength, sizeof(uint));
                            //Debug.Log("Created pointCloudDepthBuffer with len: " + bufLength);
                        }

                        KinectInterop.SetComputeBufferData(pointCloudDepthBuffer, sensorData.depthImage, bufLength, sizeof(uint));
                    }

                    sensorData.lastDepth2SpaceFrameTime = sensorData.lastDepthFrameTime;
                }

                if (GetPointCloudBodyIndices(sensorData, kinectManager, pointCloudPlayerIndices, ref pointCloudBodyIndices))
                {
                    // body index
                    if (pointCloudResolution == PointCloudResolution.ColorCameraResolution && sensorData.colorBodyIndexBuffer != null)
                    {
                        pointCloudVertexShader.SetBuffer(pointCloudVertexKernel, "BodyIndexMap", sensorData.colorBodyIndexBuffer);
                    }
                    else if (pointCloudResolution == PointCloudResolution.DepthCameraResolution && pointCloudBodyIndexBuffer != null && sensorData.bodyIndexImage != null)
                    {
                        int bufLength = sensorData.bodyIndexImage.Length >> 2;
                        if (pointCloudBodyIndexBuffer == null || pointCloudBodyIndexBuffer.count != bufLength)
                        {
                            pointCloudBodyIndexBuffer = KinectInterop.CreateComputeBuffer(pointCloudBodyIndexBuffer, bufLength, sizeof(uint));
                            //Debug.Log("Created pointCloudBodyIndexBuffer with len: " + bufLength);
                        }

                        KinectInterop.SetComputeBufferData(pointCloudBodyIndexBuffer, sensorData.bodyIndexImage, bufLength, sizeof(uint));
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

                if (pointCloudResolution == PointCloudResolution.ColorCameraResolution)
                {
                    if (color2SpaceWidth != sensorData.colorImageWidth || color2SpaceHeight != sensorData.colorImageHeight)
                    {
                        depth2SpaceTable = GetColorCameraSpaceTable(sensorData);
                        pointCloudSpaceBuffer.SetData(depth2SpaceTable);
                        depth2SpaceTable = null;

                        //Debug.Log("Updated color-cam space table to w: " + color2SpaceWidth + "x" + color2SpaceHeight + ", cw: " + sensorData.colorImageWidth + ", ch: " + sensorData.colorImageHeight);
                    }
                }
                else
                {
                    if (depth2SpaceWidth != sensorData.depthImageWidth || depth2SpaceHeight != sensorData.depthImageHeight)
                    {
                        depth2SpaceTable = GetDepthCameraSpaceTable(sensorData);
                        pointCloudSpaceBuffer.SetData(depth2SpaceTable);
                        depth2SpaceTable = null;

                        //Debug.Log("Updated depth-cam space table to w: " + depth2SpaceWidth + "x" + depth2SpaceHeight + ", dw: " + sensorData.depthImageWidth + ", dh: " + sensorData.depthImageHeight);
                    }
                }

                pointCloudVertexRes = GetPointCloudTexResolution(sensorData);
                if (pointCloudVertexRT == null || pointCloudVertexRT.width != pointCloudVertexRes.x || pointCloudVertexRT.height != pointCloudVertexRes.y)
                {
                    pointCloudVertexRT = KinectInterop.CreateRenderTexture(pointCloudVertexRT, pointCloudVertexRes.x, pointCloudVertexRes.y, RenderTextureFormat.ARGBHalf);
                    pointCloudVertexRT.Create();
                }

                KinectInterop.SetComputeShaderInt2(pointCloudVertexShader, "PointCloudRes", pointCloudVertexRes.x, pointCloudVertexRes.y);
                KinectInterop.SetComputeShaderFloat2(pointCloudVertexShader, "SpaceScale", sensorData.sensorSpaceScale.x, sensorData.sensorSpaceScale.y);
                pointCloudVertexShader.SetInt("MinDepth", (int)(minDepthDistance * 1000f));
                pointCloudVertexShader.SetInt("MaxDepth", (int)(maxDepthDistance * 1000f));
                pointCloudVertexShader.SetBuffer(pointCloudVertexKernel, "SpaceTable", pointCloudSpaceBuffer);
                pointCloudVertexShader.SetBuffer(pointCloudVertexKernel, "DepthMap", pointCloudDepthBuffer);
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
        protected virtual bool CreatePointCloudColorShader(KinectInterop.SensorData sensorData)
        {
            //renderDepthAlignedColorTexture.enableRandomWrite = true;

            //if (pointCloudColorRT == null)
            //{
            //    pointCloudColorRT = new RenderTexture(sensorData.depthImageWidth, sensorData.depthImageHeight, 0, RenderTextureFormat.ARGB32);
            //    pointCloudColorRT.enableRandomWrite = true;
            //    pointCloudColorRT.Create();
            //}

            pointCloudColorRes = GetPointCloudTexResolution(sensorData);

            if(pointCloudResolution == PointCloudResolution.DepthCameraResolution)
            {
                if (pointCloudAlignedColorTex == null)
                {
                    pointCloudAlignedColorTex = new Texture2D(sensorData.depthImageWidth, sensorData.depthImageHeight, sensorData.colorImageFormat, false);
                }

                if (depthCamColorDataFrame == null)
                {
                    depthCamColorDataFrame = new byte[sensorData.depthImageWidth * sensorData.depthImageHeight * sensorData.colorImageStride];
                }
            }

            return true;
        }


        // disposes the point-cloud color shader and its respective buffers
        protected virtual void DisposePointCloudColorShader(KinectInterop.SensorData sensorData)
        {
            if (pointCloudCoordBuffer != null)
            {
                // K2 depth camera resolution
                pointCloudCoordBuffer.Dispose();
                pointCloudCoordBuffer = null;
            }

            if (pointCloudColorRT)
            {
                pointCloudColorRT.Release();
                pointCloudColorRT = null;
            }

            if (pointCloudAlignedColorTex != null)
            {
                Destroy(pointCloudAlignedColorTex);
                pointCloudAlignedColorTex = null;
            }

            if (depthCamColorDataFrame != null)
            {
                depthCamColorDataFrame = null;
            }

            if (depthCamColorCoordFrame != null)
            {
                depthCamColorCoordFrame = null;
            }

            if (pointCloudColorShader != null)
            {
                pointCloudColorShader = null;
            }
        }


        // updates the point-cloud color shader with the actual data
        protected virtual bool UpdatePointCloudColorShader(KinectInterop.SensorData sensorData)
        {
            Texture texColor = null;

            if (pointCloudResolution == PointCloudResolution.DepthCameraResolution)
            {
                if (pointCloudAlignedColorTex != null && depthCamColorDataFrame != null && sensorData.lastDepthCamColorFrameTime != lastDepthCamColorFrameTime)
                {
                    lock (depthCamColorFrameLock)
                    {
                        sensorData.lastDepthCamColorFrameTime = lastDepthCamColorFrameTime;

                        pointCloudAlignedColorTex.LoadRawTextureData(depthCamColorDataFrame);
                        pointCloudAlignedColorTex.Apply();

                        if(sensorData.depthCamColorImageTexture != null)
                        {
                            Graphics.CopyTexture(pointCloudAlignedColorTex, sensorData.depthCamColorImageTexture);
                        }
                    }

                    if (pointCloudColorRT != null)
                    {
                        Graphics.CopyTexture(pointCloudAlignedColorTex, pointCloudColorRT);
                    }

                    texColor = pointCloudAlignedColorTex;
                }
            }
            else
            {
                texColor = sensorData.colorImageTexture;
            }

            if(texColor != null)
            {
                if(pointCloudColorTexture != null)
                {
                    Graphics.Blit(texColor, pointCloudColorTexture);
                }

                return true;
            }

            return false;
        }


        // creates the color-depth shader and its respective buffers, as needed
        protected virtual bool CreateColorDepthShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamDepthDataFrame == null)
            {
                colorCamDepthDataFrame = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }

            if (sensorData.colorDepthTexture == null)
            {
                sensorData.colorDepthTexture = KinectInterop.CreateRenderTexture(sensorData.colorDepthTexture, sensorData.colorImageWidth, sensorData.colorImageHeight, RenderTextureFormat.ARGB32);
                //sensorData.colorDepthTexture.enableRandomWrite = true;
                sensorData.colorDepthTexture.Create();
            }

            colorDepthShaderInited = true;

            return true;
        }


        // disposes the color-depth shader and its respective buffers
        protected virtual void DisposeColorDepthShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamDepthDataFrame != null)
            {
                colorCamDepthDataFrame = null;
            }

            if (sensorData.colorDepthTexture != null)
            {
                sensorData.colorDepthTexture.Release();
                sensorData.colorDepthTexture = null;
            }

            if (pointCloudDepthBuffer != null)
            {
                pointCloudDepthBuffer.Dispose();
                pointCloudDepthBuffer = null;
            }

            if (pointCloudCoordBuffer != null)
            {
                pointCloudCoordBuffer.Dispose();
                pointCloudCoordBuffer = null;
            }

            if (colorCamDepthCoordFrame != null)
            {
                colorCamDepthCoordFrame = null;
            }

            if (colorDepthShader != null)
            {
                colorDepthShader = null;
            }

            colorDepthShaderInited = false;
        }


        // updates the color-depth shader with the actual data
        protected virtual bool UpdateColorDepthShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamDepthDataFrame != null)
            {
                if(/**sensorData.usedColorDepthBufferTime == sensorData.lastColorDepthBufferTime && */
                    sensorData.lastColorDepthBufferTime != lastColorCamDepthFrameTime)
                {
                    lock(colorCamDepthFrameLock)
                    {
                        sensorData.lastColorDepthBufferTime = lastColorCamDepthFrameTime;

                        if (sensorData.colorImageTexture != null)
                        {
                            if(sensorData.colorDepthTexture == null || sensorData.colorDepthTexture.width != sensorData.colorImageWidth || sensorData.colorDepthTexture.height != sensorData.colorImageHeight)
                            {
                                sensorData.colorDepthTexture = KinectInterop.CreateRenderTexture(sensorData.colorDepthTexture, sensorData.colorImageWidth, sensorData.colorImageHeight, RenderTextureFormat.ARGB32);
                                sensorData.colorDepthTexture.Create();
                            }

                            Graphics.Blit(sensorData.colorImageTexture, sensorData.colorDepthTexture);
                        }

                        if(sensorData.colorDepthBuffer != null)
                        {
                            int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 1;
                            if(sensorData.colorDepthBuffer.count != bufferLength)
                            {
                                sensorData.colorDepthBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorDepthBuffer, bufferLength, sizeof(uint));
                            }

                            KinectInterop.SetComputeBufferData(sensorData.colorDepthBuffer, colorCamDepthDataFrame, bufferLength, sizeof(uint));
                        }

                        if(sensorData.colorCamDepthImage != null)
                        {
                            if(sensorData.colorCamDepthImage.Length != colorCamDepthDataFrame.Length)
                            {
                                sensorData.colorCamDepthImage = new ushort[colorCamDepthDataFrame.Length];
                            }

                            KinectInterop.CopyBytes(colorCamDepthDataFrame, sizeof(ushort), sensorData.colorCamDepthImage, sizeof(ushort));
                            sensorData.lastColorCamDepthFrameTime = lastColorCamDepthFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }


        // creates the color-infrared shader and its respective buffers, as needed
        protected virtual bool CreateColorInfraredShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamInfraredDataFrame == null)
            {
                colorCamInfraredDataFrame = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }

            if (sensorData.colorInfraredTexture == null)
            {
                sensorData.colorInfraredTexture = KinectInterop.CreateRenderTexture(sensorData.colorInfraredTexture, sensorData.colorImageWidth, sensorData.colorImageHeight, RenderTextureFormat.ARGB32);
                //sensorData.colorInfraredTexture.enableRandomWrite = true;
                sensorData.colorInfraredTexture.Create();
            }

            Shader infraredImageShader = Shader.Find("Kinect/InfraredImageShader");
            if(infraredImageShader)
            {
                sensorData.colorInfraredMaterial = new Material(infraredImageShader);
            }

            colorInfraredShaderInited = true;

            return true;
        }


        // disposes the color-infrared shader and its respective buffers
        protected virtual void DisposeColorInfraredShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamInfraredDataFrame != null)
            {
                colorCamInfraredDataFrame = null;
            }

            if (sensorData.colorInfraredTexture != null)
            {
                sensorData.colorInfraredTexture.Release();
                sensorData.colorInfraredTexture = null;
            }

            if(sensorData.colorInfraredMaterial != null)
            {
                sensorData.colorInfraredMaterial = null;
            }

            if (pointCloudInfraredBuffer != null)
            {
                pointCloudInfraredBuffer.Dispose();
                pointCloudInfraredBuffer = null;
            }

            if (pointCloudCoordBuffer != null)
            {
                pointCloudCoordBuffer.Dispose();
                pointCloudCoordBuffer = null;
            }

            if (colorCamDepthCoordFrame != null)
            {
                colorCamDepthCoordFrame = null;
            }

            if (colorInfraredShader != null)
            {
                colorInfraredShader = null;
            }

            colorInfraredShaderInited = false;
        }


        // updates the color-infrared shader with the actual data
        protected virtual bool UpdateColorInfraredShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamInfraredDataFrame != null)
            {
                if (/**sensorData.usedColorInfraredBufferTime == sensorData.lastColorInfraredBufferTime && */
                    sensorData.lastColorInfraredBufferTime != lastColorCamInfraredFrameTime)
                {
                    lock (colorCamInfraredFrameLock)
                    {
                        sensorData.lastColorInfraredBufferTime = lastColorCamInfraredFrameTime;

                        //if (sensorData.colorImageTexture != null)
                        //{
                        //    Graphics.Blit(sensorData.colorImageTexture, sensorData.colorInfraredTexture);
                        //}

                        if (sensorData.colorInfraredBuffer != null)
                        {
                            int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 1;
                            if(sensorData.colorInfraredBuffer.count != bufferLength)
                            {
                                sensorData.colorInfraredBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorInfraredBuffer, bufferLength, sizeof(uint));
                            }

                            KinectInterop.SetComputeBufferData(sensorData.colorInfraredBuffer, colorCamInfraredDataFrame, bufferLength, sizeof(uint));
                        }

                        if (sensorData.colorCamInfraredImage != null)
                        {
                            if(sensorData.colorCamInfraredImage.Length != colorCamInfraredDataFrame.Length)
                            {
                                sensorData.colorCamInfraredImage = new ushort[colorCamInfraredDataFrame.Length];
                            }

                            KinectInterop.CopyBytes(colorCamInfraredDataFrame, sizeof(ushort), sensorData.colorCamInfraredImage, sizeof(ushort));
                            sensorData.lastColorCamInfraredFrameTime = lastColorCamInfraredFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }


        // creates the color-camera body index shader and its respective buffers, as needed
        protected virtual bool CreateColorBodyIndexShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamBodyIndexFrame == null)
            {
                colorCamBodyIndexFrame = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }

            if (sensorData.colorBodyIndexTexture == null)
            {
                sensorData.colorBodyIndexTexture = KinectInterop.CreateRenderTexture(sensorData.colorBodyIndexTexture, sensorData.colorImageWidth, sensorData.colorImageHeight, RenderTextureFormat.ARGB32);
                //sensorData.colorBodyIndexTexture.enableRandomWrite = true;
                sensorData.colorBodyIndexTexture.Create();
            }

            colorBodyIndexShaderInited = true;

            return true;
        }


        // disposes the color-camera body index shader and its respective buffers
        protected virtual void DisposeColorBodyIndexShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamBodyIndexFrame != null)
            {
                colorCamBodyIndexFrame = null;
            }

            if (sensorData.colorBodyIndexTexture != null)
            {
                sensorData.colorBodyIndexTexture.Release();
                sensorData.colorBodyIndexTexture = null;
            }

            if (bodyIndexBuffer != null)
            {
                bodyIndexBuffer.Dispose();
                bodyIndexBuffer = null;
            }

            if (pointCloudCoordBuffer != null)
            {
                pointCloudCoordBuffer.Dispose();
                pointCloudCoordBuffer = null;
            }

            if (colorCamDepthCoordFrame != null)
            {
                colorCamDepthCoordFrame = null;
            }

            if (colorBodyIndexShader != null)
            {
                colorBodyIndexShader = null;
            }

            colorBodyIndexShaderInited = false;
        }


        // updates the color-camera body index shader with the actual data
        protected virtual bool UpdateColorBodyIndexShader(KinectInterop.SensorData sensorData)
        {
            if (colorCamBodyIndexFrame != null)
            {
                if (/**sensorData.usedColorBodyIndexBufferTime == sensorData.lastColorBodyIndexBufferTime && */
                    sensorData.lastColorBodyIndexBufferTime != lastColorCamBodyIndexFrameTime)
                {
                    lock (colorCamBodyIndexFrameLock)
                    {
                        sensorData.lastColorBodyIndexBufferTime = lastColorCamBodyIndexFrameTime;

                        if (sensorData.colorImageTexture != null)
                        {
                            if(sensorData.colorBodyIndexTexture == null || sensorData.colorBodyIndexTexture.width != sensorData.colorImageWidth || sensorData.colorBodyIndexTexture.height != sensorData.colorImageHeight)
                            {
                                sensorData.colorBodyIndexTexture = KinectInterop.CreateRenderTexture(sensorData.colorBodyIndexTexture, sensorData.colorImageWidth, sensorData.colorImageHeight, RenderTextureFormat.ARGB32);
                                sensorData.colorBodyIndexTexture.Create();
                            }

                            Graphics.Blit(sensorData.colorImageTexture, sensorData.colorBodyIndexTexture);
                        }

                        if(sensorData.colorBodyIndexBuffer != null)
                        {
                            int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 2;
                            if(sensorData.colorBodyIndexBuffer.count != bufferLength)
                            {
                                sensorData.colorBodyIndexBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorBodyIndexBuffer, bufferLength, sizeof(uint));
                            }

                            KinectInterop.SetComputeBufferData(sensorData.colorBodyIndexBuffer, colorCamBodyIndexFrame, bufferLength, sizeof(uint));
                        }

                        if (sensorData.colorCamBodyIndexImage != null)
                        {
                            if(sensorData.colorCamBodyIndexImage.Length != colorCamBodyIndexFrame.Length)
                            {
                                sensorData.colorCamBodyIndexImage = new byte[colorCamBodyIndexFrame.Length];
                            }

                            KinectInterop.CopyBytes(colorCamBodyIndexFrame, sizeof(byte), sensorData.colorCamBodyIndexImage, sizeof(byte));
                            sensorData.lastColorCamBodyIndexFrameTime = lastColorCamBodyIndexFrameTime;
                        }
                    }
                }

                return true;
            }

            return false;
        }


        // creates the depth-tex shader and its respective buffers, as needed
        protected virtual bool CreateDepthTexShader(KinectInterop.SensorData sensorData)
        {
            Shader depthTexShader = Shader.Find("Kinect/DepthTexShader");
            if (depthTexShader != null)
            {
                sensorData.depthTexMaterial = new Material(depthTexShader);

                if (sensorData.depthImageBuffer == null)
                {
                    int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                    sensorData.depthImageBuffer = KinectInterop.CreateComputeBuffer(sensorData.depthImageBuffer, depthBufferLength, sizeof(uint));
                }
            }

            return true;
        }


        // disposes the depth-tex shader and its respective buffers
        protected virtual void DisposeDepthTexShader(KinectInterop.SensorData sensorData)
        {
            if (sensorData.depthTexTexture != null)
            {
                sensorData.depthTexTexture.Release();
                sensorData.depthTexTexture = null;
            }

            if (sensorData.depthImageBuffer != null)
            {
                sensorData.depthImageBuffer.Dispose();
                sensorData.depthImageBuffer = null;
            }

            sensorData.depthTexMaterial = null;
        }


        // creates the infrared-tex shader and its respective buffers, as needed
        protected virtual bool CreateInfraredTexShader(KinectInterop.SensorData sensorData)
        {
            Shader infraredTexShader = Shader.Find("Kinect/DepthTexShader");
            if (infraredTexShader != null)
            {
                sensorData.infraredTexMaterial = new Material(infraredTexShader);

                if (sensorData.infraredImageBuffer == null)
                {
                    int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                    sensorData.infraredImageBuffer = KinectInterop.CreateComputeBuffer(sensorData.infraredImageBuffer, depthBufferLength, sizeof(uint));
                }
            }

            return true;
        }


        // disposes the infrared-tex shader and its respective buffers
        protected virtual void DisposeInfraredTexShader(KinectInterop.SensorData sensorData)
        {
            if (sensorData.infraredTexTexture != null)
            {
                sensorData.infraredTexTexture.Release();
                sensorData.infraredTexTexture = null;
            }

            if (sensorData.infraredImageBuffer != null)
            {
                sensorData.infraredImageBuffer.Dispose();
                sensorData.infraredImageBuffer = null;
            }

            sensorData.infraredTexMaterial = null;
        }


        // updates transformed frame textures, if needed
        public virtual bool UpdateTransformedFrameTextures(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            // depth cam space frame
            if (pointCloudVertexTexture != null)
            {
                if (pointCloudVertexShader != null || CreatePointCloudVertexShader(sensorData))
                {
                    UpdatePointCloudVertexShader(sensorData, kinectManager);
                }
            }
            else
            {
                if (pointCloudVertexShader != null)
                {
                    DisposePointCloudVertexShader(sensorData);
                }
            }

            // depth cam color frame
            if (pointCloudColorTexture != null || sensorData.depthCamColorImageTexture != null)
            {
                if (pointCloudColorShader != null || pointCloudAlignedColorTex != null || CreatePointCloudColorShader(sensorData))
                {
                    UpdatePointCloudColorShader(sensorData);
                }
            }
            else
            {
                if (pointCloudColorShader != null || pointCloudAlignedColorTex != null)
                {
                    DisposePointCloudColorShader(sensorData);
                }
            }

            // color cam depth frame
            if (sensorData.colorDepthBuffer != null || sensorData.colorCamDepthImage != null)
            {
                if(colorDepthShaderInited || CreateColorDepthShader(sensorData))
                {
                    UpdateColorDepthShader(sensorData);
                }
            }
            else
            {
                if(colorDepthShaderInited)
                {
                    DisposeColorDepthShader(sensorData);
                }
            }

            // color cam infrared frame
            if (sensorData.colorInfraredBuffer != null || sensorData.colorCamInfraredImage != null)
            {
                if (colorInfraredShaderInited || CreateColorInfraredShader(sensorData))
                {
                    UpdateColorInfraredShader(sensorData);
                }
            }
            else
            {
                if (colorInfraredShaderInited)
                {
                    DisposeColorInfraredShader(sensorData);
                }
            }

            // color cam body index frame
            if (sensorData.colorBodyIndexBuffer != null || sensorData.colorCamBodyIndexImage != null)
            {
                if (colorBodyIndexShaderInited || CreateColorBodyIndexShader(sensorData))
                {
                    UpdateColorBodyIndexShader(sensorData);
                }
            }
            else
            {
                if (colorBodyIndexShaderInited)
                {
                    DisposeColorBodyIndexShader(sensorData);
                }
            }

            // depth-tex
            if (sensorData.depthTexTexture != null)
            {
                if (sensorData.depthTexMaterial != null || CreateDepthTexShader(sensorData))
                {
                    //UpdateDepthTexShader(sensorData);  // code moved to UpdateSensorTextures()
                }
            }
            else
            {
                if (sensorData.depthTexMaterial != null)
                {
                    DisposeDepthTexShader(sensorData);
                }
            }

            // infrared-tex
            if (sensorData.infraredTexTexture != null)
            {
                if (sensorData.infraredTexMaterial != null || CreateInfraredTexShader(sensorData))
                {
                    //UpdateInfraredTexShader(sensorData);  // code moved to UpdateSensorTextures()
                }
            }
            else
            {
                if (sensorData.infraredTexMaterial != null)
                {
                    DisposeInfraredTexShader(sensorData);
                }
            }

            return true;
        }


        public virtual bool UpdateSensorTextures(KinectInterop.SensorData sensorData, KinectManager kinectManager, ulong prevDepthFrameTime, ulong prevIrFrameTime)
        {
            // check if the depth data has changed
            if (prevDepthFrameTime != sensorData.lastDepthFrameTime || prevIrFrameTime != sensorData.lastInfraredFrameTime)
            {
                // depth texture
                if (sensorData.depthImageTexture != null && sensorData.depthImageMaterial != null &&
                    sensorData.depthImage != null && sensorData.lastDepthImageTime != sensorData.lastDepthFrameTime)
                {
                    UpdateSensorTexDepthImg(sensorData, kinectManager);

                    sensorData.lastDepthImageTime = sensorData.lastDepthFrameTime;
                    //Debug.Log("D" + deviceIndex + " DepthTextureTimestamp: " + sensorData.lastDepthImageTime);
                }

                // infrared texture
                if (((sensorData.infraredImageTexture != null && sensorData.infraredImageMaterial != null) || (sensorData.colorInfraredTexture != null && sensorData.colorInfraredMaterial != null)) &&
                    sensorData.infraredImage != null && sensorData.lastInfraredImageTime != sensorData.lastInfraredFrameTime)
                {
                    UpdateSensorTexInfraredImg(sensorData, kinectManager);

                    sensorData.lastInfraredImageTime = sensorData.lastInfraredFrameTime;
                    //Debug.Log("D" + deviceIndex + " InfraredTextureTimestamp: " + sensorData.lastInfraredImageTime);
                }

                // user texture & body texture
                if (sensorData.bodyImageTexture != null && sensorData.bodyImageMaterial != null &&
                    sensorData.lastBodyImageTime != sensorData.lastBodyIndexFrameTime)
                {
                    UpdateSensorTexBodyIndexImg(sensorData, kinectManager);

                    sensorData.lastBodyImageTime = sensorData.lastBodyIndexFrameTime;
                    //Debug.Log("D" + deviceIndex + " BodyTextureTimestamp: " + sensorData.lastBodyImageTime);
                }

                // depth-hsv
                if (sensorData.depthTexMaterial != null && sensorData.depthImage != null &&
                    sensorData.lastDepthTexTime != sensorData.lastDepthFrameTime)
                {
                    UpdateSensorTexDepthHsv(sensorData, kinectManager);

                    sensorData.lastDepthTexTime = sensorData.lastDepthFrameTime;
                    //Debug.Log("D" + deviceIndex + " DepthTexTimestamp: " + sensorData.lastDepthTexTime);
                }

                // infrared-hsv
                if (sensorData.infraredTexMaterial != null && sensorData.infraredImage != null &&
                    sensorData.lastInfraredTexTime != sensorData.lastInfraredFrameTime)
                {
                    UpdateSensorTexInfraredHsv(sensorData, kinectManager);

                    sensorData.lastInfraredTexTime = sensorData.lastInfraredFrameTime;
                    //Debug.Log("D" + deviceIndex + " InfraredTexTimestamp: " + sensorData.lastInfraredTexTime);
                }
            }

            return true;
        }

        // updates sensor depth image
        private void UpdateSensorTexDepthImg(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            // depth-image hist data
            Array.Clear(depthHistBufferData, 0, depthHistBufferData.Length);
            Array.Clear(equalHistBufferData, 0, equalHistBufferData.Length);
            depthHistTotalPoints = 0;

            //int depthMinDistance = (int)(minDistance * 1000f);
            //int depthMaxDistance = (int)(maxDistance * 1000f);

            int frameLen = sensorData.depthImage.Length;
            for (int i = 0; i < frameLen; i++)
            {
                int depth = sensorData.depthImage[i];
                int limDepth = (depth <= MAX_DEPTH_DISTANCE_MM) ? depth : 0;

                if (limDepth > 0)
                {
                    depthHistBufferData[limDepth]++;
                    depthHistTotalPoints++;
                }
            }

            equalHistBufferData[0] = depthHistBufferData[0];
            for (int i = 1; i < depthHistBufferData.Length; i++)
            {
                equalHistBufferData[i] = equalHistBufferData[i - 1] + depthHistBufferData[i];
            }

            // make depth 0 equal to the max-depth
            equalHistBufferData[0] = equalHistBufferData[equalHistBufferData.Length - 1];

            if (sensorData.depthImageBuffer != null && sensorData.depthImage != null)
            {
                int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                KinectInterop.SetComputeBufferData(sensorData.depthImageBuffer, sensorData.depthImage, depthBufferLength, sizeof(uint));
            }

            if (sensorData.depthHistBuffer != null)
            {
                //sensorData.depthHistBuffer.SetData(equalHistBufferData);
                KinectInterop.SetComputeBufferData(sensorData.depthHistBuffer, equalHistBufferData, equalHistBufferData.Length, sizeof(int));
            }

            sensorData.depthImageMaterial.SetInt("_TexResX", sensorData.depthImageWidth);
            sensorData.depthImageMaterial.SetInt("_TexResY", sensorData.depthImageHeight);
            sensorData.depthImageMaterial.SetInt("_MinDepth", (int)(minDepthDistance * 1000f));
            sensorData.depthImageMaterial.SetInt("_MaxDepth", (int)(maxDepthDistance * 1000f));
            sensorData.depthImageMaterial.SetInt("_TotalPoints", depthHistTotalPoints);
            sensorData.depthImageMaterial.SetBuffer("_DepthMap", sensorData.depthImageBuffer);
            sensorData.depthImageMaterial.SetBuffer("_HistMap", sensorData.depthHistBuffer);

            Graphics.Blit(null, sensorData.depthImageTexture, sensorData.depthImageMaterial);
        }

        // updates sensor infrared image
        private void UpdateSensorTexInfraredImg(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if(sensorData.infraredImageTexture != null && sensorData.infraredImageMaterial != null)
            {
                if (sensorData.infraredImageBuffer != null && sensorData.infraredImage != null)
                {
                    int infraredBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                    KinectInterop.SetComputeBufferData(sensorData.infraredImageBuffer, sensorData.infraredImage, infraredBufferLength, sizeof(uint));
                }

                sensorData.infraredImageMaterial.SetInt("_TexResX", sensorData.depthImageWidth);
                sensorData.infraredImageMaterial.SetInt("_TexResY", sensorData.depthImageHeight);
                sensorData.infraredImageMaterial.SetFloat("_MinValue", minInfraredValue);
                sensorData.infraredImageMaterial.SetFloat("_MaxValue", maxInfraredValue);
                sensorData.infraredImageMaterial.SetBuffer("_InfraredMap", sensorData.infraredImageBuffer);

                Graphics.Blit(null, sensorData.infraredImageTexture, sensorData.infraredImageMaterial);
            }

            if (sensorData.colorInfraredBuffer != null && sensorData.colorInfraredMaterial != null)
            {
                sensorData.colorInfraredMaterial.SetInt("_TexResX", sensorData.colorImageWidth);
                sensorData.colorInfraredMaterial.SetInt("_TexResY", sensorData.colorImageHeight);
                sensorData.colorInfraredMaterial.SetFloat("_MinValue", minInfraredValue);
                sensorData.colorInfraredMaterial.SetFloat("_MaxValue", maxInfraredValue);
                sensorData.colorInfraredMaterial.SetBuffer("_InfraredMap", sensorData.colorInfraredBuffer);

                Graphics.Blit(null, sensorData.colorInfraredTexture, sensorData.colorInfraredMaterial);
            }
        }

        // updates sensor body-index image
        private void UpdateSensorTexBodyIndexImg(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if (kinectManager.getBodyFrames == KinectManager.BodyTextureType.UserTexture)
            {
                // body-image hist data
                Array.Clear(depthBodyBufferData, 0, depthBodyBufferData.Length);
                Array.Clear(equalBodyBufferData, 0, equalBodyBufferData.Length);
                bodyHistTotalPoints = 0;

                int depthMinDistance = (int)(minDepthDistance * 1000f);
                int depthMaxDistance = (int)(maxDepthDistance * 1000f);

                int frameLen = sensorData.depthImage.Length;
                for (int i = 0; i < frameLen; i++)
                {
                    int depth = sensorData.depthImage[i];
                    //int limDepth = (depth <= MAX_DEPTH_DISTANCE_MM) ? depth : 0;
                    int limDepth = (depth >= depthMinDistance && depth <= depthMaxDistance) ? depth : 0;

                    if (/**rawBodyIndexImage[i] != 255 &&*/ limDepth > 0)
                    {
                        depthBodyBufferData[limDepth]++;
                        bodyHistTotalPoints++;
                    }
                }

                if (bodyHistTotalPoints > 0)
                {
                    equalBodyBufferData[0] = depthBodyBufferData[0];
                    for (int i = 1; i < depthBodyBufferData.Length; i++)
                    {
                        equalBodyBufferData[i] = equalBodyBufferData[i - 1] + depthBodyBufferData[i];
                    }
                }

                if (sensorData.bodyHistBuffer != null)
                {
                    //sensorData.depthHistBuffer.SetData(equalBodyBufferData);
                    KinectInterop.SetComputeBufferData(sensorData.bodyHistBuffer, equalBodyBufferData, equalBodyBufferData.Length, sizeof(int));
                }
            }

            if (sensorData.bodyIndexBuffer != null && sensorData.bodyIndexImage != null)
            {
                int bodyIndexBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 4;
                KinectInterop.SetComputeBufferData(sensorData.bodyIndexBuffer, sensorData.bodyIndexImage, bodyIndexBufferLength, sizeof(uint));
            }

            float minDist = minDepthDistance;  // kinectManager.minUserDistance != 0f ? kinectManager.minUserDistance : minDepthDistance;
            float maxDist = maxDepthDistance;  // kinectManager.maxUserDistance != 0f ? kinectManager.maxUserDistance : maxDepthDistance;

            sensorData.bodyImageMaterial.SetInt("_TexResX", sensorData.depthImageWidth);
            sensorData.bodyImageMaterial.SetInt("_TexResY", sensorData.depthImageHeight);
            sensorData.bodyImageMaterial.SetInt("_MinDepth", (int)(minDist * 1000f));
            sensorData.bodyImageMaterial.SetInt("_MaxDepth", (int)(maxDist * 1000f));

            sensorData.bodyImageMaterial.SetBuffer("_BodyIndexMap", sensorData.bodyIndexBuffer);

            if (kinectManager.getBodyFrames == KinectManager.BodyTextureType.UserTexture)
            {
                if (sensorData.depthImageBuffer != null && sensorData.depthImage != null)
                {
                    int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                    KinectInterop.SetComputeBufferData(sensorData.depthImageBuffer, sensorData.depthImage, depthBufferLength, sizeof(uint));
                }

                sensorData.bodyImageMaterial.SetBuffer("_DepthMap", sensorData.depthImageBuffer);
                sensorData.bodyImageMaterial.SetBuffer("_HistMap", sensorData.bodyHistBuffer);
                sensorData.bodyImageMaterial.SetInt("_TotalPoints", bodyHistTotalPoints);
                //sensorData.bodyImageMaterial.SetInt("_FirstUserIndex", kinectManager.GetBodyIndexByUserId(kinectManager.userManager.liPrimaryUserId));

                Color[] bodyIndexColors = kinectManager.GetBodyIndexColors();
                sensorData.bodyImageMaterial.SetColorArray("_BodyIndexColors", bodyIndexColors);
            }

            Graphics.Blit(null, sensorData.bodyImageTexture, sensorData.bodyImageMaterial);
        }

        // updates sensor depth-hsv image
        private void UpdateSensorTexDepthHsv(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if (sensorData.depthImageBuffer != null && sensorData.depthImage != null)
            {
                int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                KinectInterop.SetComputeBufferData(sensorData.depthImageBuffer, sensorData.depthImage, depthBufferLength, sizeof(uint));
            }

            sensorData.depthTexMaterial.SetBuffer("_DepthMap", sensorData.depthImageBuffer);
            sensorData.depthTexMaterial.SetInt("_TexResX", sensorData.depthImageWidth);
            sensorData.depthTexMaterial.SetInt("_TexResY", sensorData.depthImageHeight);
            sensorData.depthTexMaterial.SetInt("_MinDepth", (int)(minDepthDistance * 1000f));
            sensorData.depthTexMaterial.SetInt("_MaxDepth", (int)(maxDepthDistance * 1000f));

            Graphics.Blit(null, sensorData.depthTexTexture, sensorData.depthTexMaterial);
        }

        // updates sensor infrared-hsv image
        private void UpdateSensorTexInfraredHsv(KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if (sensorData.infraredImageBuffer != null && sensorData.infraredImage != null)
            {
                int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                KinectInterop.SetComputeBufferData(sensorData.infraredImageBuffer, sensorData.infraredImage, depthBufferLength, sizeof(uint));
            }

            sensorData.infraredTexMaterial.SetBuffer("_DepthMap", sensorData.infraredImageBuffer);
            sensorData.infraredTexMaterial.SetInt("_TexResX", sensorData.depthImageWidth);
            sensorData.infraredTexMaterial.SetInt("_TexResY", sensorData.depthImageHeight);
            sensorData.infraredTexMaterial.SetInt("_MinDepth", (int)minInfraredValue);
            sensorData.infraredTexMaterial.SetInt("_MaxDepth", (int)maxInfraredValue);

            Graphics.Blit(null, sensorData.infraredTexTexture, sensorData.infraredTexMaterial);
        }


        // returns depth-to-color-camera matrix
        public virtual Matrix4x4 GetDepthToColorCameraMatrix()
        {
            return depth2colorCamMat;
        }


        // returns sensor-to-world matrix
        public virtual Matrix4x4 GetSensorToWorldMatrix()
        {
            Matrix4x4 mSensor = Matrix4x4.identity;
            mSensor.SetTRS(sensorPosePosition, sensorPoseRotation, Vector3.one);

            return mSensor;
        }


        // sets sensor-to-world matrix
        public virtual void SetSensorToWorldMatrix(Matrix4x4 mSensor2World, bool isUpdateTransform)
        {
            Vector3 sensorWorldPosition = mSensor2World.GetColumn(3);
            Quaternion sensorWorldRotation = mSensor2World.rotation;

            SetSensorToWorldMatrix(sensorWorldPosition, sensorWorldRotation, isUpdateTransform);
        }

        // sets sensor-to-world matrix
        public virtual void SetSensorToWorldMatrix(Vector3 sensorWorldPosition, Quaternion sensorWorldRotation, bool isUpdateTransform)
        {
            initialPosePosition = sensorPosePosition = sensorWorldPosition;
            initialPoseRotation = sensorPoseRotation = sensorWorldRotation;
            matTransformPose.SetTRS(initialPosePosition, initialPoseRotation, Vector3.one);

            if (isUpdateTransform)
            {
                transform.position = sensorPosePosition;
                transform.rotation = sensorPoseRotation;
            }
        }


        // returns sensor rotation, properly adjusted for body tracking
        protected Quaternion GetSensorRotationNotZFlipped(bool bInverted)
        {
            Vector3 sensorRotEuler = sensorPoseRotation.eulerAngles;

            if (sensorRotFlipZ)
            {
                sensorRotEuler.z = -sensorRotEuler.z;
            }

            Quaternion sensorRot = Quaternion.Euler(sensorRotEuler);
            return bInverted ? Quaternion.Inverse(sensorRot) : sensorRot; 
        }


        // returns sensor transform. Please note transform updates depend on the getPoseFrames-KM setting.
        public virtual Transform GetSensorTransform()
        {
            return transform;
        }


        // unprojects plane point into the space
        public virtual Vector3 UnprojectPoint(KinectInterop.CameraIntrinsics intr, Vector2 pixel, float depth)
        {
            return Vector3.zero;
        }


        // projects space point onto a plane
        public virtual Vector2 ProjectPoint(KinectInterop.CameraIntrinsics intr, Vector3 point)
        {
            return Vector2.zero;
        }


        // transforms a point from one space to another
        public virtual Vector3 TransformPoint(KinectInterop.CameraExtrinsics extr, Vector3 point)
        {
            return Vector3.zero;
        }


        public virtual Vector3[] GetDepthCameraSpaceTable(KinectInterop.SensorData sensorData)
        {
            if (sensorData == null || sensorPlatform == KinectInterop.DepthSensorPlatform.None || string.IsNullOrEmpty(sensorDeviceId))
                return null;

            if (depth2SpaceTable == null || depth2SpaceWidth != sensorData.depthImageWidth || depth2SpaceHeight != sensorData.depthImageHeight)
            {
                depth2SpaceTable = KinectInterop.LoadSpaceTable(sensorPlatform, sensorDeviceId, "depth", sensorData.depthImageWidth, sensorData.depthImageHeight);
            }

            depth2SpaceWidth = sensorData.depthImageWidth;
            depth2SpaceHeight = sensorData.depthImageHeight;

            // depth2space table
            int depthImageLength = sensorData.depthImageWidth * sensorData.depthImageHeight;
            if (depth2SpaceTable == null || depth2SpaceTable.Length != depthImageLength)
            {
                depth2SpaceTable = new Vector3[depthImageLength];

                for (int dy = 0, di = 0; dy < sensorData.depthImageHeight; dy++)
                {
                    for (int dx = 0; dx < sensorData.depthImageWidth; dx++, di++)
                    {
                        Vector2 depthPos = new Vector2(dx, dy);
                        depth2SpaceTable[di] = MapDepthPointToSpaceCoords(sensorData, depthPos, 1000);
                    }
                }

                KinectInterop.SaveSpaceTable(depth2SpaceTable, sensorPlatform, sensorDeviceId, "depth", sensorData.depthImageWidth, sensorData.depthImageHeight);
            }

            return depth2SpaceTable;
        }


        public virtual Vector3[] GetColorCameraSpaceTable(KinectInterop.SensorData sensorData)
        {
            if (sensorData == null || sensorPlatform == KinectInterop.DepthSensorPlatform.None || string.IsNullOrEmpty(sensorDeviceId))
                return null;

            if(color2SpaceTable == null || color2SpaceWidth != sensorData.colorImageWidth || color2SpaceHeight != sensorData.colorImageHeight)
            {
                color2SpaceTable = KinectInterop.LoadSpaceTable(sensorPlatform, sensorDeviceId, "color", sensorData.colorImageWidth, sensorData.colorImageHeight);
            }

            color2SpaceWidth = sensorData.colorImageWidth;
            color2SpaceHeight = sensorData.colorImageHeight;

            // color2space
            int colorImageLength = sensorData.colorImageWidth * sensorData.colorImageHeight;
            if (color2SpaceTable == null || color2SpaceTable.Length != colorImageLength)
            {
                color2SpaceTable = new Vector3[colorImageLength];

                for (int cy = 0, ci = 0; cy < sensorData.colorImageHeight; cy++)
                {
                    for (int cx = 0; cx < sensorData.colorImageWidth; cx++, ci++)
                    {
                        Vector2 colorPos = new Vector2(cx, cy);
                        color2SpaceTable[ci] = MapColorPointToSpaceCoords(sensorData, colorPos, 1000);
                    }
                }

                KinectInterop.SaveSpaceTable(color2SpaceTable, sensorPlatform, sensorDeviceId, "color", sensorData.colorImageWidth, sensorData.colorImageHeight);
            }

            return color2SpaceTable;
        }


        public virtual Vector3 MapDepthPointToSpaceCoords(KinectInterop.SensorData sensorData, Vector2 depthPos, ushort depthVal)
        {
            if (sensorData.depthCamIntr != null)
            {
                return UnprojectPoint(sensorData.depthCamIntr, depthPos, (float)depthVal * 0.001f);
            }

            return Vector3.zero;
        }


        public virtual Vector2 MapSpacePointToDepthCoords(KinectInterop.SensorData sensorData, Vector3 spacePos)
        {
            if (sensorData.depthCamIntr != null)
            {
                return ProjectPoint(sensorData.depthCamIntr, spacePos);
            }

            return Vector2.zero;
        }


        public virtual Vector3 MapColorPointToSpaceCoords(KinectInterop.SensorData sensorData, Vector2 colorPos, ushort depthVal)
        {
            if (sensorData.colorCamIntr != null)
            {
                return UnprojectPoint(sensorData.colorCamIntr, colorPos, (float)depthVal * 0.001f);
            }

            return Vector3.zero;
        }


        public virtual Vector2 MapSpacePointToColorCoords(KinectInterop.SensorData sensorData, Vector3 spacePos)
        {
            if (sensorData.colorCamIntr != null)
            {
                return ProjectPoint(sensorData.colorCamIntr, spacePos);
            }

            return Vector2.zero;
        }


        public virtual Vector2 MapDepthPointToColorCoords(KinectInterop.SensorData sensorData, Vector2 depthPos, ushort depthVal)
        {
            if (sensorData.depthCamIntr != null && sensorData.colorCamIntr != null && sensorData.depth2ColorExtr != null)
            {
                Vector3 depthSpacePos = UnprojectPoint(sensorData.depthCamIntr, depthPos, (float)depthVal * 0.001f);
                Vector3 colorSpacePos = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos);
                Vector2 colorPos = ProjectPoint(sensorData.colorCamIntr, colorSpacePos);

                return colorPos;
            }

            return Vector2.zero;
        }


        public virtual Vector2 MapColorPointToDepthCoords(KinectInterop.SensorData sensorData, Vector2 colorPos, int minDist, int maxDist)
        {
            if (sensorData.depthCamIntr != null && sensorData.colorCamIntr != null && sensorData.color2DepthExtr != null && sensorData.depthImage != null)
            {
                Vector3 colorSpacePos1 = UnprojectPoint(sensorData.colorCamIntr, colorPos, 1f);

                if(minDist <= 0)
                    minDist = (int)(minDepthDistance * 1000f);
                if(maxDist <= 0)
                    maxDist = (int)(maxDepthDistance * 1000f);

                int depthImageW = sensorData.depthImageWidth;
                int depthImageL = sensorData.depthImage.Length;

                Vector2 depthPos = Vector2.zero;
                bool bFound = false;

                for (int d = minDist; d < maxDist; d++)
                {
                    Vector3 colorSpacePos = colorSpacePos1 * (d * 0.001f);
                    Vector3 depthSpacePos = TransformPoint(sensorData.color2DepthExtr, colorSpacePos);
                    depthPos = ProjectPoint(sensorData.depthCamIntr, depthSpacePos);

                    int di = (int)(depthPos.y + 0.5f) * depthImageW + (int)(depthPos.x + 0.5f);

                    if (di >= 0 && di < depthImageL)
                    {
                        int z = sensorData.depthImage[di];
                        if ((z != 0) && (z <= d))
                        {
                            bFound = true;
                            break;
                        }
                    }
                }

                return bFound ? depthPos : Vector2.zero;
            }

            return Vector2.zero;
        }


        //public virtual bool MapDepthFrameToSpaceCoords(KinectInterop.SensorData sensorData, ref Vector3[] vSpaceCoords)
        //{
        //    if (vSpaceCoords == null)
        //    {
        //        vSpaceCoords = new Vector3[sensorData.depthImageWidth * sensorData.depthImageHeight];
        //    }

        //    if (InitCoordMapperSpaceTables(sensorData, true, false))
        //    {
        //        for (int dy = 0, di = 0; dy < sensorData.depthImageHeight; dy++)
        //        {
        //            for (int dx = 0; dx < sensorData.depthImageWidth; dx++, di++)
        //            {
        //                if (sensorData.depthImage[di] != 0)
        //                {
        //                    float depthVal = (float)sensorData.depthImage[di] / 1000f;
        //                    vSpaceCoords[di] = depth2SpaceTable[di] * depthVal;
        //                }
        //                else
        //                {
        //                    vSpaceCoords[di] = Vector3.zero;
        //                }
        //            }
        //        }

        //        return true;
        //    }

        //    return false;
        //}


        //public virtual bool MapDepthFrameToColorData(KinectInterop.SensorData sensorData, ref byte[] vColorFrameData)
        //{
        //    return false;
        //}


        //public virtual bool MapColorFrameToDepthData(KinectInterop.SensorData sensorData, ref ushort[] vDepthFrameData)
        //{
        //    return false;
        //}


        //public virtual bool MapDepthFrameToColorCoords(KinectInterop.SensorData sensorData, ref Vector2[] vColorCoords)
        //{
        //    if (sensorData.depthCamIntr != null && sensorData.colorCamIntr != null && sensorData.depth2ColorExtr != null)
        //    {
        //        int depthImageW = sensorData.depthImageWidth;
        //        int depthImageH = sensorData.depthImageHeight;

        //        int mapImageLen = depthImageW * depthImageH;
        //        if (vColorCoords == null || vColorCoords.Length != mapImageLen)
        //        {
        //            vColorCoords = new Vector2[mapImageLen];
        //        }

        //        for (int dy = 0, dIndex = 0; dy < depthImageH; dy++)
        //        {
        //            for (int dx = 0; dx < depthImageW; dx++, dIndex++)
        //            {
        //                ushort depthVal = sensorData.depthImage[dIndex];

        //                if (depthVal != 0)
        //                {
        //                    Vector2 depthPos = new Vector2(dx, dy);

        //                    Vector3 depthSpacePos = UnprojectPoint(sensorData.depthCamIntr, depthPos, (float)depthVal / 1000f);
        //                    Vector3 colorSpacePos = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos);
        //                    vColorCoords[dIndex] = ProjectPoint(sensorData.colorCamIntr, colorSpacePos);
        //                }
        //                else
        //                {
        //                    vColorCoords[dIndex] = new Vector2(float.NegativeInfinity, float.NegativeInfinity);
        //                }
        //            }
        //        }

        //        return true;
        //    }

        //    return false;
        //}

        //public virtual bool MapColorFrameToDepthCoords(KinectInterop.SensorData sensorData, ref Vector2[] vDepthCoords)
        //{
        //    if (sensorData.depthCamIntr != null && sensorData.colorCamIntr != null && sensorData.depth2ColorExtr != null)
        //    {
        //        int depthImageW = sensorData.depthImageWidth;
        //        int depthImageH = sensorData.depthImageHeight;

        //        int mapImageLen = sensorData.colorImageWidth * sensorData.colorImageHeight;
        //        if (vDepthCoords == null || vDepthCoords.Length != mapImageLen)
        //        {
        //            vDepthCoords = new Vector2[mapImageLen];
        //        }

        //        int colorWidth = sensorData.colorCamIntr.width;
        //        int colorHeight = sensorData.colorCamIntr.height;

        //        for (int dy = 0, dIndex = 0; dy < depthImageH; dy++)
        //        {
        //            for (int dx = 0; dx < depthImageW; dx++, dIndex++)
        //            {
        //                ushort depthVal = sensorData.depthImage[dIndex];

        //                if (depthVal != 0)
        //                {
        //                    float depth = (float)depthVal / 1000f;

        //                    Vector2 depthPos1 = new Vector2(dx - 0.5f, dy - 0.5f);
        //                    Vector3 depthSpacePos1 = UnprojectPoint(sensorData.depthCamIntr, depthPos1, depth);
        //                    Vector3 colorSpacePos1 = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos1);
        //                    Vector2 colorPos1 = ProjectPoint(sensorData.colorCamIntr, colorSpacePos1);

        //                    int colorPos1X = Mathf.RoundToInt(colorPos1.x);
        //                    int colorPos1Y = Mathf.RoundToInt(colorPos1.y);

        //                    Vector2 depthPos2 = new Vector2(dx + 0.5f, dy + 0.5f);
        //                    Vector3 depthSpacePos2 = UnprojectPoint(sensorData.depthCamIntr, depthPos2, depth);
        //                    Vector3 colorSpacePos2 = TransformPoint(sensorData.depth2ColorExtr, depthSpacePos2);
        //                    Vector2 colorPos2 = ProjectPoint(sensorData.colorCamIntr, colorSpacePos2);

        //                    int colorPos2X = (int)(colorPos2.x + 0.5f);
        //                    int colorPos2Y = (int)(colorPos2.y + 0.5f);

        //                    if (colorPos1X < 0 || colorPos1Y < 0 || colorPos2X >= colorWidth || colorPos2Y >= colorHeight)
        //                        continue;

        //                    // Transfer between the depth pixels and the pixels inside the rectangle on the other image
        //                    for (int y = colorPos1Y; y <= colorPos2Y; y++)
        //                    {
        //                        int cIndex = y * colorWidth + colorPos1X;

        //                        for (int x = colorPos1X; x <= colorPos2X; x++, cIndex++)
        //                        {
        //                            vDepthCoords[cIndex] = new Vector2(dx, dy);
        //                        }
        //                    }
        //                }
        //                else
        //                {
        //                    //vDepthCoords[cIndex] = new Vector2(float.NegativeInfinity, float.NegativeInfinity);
        //                }
        //            }
        //        }

        //        return true;
        //    }

        //    return false;
        //}


        // estimates horizontal and vertical FOV
        protected void EstimateFOV(KinectInterop.CameraIntrinsics intr)
        {
            //intr.hFOV = (Mathf.Atan2(intr.ppx + 0.5f, intr.fx) + Mathf.Atan2(intr.width - (intr.ppx + 0.5f), intr.fx)) * 57.2957795f;
            //intr.vFOV = (Mathf.Atan2(intr.ppy + 0.5f, intr.fy) + Mathf.Atan2(intr.height - (intr.ppy + 0.5f), intr.fy)) * 57.2957795f;
            intr.hFOV = 2f * Mathf.Atan2((float)intr.width * 0.5f, intr.fx) * Mathf.Rad2Deg;
            intr.vFOV = 2f * Mathf.Atan2((float)intr.height * 0.5f, intr.fy) * Mathf.Rad2Deg;
        }


        // initializes the body-data structures and start the body tracking
        public virtual bool InitBodyTracking(KinectInterop.FrameSource dwFlags, KinectInterop.SensorData sensorData)
        {
            if ((dwFlags & KinectInterop.FrameSource.TypeBodyIndex) != 0)
            {
                rawBodyIndexImage = new byte[sensorData.depthImageWidth * sensorData.depthImageHeight];
                sensorData.bodyIndexImage = new byte[sensorData.depthImageWidth * sensorData.depthImageHeight];
            }

            if ((dwFlags & KinectInterop.FrameSource.TypeBody) != 0)  // check for body stream
            {
                alTrackedBodies = new List<KinectInterop.BodyData>();
                sensorData.alTrackedBodies = new KinectInterop.BodyData[0]; // new List<KinectInterop.BodyData>();

                trackedBodiesCount = 0;
                sensorData.trackedBodiesCount = 0;
            }

            return true;
        }

        // stops the body tracker and releases its data
        public virtual void StopBodyTracking(KinectInterop.SensorData sensorData)
        {
        }

        // estimates additional joints for the given body
        protected virtual void CalcBodySpecialJoints(ref KinectInterop.BodyData bodyData)
        {
            // hand left
            int w = (int)KinectInterop.JointType.WristLeft;
            int h = (int)KinectInterop.JointType.HandLeft;

            if (bodyData.joint[h].trackingState == KinectInterop.TrackingState.Inferred &&
                bodyData.joint[w].trackingState < KinectInterop.TrackingState.Inferred)
            {
                bodyData.joint[h].trackingState = KinectInterop.TrackingState.NotTracked;
            }

            int e = (int)KinectInterop.JointType.ElbowLeft;
            //if (bodyData.joint[h].trackingState == KinectInterop.TrackingState.Inferred)
            //{
            //    bodyData.joint[h].trackingState = KinectInterop.TrackingState.Tracked;
            //}
            //else 
            if (bodyData.joint[h].trackingState == KinectInterop.TrackingState.NotTracked &&
                bodyData.joint[w].trackingState >= KinectInterop.TrackingState.Inferred)
            {
                KinectInterop.JointData jointData = bodyData.joint[h];
                jointData.trackingState = bodyData.joint[w].trackingState;
                jointData.orientation = bodyData.joint[w].orientation;

                Vector3 posWrist = bodyData.joint[w].kinectPos;
                Vector3 posElbow = bodyData.joint[e].kinectPos;
                jointData.kinectPos = posWrist + (posWrist - posElbow) * 0.42f;

                posWrist = bodyData.joint[w].position;
                posElbow = bodyData.joint[e].position;
                jointData.position = posWrist + (posWrist - posElbow) * 0.42f;

                bodyData.joint[h] = jointData;
            }

            int f = (int)KinectInterop.JointType.HandtipLeft;
            if (bodyData.joint[f].trackingState == KinectInterop.TrackingState.Inferred &&
                bodyData.joint[w].trackingState <= KinectInterop.TrackingState.Inferred)
            {
                bodyData.joint[f].trackingState = KinectInterop.TrackingState.NotTracked;
            }

            f = (int)KinectInterop.JointType.ThumbLeft;
            if (bodyData.joint[f].trackingState == KinectInterop.TrackingState.Inferred &&
                bodyData.joint[w].trackingState <= KinectInterop.TrackingState.Inferred)
            {
                bodyData.joint[f].trackingState = KinectInterop.TrackingState.NotTracked;
            }

            // hand right
            w = (int)KinectInterop.JointType.WristRight;
            h = (int)KinectInterop.JointType.HandRight;

            if (bodyData.joint[h].trackingState == KinectInterop.TrackingState.Inferred &&
                bodyData.joint[w].trackingState < KinectInterop.TrackingState.Inferred)
            {
                bodyData.joint[h].trackingState = KinectInterop.TrackingState.NotTracked;
            }

            e = (int)KinectInterop.JointType.ElbowRight;
            //if (bodyData.joint[h].trackingState == KinectInterop.TrackingState.Inferred)
            //{
            //    bodyData.joint[h].trackingState = KinectInterop.TrackingState.Tracked;
            //}
            //else 
            if (bodyData.joint[h].trackingState == KinectInterop.TrackingState.NotTracked &&
                bodyData.joint[w].trackingState >= KinectInterop.TrackingState.Inferred)
            {
                KinectInterop.JointData jointData = bodyData.joint[h];
                jointData.trackingState = bodyData.joint[w].trackingState;
                jointData.orientation = bodyData.joint[w].orientation;

                Vector3 posWrist = bodyData.joint[w].kinectPos;
                Vector3 posElbow = bodyData.joint[e].kinectPos;
                jointData.kinectPos = posWrist + (posWrist - posElbow) * 0.42f;

                posWrist = bodyData.joint[w].position;
                posElbow = bodyData.joint[e].position;
                jointData.position = posWrist + (posWrist - posElbow) * 0.42f;

                bodyData.joint[h] = jointData;
            }

            f = (int)KinectInterop.JointType.HandtipRight;
            if (bodyData.joint[f].trackingState == KinectInterop.TrackingState.Inferred &&
                bodyData.joint[w].trackingState <= KinectInterop.TrackingState.Inferred)
            {
                bodyData.joint[f].trackingState = KinectInterop.TrackingState.NotTracked;
            }

            f = (int)KinectInterop.JointType.ThumbRight;
            if (bodyData.joint[f].trackingState == KinectInterop.TrackingState.Inferred &&
                bodyData.joint[w].trackingState <= KinectInterop.TrackingState.Inferred)
            {
                bodyData.joint[f].trackingState = KinectInterop.TrackingState.NotTracked;
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


        //// calculates all bone directions for the given body
        //protected virtual void CalcBodyJointDirs(ref KinectInterop.BodyData bodyData)
        //{
        //    if (bodyData.bIsTracked)
        //    {
        //        for (int j = 0; j < (int)KinectInterop.JointType.Count; j++)
        //        {
        //            if (j == 0)
        //            {
        //                bodyData.joint[j].direction = Vector3.zero;
        //            }
        //            else
        //            {
        //                int jParent = (int)KinectInterop.GetParentJoint((KinectInterop.JointType)j);

        //                if (bodyData.joint[j].trackingState != KinectInterop.TrackingState.NotTracked &&
        //                    bodyData.joint[jParent].trackingState != KinectInterop.TrackingState.NotTracked)
        //                {
        //                    bodyData.joint[j].direction = (bodyData.joint[j].position - bodyData.joint[jParent].position); //.normalized;
        //                }
        //            }
        //        }
        //    }
        //}

        // calculates all joint orientations for the given body
        protected virtual void CalcBodyJointOrients(ref KinectInterop.BodyData bodyData)
        {
            DoCalcBodyJointOrients(ref bodyData, bIgnoreInferredJoints);
        }

        // calculates all joint orientations for the given body (static method)
        public static void DoCalcBodyJointOrients(ref KinectInterop.BodyData bodyData, bool bIgnoreInferredJoints)
        {
            int jointCount = bodyData.joint.Length;

            Vector3 posRShoulder = bodyData.joint[(int)KinectInterop.JointType.ShoulderRight].position;
            Vector3 posLShoulder = bodyData.joint[(int)KinectInterop.JointType.ShoulderLeft].position;
            Vector3 shouldersDirection = posRShoulder - posLShoulder;
            shouldersDirection -= Vector3.Project(shouldersDirection, Vector3.up);

            for (int j = 0; j < jointCount; j++)
            {
                int joint = j;

                KinectInterop.JointData jointData = bodyData.joint[joint];
                bool bJointValid = bIgnoreInferredJoints ? jointData.trackingState == KinectInterop.TrackingState.Tracked : jointData.trackingState != KinectInterop.TrackingState.NotTracked;

                if (bJointValid)
                {
                    int nextJoint = (int)KinectInterop.GetNextJoint((KinectInterop.JointType)joint);
                    if (nextJoint != joint && nextJoint >= 0 && nextJoint < jointCount)
                    {
                        KinectInterop.JointData nextJointData = bodyData.joint[nextJoint];
                        bool bNextJointValid = bIgnoreInferredJoints ? nextJointData.trackingState == KinectInterop.TrackingState.Tracked : nextJointData.trackingState != KinectInterop.TrackingState.NotTracked;

                        Vector3 baseDir = KinectJointBaseDir[nextJoint];
                        Vector3 jointDir = nextJointData.direction.normalized;
                        jointDir = new Vector3(jointDir.x, jointDir.y, -jointDir.z).normalized;

                        Quaternion jointOrientNormal = jointData.normalRotation;
                        if (bNextJointValid)
                        {
                            jointOrientNormal = Quaternion.FromToRotation(baseDir, jointDir);
                        }

                        if ((joint == (int)KinectInterop.JointType.ShoulderLeft) ||
                            (joint == (int)KinectInterop.JointType.ElbowLeft) ||
                            (joint == (int)KinectInterop.JointType.WristLeft) ||
                            (joint == (int)KinectInterop.JointType.HandLeft))
                        {
                            if (bNextJointValid && jointData.direction != Vector3.zero && jointDir != Vector3.zero)
                            {
                                Vector3 parJointDir = jointData.direction.normalized;
                                parJointDir = new Vector3(parJointDir.x, parJointDir.y, -parJointDir.z).normalized;

                                if (joint == (int)KinectInterop.JointType.WristLeft)
                                {
                                    // for wrist, take the finger direction into account, too
                                    int fingerJoint = (int)KinectInterop.GetNextJoint((KinectInterop.JointType)nextJoint);

                                    if (fingerJoint != joint && fingerJoint >= 0 && fingerJoint < jointCount)
                                    {
                                        KinectInterop.JointData fingerData = bodyData.joint[fingerJoint];
                                        if (fingerData.trackingState != KinectInterop.TrackingState.NotTracked)
                                        {
                                            jointDir = (nextJointData.direction + fingerData.direction).normalized;
                                            jointDir = new Vector3(jointDir.x, jointDir.y, -jointDir.z).normalized;
                                        }
                                    }
                                }

                                float parDotJoint = Vector3.Dot(parJointDir, jointDir);
                                //Debug.Log (joint + ": " + parDotJoint);

                                if ((parDotJoint >= 0.01f && parDotJoint <= 0.99f) || (parDotJoint >= -0.99f && parDotJoint <= -0.01f))
                                {
                                    if (joint != (int)KinectInterop.JointType.ShoulderLeft && parJointDir != Vector3.zero)
                                    {
                                        Vector3 upDir = -Vector3.Cross(-parJointDir, jointDir).normalized;
                                        Vector3 fwdDir = Vector3.Cross(-jointDir, upDir).normalized;
                                        if (fwdDir.sqrMagnitude >= 0.5f && upDir.sqrMagnitude >= 0.5f)  // avoid zero-length directions
                                            jointOrientNormal = Quaternion.LookRotation(fwdDir, upDir);
                                    }
                                    else
                                    {
                                        KinectInterop.JointData shCenterData = bodyData.joint[(int)KinectInterop.JointType.ClavicleLeft];

                                        Vector3 spineDir = shCenterData.direction.normalized;
                                        spineDir = new Vector3(spineDir.x, spineDir.y, -spineDir.z).normalized;

                                        Vector3 fwdDir = Vector3.Cross(-jointDir, spineDir).normalized;
                                        Vector3 upDir = Vector3.Cross(fwdDir, -jointDir).normalized;
                                        if (fwdDir.sqrMagnitude >= 0.5f && upDir.sqrMagnitude >= 0.5f)  // avoid zero-length directions
                                            jointOrientNormal = Quaternion.LookRotation(fwdDir, upDir);
                                    }

                                    jointData.normalRotation = jointOrientNormal;
                                }
                            }

                            // allowedHandRotations = All (left wrist/hand)
                            if (joint == (int)KinectInterop.JointType.WristLeft || joint == (int)KinectInterop.JointType.HandLeft)
                            {
                                KinectInterop.JointData thumbData = bodyData.joint[(int)KinectInterop.JointType.ThumbLeft];

                                int prevJoint = (int)KinectInterop.GetParentJoint((KinectInterop.JointType)joint);
                                KinectInterop.JointData prevJointData = bodyData.joint[prevJoint];

                                if (thumbData.trackingState != KinectInterop.TrackingState.NotTracked &&
                                    prevJointData.trackingState != KinectInterop.TrackingState.NotTracked)
                                {
                                    Vector3 rightDir = -jointDir;
                                    Vector3 fwdDir = thumbData.direction.normalized;
                                    fwdDir = new Vector3(fwdDir.x, fwdDir.y, -fwdDir.z).normalized;

                                    if (joint == (int)KinectInterop.JointType.HandLeft)
                                    {
                                        Vector3 prevBaseDir = -Vector3.left;  // - KinectInterop.JointBaseDir[prevJoint];
                                        Vector3 prevOrthoDir = new Vector3(prevBaseDir.y, prevBaseDir.z, prevBaseDir.x);
                                        fwdDir = prevJointData.normalRotation * prevOrthoDir;
                                        //rightDir -= Vector3.Project(rightDir, fwdDir);
                                    }

                                    if (rightDir != Vector3.zero && fwdDir != Vector3.zero)
                                    {
                                        Vector3 upDir = Vector3.Cross(fwdDir, rightDir).normalized;
                                        fwdDir = Vector3.Cross(rightDir, upDir).normalized;

                                        //jointData.normalRotation = Quaternion.LookRotation(fwdDir, upDir);
                                        Quaternion jointOrientThumb = Quaternion.LookRotation(fwdDir, upDir);
                                        jointOrientNormal = (joint == (int)KinectInterop.JointType.WristLeft) ?
                                            Quaternion.RotateTowards(prevJointData.normalRotation, jointOrientThumb, 80f) : jointOrientThumb;

                                        jointData.normalRotation = jointOrientNormal;
                                    }
                                }

                                //bRotated = true;
                            }

                            if (joint == (int)KinectInterop.JointType.WristLeft || joint == (int)KinectInterop.JointType.HandLeft)
                            {
                                // limit wrist and hand twist
                                int prevJoint = (int)KinectInterop.GetParentJoint((KinectInterop.JointType)joint);
                                KinectInterop.JointData prevJointData = bodyData.joint[prevJoint];

                                if (prevJointData.trackingState != KinectInterop.TrackingState.NotTracked)
                                {
                                    jointData.normalRotation = Quaternion.RotateTowards(prevJointData.normalRotation, jointData.normalRotation, 70f);
                                }
                            }

                        }
                        else if ((joint == (int)KinectInterop.JointType.ShoulderRight) ||
                            (joint == (int)KinectInterop.JointType.ElbowRight) ||
                            (joint == (int)KinectInterop.JointType.WristRight) ||
                            (joint == (int)KinectInterop.JointType.HandRight))
                        {
                            if (bNextJointValid && jointData.direction != Vector3.zero && jointDir != Vector3.zero)
                            {
                                Vector3 parJointDir = jointData.direction.normalized;
                                parJointDir = new Vector3(parJointDir.x, parJointDir.y, -parJointDir.z).normalized;

                                if (joint == (int)KinectInterop.JointType.WristRight)
                                {
                                    // for wrist, take the finger direction into account, too
                                    int fingerJoint = (int)KinectInterop.GetNextJoint((KinectInterop.JointType)nextJoint);

                                    if (fingerJoint != joint && fingerJoint >= 0 && fingerJoint < jointCount)
                                    {
                                        KinectInterop.JointData fingerData = bodyData.joint[fingerJoint];
                                        if (fingerData.trackingState != KinectInterop.TrackingState.NotTracked)
                                        {
                                            jointDir = (nextJointData.direction + fingerData.direction).normalized;
                                            jointDir = new Vector3(jointDir.x, jointDir.y, -jointDir.z).normalized;
                                        }
                                    }
                                }

                                float parDotJoint = Vector3.Dot(parJointDir, jointDir);
                                //Debug.Log (joint + ": " + parDotJoint);

                                if ((parDotJoint >= 0.01f && parDotJoint <= 0.99f) || (parDotJoint >= -0.99f && parDotJoint <= -0.01f))
                                {
                                    if (joint != (int)KinectInterop.JointType.ShoulderRight && parJointDir != Vector3.zero)
                                    {
                                        Vector3 upDir = -Vector3.Cross(parJointDir, jointDir).normalized;
                                        Vector3 fwdDir = Vector3.Cross(jointDir, upDir).normalized;
                                        if (fwdDir.sqrMagnitude >= 0.5f && upDir.sqrMagnitude >= 0.5f)  // avoid zero-length directions
                                            jointOrientNormal = Quaternion.LookRotation(fwdDir, upDir);
                                    }
                                    else
                                    {
                                        KinectInterop.JointData shCenterData = bodyData.joint[(int)KinectInterop.JointType.ClavicleRight];

                                        Vector3 spineDir = shCenterData.direction.normalized;
                                        spineDir = new Vector3(spineDir.x, spineDir.y, -spineDir.z).normalized;

                                        Vector3 fwdDir = Vector3.Cross(jointDir, spineDir).normalized;
                                        Vector3 upDir = Vector3.Cross(fwdDir, jointDir).normalized;
                                        if (fwdDir.sqrMagnitude >= 0.5f && upDir.sqrMagnitude >= 0.5f)  // avoid zero-length directions
                                            jointOrientNormal = Quaternion.LookRotation(fwdDir, upDir);
                                    }

                                    jointData.normalRotation = jointOrientNormal;
                                }
                            }

                            // allowedHandRotations = All (right wrist/hand)
                            if (joint == (int)KinectInterop.JointType.WristRight || joint == (int)KinectInterop.JointType.HandRight)
                            {
                                KinectInterop.JointData thumbData = bodyData.joint[(int)KinectInterop.JointType.ThumbRight];

                                int prevJoint = (int)KinectInterop.GetParentJoint((KinectInterop.JointType)joint);
                                KinectInterop.JointData prevJointData = bodyData.joint[prevJoint];

                                if (thumbData.trackingState != KinectInterop.TrackingState.NotTracked &&
                                    prevJointData.trackingState != KinectInterop.TrackingState.NotTracked)
                                {
                                    Vector3 rightDir = jointDir;
                                    Vector3 fwdDir = thumbData.direction.normalized;
                                    fwdDir = new Vector3(fwdDir.x, fwdDir.y, -fwdDir.z).normalized;

                                    if (joint == (int)KinectInterop.JointType.HandRight)
                                    {
                                        Vector3 prevBaseDir = Vector3.right;  // KinectInterop.JointBaseDir[prevJoint];
                                        Vector3 prevOrthoDir = new Vector3(prevBaseDir.y, prevBaseDir.z, prevBaseDir.x);
                                        fwdDir = prevJointData.normalRotation * prevOrthoDir;
                                        //rightDir -= Vector3.Project(rightDir, fwdDir);
                                    }

                                    if (rightDir != Vector3.zero && fwdDir != Vector3.zero)
                                    {
                                        Vector3 upDir = Vector3.Cross(fwdDir, rightDir).normalized;
                                        fwdDir = Vector3.Cross(rightDir, upDir).normalized;

                                        Quaternion jointOrientThumb = Quaternion.LookRotation(fwdDir, upDir);
                                        jointOrientNormal = (joint == (int)KinectInterop.JointType.WristRight) ?
                                            Quaternion.RotateTowards(prevJointData.normalRotation, jointOrientThumb, 80f) : jointOrientThumb;

                                        jointData.normalRotation = jointOrientNormal;
                                    }
                                }

                                //bRotated = true;
                            }

                            if (joint == (int)KinectInterop.JointType.WristRight || joint == (int)KinectInterop.JointType.HandRight)
                            {
                                // limit wrist and hand twist
                                int prevJoint = (int)KinectInterop.GetParentJoint((KinectInterop.JointType)joint);
                                KinectInterop.JointData prevJointData = bodyData.joint[prevJoint];

                                if (prevJointData.trackingState != KinectInterop.TrackingState.NotTracked)
                                {
                                    jointData.normalRotation = Quaternion.RotateTowards(prevJointData.normalRotation, jointData.normalRotation, 70f);
                                }
                            }

                        }
                        else
                        {
                            jointData.normalRotation = jointOrientNormal;
                        }

                        if ((joint == (int)KinectInterop.JointType.Pelvis) ||
                            (joint == (int)KinectInterop.JointType.SpineNaval) ||
                            (joint == (int)KinectInterop.JointType.SpineChest) ||
                            //(joint == (int)KinectInterop.JointType.ClavicleLeft) ||
                            //(joint == (int)KinectInterop.JointType.ClavicleRight) ||
                            (joint == (int)KinectInterop.JointType.Neck))
                        {
                            if(bNextJointValid && jointDir != Vector3.zero)
                            {
                                Vector3 baseDir2 = Vector3.right;
                                Vector3 jointDir2 = shouldersDirection;
                                jointDir2.z = -jointDir2.z;

                                jointData.normalRotation *= Quaternion.FromToRotation(baseDir2, jointDir2);
                            }
                        }
                        else if ((joint == (int)KinectInterop.JointType.HipLeft) || (joint == (int)KinectInterop.JointType.HipRight) ||
                            (joint == (int)KinectInterop.JointType.KneeLeft) || (joint == (int)KinectInterop.JointType.KneeRight) 
                            /**|| (joint == (int)KinectInterop.JointType.AnkleLeft) || (joint == (int)KinectInterop.JointType.AnkleRight)*/)
                        {
                            if (bNextJointValid && jointDir != Vector3.zero)
                            {
                                Vector3 baseDir2 = Vector3.right;
                                Vector3 jointDir2 = shouldersDirection;
                                jointDir2.z = -jointDir2.z;

                                jointData.normalRotation *= Quaternion.FromToRotation(baseDir2, jointDir2);
                            }
                        }

                        Vector3 mirroredAngles = jointData.normalRotation.eulerAngles;
                        mirroredAngles.y = -mirroredAngles.y;
                        mirroredAngles.z = -mirroredAngles.z;

                        jointData.mirroredRotation = Quaternion.Euler(mirroredAngles);
                    }
                    else
                    {
                        // get the orientation of the parent joint
                        int prevJoint = (int)KinectInterop.GetParentJoint((KinectInterop.JointType)joint);
                        if (prevJoint != joint && prevJoint >= 0 && prevJoint < jointCount)
                        {
                            jointData.normalRotation = bodyData.joint[prevJoint].normalRotation;
                            jointData.mirroredRotation = bodyData.joint[prevJoint].mirroredRotation;
                        }
                        else
                        {
                            jointData.normalRotation = Quaternion.identity;
                            jointData.mirroredRotation = Quaternion.identity;
                        }
                    }

                    bodyData.joint[joint] = jointData;
                }
                else
                {
                    // joint is not tracked
                }

                if (joint == (int)KinectInterop.JointType.Pelvis)
                {
                    bodyData.normalRotation = jointData.normalRotation;
                    bodyData.mirroredRotation = jointData.mirroredRotation;
                }
            }
        }


        protected static readonly Vector3[] KinectJointBaseDir =
        {
            Vector3.zero,
            Vector3.up,
            Vector3.up,
            Vector3.up,
            Vector3.up,

            Vector3.left,
            Vector3.left,
            Vector3.left,
            Vector3.left,
            Vector3.left,

            Vector3.right,
            Vector3.right,
            Vector3.right,
            Vector3.right,
            Vector3.right,

            Vector3.down,
            Vector3.down,
            Vector3.down,
            Vector3.forward,

            Vector3.down,
            Vector3.down,
            Vector3.down,
            Vector3.forward,

            Vector3.forward,
            Vector3.left,
            Vector3.left,
            Vector3.right,
            Vector3.right,

            Vector3.left,
            Vector3.forward,
            Vector3.right,
            Vector3.forward,
        };

        // returns the sensor-data for network exchange
        public KinectInterop.NetSensorData GetNetSensorData(KinectInterop.SensorData sensorData)
        {
            if (sensorData == null)
                return null;

            KinectInterop.NetSensorData netSensorData = new KinectInterop.NetSensorData();

            netSensorData.sensorType = (int)sensorData.sensorInterface.GetSensorPlatform();
            netSensorData.sensorId = sensorDeviceId;

            netSensorData.colorImageWidth = sensorData.colorImageWidth;
            netSensorData.colorImageHeight = sensorData.colorImageHeight;

            netSensorData.depthImageWidth = sensorData.depthImageWidth;
            netSensorData.depthImageHeight = sensorData.depthImageHeight;

            netSensorData.depthCamIntr = sensorData.depthCamIntr;
            netSensorData.colorCamIntr = sensorData.colorCamIntr;
            netSensorData.depth2ColorExtr = sensorData.depth2ColorExtr;
            netSensorData.color2DepthExtr = sensorData.color2DepthExtr;

            netSensorData.colorImageScale = sensorData.colorImageScale;
            netSensorData.depthImageScale = sensorData.depthImageScale;
            netSensorData.infraredImageScale = sensorData.infraredImageScale;
            netSensorData.sensorSpaceScale = sensorData.sensorSpaceScale;
            netSensorData.unitToMeterFactor = sensorData.unitToMeterFactor;

            netSensorData.sensorPosition = sensorPosePosition;
            netSensorData.sensorRotation = sensorPoseRotation.eulerAngles;

            netSensorData.sensorRotOffset = sensorRotOffset;
            netSensorData.sensorRotFlipZ = sensorRotFlipZ;
            netSensorData.sensorRotIgnoreY = sensorRotIgnoreY;

            return netSensorData;
        }

        // sets the local sensor data from the network exchange data
        public void SetNetSensorData(KinectInterop.NetSensorData netSensorData, KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if (netSensorData == null || sensorData == null)
                return;

            sensorDeviceId = netSensorData.sensorId;
            sensorPlatform = (KinectInterop.DepthSensorPlatform)netSensorData.sensorType;
            //Debug.Log("NetSensor is " + sensorPlatform + ", id: " + netSensorData.sensorId);

            sensorData.colorImageWidth = netSensorData.colorImageWidth;
            sensorData.colorImageHeight = netSensorData.colorImageHeight;

            sensorData.depthImageWidth = netSensorData.depthImageWidth;
            sensorData.depthImageHeight = netSensorData.depthImageHeight;

            sensorData.depthCamIntr = netSensorData.depthCamIntr;
            sensorData.colorCamIntr = netSensorData.colorCamIntr;
            sensorData.depth2ColorExtr = netSensorData.depth2ColorExtr;
            sensorData.color2DepthExtr = netSensorData.color2DepthExtr;

            sensorData.colorImageScale = netSensorData.colorImageScale;
            sensorData.depthImageScale = netSensorData.depthImageScale;
            sensorData.infraredImageScale = netSensorData.infraredImageScale;
            sensorData.sensorSpaceScale = netSensorData.sensorSpaceScale;
            sensorData.unitToMeterFactor = netSensorData.unitToMeterFactor;

            if (kinectManager != null && kinectManager.getPoseFrames != KinectManager.PoseUsageType.None)
            {
                lock (poseFrameLock)
                {
                    transform.position = sensorData.sensorPosePosition = sensorPosePosition = netSensorData.sensorPosition;
                    transform.rotation = sensorData.sensorPoseRotation = sensorPoseRotation = Quaternion.Euler(netSensorData.sensorRotation);
                }
            }

            sensorRotOffset = netSensorData.sensorRotOffset;
            sensorRotFlipZ = netSensorData.sensorRotFlipZ;
            sensorRotIgnoreY = netSensorData.sensorRotIgnoreY;
        }

        // returns the sensor pose data for network exchange 
        public KinectInterop.NetPoseData GetSensorNetPoseData(KinectInterop.SensorData sensorData)
        {
            if (sensorData == null)
                return null;

            KinectInterop.NetPoseData netPoseData = new KinectInterop.NetPoseData();

            netPoseData.sensorPosition = sensorPosePosition;
            netPoseData.sensorRotation = sensorPoseRotation.eulerAngles;
            netPoseData.sensorPoseTime = currentPoseTimestamp;

            return netPoseData;
        }

        // sets the local sensor pose data from the network exchange data
        public void SetSensorNetPoseData(KinectInterop.NetPoseData netPoseData, KinectInterop.SensorData sensorData, KinectManager kinectManager)
        {
            if (netPoseData == null || sensorData == null)
                return;

            lock (poseFrameLock)
            {
                sensorData.sensorPosePosition = sensorPosePosition = netPoseData.sensorPosition;
                sensorData.sensorPoseRotation = sensorPoseRotation = Quaternion.Euler(netPoseData.sensorRotation);
                sensorData.lastSensorPoseFrameTime = currentPoseTimestamp = rawPoseTimestamp = netPoseData.sensorPoseTime;
            }

            // apply sensor pose update to the transform, if needed
            //ApplySensorPoseUpdate(kinectManager);
        }

        // enables or disables depth camera color frame processing
        public virtual void EnableDepthCameraColorFrame(KinectInterop.SensorData sensorData, bool isEnable)
        {
            if (isEnable && pointCloudColorTexture == null)
            {
                pointCloudColorTexture = KinectInterop.CreateRenderTexture(pointCloudColorTexture, 
                    sensorData.depthImageWidth, sensorData.depthImageHeight, RenderTextureFormat.ARGB32);
                sensorData.depthCamColorImageTexture = new Texture2D(sensorData.depthImageWidth, sensorData.depthImageHeight, sensorData.colorImageFormat, false);
            }
            else if(!isEnable && pointCloudColorTexture != null)
            {
                pointCloudColorTexture.Release();
                pointCloudColorTexture = null;

                sensorData.depthCamColorImageTexture = null;
            }
        }

        // returns the latest depth camera color frame texture along with the last frame time  
        public virtual Texture GetDepthCameraColorFrameTexture(KinectInterop.SensorData sensorData, ref Texture2D copyToTex2D, ref ulong frameTime)
        {
            if (sensorData.depthCamColorImageTexture == null)
                return null;

            lock (depthCamColorFrameLock)
            {
                if(copyToTex2D != null && sensorData.lastDepthCamColorFrameTime != frameTime)
                {
                    //KinectInterop.RenderTex2Tex2D(sensorData.depthCamColorImageTexture, ref copyToTex2D);
                    Graphics.CopyTexture(sensorData.depthCamColorImageTexture, copyToTex2D);
                }

                frameTime = sensorData.lastDepthCamColorFrameTime;
            }

            return sensorData.depthCamColorImageTexture;
        }

        // enables or disables color camera depth frame processing
        public virtual void EnableColorCameraDepthFrame(KinectInterop.SensorData sensorData, bool isEnable)
        {
            if (isEnable && colorCamDepthDataFrame == null)
            {
                colorCamDepthDataFrame = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
                sensorData.colorCamDepthImage = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }
            else if(!isEnable && colorCamDepthDataFrame != null)
            {
                colorCamDepthDataFrame = null;
                sensorData.colorCamDepthImage = null;
            }
        }

        // returns the latest color camera depth frame along with the last frame time. the returned data frame is ushort array.
        public virtual ushort[] GetColorCameraDepthFrame(KinectInterop.SensorData sensorData, ref ushort[] copyToFrame, ref ulong frameTime)
        {
            if (sensorData.colorCamDepthImage == null)
                return null;

            lock (colorCamDepthFrameLock)
            {
                if (copyToFrame != null && sensorData.lastColorCamDepthFrameTime != frameTime)
                {
                    KinectInterop.CopyBytes(sensorData.colorCamDepthImage, sizeof(ushort), copyToFrame, sizeof(ushort));
                }

                frameTime = sensorData.lastColorCamDepthFrameTime;
            }

            return sensorData.colorCamDepthImage;
        }

        // returns the latest color camera depth frame along with the last frame time. the returned data frame is byte array.
        public virtual byte[] GetColorCameraDepthFrameBytes(KinectInterop.SensorData sensorData, ref byte[] copyToFrame, ref ulong frameTime)
        {
            if (sensorData.colorCamDepthImage == null)
                return null;

            byte[] frameData = null;

            lock (colorCamDepthFrameLock)
            {
                if (copyToFrame != null && sensorData.lastColorCamDepthFrameTime != frameTime)
                {
                    KinectInterop.CopyBytes(sensorData.colorCamDepthImage, sizeof(ushort), copyToFrame, sizeof(byte));
                    frameData = copyToFrame;
                }

                if(frameData == null)
                {
                    frameData = new byte[sensorData.colorCamDepthImage.Length * sizeof(ushort)];
                    KinectInterop.CopyBytes(sensorData.colorCamDepthImage, sizeof(ushort), frameData, sizeof(byte));
                }

                frameTime = sensorData.lastColorCamDepthFrameTime;
            }

            return frameData;
        }

        // enables or disables color camera infrared frame processing
        public virtual void EnableColorCameraInfraredFrame(KinectInterop.SensorData sensorData, bool isEnableRawData, bool isEnableTexture)
        {
            if (isEnableRawData && colorCamInfraredDataFrame == null)
            {
                colorCamInfraredDataFrame = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
                sensorData.colorCamInfraredImage = new ushort[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }
            else if (!isEnableRawData && colorCamInfraredDataFrame != null)
            {
                colorCamInfraredDataFrame = null;
                sensorData.colorCamInfraredImage = null;
            }

            if(isEnableTexture && sensorData.colorInfraredBuffer == null)
            {
                if(sensorData.colorImageWidth > 0 && sensorData.colorImageHeight > 0)
                {
                    int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight / 2;
                    sensorData.colorInfraredBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
                }
            }
            else if(!isEnableTexture && sensorData.colorInfraredBuffer != null)
            {
                sensorData.colorInfraredBuffer.Release();
                sensorData.colorInfraredBuffer.Dispose();
                sensorData.colorInfraredBuffer = null;
            }
        }

        // returns the latest color camera infrared frame along with the last frame time. the returned data frame is ushort array.
        public virtual ushort[] GetColorCameraInfraredFrame(KinectInterop.SensorData sensorData, ref ushort[] copyToFrame, ref ulong frameTime)
        {
            if (sensorData.colorCamInfraredImage == null)
                return null;

            lock (colorCamInfraredFrameLock)
            {
                if (copyToFrame != null && sensorData.lastColorCamInfraredFrameTime != frameTime)
                {
                    KinectInterop.CopyBytes(sensorData.colorCamInfraredImage, sizeof(ushort), copyToFrame, sizeof(ushort));
                }

                frameTime = sensorData.lastColorCamInfraredFrameTime;
            }

            return sensorData.colorCamInfraredImage;
        }

        //// returns the latest color camera infrared frame along with the last frame time. the returned data frame is byte array.
        //public virtual byte[] GetColorCameraInfraredFrameBytes(KinectInterop.SensorData sensorData, ref byte[] copyToFrame, ref ulong frameTime)
        //{
        //    if (sensorData.colorCamInfraredImage == null)
        //        return null;

        //    byte[] frameData = null;

        //    lock (colorCamInfraredFrameLock)
        //    {
        //        if (copyToFrame != null && sensorData.lastColorCamInfraredFrameTime != frameTime)
        //        {
        //            KinectInterop.CopyBytes(sensorData.colorCamInfraredImage, sizeof(ushort), copyToFrame, sizeof(byte));
        //            frameData = copyToFrame;
        //        }

        //        if (frameData == null)
        //        {
        //            frameData = new byte[sensorData.colorCamInfraredImage.Length * sizeof(ushort)];
        //            KinectInterop.CopyBytes(sensorData.colorCamInfraredImage, sizeof(ushort), frameData, sizeof(byte));
        //        }

        //        frameTime = sensorData.lastColorCamInfraredFrameTime;
        //    }

        //    return frameData;
        //}

        // returns the latest color camera infrared frame texture along with the last frame time  
        public virtual Texture GetColorCameraInfraredFrameTexture(KinectInterop.SensorData sensorData, ref Texture2D copyToTex2D, ref ulong frameTime)
        {
            if (sensorData.colorInfraredTexture == null)
                return null;

            //lock (colorCamInfraredFrameLock)
            {
                if (copyToTex2D != null && sensorData.lastInfraredImageTime != frameTime)
                {
                    // CopyTexture() doesn't work in this case, because it's on GPU, while EncodeToJPG() is on CPU side.
                    // see: https://answers.unity.com/questions/1479723/encodetojpg-creates-gray-image-after-using-copytex.html
                    //Graphics.CopyTexture(sensorData.colorInfraredTexture, copyToTex2D);
                    KinectInterop.RenderTex2Tex2D(sensorData.colorInfraredTexture, ref copyToTex2D);
                }

                frameTime = sensorData.lastInfraredImageTime;
                //Debug.Log("LastInfraredImageTime: " + sensorData.lastInfraredImageTime);
            }

            return sensorData.colorInfraredTexture;
        }

        // enables or disables color camera body-index frame processing
        public virtual void EnableColorCameraBodyIndexFrame(KinectInterop.SensorData sensorData, bool isEnable)
        {
            if (isEnable && colorCamBodyIndexFrame == null)
            {
                colorCamBodyIndexFrame = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight];
                sensorData.colorCamBodyIndexImage = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight];
            }
            else if (!isEnable && colorCamBodyIndexFrame != null)
            {
                colorCamBodyIndexFrame = null;
                sensorData.colorCamBodyIndexImage = null;
            }
        }

        // returns the latest color camera body-index frame along with the last frame time
        public virtual byte[] GetColorCameraBodyIndexFrame(KinectInterop.SensorData sensorData, ref byte[] copyToFrame, ref ulong frameTime)
        {
            if (sensorData.colorCamBodyIndexImage == null)
                return null;

            lock (colorCamDepthFrameLock)
            {
                if (copyToFrame != null && sensorData.lastColorCamBodyIndexFrameTime != frameTime)
                {
                    KinectInterop.CopyBytes(sensorData.colorCamBodyIndexImage, sizeof(byte), copyToFrame, sizeof(byte));
                }

                frameTime = sensorData.lastColorCamBodyIndexFrameTime;
            }

            return sensorData.colorCamBodyIndexImage;
        }

    }
}

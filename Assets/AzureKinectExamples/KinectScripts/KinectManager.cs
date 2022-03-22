using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// KinectManager is the the main and most basic depth-sensor related component. It controls the sensors and manages the data streams.
    /// </summary>
    public class KinectManager : MonoBehaviour
    {
        //[Header("Multiple Camera Config")]

        [Tooltip("Whether to create the sensor interfaces according to the multi-camera config, if one is available. Otherwise use the sensor interfaces, as configured in the child objects of this object.")]
        public bool useMultiCamConfig = false;

        [Tooltip("Whether to synchronize the received frames, in case of master/sub cameras.")]
        public bool syncMultiCamFrames = false;

        [Header("Sensor Data")]

        [Tooltip("Whether to get depth frames from the sensor(s).")]
        public DepthTextureType getDepthFrames = DepthTextureType.RawDepthData;
        public enum DepthTextureType : int { None = 0, RawDepthData = 1, DepthTexture = 2 }

        [Tooltip("Whether to get color frames from the sensor(s).")]
        public ColorTextureType getColorFrames = ColorTextureType.None;
        public enum ColorTextureType : int { None = 0, ColorTexture = 2 }

        [Tooltip("Whether to get infrared frames from the sensor(s).")]
        public InfraredTextureType getInfraredFrames = InfraredTextureType.None;
        public enum InfraredTextureType : int { None = 0, RawInfraredData = 1, InfraredTexture = 2 }

        [Tooltip("Whether to get pose frames from the sensor(s).")]
        public PoseUsageType getPoseFrames = PoseUsageType.None;
        public enum PoseUsageType : int { None = 0, RawPoseData = 1, DisplayInfo = 10, UpdateTransform = 20 }

        [Tooltip("Whether to get body frames from the body tracker.")]
        public BodyTextureType getBodyFrames = BodyTextureType.BodyAndBodyIndexData;
        public enum BodyTextureType : int { None = 0, BodyAndBodyIndexData = 1, BodyTexture = 2, UserTexture = 3, BodyDataOnly = 4, BodyIndexDataOnly = 5 }

        [Tooltip("Whether to poll the sensor frames in separate threads or in the Update-method.")]
        private bool pollFramesInThread = true;

        [Tooltip("Whether to synchronize depth and color frames.")]
        public bool syncDepthAndColor = false;

        [Tooltip("Whether to synchronize body and depth frames.")]
        public bool syncBodyAndDepth = false;

        //[Tooltip("List of additional data frames to be computed from the latest depth and color frames. Please note, these data frames require getting both depth & color frames, as well as sync between them.")]
        //public List<AdditionalFrameType> additionalFrames = new List<AdditionalFrameType>();
        //public enum AdditionalFrameType : int { Depth2ColorCoordinatesFrame, Color2DepthCoordinatesFrame, AlignedDepth2ColorFrame, AlignedColor2DepthFrame, PointCloudMeshFrame, PointCloudVerticesFrame, PointCloudUvFrame, PointCloudColorFrame }

        [Header("User Detection")]

        [Tooltip("Minimum distance to user, in order to be considered for body processing. Value of 0 means no minimum distance limitation.")]
        [Range(0f, 10f)]
        public float minUserDistance = 0f;

        [Tooltip("Maximum distance to user, in order to be considered for body processing. Value of 0 means no maximum distance limitation.")]
        [Range(0f, 10f)]
        public float maxUserDistance = 0f;

        [Tooltip("Maximum left or right distance to user, in order to be considered for body processing. Value of 0 means no left/right distance limitation.")]
        [Range(0f, 5f)]
        public float maxLeftRightDistance = 0f;

        [Tooltip("Maximum number of users, who may be tracked simultaneously. Value of 0 means no limitation.")]
        public int maxTrackedUsers = 0;

        [Tooltip("Whether to display only the users within the allowed distances, or all users.")]
        public bool showAllowedUsersOnly = false;

        public enum UserDetectionOrder : int { Appearance = 0, Distance = 1, LeftToRight = 2, FixedStepIndices = 3 }
        [Tooltip("How to assign users to player indices - by order of appearance, distance, left to right, or fixed step left to right.")]
        public UserDetectionOrder userDetectionOrder = UserDetectionOrder.Appearance;

        [Tooltip("Whether to ignore the inferred joints, or consider them as tracked joints.")]
        public bool ignoreInferredJoints = false;

        [Tooltip("Whether to ignore the Z-coordinates of the joints (for 2D-scenes) or not.")]
        public bool ignoreZCoordinates = false;

        [Tooltip("Set of joint position smoothing parameters.")]
        public SmoothingType jointPositionSmoothing = SmoothingType.Default;

        [Tooltip("Whether to estimate the body joints velocities.")]
        public bool estimateJointVelocities = false;

        [Tooltip("Set of joint velocity smoothing parameters.")]
        public SmoothingType jointVelocitySmoothing = SmoothingType.Light;

        [Tooltip("Whether to apply the bone orientation constraints.")]
        public bool boneOrientationConstraints = true;

        [Tooltip("Wait time in seconds, before a lost user gets removed. This is to prevent sporadical user switches.")]
        protected float waitTimeBeforeRemove = 0f;

        [Tooltip("Calibration pose required, to start tracking the respective user.")]
        public GestureType playerCalibrationPose = GestureType.None;

        [Tooltip("User manager, used to track the users. KM creates one, if not set.")]
        public KinectUserManager userManager;

        //[Tooltip("List of the avatar controllers in the scene. If the list is empty, the available avatar controllers are detected at the scene start up.")]
        //public List<AvatarController> avatarControllers = new List<AvatarController>();

        [Header("Gesture Detection")]

        //[Tooltip("List of common gestures, to be detected for each player.")]
        //public List<GestureType> playerCommonGestures = new List<GestureType>();

        //[Tooltip("Minimum time between gesture detections (in seconds).")]
        //public float minTimeBetweenGestures = 0.7f;

        [Tooltip("Gesture manager, used to detect user gestures. KM creates one, if not set.")]
        public KinectGestureManager gestureManager;

        //[Tooltip("List of the gesture listeners in the scene. If the list is empty, the available gesture listeners will be detected at the scene start up.")]
        //public List<MonoBehaviour> gestureListeners = new List<MonoBehaviour>();

        [Header("On-Screen Info")]

        [Tooltip("List of images to display on the screen.")]
        public List<DisplayImageType> displayImages = new List<DisplayImageType>();
        public enum DisplayImageType : int
        {
            None = 0,
            Sensor0ColorImage = 0x01, Sensor0DepthImage = 0x02, Sensor0InfraredImage = 0x03,
            Sensor1ColorImage = 0x11, Sensor1DepthImage = 0x12, Sensor1InfraredImage = 0x13,
            Sensor2ColorImage = 0x21, Sensor2DepthImage = 0x22, Sensor2InfraredImage = 0x23,
            UserBodyImage = 0x101
        }

        [Tooltip("Single image width, as percent of the screen width. The height is estimated according to the image's aspect ratio.")]
        [Range(0.1f, 0.5f)]
        public float displayImageWidthPercent = 0.2f;

        [Tooltip("UI-Text to display status messages.")]
        public UnityEngine.UI.Text statusInfoText;

        [Tooltip("Whether to log the KinectManager info messages to the console or not.")]
        public bool consoleLogMessages = true;


        [System.Serializable]
        public class DepthSensorStartStopEvent : UnityEngine.Events.UnityEvent { }

        [Header("Events")]

        /// <summary>
        /// Fired when the depth sensors get started.
        /// </summary>
        public DepthSensorStartStopEvent OnDepthSensorsStarted = new DepthSensorStartStopEvent();

        /// <summary>
        /// Fired when the depth sensors get stopped.
        /// </summary>
        //public event System.Action<ulong, int> OnUserRemoved;
        public DepthSensorStartStopEvent OnDepthSensorsStopped = new DepthSensorStartStopEvent();


        // Bool to keep track of whether Kinect has been initialized
        protected bool kinectInitialized = false;

        // The singleton instance of KinectManager
        protected static KinectManager instance = null;

        // available sensor interfaces
        protected List<DepthSensorInterface> sensorInterfaces = new List<DepthSensorInterface>();
        // the respective SensorData structures
        protected List<KinectInterop.SensorData> sensorDatas = new List<KinectInterop.SensorData>();

        // body frame data
        protected ulong lastBodyFrameTime = 0;
        protected uint trackedBodiesCount = 0;
        protected KinectInterop.BodyData[] alTrackedBodies = new KinectInterop.BodyData[0];  // new List<KinectInterop.BodyData>();

        protected long lastBodyFrameTicks = 0;
        protected long prevBodyFrameTicks = 0;

        protected int btSensorIndex = -1;
        protected int selectedBodyIndex = 255;
        protected bool bLimitedUsers = false;

        // filters & body merger
        protected BoneOrientationConstraints boneConstraints = null;
        protected KinectUserBodyMerger userBodyMerger = null;

        protected JointPositionsFilter jointPositionFilter = null;
        protected JointVelocitiesFilter jointVelocityFilter = null;

        // play mode
        protected bool isPlayModeEnabled = false;
        protected string playModeData = string.Empty;


        /// <summary>
        /// Gets the single KinectManager instance.
        /// </summary>
        /// <value>The KinectManager instance.</value>
        public static KinectManager Instance
        {
            get
            {
                return instance;
            }
        }

        /// <summary>
        /// Determines if the KinectManager-component is initialized and ready to use.
        /// </summary>
        /// <returns><c>true</c> if KinectManager is initialized; otherwise, <c>false</c>.</returns>
        public bool IsInitialized()
        {
            if(kinectInitialized)
            {
                // moved to GetSensorData()
                //for (int i = 0; i < sensorDatas.Count; i++)
                //{
                //    KinectInterop.SensorData sensorData = sensorDatas[i];

                //    if (sensorData == null || sensorData.sensorInterface == null)
                //        return false;
                //    if (!sensorData.sensorInterface.IsSensorDataValid())
                //        return false;
                //}

                return true;
            }

            return false;
        }

        ///// <summary>
        ///// Gets the joint position filter, if available.
        ///// </summary>
        ///// <returns></returns>
        //public JointPositionsFilter GetJointPositionFilter()
        //{
        //    return jointPositionFilter;
        //}

        /// <summary>
        /// Gets the joint velocity filter, if available.
        /// </summary>
        /// <returns></returns>
        public JointVelocitiesFilter GetJointVelocityFilter()
        {
            return jointVelocityFilter;
        }

        /// <summary>
        /// Returns the number of utilized depth sensors.
        /// </summary>
        /// <returns>The number of depth sensors.</returns>
        public int GetSensorCount()
        {
            return sensorDatas.Count;
        }

        ///// <summary>
        ///// Gets the sensor-data structure of the 1st sensor (this structure should not be modified, because it is used internally).
        ///// </summary>
        ///// <returns>The sensor data.</returns>
        //internal KinectInterop.SensorData GetSensorData()
        //{
        //    return GetSensorData(0);
        //}

        /// <summary>
        /// Gets the sensor-data structure of the given sensor (this structure should not be modified, because it is used internally).
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The sensor data.</returns>
        internal KinectInterop.SensorData GetSensorData(int sensorIndex)
        {
            if(sensorIndex >= 0  && sensorIndex < sensorDatas.Count)
            {
                //return sensorDatas[sensorIndex];

                KinectInterop.SensorData sensorData = sensorDatas[sensorIndex];
                if (sensorData == null || sensorData.sensorInterface == null)
                    return null;

                if (!sensorData.sensorInterface.IsSensorDataValid())
                {
                    //Debug.LogWarning("Sensor data is invalid.");
                    return null;
                }

                return sensorData;
            }

            return null;
        }

        /// <summary>
        /// Gets the sensor capabilities (i.e. available sensor streams).
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>Sensor capabilities as source flags.</returns>
        public KinectInterop.FrameSource GetSensorCaps(int sensorIndex)
        {
            if (sensorIndex >= 0 && sensorIndex < sensorDatas.Count)
            {
                KinectInterop.SensorData sensorData = sensorDatas[sensorIndex];
                if (sensorData != null)
                {
                    return sensorData.sensorCaps;
                }
            }

            return KinectInterop.FrameSource.TypeNone;
        }

        /// <summary>
        /// Enables or disables sensor's pose data.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="isEnable">Whether to enable or disable the pose data.</param>
        public void EnableSensorPoseData(int sensorIndex, bool isEnable)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.sensorInterface != null)
            {
                sensorData.sensorInterface.EnablePoseStream(sensorData, isEnable);
            }
        }

        /// <summary>
        /// Sets minimum & maximum infrared values, used in IR texture generation.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="minValue">Minimum value.</param>
        /// <param name="maxValue">Maximum value.</param>
        public void SetSensorMinMaxIrValues(int sensorIndex, float minValue, float maxValue)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.sensorInterface != null)
            {
                sensorData.sensorInterface.SetMinMaxInfraredValues(minValue, maxValue);
            }
        }

        /// <summary>
        /// Gets the minimum distance tracked by the sensor, in meters.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>Minimum distance tracked by the sensor, in meters.</returns>
        public float GetSensorMinDistance(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if(sensorData != null && sensorData.sensorInterface != null)
            {
                return ((DepthSensorBase)sensorData.sensorInterface).minDepthDistance;
            }

            return 0f;
        }

        /// <summary>
        /// Gets the maximum distance tracked by the sensor, in meters.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>Maximum distance tracked by the sensor, in meters.</returns>
        public float GetSensorMaxDistance(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.sensorInterface != null)
            {
                return ((DepthSensorBase)sensorData.sensorInterface).maxDepthDistance;
            }

            return 0f;
        }

        /// <summary>
        /// Gets the last color frame time, as returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The color frame time.</returns>
        public ulong GetColorFrameTime(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.lastColorFrameTime : 0;
        }

        /// <summary>
        /// Gets the width of the color image, returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The color image width.</returns>
        public int GetColorImageWidth(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.colorImageWidth : 0;
        }

        /// <summary>
        /// Gets the height of the color image, returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The color image height.</returns>
        public int GetColorImageHeight(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.colorImageHeight : 0;
        }

        /// <summary>
        /// Gets the color image scale.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The color image scale.</returns>
        public Vector3 GetColorImageScale(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.colorImageScale : Vector3.one;
        }

        /// <summary>
        /// Gets the color image texture.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The color image texture.</returns>
        public Texture GetColorImageTex(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.colorImageTexture : null;
        }

        /// <summary>
        /// Gets the last depth frame time, as returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The depth frame time.</returns>
        public ulong GetDepthFrameTime(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.lastDepthFrameTime : 0;
        }

        /// <summary>
        /// Gets the last IR frame time, as returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The IR frame time.</returns>
        public ulong GetInfraredFrameTime(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.lastInfraredFrameTime : 0;
        }

        /// <summary>
        /// Gets the width of the depth image, returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The depth image width.</returns>
        public int GetDepthImageWidth(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.depthImageWidth : 0;
        }

        /// <summary>
        /// Gets the height of the depth image, returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The depth image height.</returns>
        public int GetDepthImageHeight(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.depthImageHeight : 0;
        }

        /// <summary>
        /// Gets the raw depth data, if ComputeUserMap is true.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The raw depth map.</returns>
        public ushort[] GetRawDepthMap(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.depthImage : null;
        }

        /// <summary>
        /// Gets the raw infrared data, if ComputeInfraredMap is true.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The raw infrared map.</returns>
        public ushort[] GetRawInfraredMap(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.infraredImage : null;
        }

        /// <summary>
        /// Gets the depth image scale.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The depth image scale.</returns>
        public Vector3 GetDepthImageScale(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.depthImageScale : Vector3.one;
        }

        /// <summary>
        /// Gets the infrared image scale.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The infrared image scale.</returns>
        public Vector3 GetInfraredImageScale(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.infraredImageScale : Vector3.one;
        }

        /// <summary>
        /// Gets the sensor space scale.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The sensor space scale.</returns>
        public Vector3 GetSensorSpaceScale(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.sensorSpaceScale : Vector3.one;
        }

        /// <summary>
        /// Gets the depth image texture.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The depth texture.</returns>
        public Texture GetDepthImageTex(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.depthImageTexture : null;
        }

        /// <summary>
        /// Gets the infrared image texture.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The infrared texture.</returns>
        public Texture GetInfraredImageTex(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.infraredImageTexture : null;
        }

        /// <summary>
        /// Gets the depth value for the specified depth image pixel.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="depthPixel">Depth image coordinates.</param>
        /// <returns>Depth value in mm, or 0.</returns>
        public ushort GetDepthForPixel(int sensorIndex, Vector2 depthPixel)
        {
            return GetDepthForPixel(sensorIndex, (int)depthPixel.x, (int)depthPixel.y);
        }

        /// <summary>
        /// Gets the depth value for the specified depth image pixel.
        /// </summary>
        /// <returns>Depth value in mm, or 0.</returns>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="x">The X coordinate of the depth pixel.</param>
        /// <param name="y">The Y coordinate of the depth pixel.</param>
        public ushort GetDepthForPixel(int sensorIndex, int x, int y)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.depthImage != null)
            {
                int index = y * sensorData.depthImageWidth + x;

                if (index >= 0 && index < sensorData.depthImage.Length)
                {
                    return sensorData.depthImage[index];
                }
            }

            return 0;
        }

        /// <summary>
        /// Gets the depth value for the specified pixel, if ComputeUserMap is true.
        /// </summary>
        /// <returns>The depth value.</returns>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="index">Depth index.</param>
        public ushort GetDepthForIndex(int sensorIndex, int index)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.depthImage != null)
            {
                if (index >= 0 && index < sensorData.depthImage.Length)
                {
                    return sensorData.depthImage[index];
                }
            }

            return 0;
        }


        /// <summary>
        /// Returns the respective sensor-to-world matrix.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>Sensor-to-world matrix.</returns>
        public Matrix4x4 GetSensorToWorldMatrix(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return KinectInterop.GetSensorToWorldMatrix(sensorData);
        }


        /// <summary>
        /// Returns the sensor transform reference. Please note transform updates depend on the getPoseFrames-KM setting.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>Sensor transorm or null, if sensorIndex is invalid.</returns>
        public Transform GetSensorTransform(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return KinectInterop.GetSensorTransform(sensorData);
        }


        /// <summary>
        /// Returns the depth camera space coordinates of a depth-image point, or Vector3.zero if the sensor is not initialized.
        /// </summary>
        /// <returns>The space coordinates.</returns>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="posPoint">Depth image coordinates</param>
        /// <param name="depthValue">Depth value</param>
        /// <param name="bWorldCoords">If set to <c>true</c>, applies the sensor height and angle to the space coordinates.</param>
        public Vector3 MapDepthPointToSpaceCoords(int sensorIndex, Vector2 posPoint, ushort depthValue, bool bWorldCoords)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null)
            {
                Vector3 posSpace = KinectInterop.MapDepthPointToSpaceCoords(sensorData, posPoint, depthValue);

                if (bWorldCoords)
                {
                    Vector3 spaceScale = sensorData.sensorSpaceScale;
                    posSpace = new Vector3(posSpace.x * spaceScale.x, posSpace.y * spaceScale.y, posSpace.z * spaceScale.z);

                    Matrix4x4 sensorToWorld = KinectInterop.GetSensorToWorldMatrix(sensorData);
                    posSpace = sensorToWorld.MultiplyPoint3x4(posSpace);
                }

                return posSpace;
            }

            return Vector3.zero;
        }


        /// <summary>
        /// Returns the depth-image coordinates of a depth camera space point, or Vector2.zero if the sensor is not initialized.
        /// </summary>
        /// <returns>The depth-image coordinates.</returns>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="posPoint">Space point coordinates</param>
        public Vector2 MapSpacePointToDepthCoords(int sensorIndex, Vector3 posPoint)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null)
            {
                return KinectInterop.MapSpacePointToDepthCoords(sensorData, posPoint);
            }

            return Vector2.zero;
        }


        /// <summary>
        /// Returns the color camera space coordinates of a color-image point, or Vector3.zero if the sensor is not initialized.
        /// </summary>
        /// <returns>The space coordinates.</returns>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="posPoint">Color image coordinates</param>
        /// <param name="distance">Distance in mm</param>
        public Vector3 MapColorPointToSpaceCoords(int sensorIndex, Vector2 posPoint, ushort distance)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null)
            {
                return KinectInterop.MapColorPointToSpaceCoords(sensorData, posPoint, distance);
            }

            return Vector3.zero;
        }


        /// <summary>
        /// Returns the color-image coordinates of a color camera space point, or Vector2.zero if the sensor is not initialized.
        /// </summary>
        /// <returns>The color-image coordinates.</returns>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="posPoint">Space point coordinates</param>
        public Vector2 MapSpacePointToColorCoords(int sensorIndex, Vector3 posPoint)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null)
            {
                return KinectInterop.MapSpacePointToColorCoords(sensorData, posPoint);
            }

            return Vector2.zero;
        }


        /// <summary>
        /// Returns the color-image coordinates of a depth-image point.
        /// </summary>
        /// <returns>The color-image coordinates.</returns>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="posDepth">Depth image coordinates</param>
        /// <param name="depthValue">Depth value</param>
        public Vector2 MapDepthPointToColorCoords(int sensorIndex, Vector2 posDepth, ushort depthValue)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null)
            {
                return KinectInterop.MapDepthPointToColorCoords(sensorData, posDepth, depthValue);
            }

            return Vector2.zero;
        }


        /// <summary>
        /// Returns the depth-image coordinates of a color-image point.
        /// </summary>
        /// <returns>The depth-image coordinates.</returns>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <param name="posColor">Color image coordinates</param>
        /// <param name="minDist">Minimum distance in mm, or 0 to get the sensor interface's minDistance</param>
        /// <param name="maxDist">Maximum distance in mm, or 0 to get the sensor interface's maxDistance</param>
        public Vector2 MapColorPointToDepthCoords(int sensorIndex, Vector2 posColor, int minDist, int maxDist)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null)
            {
                return KinectInterop.MapColorPointToDepthCoords(sensorData, posColor, minDist, maxDist);
            }

            return Vector2.zero;
        }


        /// <summary>
        /// Unprojects plane point into the space. This method is sensor space and unit scale factor specific.
        /// </summary>
        /// <param name="sensorIndex">The sensor index</param>
        /// <param name="intr">Camera intrinsics</param>
        /// <param name="pixel">Position of the plane point</param>
        /// <param name="depth">Distance in meters</param>
        /// <returns>Position of the space point</returns>
        public Vector3 SensorUnprojectPoint(int sensorIndex, KinectInterop.CameraIntrinsics intr, Vector2 pixel, float depth)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.sensorInterface != null)
            {
                DepthSensorBase sensorInt = (DepthSensorBase)sensorData.sensorInterface;
                return sensorInt.UnprojectPoint(intr, pixel, depth);
            }

            return Vector3.zero;
        }


        /// <summary>
        /// Projects space point onto a plane. This method is sensor space and unit scale factor specific.
        /// </summary>
        /// <param name="sensorIndex">The sensor index</param>
        /// <param name="intr">Camera intrinsics</param>
        /// <param name="point">Position of the space point</param>
        /// <returns>Position of the plane point</returns>
        public Vector2 SensorProjectPoint(int sensorIndex, KinectInterop.CameraIntrinsics intr, Vector3 point)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.sensorInterface != null)
            {
                DepthSensorBase sensorInt = (DepthSensorBase)sensorData.sensorInterface;
                return sensorInt.ProjectPoint(intr, point);
            }

            return Vector2.zero;
        }


        /// <summary>
        /// Transforms a point from one space into another. This method is sensor space and unit scale factor specific.
        /// </summary>
        /// <param name="sensorIndex">The sensor index</param>
        /// <param name="extr">Inter-space extrinsics</param>
        /// <param name="point">Position of the point in the 1st space</param>
        /// <returns>Position of the point in the 2nd space</returns>
        public Vector3 SensorTransformPoint(int sensorIndex, KinectInterop.CameraExtrinsics extr, Vector3 point)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.sensorInterface != null)
            {
                DepthSensorBase sensorInt = (DepthSensorBase)sensorData.sensorInterface;
                return sensorInt.TransformPoint(extr, point);
            }

            return Vector3.zero;
        }


        ///// <summary>
        ///// Maps the depth frame to space coordinates.
        ///// </summary>
        ///// <returns><c>true</c> on success, <c>false</c> otherwise.</returns>
        ///// <param name="sensorIndex">The sensor index.</param>
        ///// <param name="avSpaceCoords">Buffer for the depth-to-space coordinates.</param>
        //public bool MapDepthFrameToSpaceCoords(int sensorIndex, ref Vector3[] avSpaceCoords)
        //{
        //    bool bResult = false;

        //    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
        //    if (sensorData != null && sensorData.depthImage != null)
        //    {
        //        if (avSpaceCoords == null || avSpaceCoords.Length == 0)
        //        {
        //            avSpaceCoords = new Vector3[sensorData.depthImageWidth * sensorData.depthImageHeight];
        //        }

        //        bResult = KinectInterop.MapDepthFrameToSpaceCoords(sensorData, ref avSpaceCoords);
        //    }

        //    return bResult;
        //}


        ///// <summary>
        ///// Returns the depth-map coordinates of a color point.
        ///// </summary>
        ///// <returns>The depth coords.</returns>
        ///// <param name="sensorIndex">The sensor index.</param>
        ///// <param name="colorPos">Color position.</param>
        ///// <param name="bReadDepthCoordsIfNeeded">If set to <c>true</c> allows reading of depth coords, if needed.</param>
        //public Vector2 MapColorPointToDepthCoords(int sensorIndex, Vector2 colorPos, bool bReadDepthCoordsIfNeeded)
        //{
        //    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
        //    if (sensorData != null && sensorData.colorImageTexture != null && sensorData.depthImage != null)
        //    {
        //        return KinectInterop.MapColorPointToDepthCoords(sensorData, colorPos, bReadDepthCoordsIfNeeded);
        //    }

        //    return Vector2.zero;
        //}


        ///// <summary>
        ///// Maps the depth frame to color coordinates.
        ///// </summary>
        ///// <returns><c>true</c> on success, <c>false</c> otherwise.</returns>
        ///// <param name="sensorIndex">The sensor index.</param>
        ///// <param name="avColorCoords">Buffer for depth-to-color coordinates.</param>
        //public bool MapDepthFrameToColorCoords(int sensorIndex, ref Vector2[] avColorCoords)
        //{
        //    bool bResult = false;

        //    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
        //    if (sensorData != null && sensorData.depthImage != null && sensorData.colorImageTexture != null)
        //    {
        //        if (avColorCoords == null || avColorCoords.Length == 0)
        //        {
        //            avColorCoords = new Vector2[sensorData.depthImageWidth * sensorData.depthImageHeight];
        //        }

        //        bResult = KinectInterop.MapDepthFrameToColorCoords(sensorData, ref avColorCoords);
        //    }

        //    return bResult;
        //}


        ///// <summary>
        ///// Maps the color frame to depth coordinates.
        ///// </summary>
        ///// <returns><c>true</c> on success, <c>false</c> otherwise.</returns>
        ///// <param name="sensorIndex">The sensor index.</param>
        ///// <param name="avDepthCoords">Buffer for color-to-depth coordinates.</param>
        //public bool MapColorFrameToDepthCoords(int sensorIndex, ref Vector2[] avDepthCoords)
        //{
        //    bool bResult = false;

        //    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
        //    if (sensorData != null && sensorData.colorImageTexture != null && sensorData.depthImage != null)
        //    {
        //        if (avDepthCoords == null || avDepthCoords.Length == 0)
        //        {
        //            avDepthCoords = new Vector2[sensorData.colorImageWidth * sensorData.colorImageWidth];
        //        }

        //        bResult = KinectInterop.MapColorFrameToDepthCoords(sensorData, ref avDepthCoords);
        //    }

        //    return bResult;
        //}


        /// <summary>
        /// Gets the last body frame time, as returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The body frame time.</returns>
        public ulong GetBodyFrameTime(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.lastBodyFrameTime : 0;
        }

        /// <summary>
        /// Gets the last body index frame time, as returned by the sensor.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The body index frame time.</returns>
        public ulong GetBodyIndexFrameTime(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.lastBodyIndexFrameTime : 0;
        }

        /// <summary>
        /// Gets the users' image texture.
        /// </summary>
        /// <returns>The user bodies texture.</returns>
        public Texture GetUsersImageTex()
        {
            return GetUsersImageTex(btSensorIndex);
        }

        /// <summary>
        /// Gets the users' image texture.
        /// </summary>
        /// <param name="sensorIndex">The sensor index.</param>
        /// <returns>The user bodies texture.</returns>
        public Texture GetUsersImageTex(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if(sensorData != null)
            {
                return sensorData.bodyImageTexture != null ? sensorData.bodyImageTexture : sensorData.depthImageTexture;
            }

            return null;
        }

        /// <summary>
        /// Gets number of bodies tracked by the respective sensor.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <returns>Number of bodies tracked by the sensor.</returns>
        public uint GetSensorBodyCount(int sensorIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            return sensorData != null ? sensorData.trackedBodiesCount : 0;
        }

        /// <summary>
        /// Determines whether the user with the specified index is currently detected by the sensor
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <returns><c>true</c> if the user is detected; otherwise, <c>false</c>.</returns>
        public bool IsSensorBodyDetected(int sensorIndex, int bodyIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.alTrackedBodies != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
            {
                return sensorData.alTrackedBodies[bodyIndex].bIsTracked;
            }

            return false;
        }

        /// <summary>
        /// Gets body ID, as tracked by the respective sensor.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <returns>Body ID, or 0 if not found</returns>
        public ulong GetSensorBodyId(int sensorIndex, int bodyIndex)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if(sensorData != null && sensorData.alTrackedBodies != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
            {
                return sensorData.alTrackedBodies[bodyIndex].liTrackingID;
            }

            return 0;
        }

        /// <summary>
        /// Gets body index, as tracked by the respective sensor.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyId">Body ID</param>
        /// <returns>Sensor tracked body index, or -1 if not found.</returns>
        public int GetSensorBodyIndex(int sensorIndex, ulong bodyId)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            uint sensorBodyCount = GetSensorBodyCount(sensorIndex);

            for (int i = 0; i < sensorBodyCount; i++)
            {
                if (sensorData.alTrackedBodies[i].liTrackingID == bodyId)
                {
                    return i;
                }
            }

            return -1;
        }

        ///// <summary>
        ///// Gets body index, as tracked by the respective sensor.
        ///// </summary>
        ///// <param name="sensorIndex">Sensor index.</param>
        ///// <param name="bodyIndex">Body index.</param>
        ///// <returns>Sensor tracked body index, or -1 if not found.</returns>
        //public int GetSensorBodyIndex(int sensorIndex, int bodyIndex)
        //{
        //    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
        //    if (sensorData != null && sensorData.alTrackedBodies != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
        //    {
        //        return sensorData.alTrackedBodies[bodyIndex].iBodyIndex;
        //    }

        //    return -1;
        //}

        /// <summary>
        /// Gets the tracking state of the joint.
        /// </summary>
        /// <returns>The joint tracking state.</returns>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">User joint</param>
        public KinectInterop.TrackingState GetSensorJointTrackingState(int sensorIndex, int bodyIndex, KinectInterop.JointType joint)
        {
            return GetSensorJointTrackingState(sensorIndex, bodyIndex, (int)joint);
        }

        /// <summary>
        /// Gets the tracking state of the joint.
        /// </summary>
        /// <returns>The joint tracking state.</returns>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint index</param>
        public KinectInterop.TrackingState GetSensorJointTrackingState(int sensorIndex, int bodyIndex, int joint)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.alTrackedBodies != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
            {
                KinectInterop.JointData jointData = sensorData.alTrackedBodies[bodyIndex].joint[joint];
                return jointData.trackingState;
            }

            return KinectInterop.TrackingState.NotTracked;
        }

        /// <summary>
        /// Determines whether the given joint of the specified user is being tracked.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint.</param>
        /// <returns><c>true</c> if this instance is joint tracked the specified userId joint; otherwise, <c>false</c>.</returns>
        public bool IsSensorJointTracked(int sensorIndex, int bodyIndex, KinectInterop.JointType joint)
        {
            return IsSensorJointTracked(sensorIndex, bodyIndex, (int)joint);
        }

        /// <summary>
        /// Determines whether the given joint of the specified user is being tracked.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint index.</param>
        /// <returns><c>true</c> if this instance is joint tracked the specified userId joint; otherwise, <c>false</c>.</returns>
        public bool IsSensorJointTracked(int sensorIndex, int bodyIndex, int joint)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.alTrackedBodies != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
            {
                KinectInterop.JointData jointData = sensorData.alTrackedBodies[bodyIndex].joint[joint];

                return ignoreInferredJoints ? ((int)jointData.trackingState >= (int)KinectInterop.TrackingState.Tracked) :
                    (jointData.trackingState != KinectInterop.TrackingState.NotTracked);
            }

            return false;
        }

        /// <summary>
        /// Gets the joint position of the body, tracked by the respectuve sensor, in sensor's coordinate system, in meters.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint.</param>
        /// <param name="applySpaceScale">Whether to apply the sensor space scale or not</param>
        /// <returns>The joint position in sensor's coordinate system.</returns>
        public Vector3 GetSensorJointKinectPosition(int sensorIndex, int bodyIndex, KinectInterop.JointType joint, bool applySpaceScale)
        {
            return GetSensorJointKinectPosition(sensorIndex, bodyIndex, (int)joint, applySpaceScale);
        }

        /// <summary>
        /// Gets the joint position of the body, tracked by the respectuve sensor, in sensor's coordinate system, in meters.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint index.</param>
        /// <param name="applySpaceScale">Whether to apply the sensor space scale or not</param>
        /// <returns>The joint position in sensor's coordinate system.</returns>
        public Vector3 GetSensorJointKinectPosition(int sensorIndex, int bodyIndex, int joint, bool applySpaceScale)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.alTrackedBodies != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
            {
                Vector3 jointKinectPos = sensorData.alTrackedBodies[bodyIndex].joint[joint].kinectPos;

                if (applySpaceScale && btSensorIndex >= 0 && btSensorIndex < sensorDatas.Count)
                {
                    Vector3 spaceScale = sensorDatas[sensorIndex].sensorSpaceScale;
                    return new Vector3(jointKinectPos.x * spaceScale.x, jointKinectPos.y * spaceScale.y, jointKinectPos.z * spaceScale.z);
                }
                else
                {
                    return jointKinectPos;
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the joint position of the body, tracked by the respectuve sensor, in meters.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint.</param>
        /// <returns>The joint position.</returns>
        public Vector3 GetSensorJointPosition(int sensorIndex, int bodyIndex, KinectInterop.JointType joint)
        {
            return GetSensorJointPosition(sensorIndex, bodyIndex, (int)joint);
        }

        /// <summary>
        /// Gets the joint position of the body, tracked by the respectuve sensor, in meters.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint index.</param>
        /// <returns>The joint position.</returns>
        public Vector3 GetSensorJointPosition(int sensorIndex, int bodyIndex, int joint)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.alTrackedBodies != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
            {
                return sensorData.alTrackedBodies[bodyIndex].joint[joint].position;
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the joint orientation of the body, tracked by the respectuve sensor.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint.</param>
        /// <param name="flip">If set to <c>true</c>, this means non-mirrored rotation.</param>
        /// <returns>The joint rotation.</returns>
        public Quaternion GetSensorJointOrientation(int sensorIndex, int bodyIndex, KinectInterop.JointType joint, bool flip)
        {
            return GetSensorJointOrientation(sensorIndex, bodyIndex, (int)joint, flip);
        }

        /// <summary>
        /// Gets the joint orientation of the body, tracked by the respectuve sensor.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="bodyIndex">Body index.</param>
        /// <param name="joint">Joint index.</param>
        /// <param name="flip">If set to <c>true</c>, this means non-mirrored rotation.</param>
        /// <returns>The joint rotation.</returns>
        public Quaternion GetSensorJointOrientation(int sensorIndex, int bodyIndex, int joint, bool flip)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData != null && sensorData.alTrackedBodies != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
            {
                if (flip)
                    return sensorData.alTrackedBodies[bodyIndex].joint[joint].normalRotation;
                else
                    return sensorData.alTrackedBodies[bodyIndex].joint[joint].mirroredRotation;
            }

            return Quaternion.identity;
        }

        /// <summary>
        /// Determines whether the user with the specified index is currently detected by the sensor
        /// </summary>
        /// <returns><c>true</c> if the user is detected; otherwise, <c>false</c>.</returns>
        /// <param name="i">The user index.</param>
        public bool IsUserDetected(int i)
        {
            if (i >= 0 && i < KinectInterop.Constants.MaxBodyCount)
            {
                return (userManager.aUserIndexIds[i] != 0);
            }

            return false;
        }

        /// <summary>
        /// Determines whether the user with the specified userId is in the list of tracked users or not.
        /// </summary>
        /// <returns><c>true</c> if the user with the specified userId is tracked; otherwise, <c>false</c>.</returns>
        /// <param name="userId">User identifier.</param>
        public bool IsUserTracked(ulong userId)
        {
            return userManager.dictUserIdToIndex.ContainsKey(userId);
        }

        /// <summary>
        /// Gets the number of currently tracked users.
        /// </summary>
        /// <returns>The users count.</returns>
        public int GetUsersCount()
        {
            return userManager.alUserIds.Count;
        }

        /// <summary>
        /// Gets the IDs of all currently tracked users.
        /// </summary>
        /// <returns>The list of all currently tracked users.</returns>
        public List<ulong> GetAllUserIds()
        {
            return new List<ulong>(userManager.alUserIds);
        }

        /// <summary>
        /// Gets the max player-index of the currently tracked users.
        /// </summary>
        /// <returns>The max player-index of the tracked users.</returns>
        public int GetMaxUserIndex()
        {
            int maxIndex = -1;

            for (int i = KinectInterop.Constants.MaxBodyCount - 1; i >= 0; i--)
            {
                if (userManager.aUserIndexIds[i] != 0)
                {
                    maxIndex = i;
                    break;
                }
            }

            return maxIndex;
        }

        /// <summary>
        /// Gets the player indices of all currently tracked users.
        /// </summary>
        /// <returns>The list of player-indices of all tracked users.</returns>
        public List<int> GetAllUserIndices()
        {
            List<int> alIndices = new List<int>();

            for (int i = 0; i < KinectInterop.Constants.MaxBodyCount; i++)
            {
                if (userManager.aUserIndexIds[i] != 0)
                {
                    alIndices.Add(i);
                }
            }

            return alIndices;
        }

        /// <summary>
        /// Gets the user ID by the specified user index.
        /// </summary>
        /// <returns>The user ID by index.</returns>
        /// <param name="i">The user index.</param>
        public ulong GetUserIdByIndex(int i)
        {
            if (i >= 0 && i < KinectInterop.Constants.MaxBodyCount)
            {
                return userManager.aUserIndexIds[i];
            }

            return 0;
        }

        /// <summary>
        /// Gets the user index by the specified user ID.
        /// </summary>
        /// <returns>The user index by user ID.</returns>
        /// <param name="userId">User ID</param>
        public int GetUserIndexById(ulong userId)
        {
            if (userId == 0)
                return -1;

            for (int i = 0; i < userManager.aUserIndexIds.Length; i++)
            {
                if (userManager.aUserIndexIds[i] == userId)
                {
                    return i;
                }
            }

            return -1;
        }

        /// <summary>
        /// Gets the body index by the specified user ID, or -1 if the user ID does not exist.
        /// </summary>
        /// <returns>The body index by user ID.</returns>
        /// <param name="userId">User ID</param>
        public int GetBodyIndexByUserId(ulong userId)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    int bodyIndex = alTrackedBodies[index].iBodyIndex;
                    return bodyIndex;
                }
            }

            return -1;
        }

        /// <summary>
        /// Gets the list of tracked body indices.
        /// </summary>
        /// <returns>The list of body indices.</returns>
        public List<int> GetTrackedBodyIndices()
        {
            List<int> alBodyIndices = new List<int>(userManager.dictUserIdToIndex.Values);
            return alBodyIndices;
        }

        /// <summary>
        /// Determines whether the tracked users are limited by their number or distance or not.
        /// </summary>
        /// <returns><c>true</c> if the users are limited by number or distance; otherwise, <c>false</c>.</returns>
        public bool IsTrackedUsersLimited()
        {
            return bLimitedUsers;
        }

        /// <summary>
        /// Gets the UserID of the primary user (the first or the closest one), or 0 if no user is detected.
        /// </summary>
        /// <returns>The primary user ID.</returns>
        public ulong GetPrimaryUserID()
        {
            return userManager.liPrimaryUserId;
        }

        /// <summary>
        /// Sets the primary user ID, in order to change the active user.
        /// </summary>
        /// <returns><c>true</c>, if primary user ID was set, <c>false</c> otherwise.</returns>
        /// <param name="userId">User ID</param>
        public bool SetPrimaryUserID(ulong userId)
        {
            bool bResult = false;

            if (userManager.alUserIds.Contains(userId) || (userId == 0))
            {
                userManager.liPrimaryUserId = userId;
                bResult = true;
            }

            return bResult;
        }

        /// <summary>
        /// Gets the body index, if there is single body selected to be displayed on the user map, or -1 if all bodies are displayed.
        /// </summary>
        /// <returns>The displayed body index, or -1 if all bodies are displayed.</returns>
        public int GetDisplayedBodyIndex()
        {
            return selectedBodyIndex != 255 ? selectedBodyIndex : -1;
        }

        /// <summary>
        /// Sets the body index, if a single body must be displayed on the user map, or -1 if all bodies must be displayed.
        /// </summary>
        /// <returns><c>true</c>, if the change was successful, <c>false</c> otherwise.</returns>
        /// <param name="iBodyIndex">The single body index, or -1 if all bodies must be displayed.</param>
        public void SetDisplayedBodyIndex(int iBodyIndex)
        {
            selectedBodyIndex = (byte)(iBodyIndex >= 0 ? iBodyIndex : 255);
        }

        /// <summary>
        /// Gets the last body frame timestamp.
        /// </summary>
        /// <returns>The last body frame timestamp.</returns>
        public ulong GetBodyFrameTimestamp()
        {
            return lastBodyFrameTime;
        }

        // do not change the data in the structure directly
        /// <summary>
        /// Gets the user body data (for internal purposes only).
        /// </summary>
        /// <returns>The user body data.</returns>
        /// <param name="userId">User ID</param>
        internal KinectInterop.BodyData GetUserBodyData(ulong userId)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount)
                {
                    return alTrackedBodies[index];
                }
            }

            return new KinectInterop.BodyData((int)KinectInterop.JointType.Count);
        }

        /// <summary>
        /// Gets the user position in Kinect coordinate system, in meters.
        /// </summary>
        /// <returns>The user kinect position.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="applyDepthScale">Whether to apply the sensor space scale or not</param>
        public Vector3 GetUserKinectPosition(ulong userId, bool applySpaceScale)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    Vector3 userKinectPos = alTrackedBodies[index].kinectPos;

                    if (applySpaceScale && btSensorIndex >= 0 && btSensorIndex < sensorDatas.Count)
                    {
                        Vector3 spaceScale = sensorDatas[btSensorIndex].sensorSpaceScale;
                        return new Vector3(userKinectPos.x * spaceScale.x, userKinectPos.y * spaceScale.y, userKinectPos.z);
                    }
                    else
                    {
                        return userKinectPos;
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the user position, relative to the sensor, in meters.
        /// </summary>
        /// <returns>The user position.</returns>
        /// <param name="userId">User ID</param>
        public Vector3 GetUserPosition(ulong userId)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    return alTrackedBodies[index].position;
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the user orientation.
        /// </summary>
        /// <returns>The user rotation.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="flip">If set to <c>true</c>, this means non-mirrored rotation.</param>
        public Quaternion GetUserOrientation(ulong userId, bool flip)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (flip)
                        return alTrackedBodies[index].normalRotation;
                    else
                        return alTrackedBodies[index].mirroredRotation;
                }
            }

            return Quaternion.identity;
        }

        /// <summary>
        /// Gets the index of the sensor, used for the primary body tracking.
        /// </summary>
        /// <returns></returns>
        public int GetPrimaryBodySensorIndex()
        {
            return btSensorIndex;
        }

        /// <summary>
        /// Returns the sensor orientation angle (Z-angle), in degrees, of the primary sensor used for body tracking.
        /// </summary>
        /// <returns>Sensor orientation angle</returns>
        public float GetPrimaryBodySensorOrientationAngle()
        {
            if(btSensorIndex >= 0 && btSensorIndex < sensorDatas.Count)
            {
                KinectInterop.SensorData sensorData = sensorDatas[btSensorIndex];

                if (sensorData != null && sensorData.sensorInterface != null)
                {
                    return sensorData.sensorInterface.GetBodyTrackerOrientationAngle();
                }
            }

            return 0f;
        }

        /// <summary>
        /// Gets the number of bodies, tracked by the sensor.
        /// </summary>
        /// <returns>The body count.</returns>
        public int GetBodyCount()
        {
            return (int)trackedBodiesCount;
        }

        /// <summary>
        /// Gets the maximum possible number of bodies, tracked by the sensor.
        /// </summary>
        /// <returns>The maximum body count.</returns>
        public int GetMaxBodyCount()
        {
            return KinectInterop.Constants.MaxBodyCount;
        }

        /// <summary>
        /// Gets the the number of body joints, tracked by the sensor.
        /// </summary>
        /// <returns>The count of joints.</returns>
        public int GetJointCount()
        {
            return (int)KinectInterop.JointType.Count;
        }

        /// <summary>
        /// Gets the parent joint of the given joint.
        /// </summary>
        /// <returns>The parent joint.</returns>
        /// <param name="joint">Joint.</param>
        public KinectInterop.JointType GetParentJoint(KinectInterop.JointType joint)
        {
            return KinectInterop.GetParentJoint(joint);
        }

        /// <summary>
        /// Gets the next joint of the given joint.
        /// </summary>
        /// <returns>The next joint.</returns>
        /// <param name="joint">Joint.</param>
        public KinectInterop.JointType GetNextJoint(KinectInterop.JointType joint)
        {
            return KinectInterop.GetNextJoint(joint);
        }

        /// <summary>
        /// Gets the tracking state of the joint.
        /// </summary>
        /// <returns>The joint tracking state.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        public KinectInterop.TrackingState GetJointTrackingState(ulong userId, KinectInterop.JointType joint)
        {
            return GetJointTrackingState(userId, (int)joint);
        }

        /// <summary>
        /// Gets the tracking state of the joint.
        /// </summary>
        /// <returns>The joint tracking state.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        public KinectInterop.TrackingState GetJointTrackingState(ulong userId, int joint)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        return alTrackedBodies[index].joint[joint].trackingState;
                    }
                }
            }

            return KinectInterop.TrackingState.NotTracked;
        }

        /// <summary>
        /// Determines whether the given joint of the specified user is being tracked.
        /// </summary>
        /// <returns><c>true</c> if this instance is joint tracked the specified userId joint; otherwise, <c>false</c>.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        public bool IsJointTracked(ulong userId, KinectInterop.JointType joint)
        {
            return IsJointTracked(userId, (int)joint);
        }

        /// <summary>
        /// Determines whether the given joint of the specified user is being tracked.
        /// </summary>
        /// <returns><c>true</c> if this instance is joint tracked the specified userId joint; otherwise, <c>false</c>.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        public bool IsJointTracked(ulong userId, int joint)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        KinectInterop.JointData jointData = alTrackedBodies[index].joint[joint];

                        return ignoreInferredJoints ? ((int)jointData.trackingState >= (int)KinectInterop.TrackingState.Tracked) :
                            (jointData.trackingState != KinectInterop.TrackingState.NotTracked);
                    }
                }
            }

            return false;
        }

        /// <summary>
        /// Gets the joint position of the specified user, in Kinect coordinate system, in meters.
        /// </summary>
        /// <returns>The joint kinect position.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        /// <param name="applySpaceScale">Whether to apply the sensor space scale or not</param>
        public Vector3 GetJointKinectPosition(ulong userId, KinectInterop.JointType joint, bool applySpaceScale)
        {
            return GetJointKinectPosition(userId, (int)joint, applySpaceScale);
        }

        /// <summary>
        /// Gets the joint position of the specified user, in Kinect coordinate system, in meters.
        /// </summary>
        /// <returns>The joint kinect position.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        /// <param name="applySpaceScale">Whether to apply the sensor space scale or not</param>
        public Vector3 GetJointKinectPosition(ulong userId, int joint, bool applySpaceScale)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        KinectInterop.JointData jointData = alTrackedBodies[index].joint[joint];
                        Vector3 jointKinectPos = jointData.kinectPos;

                        if (applySpaceScale && btSensorIndex >= 0 && btSensorIndex < sensorDatas.Count)
                        {
                            Vector3 spaceScale = sensorDatas[btSensorIndex].sensorSpaceScale;
                            return new Vector3(jointKinectPos.x * spaceScale.x, jointKinectPos.y * spaceScale.y, jointKinectPos.z);
                        }
                        else
                        {
                            return jointKinectPos;
                        }
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the joint position of the specified user, in meters.
        /// </summary>
        /// <returns>The joint position.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        public Vector3 GetJointPosition(ulong userId, KinectInterop.JointType joint)
        {
            return GetJointPosition(userId, (int)joint);
        }

        /// <summary>
        /// Gets the joint position of the specified user, in meters.
        /// </summary>
        /// <returns>The joint position.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        public Vector3 GetJointPosition(ulong userId, int joint)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        KinectInterop.JointData jointData = alTrackedBodies[index].joint[joint];
                        return jointData.position;
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the joint velocity for the specified user and joint, in meters/s.
        /// </summary>
        /// <returns>The joint velocity.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index.</param>
        public Vector3 GetJointVelocity(ulong userId, KinectInterop.JointType joint)
        {
            return GetJointVelocity(userId, (int)joint);
        }

        /// <summary>
        /// Gets the joint velocity for the specified user and joint, in meters/s.
        /// </summary>
        /// <returns>The joint velocity.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index.</param>
        public Vector3 GetJointVelocity(ulong userId, int joint)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        return alTrackedBodies[index].joint[joint].posVel;
                    }
                }
            }

            return Vector3.zero;
        }


        /// <summary>
        /// Gets the joint direction of the specified user, relative to its parent joint.
        /// </summary>
        /// <returns>The joint direction.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        /// <param name="flipX">If set to <c>true</c> flips the X-coordinate</param>
        /// <param name="flipZ">If set to <c>true</c> flips the Z-coordinate</param>
        public Vector3 GetJointDirection(ulong userId, KinectInterop.JointType joint, bool flipX, bool flipZ)
        {
            return GetJointDirection(userId, (int)joint, flipX, flipZ);
        }

        /// <summary>
        /// Gets the joint direction of the specified user, relative to its parent joint.
        /// </summary>
        /// <returns>The joint direction.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        /// <param name="flipX">If set to <c>true</c> flips the X-coordinate</param>
        /// <param name="flipZ">If set to <c>true</c> flips the Z-coordinate</param>
        public Vector3 GetJointDirection(ulong userId, int joint, bool flipX, bool flipZ)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        KinectInterop.JointData jointData = alTrackedBodies[index].joint[joint];
                        Vector3 jointDir = jointData.direction;

                        if (flipX)
                            jointDir.x = -jointDir.x;

                        if (flipZ)
                            jointDir.z = -jointDir.z;

                        return jointDir;
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the direction between the given joints of the specified user.
        /// </summary>
        /// <returns>The direction between joints.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="firstJoint">First joint</param>
        /// <param name="secondJoint">Second joint</param>
        /// <param name="flipX">If set to <c>true</c> flips the X-coordinate</param>
        /// <param name="flipZ">If set to <c>true</c> flips the Z-coordinate</param>
        public Vector3 GetDirectionBetweenJoints(ulong userId, KinectInterop.JointType firstJoint, KinectInterop.JointType secondJoint, bool flipX, bool flipZ)
        {
            return GetDirectionBetweenJoints(userId, (int)firstJoint, (int)secondJoint, flipX, flipZ);
        }

        /// <summary>
        /// Gets the direction between the given joints of the specified user.
        /// </summary>
        /// <returns>The direction between joints.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="firstJoint">First joint index</param>
        /// <param name="secondJoint">Second joint index</param>
        /// <param name="flipX">If set to <c>true</c> flips the X-coordinate</param>
        /// <param name="flipZ">If set to <c>true</c> flips the Z-coordinate</param>
        public Vector3 GetDirectionBetweenJoints(ulong userId, int firstJoint, int secondJoint, bool flipX, bool flipZ)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    KinectInterop.BodyData bodyData = alTrackedBodies[index];

                    if (firstJoint >= 0 && firstJoint < (int)KinectInterop.JointType.Count &&
                        secondJoint >= 0 && secondJoint < (int)KinectInterop.JointType.Count)
                    {
                        Vector3 firstJointPos = bodyData.joint[firstJoint].position;
                        Vector3 secondJointPos = bodyData.joint[secondJoint].position;
                        Vector3 jointDir = secondJointPos - firstJointPos;

                        if (flipX)
                            jointDir.x = -jointDir.x;

                        if (flipZ)
                            jointDir.z = -jointDir.z;

                        return jointDir;
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the joint orientation of the specified user.
        /// </summary>
        /// <returns>The joint rotation.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        /// <param name="flip">If set to <c>true</c>, this means non-mirrored rotation</param>
        public Quaternion GetJointOrientation(ulong userId, KinectInterop.JointType joint, bool flip)
        {
            return GetJointOrientation(userId, (int)joint, flip);
        }

        /// <summary>
        /// Gets the joint orientation of the specified user.
        /// </summary>
        /// <returns>The joint rotation.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        /// <param name="flip">If set to <c>true</c>, this means non-mirrored rotation</param>
        public Quaternion GetJointOrientation(ulong userId, int joint, bool flip)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (flip)
                        return alTrackedBodies[index].joint[joint].normalRotation;
                    else
                        return alTrackedBodies[index].joint[joint].mirroredRotation;
                }
            }

            return Quaternion.identity;
        }

        /// <summary>
        /// Gets the angle between bones at the given joint.
        /// </summary>
        /// <returns>The angle at joint.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        public float GetAngleAtJoint(ulong userId, KinectInterop.JointType joint)
        {
            return GetAngleAtJoint(userId, (int)joint);
        }

        /// <summary>
        /// Gets the angle between bones at the given joint.
        /// </summary>
        /// <returns>The angle at joint.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        public float GetAngleAtJoint(ulong userId, int joint)
        {
            int pjoint = (int)KinectInterop.GetParentJoint((KinectInterop.JointType)joint);
            int njoint = (int)KinectInterop.GetNextJoint((KinectInterop.JointType)joint);

            if (pjoint != joint && njoint != joint)
            {
                Vector3 pos1 = GetJointPosition(userId, pjoint);
                Vector3 pos2 = GetJointPosition(userId, joint);
                Vector3 pos3 = GetJointPosition(userId, njoint);

                if (pos1 != Vector3.zero && pos2 != Vector3.zero && pos3 != Vector3.zero)
                {
                    Vector3 dirP = pos1 - pos2;
                    Vector3 dirN = pos3 - pos2;
                    float fAngle = Vector3.Angle(dirP, dirN);

                    return fAngle;
                }
            }

            return 0f;
        }

        // joints used for estimation of the user body bounds
        private static int[] UBB_Joints = {
            (int)KinectInterop.JointType.Pelvis, (int)KinectInterop.JointType.Neck, (int)KinectInterop.JointType.Head, (int)KinectInterop.JointType.EyeLeft, (int)KinectInterop.JointType.EyeRight,  // up
            (int)KinectInterop.JointType.ShoulderLeft, (int)KinectInterop.JointType.ElbowLeft, (int)KinectInterop.JointType.WristLeft, (int)KinectInterop.JointType.HandLeft,  // left
            (int)KinectInterop.JointType.ShoulderRight, (int)KinectInterop.JointType.ElbowRight, (int)KinectInterop.JointType.WristRight, (int)KinectInterop.JointType.HandRight,  // right
            (int)KinectInterop.JointType.KneeLeft, (int)KinectInterop.JointType.AnkleLeft, (int)KinectInterop.JointType.FootLeft, // down left
            (int)KinectInterop.JointType.KneeRight, (int)KinectInterop.JointType.AnkleRight, (int)KinectInterop.JointType.FootRight, // down right
        };

        /// <summary>
        /// Gets the user bounding box as min & max points, in space coordinates.
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="foregroundCamera">Foreground camera, in case of color image overlay</param>
        /// <param name="sensorIndex">Sensor index, in case of image overlay</param>
        /// <param name="backgroundRect">Background rectangle, in case of color image overlay</param>
        /// <param name="posMin">Returned min point</param>
        /// <param name="posMax">Returned max point</param>
        /// <returns>true on success, false otherwise</returns>
        public bool GetUserBoundingBox(ulong userId, Camera foregroundCamera, int sensorIndex, Rect backgroundRect, 
            out Vector3 posMin, out Vector3 posMax)
        {
            if(userId == 0 || !IsUserTracked(userId))
            {
                posMin = Vector3.zero;
                posMax = Vector3.zero;
                return false;
            }

            float xMin = float.MaxValue, xMax = float.MinValue;
            float yMin = float.MaxValue, yMax = float.MinValue;
            float zMin = float.MaxValue, zMax = float.MinValue;

            //float posMinY = float.MaxValue; int jointMinY = -1;
            //float posMaxY = float.MinValue; int jointMaxY = -1;

            int iCount = UBB_Joints.Length;
            for (int i = 0; i < iCount; i++)
            {
                int j = UBB_Joints[i];

                if (IsJointTracked(userId, j))
                {
                    Vector3 jPos = foregroundCamera != null ? 
                        GetJointPosColorOverlay(userId, j, sensorIndex, foregroundCamera, backgroundRect) :
                        GetJointPosition(userId, j);
                    //Debug.Log("User " + userId + " " + (KinectInterop.JointType)j + ", pos: " + jPos);

                    if(jPos != Vector3.zero)
                    {
                        if (jPos.x < xMin) xMin = jPos.x;
                        if (jPos.y < yMin) yMin = jPos.y;
                        if (jPos.z < zMin) zMin = jPos.z;

                        if (jPos.x > xMax) xMax = jPos.x;
                        if (jPos.y > yMax) yMax = jPos.y;
                        if (jPos.z > zMax) zMax = jPos.z;

                        //if (jPos.y < posMinY)
                        //{
                        //    posMinY = jPos.y;
                        //    jointMinY = j;
                        //}

                        //if (jPos.y > posMaxY)
                        //{
                        //    posMaxY = jPos.y;
                        //    jointMaxY = j;
                        //}
                    }
                }
            }

            //if(jointMinY >= 0)
            //{
            //    Vector3 jPos = GetJointPosColorOverlayToDepthSpace(userId, jointMinY, sensorIndex);
            //    Debug.Log("MinY " + (KinectInterop.JointType)jointMinY + " - " + jPos);
            //    if (jPos != Vector3.zero && jPos.y < yMin)
            //        yMin = jPos.y;
            //}

            //if(jointMaxY >= 0)
            //{
            //    Vector3 jPos = GetJointPosColorOverlayToDepthSpace(userId, jointMaxY, sensorIndex);
            //    Debug.Log("MaxY " + (KinectInterop.JointType)jointMaxY + " - " + jPos);
            //    if (jPos != Vector3.zero && jPos.y > yMax)
            //        yMax = jPos.y;
            //}

            posMin = new Vector3(xMin, yMin, zMin);
            posMax = new Vector3(xMax, yMax, zMax);

            bool bSuccess = xMin != float.MaxValue && xMax != float.MinValue &&
                        yMin != float.MaxValue && yMax != float.MinValue &&
                        zMin != float.MaxValue && zMax != float.MinValue;
            //Debug.Log("User " + userId + " - pMin: " + posMin + ", pMax: " + posMax + ", success: " + bSuccess);

            return bSuccess;
        }

        /// <summary>
        /// Gets the left hand state for the specified user.
        /// </summary>
        /// <returns>The left hand state.</returns>
        /// <param name="userId">User ID</param>
        public KinectInterop.HandState GetLeftHandState(ulong userId)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    return alTrackedBodies[index].leftHandState;
                }
            }

            return KinectInterop.HandState.NotTracked;
        }

        /// <summary>
        /// Gets the right hand state for the specified user.
        /// </summary>
        /// <returns>The right hand state.</returns>
        /// <param name="userId">User ID</param>
        public KinectInterop.HandState GetRightHandState(ulong userId)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    return alTrackedBodies[index].rightHandState;
                }
            }

            return KinectInterop.HandState.NotTracked;
        }

        /// <summary>
        /// Gets the left hand interaction box for the specified user.
        /// </summary>
        /// <returns><c>true</c>, if left hand interaction box was gotten, <c>false</c> otherwise.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="leftBotBack">Vector containing the left, bottom and back coordinates, in meters</param>
        /// <param name="rightTopFront">Vector containing the right, top and front coordinates, in meters</param>
        /// <param name="bValidBox">If set to <c>true</c>, the previously set coordinates are valid</param>
        public bool GetLeftHandInteractionBox(ulong userId, ref Vector3 leftBotBack, ref Vector3 rightTopFront, bool bValidBox)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    KinectInterop.BodyData bodyData = alTrackedBodies[index];
                    bool bResult = true;

                    if (bodyData.joint[(int)KinectInterop.JointType.ShoulderRight].trackingState != KinectInterop.TrackingState.NotTracked &&
                       bodyData.joint[(int)KinectInterop.JointType.HipLeft].trackingState != KinectInterop.TrackingState.NotTracked)
                    {
                        rightTopFront.x = bodyData.joint[(int)KinectInterop.JointType.ShoulderRight].position.x;
                        leftBotBack.x = rightTopFront.x - 2 * (rightTopFront.x - bodyData.joint[(int)KinectInterop.JointType.HipLeft].position.x);
                    }
                    else
                    {
                        bResult = bValidBox;
                    }

                    if (bodyData.joint[(int)KinectInterop.JointType.HipRight].trackingState != KinectInterop.TrackingState.NotTracked &&
                       bodyData.joint[(int)KinectInterop.JointType.ShoulderRight].trackingState != KinectInterop.TrackingState.NotTracked)
                    {
                        leftBotBack.y = bodyData.joint[(int)KinectInterop.JointType.HipRight].position.y;
                        rightTopFront.y = bodyData.joint[(int)KinectInterop.JointType.ShoulderRight].position.y;

                        float fDelta = (rightTopFront.y - leftBotBack.y) * 0.35f; // * 2 / 3;
                        leftBotBack.y += fDelta;
                        rightTopFront.y += fDelta;
                    }
                    else
                    {
                        bResult = bValidBox;
                    }

                    if (bodyData.joint[(int)KinectInterop.JointType.Pelvis].trackingState != KinectInterop.TrackingState.NotTracked)
                    {
                        //leftBotBack.z = bodyData.joint[(int)KinectInterop.JointType.SpineBase].position.z;
                        leftBotBack.z = !ignoreZCoordinates ? bodyData.joint[(int)KinectInterop.JointType.Pelvis].position.z :
                            (bodyData.joint[(int)KinectInterop.JointType.HandLeft].position.z + 0.1f);
                        rightTopFront.z = leftBotBack.z - 0.5f;
                    }
                    else
                    {
                        bResult = bValidBox;
                    }

                    return bResult;
                }
            }

            return false;
        }

        /// <summary>
        /// Gets the right hand interaction box for the specified user.
        /// </summary>
        /// <returns><c>true</c>, if right hand interaction box was gotten, <c>false</c> otherwise.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="leftBotBack">Vector containing the left, bottom and back coordinates, in meters</param>
        /// <param name="rightTopFront">ector containing the right, top and front coordinates, in meters</param>
        /// <param name="bValidBox">If set to <c>true</c>, the previously set coordinates are valid</param>
        public bool GetRightHandInteractionBox(ulong userId, ref Vector3 leftBotBack, ref Vector3 rightTopFront, bool bValidBox)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    KinectInterop.BodyData bodyData = alTrackedBodies[index];
                    bool bResult = true;

                    if (bodyData.joint[(int)KinectInterop.JointType.ShoulderLeft].trackingState != KinectInterop.TrackingState.NotTracked &&
                       bodyData.joint[(int)KinectInterop.JointType.HipRight].trackingState != KinectInterop.TrackingState.NotTracked)
                    {
                        leftBotBack.x = bodyData.joint[(int)KinectInterop.JointType.ShoulderLeft].position.x;
                        rightTopFront.x = leftBotBack.x + 2 * (bodyData.joint[(int)KinectInterop.JointType.HipRight].position.x - leftBotBack.x);
                    }
                    else
                    {
                        bResult = bValidBox;
                    }

                    if (bodyData.joint[(int)KinectInterop.JointType.HipLeft].trackingState != KinectInterop.TrackingState.NotTracked &&
                       bodyData.joint[(int)KinectInterop.JointType.ShoulderLeft].trackingState != KinectInterop.TrackingState.NotTracked)
                    {
                        leftBotBack.y = bodyData.joint[(int)KinectInterop.JointType.HipLeft].position.y;
                        rightTopFront.y = bodyData.joint[(int)KinectInterop.JointType.ShoulderLeft].position.y;

                        float fDelta = (rightTopFront.y - leftBotBack.y) * 0.35f; // * 2 / 3;
                        leftBotBack.y += fDelta;
                        rightTopFront.y += fDelta;
                    }
                    else
                    {
                        bResult = bValidBox;
                    }

                    if (bodyData.joint[(int)KinectInterop.JointType.Pelvis].trackingState != KinectInterop.TrackingState.NotTracked)
                    {
                        //leftBotBack.z = bodyData.joint[(int)KinectInterop.JointType.SpineBase].position.z;
                        leftBotBack.z = !ignoreZCoordinates ? bodyData.joint[(int)KinectInterop.JointType.Pelvis].position.z :
                            (bodyData.joint[(int)KinectInterop.JointType.HandRight].position.z + 0.1f);
                        rightTopFront.z = leftBotBack.z - 0.5f;
                    }
                    else
                    {
                        bResult = bValidBox;
                    }

                    return bResult;
                }
            }

            return false;
        }

        /// <summary>
        /// Gets the foreground rectangle of the depth image.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="foregroundCamera">The foreground camera, or null if there is no foreground camera.</param>
        /// <returns>The foreground rectangle.</returns>
        public Rect GetForegroundRectDepth(int sensorIndex, Camera foregroundCamera)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData == null)
                return new Rect();

            Rect cameraRect = foregroundCamera ? foregroundCamera.pixelRect : new Rect(0, 0, Screen.width, Screen.height);
            float rectHeight = cameraRect.height;
            float rectWidth = cameraRect.width;

            if (sensorData.depthImageWidth > sensorData.depthImageHeight)
                rectWidth = rectHeight * sensorData.depthImageWidth / sensorData.depthImageHeight;
            else
                rectHeight = rectWidth * sensorData.depthImageHeight / sensorData.depthImageWidth;

            float foregroundOfsX = (cameraRect.width - rectWidth) / 2;
            float foregroundOfsY = (cameraRect.height - rectHeight) / 2;

            Rect foregroundImgRect = new Rect(foregroundOfsX, foregroundOfsY, rectWidth, rectHeight);

            return foregroundImgRect;
        }

        ///// <summary>
        ///// Gets the foreground rectangle of the depth image.
        ///// </summary>
        ///// <param name="sensorIndex">Sensor index.</param>
        ///// <param name="foregroundCamera">The foreground camera, or null if there is no foreground camera.</param>
        ///// <param name="scaleX">Scale of the rectangle width.</param>
        ///// <param name="scaleY">Scale of the rectangle height.</param>
        ///// <returns>The foreground rectangle.</returns>
        //public Rect GetForegroundRectDepth(int sensorIndex, Camera foregroundCamera, float scaleX, float scaleY)
        //{
        //    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
        //    if (sensorData == null)
        //        return new Rect();

        //    Rect cameraRect = foregroundCamera ? foregroundCamera.pixelRect : new Rect(0, 0, Screen.width, Screen.height);
        //    float rectHeight = scaleY * cameraRect.height;
        //    float rectWidth = scaleX * cameraRect.width;

        //    if (sensorData.depthImageWidth > sensorData.depthImageHeight)
        //        rectWidth = scaleX * cameraRect.height * sensorData.depthImageWidth / sensorData.depthImageHeight;
        //    else
        //        rectHeight = scaleY * cameraRect.width * sensorData.depthImageHeight / sensorData.depthImageWidth;

        //    float foregroundOfsX = (cameraRect.width - rectWidth) / 2;
        //    float foregroundOfsY = (cameraRect.height - rectHeight) / 2;

        //    Rect foregroundImgRect = new Rect(foregroundOfsX, foregroundOfsY, rectWidth, rectHeight);

        //    return foregroundImgRect;
        //}

        /// <summary>
        /// Gets the foreground rectangle of the color image.
        /// </summary>
        /// <param name="sensorIndex">Sensor index.</param>
        /// <param name="foregroundCamera">The foreground camera, or null if there is no foreground camera.</param>
        /// <returns>The foreground rectangle.</returns>
        public Rect GetForegroundRectColor(int sensorIndex, Camera foregroundCamera)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
            if (sensorData == null)
                return new Rect();

            Rect cameraRect = foregroundCamera ? foregroundCamera.pixelRect : new Rect(0, 0, Screen.width, Screen.height);
            float rectHeight = cameraRect.height;
            float rectWidth = cameraRect.width;

            if (sensorData.colorImageWidth > sensorData.colorImageHeight)
                rectWidth = rectHeight * sensorData.colorImageWidth / sensorData.colorImageHeight;
            else
                rectHeight = rectWidth * sensorData.colorImageHeight / sensorData.colorImageWidth;

            float foregroundOfsX = (cameraRect.width - rectWidth) / 2;
            float foregroundOfsY = (cameraRect.height - rectHeight) / 2;

            Rect foregroundImgRect = new Rect(foregroundOfsX, foregroundOfsY, rectWidth, rectHeight);

            return foregroundImgRect;
        }

        ///// <summary>
        ///// Gets the foreground rectangle of the color image.
        ///// </summary>
        ///// <param name="sensorIndex">Sensor index.</param>
        ///// <param name="foregroundCamera">The foreground camera, or null if there is no foreground camera.</param>
        ///// <param name="scaleX">Scale of the rectangle width.</param>
        ///// <param name="scaleY">Scale of the rectangle height.</param>
        ///// <returns>The foreground rectangle.</returns>
        //public Rect GetForegroundRectColor(int sensorIndex, Camera foregroundCamera, float scaleX, float scaleY)
        //{
        //    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);
        //    if (sensorData == null)
        //        return new Rect();

        //    Rect cameraRect = foregroundCamera ? foregroundCamera.pixelRect : new Rect(0, 0, Screen.width, Screen.height);
        //    float rectHeight = scaleY * cameraRect.height;
        //    float rectWidth = scaleX * cameraRect.width;

        //    if (sensorData.colorImageWidth > sensorData.colorImageHeight)
        //        rectWidth = scaleX * cameraRect.height * sensorData.colorImageWidth / sensorData.colorImageHeight;
        //    else
        //        rectHeight = scaleY * cameraRect.width * sensorData.colorImageHeight / sensorData.colorImageWidth;

        //    float foregroundOfsX = (cameraRect.width - rectWidth) / 2;
        //    float foregroundOfsY = (cameraRect.height - rectHeight) / 2;

        //    Rect foregroundImgRect = new Rect(foregroundOfsX, foregroundOfsY, rectWidth, rectHeight);

        //    return foregroundImgRect;
        //}

        /// <summary>
        /// Gets the 3d overlay position of a point over the depth-image.
        /// </summary>
        /// <returns>The 3d position for depth overlay.</returns>
        /// <param name="dx">Depth image X</param>
        /// <param name="dy">Depth image X</param>
        /// <param name="depth">Distance in mm. If it is 0, the function will try to read the current depth value.</param>
        /// <param name="camera">Camera used to visualize the 3d overlay position</param>
        /// <param name="imageRect">Depth image rectangle on the screen</param>
        public Vector3 GetPosDepthOverlay(int dx, int dy, ushort depth, int sensorIndex, Camera camera, Rect imageRect)
        {
            KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);

            float xScaled = (float)dx * imageRect.width / sensorData.depthImageWidth;
            float yScaled = (float)dy * imageRect.height / sensorData.depthImageHeight;

            float xScreen = imageRect.x + (sensorData.depthImageScale.x > 0f ? xScaled : imageRect.width - xScaled);
            float yScreen = imageRect.y + (sensorData.depthImageScale.y > 0f ? yScaled : imageRect.height - yScaled);

            if(depth == 0)
            {
                depth = sensorData.depthImage[dx + dy * sensorData.depthImageWidth];
            }

            if (depth != 0)
            {
                float zDistance = (float)depth / 1000f;
                Vector3 vPosJoint = camera.ScreenToWorldPoint(new Vector3(xScreen, yScreen, zDistance));

                return vPosJoint;
            }

            return Vector3.zero;
        }


        /// <summary>
        /// Gets the 3d overlay position of the given joint over the depth-image.
        /// </summary>
        /// <returns>The joint position for depth overlay.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        /// <param name="camera">Camera used to visualize the 3d overlay position</param>
        /// <param name="imageRect">Depth image rectangle on the screen</param>
        public Vector3 GetJointPosDepthOverlay(ulong userId, KinectInterop.JointType joint, int sensorIndex, Camera camera, Rect imageRect)
        {
            return GetJointPosDepthOverlay(userId, (int)joint, sensorIndex, camera, imageRect);
        }

        /// <summary>
        /// Gets the 3d overlay position of the given joint over the depth-image.
        /// </summary>
        /// <returns>The joint position for depth overlay.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        /// <param name="camera">Camera used to visualize the 3d overlay position</param>
        /// <param name="imageRect">Depth image rectangle on the screen</param>
        public Vector3 GetJointPosDepthOverlay(ulong userId, int joint, int sensorIndex, Camera camera, Rect imageRect)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId) && camera != null)
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        Vector3 posJointRaw = Vector3.zero;

                        if (sensorDatas.Count == 1)
                        {
                            KinectInterop.JointData jointData = alTrackedBodies[index].joint[joint];
                            posJointRaw = jointData.kinectPos;
                        }
                        else
                        {
                            ulong bodyId = GetSensorBodyId(sensorIndex, userId);
                            int bodyIndex = GetSensorBodyIndex(sensorIndex, bodyId);
                            KinectInterop.SensorData sensorData = sensorIndex >= 0 && sensorIndex < sensorDatas.Count ? sensorDatas[sensorIndex] : null;

                            if (sensorData != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
                            {
                                KinectInterop.JointData jointData = sensorData.alTrackedBodies[bodyIndex].joint[joint];
                                posJointRaw = jointData.kinectPos;
                            }
                        }

                        return GetJointPosDepthOverlay(posJointRaw, sensorIndex, camera, imageRect);
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the 3d overlay position of the given space point on the depth-image.
        /// </summary>
        /// <param name="posSensorSpace">Position in the sensor space</param>
        /// <param name="sensorIndex">Sensor index</param>
        /// <param name="camera">Camera used to visualize the 3d overlay position</param>
        /// <param name="imageRect">Depth image rectangle on the screen</param>
        /// <returns>The overlay position on the depth image.</returns>
        public Vector3 GetJointPosDepthOverlay(Vector3 posSensorSpace, int sensorIndex, Camera camera, Rect imageRect)
        {
            if (posSensorSpace != Vector3.zero)
            {
                // 3d position to depth
                Vector2 posDepth = MapSpacePointToDepthCoords(sensorIndex, posSensorSpace);

                if (posDepth != Vector2.zero)
                {
                    if (!float.IsInfinity(posDepth.x) && !float.IsInfinity(posDepth.y))
                    {
                        KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);

                        float xScaled = (float)posDepth.x * imageRect.width / sensorData.depthImageWidth;
                        float yScaled = (float)posDepth.y * imageRect.height / sensorData.depthImageHeight;

                        float xScreen = imageRect.x + (sensorData.depthImageScale.x > 0f ? xScaled : imageRect.width - xScaled);
                        //float yScreen = camera.pixelHeight - (imageRect.y + yScaled);
                        float yScreen = imageRect.y + (sensorData.depthImageScale.y > 0f ? yScaled : imageRect.height - yScaled);

                        Plane cameraPlane = new Plane(camera.transform.forward, camera.transform.position);
                        float zDistance = cameraPlane.GetDistanceToPoint(posSensorSpace);

                        Vector3 vPosJoint = camera.ScreenToWorldPoint(new Vector3(xScreen, yScreen, zDistance));

                        return vPosJoint;
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the 3d overlay position of the given joint over the color-image.
        /// </summary>
        /// <returns>The joint position for color overlay.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        /// <param name="camera">Camera used to visualize the 3d overlay position</param>
        /// <param name="imageRect">Color image rectangle on the screen</param>
        public Vector3 GetJointPosColorOverlay(ulong userId, KinectInterop.JointType joint, int sensorIndex, Camera camera, Rect imageRect)
        {
            return GetJointPosColorOverlay(userId, (int)joint, sensorIndex, camera, imageRect);
        }

        /// <summary>
        /// Gets the 3d overlay position of the given joint over the color-image.
        /// </summary>
        /// <returns>The joint position for color overlay.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        /// <param name="camera">Camera used to visualize the 3d overlay position</param>
        /// <param name="imageRect">Color image rectangle on the screen</param>
        public Vector3 GetJointPosColorOverlay(ulong userId, int joint, int sensorIndex, Camera camera, Rect imageRect)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId) && camera != null)
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        Vector3 posJointRaw = Vector3.zero;

                        if (sensorDatas.Count == 1)
                        {
                            KinectInterop.JointData jointData = alTrackedBodies[index].joint[joint];
                            posJointRaw = jointData.kinectPos;
                        }
                        else
                        {
                            ulong bodyId = GetSensorBodyId(sensorIndex, userId);
                            int bodyIndex = GetSensorBodyIndex(sensorIndex, bodyId);
                            KinectInterop.SensorData sensorData = sensorIndex >= 0 && sensorIndex < sensorDatas.Count ? sensorDatas[sensorIndex] : null;

                            if (sensorData != null && bodyIndex >= 0 && bodyIndex < sensorData.trackedBodiesCount)
                            {
                                KinectInterop.JointData jointData = sensorData.alTrackedBodies[bodyIndex].joint[joint];
                                posJointRaw = jointData.kinectPos;
                            }
                        }

                        return GetJointPosColorOverlay(posJointRaw, sensorIndex, camera, imageRect);
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the 3d overlay position of the given joint over the color-image.
        /// </summary>
        /// <returns>The joint position for color overlay.</returns>
        /// <param name="posSensorSpace">Position in the sensor space</param>
        /// <param name="camera">Camera used to visualize the 3d overlay position</param>
        /// <param name="imageRect">Color image rectangle on the screen</param>
        public Vector3 GetJointPosColorOverlay(Vector3 posSensorSpace, int sensorIndex, Camera camera, Rect imageRect)
        {
            if (posSensorSpace != Vector3.zero)
            {
                // 3d position to depth
                Vector2 posDepth = MapSpacePointToDepthCoords(sensorIndex, posSensorSpace);
                ushort depthValue = GetDepthForPixel(sensorIndex, (int)posDepth.x, (int)posDepth.y);

                Vector2 posColor = Vector2.zero;
                if (posDepth != Vector2.zero && depthValue > 0)
                {
                    // depth pos to color pos
                    posColor = MapDepthPointToColorCoords(sensorIndex, posDepth, depthValue);
                }
                else
                {
                    // workaround - try to use the color camera space, if depth is not available
                    KinectInterop.SensorData sensorData = sensorDatas[sensorIndex];
                    if(sensorData != null && sensorData.depthCamIntr == null && sensorData.colorCamIntr != null)
                    {
                        posColor = MapSpacePointToColorCoords(sensorIndex, posSensorSpace);
                    }
                }

                if (posColor.x != 0f && !float.IsInfinity(posColor.x))
                {
                    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);

                    float xScaled = (float)posColor.x * imageRect.width / sensorData.colorImageWidth;
                    float yScaled = (float)posColor.y * imageRect.height / sensorData.colorImageHeight;

                    float xScreen = imageRect.x + (sensorData.colorImageScale.x > 0f ? xScaled : imageRect.width - xScaled);
                    //float yScreen = camera.pixelHeight - (imageRect.y + yScaled);
                    float yScreen = imageRect.y + (sensorData.colorImageScale.y > 0f ? yScaled : imageRect.height - yScaled);

                    //Plane cameraPlane = new Plane(camera.transform.forward, camera.transform.position);
                    //float zDistance = cameraPlane.GetDistanceToPoint(posSensorSpace);
                    ////float zDistance = (posSensorSpace - camera.transform.position).magnitude;
                    float zDistance = posSensorSpace.z;

                    //Vector3 vPosJoint = camera.ViewportToWorldPoint(new Vector3(xNorm, yNorm, zDistance));
                    Vector3 vPosJoint = camera.ScreenToWorldPoint(new Vector3(xScreen, yScreen, zDistance));

                    return vPosJoint;
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the 2d overlay position of the given joint over the given image.
        /// </summary>
        /// <returns>The 2d joint position for color overlay.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        /// <param name="imageRect">Color image rectangle on the screen</param>
        public Vector2 GetJointPosColorOverlay(ulong userId, KinectInterop.JointType joint, int sensorIndex, Rect imageRect)
        {
            return GetJointPosColorOverlay(userId, (int)joint, sensorIndex, imageRect);
        }

        /// <summary>
        /// Gets the 2d overlay position of the given joint over the given image.
        /// </summary>
        /// <returns>The 2d joint position for color overlay.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        /// <param name="imageRect">Color image rectangle on the screen</param>
        public Vector2 GetJointPosColorOverlay(ulong userId, int joint, int sensorIndex, Rect imageRect)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        KinectInterop.JointData jointData = alTrackedBodies[index].joint[joint];
                        Vector3 posJointRaw = jointData.kinectPos;

                        if (posJointRaw != Vector3.zero)
                        {
                            // 3d position to depth
                            Vector2 posDepth = MapSpacePointToDepthCoords(sensorIndex, posJointRaw);
                            ushort depthValue = GetDepthForPixel(sensorIndex, (int)posDepth.x, (int)posDepth.y);

                            Vector2 posColor = Vector2.zero;
                            if (posDepth != Vector2.zero && depthValue > 0)
                            {
                                // depth pos to color pos
                                posColor = MapDepthPointToColorCoords(sensorIndex, posDepth, depthValue);
                            }
                            else
                            {
                                // workaround - try to use the color camera space, if depth is not available
                                KinectInterop.SensorData sensorData = sensorDatas[sensorIndex];
                                if (sensorData != null && sensorData.depthCamIntr == null && sensorData.colorCamIntr != null)
                                {
                                    posColor = MapSpacePointToColorCoords(sensorIndex, posJointRaw);
                                }
                            }

                            if (posColor.x != 0f && !float.IsInfinity(posColor.x))
                            {
                                KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);

                                float xScaled = (float)posColor.x * imageRect.width / sensorData.colorImageWidth;
                                float yScaled = (float)posColor.y * imageRect.height / sensorData.colorImageHeight;

                                float xImage = imageRect.x + (sensorData.colorImageScale.x > 0f ? xScaled : imageRect.width - xScaled);
                                float yImage = imageRect.y + (sensorData.colorImageScale.y > 0f ? yScaled : imageRect.height - yScaled);

                                return new Vector2(xImage, yImage);
                            }
                        }
                    }
                }
            }

            return Vector2.zero;
        }

        /// <summary>
        /// Gets the 3d overlay position of the given joint over the color-image and then back to the depth camera space.
        /// </summary>
        /// <returns>The joint position for color overlay.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        /// <param name="sensorIndex">Sensor index</param>
        public Vector3 GetJointPosColorOverlayToDepthSpace(ulong userId, int joint, int sensorIndex)
        {
            if (userManager.dictUserIdToIndex.ContainsKey(userId))
            {
                int index = userManager.dictUserIdToIndex[userId];

                if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                {
                    if (joint >= 0 && joint < (int)KinectInterop.JointType.Count)
                    {
                        KinectInterop.JointData jointData = alTrackedBodies[index].joint[joint];
                        Vector3 posJointRaw = jointData.kinectPos;

                        if (posJointRaw != Vector3.zero)
                        {
                            // 3d position to depth
                            Vector2 posDepth = MapSpacePointToDepthCoords(sensorIndex, posJointRaw);
                            ushort depthValue = GetDepthForPixel(sensorIndex, (int)posDepth.x, (int)posDepth.y);

                            if (posDepth != Vector2.zero && depthValue > 0)
                            {
                                // depth pos to color pos
                                Vector2 posColor = MapDepthPointToColorCoords(sensorIndex, posDepth, depthValue);

                                if(posColor != Vector2.zero)
                                {
                                    // back to depth pos
                                    Vector2 posDepth2 = MapColorPointToDepthCoords(sensorIndex, posColor, depthValue - 100, depthValue + 100);

                                    if(posDepth2 != Vector2.zero)
                                    {
                                        Vector3 vPosJoint = MapDepthPointToSpaceCoords(sensorIndex, posDepth2, depthValue, true);
                                        return vPosJoint;
                                    }
                                }
                            }
                        }
                    }
                }
            }

            return Vector3.zero;
        }

        /// <summary>
        /// Gets the joint position on the depth map texture.
        /// </summary>
        /// <returns>The joint position in texture coordinates.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        public Vector2 GetJointDepthMapPos(ulong userId, KinectInterop.JointType joint, int sensorIndex)
        {
            return GetJointDepthMapPos(userId, (int)joint, sensorIndex);
        }

        /// <summary>
        /// Gets the joint position on the depth map texture.
        /// </summary>
        /// <returns>The joint position in texture coordinates.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        public Vector2 GetJointDepthMapPos(ulong userId, int joint, int sensorIndex)
        {
            Vector2 posDepth = Vector2.zero;

            Vector3 posJointRaw = GetJointKinectPosition(userId, joint, false);
            if (posJointRaw != Vector3.zero)
            {
                posDepth = MapSpacePointToDepthCoords(sensorIndex, posJointRaw);

                if (posDepth != Vector2.zero)
                {
                    KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);

                    float xScaled = (float)posDepth.x / sensorData.depthImageWidth;
                    float yScaled = (float)posDepth.y / sensorData.depthImageHeight;

                    float xImage = sensorData.depthImageScale.x > 0f ? xScaled : 1f - xScaled;
                    float yImage = sensorData.depthImageScale.y > 0f ? yScaled : 1f - yScaled;

                    posDepth = new Vector2(xImage, yImage);
                }
            }

            return posDepth;
        }

        /// <summary>
        /// Gets the joint position on the color map texture.
        /// </summary>
        /// <returns>The joint position in texture coordinates.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">User joint</param>
        public Vector2 GetJointColorMapPos(ulong userId, KinectInterop.JointType joint, int sensorIndex)
        {
            return GetJointColorMapPos(userId, (int)joint, sensorIndex);
        }

        /// <summary>
        /// Gets the joint position on the color map texture.
        /// </summary>
        /// <returns>The joint position in texture coordinates.</returns>
        /// <param name="userId">User ID</param>
        /// <param name="joint">Joint index</param>
        public Vector2 GetJointColorMapPos(ulong userId, int joint, int sensorIndex)
        {
            Vector2 posColor = Vector2.zero;

            Vector3 posJointRaw = GetJointKinectPosition(userId, joint, false);
            if (posJointRaw != Vector3.zero)
            {
                // 3d position to depth
                Vector2 posDepth = MapSpacePointToDepthCoords(sensorIndex, posJointRaw);
                ushort depthValue = GetDepthForPixel(sensorIndex, (int)posDepth.x, (int)posDepth.y);

                if (posDepth != Vector2.zero && depthValue > 0)
                {
                    // depth pos to color pos
                    posColor = MapDepthPointToColorCoords(sensorIndex, posDepth, depthValue);

                    if (posColor.x != 0f && !float.IsInfinity(posColor.x))
                    {
                        KinectInterop.SensorData sensorData = GetSensorData(sensorIndex);

                        float xScaled = (float)posColor.x / sensorData.colorImageWidth;
                        float yScaled = (float)posColor.y / sensorData.colorImageHeight;

                        float xImage = sensorData.colorImageScale.x > 0f ? xScaled : 1f - xScaled;
                        float yImage = sensorData.colorImageScale.y > 0f ? yScaled : 1f - yScaled;

                        posColor = new Vector2(xScaled, 1f - yScaled);
                    }
                    else
                    {
                        posColor = Vector2.zero;
                    }
                }
            }

            return posColor;
        }


        /// <summary>
        /// Returns array of colors, one for each body index.
        /// </summary>
        /// <returns>Array of body index colors.</returns>
        public Color[] GetBodyIndexColors()
        {
            if(_initialBodyIndexColors == null)
            {
                _initialBodyIndexColors = new Color[KinectInterop.Constants.MaxBodyCount];
                for(int i = 0; i < _initialBodyIndexColors.Length; i++)
                    _initialBodyIndexColors[i] = showAllowedUsersOnly ? _bodyColorNone : Color.white;
            }

            KinectInterop.CopyBytes(_initialBodyIndexColors, 4 * sizeof(float), clrUsers, 4 * sizeof(float));
            int numUserIndices = userManager.aUserIndexIds.Length;

            for (int i = 0; i < numUserIndices; i++)
            {
                ulong userId = userManager.aUserIndexIds[i];

                if (userId != 0)
                {
                    //Debug.Log("BI-Colors - UserId: " + userId);
                    int index = userManager.dictUserIdToIndex[userId];
                    if (index >= 0 && index < trackedBodiesCount && alTrackedBodies[index].bIsTracked)
                    {
                        int bi = alTrackedBodies[index].iBodyIndex;
                        clrUsers[bi] = (i == 0) ? Color.yellow : _bodyIndexColors[i % _bodyIndexColors.Length];
                        //Debug.Log(string.Format("{0} - id: {1}, bi: {2}, pos: {3}, clr: {4}", index, userId, bi, alTrackedBodies[index].position, clrUsers[bi]));
                    }
                }
                //else
                //{
                //    clrUsers[i] = showAllowedUsersOnly ? _bodyColorNone : Color.white; // 
                //    //Debug.Log(string.Format("{0} - id: {1}, bi: {2}, clr: {3}", i, userId, -1, clrUsers[i]));
                //}
            }

            return clrUsers;
        }

        // user colors
        private static Color _bodyColorNone = new Color(0f, 0f, 0f, 0f);
        private static readonly Color[] _bodyIndexColors = { Color.red, Color.green, Color.blue, Color.magenta };
        private Color[] clrUsers = new Color[KinectInterop.Constants.MaxBodyCount];

        // initial body index color array
        private static Color[] _initialBodyIndexColors = null;


        /// <summary>
        /// Resets the joint data filters.
        /// </summary>
        public void ResetJointFilters()
        {
            //if (jointPositionFilter != null)
            //{
            //    jointPositionFilter.Reset();
            //}

            if (jointVelocityFilter != null)
            {
                jointVelocityFilter.Reset();
            }
        }


        /// <summary>
        /// Removes all currently detected users, allowing new user-detection process to start.
        /// </summary>
        public void ClearKinectUsers()
        {
            if (!kinectInitialized)
                return;

            // remove current users
            for (int i = userManager.alUserIds.Count - 1; i >= 0; i--)
            {
                ulong userId = userManager.alUserIds[i];
                RemoveUser(userId);
            }

            ResetJointFilters();
        }


        /// <summary>
        /// Gets the body frame as one csv line, or returns empty string if there is no new body frame.
        /// </summary>
        /// <returns>The body frame as a csv line.</returns>
        /// <param name="liRelTime">Reference to variable, used to compare frame times.</param>
        /// <param name="fUnityTime">Reference to variable, used to save the current Unity time.</param>
        public string GetBodyFrameData(ref float fUnityTime, char delimiter)
        {
            Vector3 spaceScale = GetSensorSpaceScale(btSensorIndex);
            return KinectInterop.GetBodyFrameAsCsv(ref alTrackedBodies, trackedBodiesCount, lastBodyFrameTime, spaceScale, ref fUnityTime, delimiter);
        }


        /// <summary>
        /// Determines whether the play mode is enabled or not.
        /// </summary>
        /// <returns><c>true</c> if the play mode is enabled; otherwise, <c>false</c>.</returns>
        public bool IsPlayModeEnabled()
        {
            return isPlayModeEnabled;
        }


        /// <summary>
        /// Enables or displables the play mode.
        /// </summary>
        /// <param name="bEnabled">If set to <c>true</c> enables the play mode.</param>
        public void EnablePlayMode(bool bEnabled)
        {
            isPlayModeEnabled = bEnabled;
            playModeData = string.Empty;
        }

        /// <summary>
        /// Sets the body frame from the given csv line.
        /// </summary>
        /// <returns><c>true</c> on success, <c>false</c> otherwise.</returns>
        /// <param name="sLine">The body frame as csv line.</param>
        public bool SetBodyFrameData(string sLine)
        {
            if (isPlayModeEnabled)
            {
                playModeData = sLine;
                return true;
            }

            return false;
        }

        /// <summary>
        /// Gets the active user body merger, or null if there is no body merger.
        /// </summary>
        /// <returns>The user body merger instance.</returns>
        public KinectUserBodyMerger GetUserBodyMerger()
        {
            return userBodyMerger;
        }

        /// <summary>
        /// Gets the sensor-specific bodyId for the given sensor and user
        /// </summary>
        /// <param name="sensorIndex">Sensor index</param>
        /// <param name="userId">User Id</param>
        /// <returns>Sensor-specific body Id</returns>
        public ulong GetSensorBodyId(int sensorIndex, ulong userId)
        {
            if(userBodyMerger != null)
            {
                return userBodyMerger.GetSensorTrackingId(sensorIndex, userId);
            }
            else
            {
                return userId;
            }
        }

        // internal methods

        void Awake()
        {
            // initializes the singleton instance of KinectManager
            if (instance == null)
            {
                instance = this;
                DontDestroyOnLoad(this);
            }
            else if (instance != this)
            {
                DestroyImmediate(gameObject);
                return;
            }

            // set graphics shader level
            KinectInterop.SetGraphicsShaderLevel(SystemInfo.graphicsShaderLevel);

            // user manager by default 
            if (userManager == null)
            {
                userManager = gameObject.GetComponent<KinectUserManager>();

                if(userManager == null)
                {
                    userManager = gameObject.AddComponent<KinectUserManager>();
                }
            }

            // gesture manager by default
            if (gestureManager == null)
            {
                gestureManager = gameObject.GetComponent<KinectGestureManager>();

                if(gestureManager == null)
                {
                    gestureManager = gameObject.AddComponent<KinectGestureManager>();
                }
            }

            // bone orientation constraints
            //if (boneOrientationConstraints)
            {
                boneConstraints = new BoneOrientationConstraints();
                boneConstraints.AddDefaultConstraints();
                boneConstraints.SetDebugText(statusInfoText);
            }

            // init joint filters
            //if(jointSmoothing != SmoothingType.None)
            //{
            //    jointPositionFilter = new JointPositionsFilter();
            //    jointPositionFilter.Init(jointSmoothing);
            //}

            if(jointVelocitySmoothing != SmoothingType.None)
            {
                jointVelocityFilter = new JointVelocitiesFilter();
                jointVelocityFilter.Init(jointVelocitySmoothing);
            }

            // locate and start the available depth-sensors
            StartDepthSensors();
        }


        // gets the frame-source flags
        private KinectInterop.FrameSource GetFrameSourceFlags()
        {
            KinectInterop.FrameSource dwFlags = KinectInterop.FrameSource.TypeNone;

            if (getDepthFrames != DepthTextureType.None)
                dwFlags |= KinectInterop.FrameSource.TypeDepth;
            if (getColorFrames != ColorTextureType.None)
                dwFlags |= KinectInterop.FrameSource.TypeColor;
            if (getInfraredFrames != InfraredTextureType.None)
                dwFlags |= KinectInterop.FrameSource.TypeInfrared;
            if (getPoseFrames != PoseUsageType.None)
                dwFlags |= KinectInterop.FrameSource.TypePose;
            if (getBodyFrames != BodyTextureType.None)
            {
                if (getBodyFrames != BodyTextureType.BodyIndexDataOnly)
                    dwFlags |= KinectInterop.FrameSource.TypeBody;
                if (getBodyFrames != BodyTextureType.BodyDataOnly)
                    dwFlags |= KinectInterop.FrameSource.TypeBodyIndex;
            }

            return dwFlags;
        }


        // creates sensor interface of the specified type on a child (sensor) object
        private DepthSensorBase CreateSensorInterface(KinectInterop.DepthSensorPlatform sensorType, int deviceIndex)
        {
            DepthSensorBase sensorInt = null;
            string intTypeName = string.Empty;

            GameObject sensorObj = new GameObject(sensorType.ToString() + deviceIndex);
            sensorObj.transform.parent = gameObject.transform;
            sensorObj.transform.position = Vector3.zero;
            sensorObj.transform.rotation = Quaternion.identity;

            switch (sensorType)
            {
                case KinectInterop.DepthSensorPlatform.Kinect4Azure:
                    //sensorInt = sensorObj.AddComponent<Kinect4AzureInterface>();
                    intTypeName = "com.rfilkov.kinect.Kinect4AzureInterface";
                    break;

#if (UNITY_STANDALONE_WIN)
                case KinectInterop.DepthSensorPlatform.KinectV2:
                    //sensorInt = sensorObj.AddComponent<Kinect2Interface>();
                    intTypeName = "com.rfilkov.kinect.Kinect2Interface";
                    break;
#endif
                case KinectInterop.DepthSensorPlatform.RealSense:
                    //sensorInt = sensorObj.AddComponent<RealSenseInterface>();
                    intTypeName = "com.rfilkov.kinect.RealSenseInterface";
                    break;

                case KinectInterop.DepthSensorPlatform.DummyK4A:
                    //sensorInt = sensorObj.AddComponent<DummyK4AInterface>();
                    intTypeName = "com.rfilkov.kinect.DummyK4AInterface";
                    break;

                case KinectInterop.DepthSensorPlatform.DummyK2:
                    //sensorInt = sensorObj.AddComponent<DummyK2Interface>();
                    intTypeName = "com.rfilkov.kinect.DummyK2Interface";
                    break;

                case KinectInterop.DepthSensorPlatform.NetSensor:
                    //sensorInt = sensorObj.AddComponent<NetClientInterface>();
                    intTypeName = "com.rfilkov.kinect.NetClientInterface";
                    break;

                case KinectInterop.DepthSensorPlatform.ARKit:
                    intTypeName = "com.rfilkov.kinect.ARKitInterface";
                    break;

                default:
                    throw new Exception("Unknown S" + deviceIndex + " sensor interface: " + sensorType);
            }

            if(!string.IsNullOrEmpty(intTypeName))
            {
                if (consoleLogMessages)
                    Debug.Log("Creating S" + deviceIndex + ": '" + sensorType + "' sensor interface...");

                Type sensorIntType = Type.GetType(intTypeName);
                sensorInt = (DepthSensorBase)sensorObj.AddComponent(sensorIntType);
            }

            return sensorInt;
        }


        // converts the json settings to sensor settings
        private DepthSensorBase.BaseSensorSettings GetSensorSettings(DepthSensorInterface sensorInt, /**KinectInterop.DepthSensorPlatform sensorType,*/ string sJsonSettings)
        {
            DepthSensorBase.BaseSensorSettings settings = null;

//            if(!string.IsNullOrEmpty(sJsonSettings))
//            {
//                switch (sensorType)
//                {
//                    case KinectInterop.DepthSensorPlatform.Kinect4Azure:
//                        settings = JsonUtility.FromJson<Kinect4AzureInterface.K4ASensorSettings>(sJsonSettings);
//                        break;

//#if (UNITY_STANDALONE_WIN)
//                    case KinectInterop.DepthSensorPlatform.KinectV2:
//                        settings = JsonUtility.FromJson<Kinect2Interface.K2SensorSettings>(sJsonSettings);
//                        break;
//#endif
//                    case KinectInterop.DepthSensorPlatform.RealSense:
//                        settings = JsonUtility.FromJson<RealSenseInterface.RSSensorSettings>(sJsonSettings);
//                        break;

//                    case KinectInterop.DepthSensorPlatform.DummyK4A:
//                        settings = JsonUtility.FromJson<DepthSensorBase.BaseSensorSettings>(sJsonSettings);
//                        break;

//                    case KinectInterop.DepthSensorPlatform.NetSensor:
//                        settings = JsonUtility.FromJson<NetClientInterface.NetSensorSettings>(sJsonSettings);
//                        break;

//                    default:
//                        throw new Exception("Cannot create settings for sensor type: " + sensorType);
//                }
//            }

            Type settingsType = sensorInt.GetSensorSettingsType();
            settings = (DepthSensorBase.BaseSensorSettings)JsonUtility.FromJson(sJsonSettings, settingsType);

            return settings;
        }


        // locates and starts the available depth-sensors and their interfaces
        public void StartDepthSensors()
        {
            try
            {
                // try to initialize the available sensors
                KinectInterop.FrameSource dwFlags = GetFrameSourceFlags();

                // locate the available depth-sensor interfaces in the scene
                List<DepthSensorBase> sensorInts = new List<DepthSensorBase>();
                sensorInts.AddRange(gameObject.GetComponents<DepthSensorBase>());  // FindObjectsOfType<MonoBehaviour>();
                sensorInts.AddRange(gameObject.GetComponentsInChildren<DepthSensorBase>());

                // check for multi-camera config
                if (useMultiCamConfig)
                {
                    if(!KinectInterop.IsFileExist(KinectInterop.LoadTextFile(KinectInterop.MULTI_CAM_CONFIG_FILE_NAME)))
                    {
                        // copy the file from Resources-folder, if not found in the root folder
                        KinectInterop.CopyResourceFile(KinectInterop.MULTI_CAM_CONFIG_FILE_NAME, KinectInterop.MULTI_CAM_CONFIG_FILE_NAME);
                    }

                    string multiCamJson = KinectInterop.LoadTextFile(KinectInterop.MULTI_CAM_CONFIG_FILE_NAME);
                    if (!string.IsNullOrEmpty(multiCamJson))
                    {
                        KinectInterop.MultiCameraPose multiCamConfig = JsonUtility.FromJson<KinectInterop.MultiCameraPose>(multiCamJson);

                        // remove current sensors
                        for (int i = sensorInts.Count - 1; i >= 0; i--)
                        {
                            GameObject.Destroy(sensorInts[i].gameObject);
                        }

                        sensorInts.Clear();

                        if (multiCamConfig.camPose == null || multiCamConfig.settings == null || multiCamConfig.camPose.Length != multiCamConfig.settings.Length)
                        {
                            throw new Exception("Invalid multi-camera config. Probably CamPoses and Settings don't match.");
                        }

                        // create new sensor objects
                        for (int i = 0; i < multiCamConfig.camPose.Length; i++)
                        {
                            KinectInterop.DepthSensorPlatform sensorType = (KinectInterop.DepthSensorPlatform)multiCamConfig.camPose[i].sensorType;
                            int deviceIndex = multiCamConfig.camPose[i].sensorIndex;

                            DepthSensorBase sensorInt = CreateSensorInterface(sensorType, deviceIndex);
                            if (sensorInt != null)
                            {
                                // set settings
                                DepthSensorBase.BaseSensorSettings settings = GetSensorSettings(sensorInt, /**sensorType,*/ multiCamConfig.settings[i]);
                                if (settings != null)
                                {
                                    sensorInt.SetSensorSettings(settings);
                                }

                                // set pose
                                sensorInt.SetSensorToWorldMatrix(multiCamConfig.camPose[i].position, Quaternion.Euler(multiCamConfig.camPose[i].rotation), true);

                                sensorInts.Add(sensorInt);
                            }
                        }
                    }
                    else
                    {
                        Debug.LogError("Can't find config file: " + KinectInterop.MULTI_CAM_CONFIG_FILE_NAME);
                    }
                }

                // try to open sensor interfaces
                TryOpenSensors(sensorInts, dwFlags);

                if (sensorDatas.Count == 0)
                {
                    sensorInts.Clear();

                    //// by-default add K4A interface
                    //transform.position = new Vector3(0f, 1f, 0f);
                    //transform.rotation = Quaternion.identity;

                    //DepthSensorBase sensorInt = gameObject.AddComponent<Kinect4AzureInterface>();
                    //sensorInts.Add(sensorInt);

                    string sensorIntJson = KinectInterop.GetResourceText("DefSensorInterface.json");
                    if (!string.IsNullOrEmpty(sensorIntJson))
                    {
                        DepthSensorDescriptor sensorIntDescr = JsonUtility.FromJson<DepthSensorDescriptor>(sensorIntJson);
                        if (consoleLogMessages)
                            Debug.Log("Creating '" + sensorIntDescr.sensorType + "' sensor interface, v" + sensorIntDescr.sensorIntVersion + "...");  // + " - " + sensorIntDescr.sensorInterface);
                        Type sensorIntType = Type.GetType(sensorIntDescr.sensorInterface);

                        GameObject sensorIntObj = new GameObject(sensorIntDescr.sensorType);
                        sensorIntObj.transform.SetParent(transform, true);
                        sensorIntObj.transform.position = sensorIntDescr.transformPos;
                        sensorIntObj.transform.rotation = Quaternion.Euler(sensorIntDescr.transformRot);

                        DepthSensorBase sensorInt = (DepthSensorBase)sensorIntObj.AddComponent(sensorIntType);
                        if(sensorInt != null)
                        {
                            sensorInts.Add(sensorInt);

                            // set settings
                            DepthSensorBase.BaseSensorSettings settings = GetSensorSettings(sensorInt, /**sensorInt.GetSensorPlatform(),*/ sensorIntDescr.sensorIntSettings);
                            if (settings != null)
                            {
                                sensorInt.SetSensorSettings(settings);
                            }

                            // try to open the by-default sensor interface
                            TryOpenSensors(sensorInts, dwFlags);
                        }
                    }
                }

                if (consoleLogMessages)
                    Debug.Log(string.Format("{0} sensor(s) opened.", sensorDatas.Count));

                // set initialization status
                if (sensorInterfaces.Count > 0)
                {
                    kinectInitialized = true;

                    if(sensorInterfaces.Count > 1)
                    {
                        // create body merger for multiple sensors
                        userBodyMerger = new KinectUserBodyMerger(sensorDatas);

                        // enable frame sync between sensors, if needed
                        if(syncMultiCamFrames)
                        {
                            for (int i = 0; i < sensorInterfaces.Count; i++)
                            {
                                DepthSensorInterface sensorInt = sensorInterfaces[i];
                                KinectInterop.SensorData sensorData = sensorDatas[i];

                                sensorInt.EnableSensorSync(sensorData, true);
                            }
                        }
                    }

                    // fires the depth-sensors-started event
                    FireOnDepthSensorsStarted();
                }
                else
                {
                    kinectInitialized = false;

                    string sErrorMessage = "No suitable depth-sensor found. Please check the connected devices and installed SDKs.";
                    Debug.LogError(sErrorMessage);

                    if (statusInfoText != null)
                    {
                        statusInfoText.text = sErrorMessage;
                    }
                }
            }
            //catch (DllNotFoundException ex)
            //{
            //    string message = ex.Message + " cannot be loaded. Please check the respective SDK installation.";

            //    Debug.LogError(message);
            //    Debug.LogException(ex);

            //    if (calibrationText != null)
            //    {
            //        calibrationText.text = message;
            //    }

            //    return;
            //}
            catch (Exception ex)
            {
                string message = ex.Message;

                Debug.LogError(message);
                Debug.LogException(ex);

                if (statusInfoText != null)
                {
                    statusInfoText.text = message;
                }

                return;
            }
        }


        // tries to open the sensor interfaces
        private void TryOpenSensors(List<DepthSensorBase> sensorInts, KinectInterop.FrameSource dwFlags)
        {
            for (int i = 0; i < sensorInts.Count; i++)
            {
                if (sensorInts[i] is DepthSensorBase)
                {
                    DepthSensorBase sensorInt = (DepthSensorBase)sensorInts[i];
                    if (!sensorInt.enabled || sensorInt.deviceStreamingMode == KinectInterop.DeviceStreamingMode.Disabled || sensorInt.deviceIndex < 0)
                    {
                        if (consoleLogMessages)
                            Debug.Log(string.Format("S{0}: {1} disabled.", i, sensorInt.GetType().Name));
                        continue;
                    }

                    try
                    {
                        if (consoleLogMessages)
                            Debug.Log(string.Format("Opening S{0}: {1}, device-index: {2}", i, sensorInt.GetType().Name, sensorInt.deviceIndex));
                        KinectInterop.SensorData sensorData = sensorInt.OpenSensor(this, dwFlags, syncDepthAndColor, syncBodyAndDepth);

                        if (sensorData != null)
                        {
                            //Debug.Log("Succeeded opening " + sensorInt.GetType().Name);

                            sensorData.sensorInterface = sensorInt;
                            sensorData.sensorIndex = sensorInterfaces.Count;
                            KinectInterop.InitSensorData(sensorData, this);

                            sensorInterfaces.Add(sensorInt);
                            sensorDatas.Add(sensorData);

                            if (pollFramesInThread)
                            {
                                sensorData.threadStopEvent = new AutoResetEvent(false);
                                sensorData.pollFramesThread = new Thread(() => PollFramesThread(sensorData));
                                sensorData.pollFramesThread.Name = sensorInt.GetType().Name + sensorInt.deviceIndex;
                                sensorData.pollFramesThread.IsBackground = true;
                                sensorData.pollFramesThread.Start();
                            }
                        }
                    }
                    catch (Exception ex)
                    {
                        Debug.LogException(ex);
                        Debug.LogError("Failed opening " + sensorInt.GetType().Name + ", device-index: " + sensorInt.deviceIndex);
                    }
                }
            }
        }


        // polls for frames and updates the depth-sensor data in a thread
        private void PollFramesThread(KinectInterop.SensorData sensorData)
        {
            if (sensorData == null)
                return;

            while (!sensorData.threadStopEvent.WaitOne(0))
            {
                if (kinectInitialized)
                {
                    KinectInterop.PollSensorFrames(sensorData);
                    Thread.Sleep(KinectInterop.THREAD_SLEEP_TIME_MS);
                }
            }
        }


        // stops the polling threads and closes the depth sensors
        public void StopDepthSensors()
        {
            // shut down the polling threads and stop the sensors
            if (kinectInitialized)
            {
                // close the opened sensors and release respective data
                for (int i = sensorDatas.Count - 1; i >= 0; i--)
                {
                    KinectInterop.SensorData sensorData = sensorDatas[i];
                    DepthSensorInterface sensorInt = sensorData.sensorInterface;
                    if (consoleLogMessages)
                        Debug.Log(string.Format("Closing S{0}: {1}", i, sensorInt.GetType().Name));

                    if (sensorData.pollFramesThread != null)
                    {
                        //Debug.Log("Stopping thread: " + sensorData.pollFramesThread.Name);

                        // stop the frame-polling thread
                        sensorData.threadStopEvent.Set();
                        sensorData.pollFramesThread.Join();

                        sensorData.pollFramesThread = null;
                        sensorData.threadStopEvent.Dispose();
                        sensorData.threadStopEvent = null;

                        //Debug.Log("Thread stopped.");
                    }

                    // close the sensor
                    KinectInterop.CloseSensor(sensorData);
                    //Debug.Log("Sensor closed.");

                    sensorDatas.RemoveAt(i);
                    sensorInterfaces.RemoveAt(i);
                }

                kinectInitialized = false;

                // fires the depth-sensors-stopped event
                FireOnDepthSensorsStopped();
            }
        }


        // checks whether the configured depth sensors are started
        public bool IsDepthSensorsStarted()
        {
            return kinectInitialized;
        }


        // fires the OnDepthSensorsStarted-event
        internal void FireOnDepthSensorsStarted()
        {
            OnDepthSensorsStarted?.Invoke();
        }

        // fires the OnDepthSensorsStarted-event
        internal void FireOnDepthSensorsStopped()
        {
            OnDepthSensorsStopped?.Invoke();
        }


        void OnApplicationQuit()
        {
            OnDestroy();
        }


        void OnDestroy()
        {
            if (instance == null || instance != this)
                return;

            //Debug.Log("KM was destroyed");
            StopDepthSensors();

            instance = null;
        }


        void Update()
        {
            if (!kinectInitialized)
                return;

            if (!pollFramesInThread)
            {
                for (int i = 0; i < sensorDatas.Count; i++)
                {
                    KinectInterop.SensorData sensorData = sensorDatas[i];
                    KinectInterop.PollSensorFrames(sensorData);
                }
            }

            // update the sensor data, as needed
            ulong prevBodyFrameTime = lastBodyFrameTime;
            for (int i = 0; i < sensorDatas.Count; i++)
            {
                KinectInterop.SensorData sensorData = sensorDatas[i];
                if(KinectInterop.UpdateSensorData(sensorData, this, isPlayModeEnabled))
                {
                    UpdateTrackedBodies(i, sensorData, prevBodyFrameTime);
                }
            }

            //// filter orientation constraints - moved to UpdateTrackedBodies()
            //if (lastBodyFrameTime != prevBodyFrameTime && boneOrientationConstraints && boneConstraints != null)
            //{
            //    for (int i = 0; i < trackedBodiesCount; i++)
            //    {
            //        boneConstraints.Constrain(ref alTrackedBodies[i]);
            //    }
            //}

            if (!isPlayModeEnabled)
            {
                // update the sensor textures, if needed
                for (int i = 0; i < sensorDatas.Count; i++)
                {
                    KinectInterop.UpdateSensorTextures(sensorDatas[i], this);
                }
            }
        }


        void OnGUI()
        {
            if (!kinectInitialized)
                return;

            // display the selected images on screen
            for (int i = 0; i < displayImages.Count; i++)
            {
                Vector2 imageScale = Vector3.one;
                Texture imageTex = null;

                DisplayImageType imageType = displayImages[i];
                switch (imageType)
                {
                    case DisplayImageType.None:
                        break;

                    case DisplayImageType.Sensor0ColorImage:
                    case DisplayImageType.Sensor1ColorImage:
                    case DisplayImageType.Sensor2ColorImage:
                        int si = imageType == DisplayImageType.Sensor0ColorImage ? 0 : imageType == DisplayImageType.Sensor1ColorImage ? 1 : imageType == DisplayImageType.Sensor2ColorImage ? 2 : -1;
                        if (si >= 0 && si < sensorDatas.Count)
                        {
                            KinectInterop.SensorData sensorData = sensorDatas[si];
                            imageScale = sensorData.colorImageScale;
                            imageTex = sensorData.colorImageTexture;
                        }
                        break;

                    case DisplayImageType.Sensor0DepthImage:
                    case DisplayImageType.Sensor1DepthImage:
                    case DisplayImageType.Sensor2DepthImage:
                        si = imageType == DisplayImageType.Sensor0DepthImage ? 0 : imageType == DisplayImageType.Sensor1DepthImage ? 1 : imageType == DisplayImageType.Sensor2DepthImage ? 2 : -1;
                        if (si >= 0 && si < sensorDatas.Count)
                        {
                            KinectInterop.SensorData sensorData = sensorDatas[si];
                            imageScale = sensorData.depthImageScale;
                            imageTex = sensorData.depthImageTexture;
                        }
                        break;

                    case DisplayImageType.Sensor0InfraredImage:
                    case DisplayImageType.Sensor1InfraredImage:
                    case DisplayImageType.Sensor2InfraredImage:
                        si = imageType == DisplayImageType.Sensor0InfraredImage ? 0 : imageType == DisplayImageType.Sensor1InfraredImage ? 1 : imageType == DisplayImageType.Sensor2InfraredImage ? 2 : -1;
                        if (si >= 0 && si < sensorDatas.Count)
                        {
                            KinectInterop.SensorData sensorData = sensorDatas[si];
                            imageScale = sensorData.infraredImageScale;
                            imageTex = sensorData.infraredImageTexture;
                        }
                        break;

                    case DisplayImageType.UserBodyImage:
                        si = 0;  // sensor 0
                        if (si >= 0 && si < sensorDatas.Count)
                        {
                            KinectInterop.SensorData sensorData = sensorDatas[si];
                            imageScale = sensorData.depthImageScale;
                            imageTex = sensorData.bodyImageTexture ? sensorData.bodyImageTexture : sensorData.depthImageTexture;
                        }
                        break;
                }

                // display the image on screen
                if(imageTex != null)
                {
                    KinectInterop.DisplayGuiTexture(i, displayImageWidthPercent, imageScale, imageTex);
                }
            }
        }


        // updates the global list of tracked bodies
        protected void UpdateTrackedBodies(int sensorIndex, KinectInterop.SensorData sensorData, ulong prevBodyFrameTime)
        {
            if(isPlayModeEnabled)
            {
                if(!string.IsNullOrEmpty(playModeData))
                {
                    // processed by the 1st sensor only
                    Matrix4x4 sensorToWorld = GetSensorToWorldMatrix(sensorIndex);

                    if (playModeData.StartsWith("k4b"))
                        trackedBodiesCount = KinectInterop.SetBodyFrameFromCsv(playModeData, ";", sensorData, ref alTrackedBodies, ref sensorToWorld, ignoreZCoordinates, out lastBodyFrameTime);
                    else
                        trackedBodiesCount = KinectInterop.SetBodyFrameFromK2b(playModeData, sensorData, this, ref alTrackedBodies, ref sensorToWorld, ignoreZCoordinates, out lastBodyFrameTime);

                    prevBodyFrameTicks = lastBodyFrameTicks;
                    lastBodyFrameTicks = DateTime.Now.Ticks;

                    playModeData = string.Empty;
                }
            }
            else if(sensorDatas.Count == 1 && sensorIndex == 0 && lastBodyFrameTime != sensorData.lastBodyFrameTime)
            {
                // first sensor
                btSensorIndex = sensorIndex;
                lastBodyFrameTime = sensorData.lastBodyFrameTime;

                prevBodyFrameTicks = lastBodyFrameTicks;
                lastBodyFrameTicks = DateTime.Now.Ticks;

                // take the tracked bodies from sensor 0
                trackedBodiesCount = sensorData.trackedBodiesCount;

                if (alTrackedBodies.Length < trackedBodiesCount)
                {
                    //alTrackedBodies.Add(new KinectInterop.BodyData((int)KinectInterop.JointType.Count));
                    Array.Resize<KinectInterop.BodyData>(ref alTrackedBodies, (int)trackedBodiesCount);

                    for (int i = 0; i < trackedBodiesCount; i++)
                    {
                        alTrackedBodies[i] = new KinectInterop.BodyData((int)KinectInterop.JointType.Count);
                    }
                }

                for (int i = 0; i < trackedBodiesCount; i++)
                {
                    //alTrackedBodies[i] = sensorData.alTrackedBodies[i];
                    sensorData.alTrackedBodies[i].CopyTo(ref alTrackedBodies[i]);
                }

                // filter orientation constraints
                if (boneOrientationConstraints && boneConstraints != null)
                {
                    for (int i = 0; i < trackedBodiesCount; i++)
                    {
                        boneConstraints.Constrain(ref alTrackedBodies[i]);
                    }
                }
            }
            //else if (sensorIndex > 0 && lastBodyFrameTime != prevBodyFrameTime)  // is body data updated by s0?
            //{
            //    // subsequent sensor
            //    KinectInterop.BodyData sensorBodyData = new KinectInterop.BodyData();

            //    for (int i = 0; i < trackedBodiesCount; i++)
            //    {
            //        KinectInterop.BodyData bodyData = alTrackedBodies[i];

            //        if(GetNearestBodyData(sensorData, bodyData.position, 0.1f, ref sensorBodyData))
            //        {
            //            if(bodyData.joint != null && sensorBodyData.joint != null && bodyData.joint.Length == sensorBodyData.joint.Length)
            //            {
            //                int jointCount = bodyData.joint.Length;
            //                bool bBodyUpdated = false;

            //                for(int j = 0; j < jointCount; j++)
            //                {
            //                    bBodyUpdated |= MergeBodyJoint(ref bodyData, ref sensorBodyData, j);
            //                }

            //                if(bBodyUpdated)
            //                {
            //                    alTrackedBodies[i] = bodyData;
            //                }
            //            }
            //        }
            //    }
            //}
            else if (sensorDatas.Count > 1 && sensorIndex == 0 && userBodyMerger != null)
            {
                btSensorIndex = sensorIndex;
                List<KinectInterop.BodyData> alMergedBodies = userBodyMerger.MergeUserBodies(ref lastBodyFrameTime, boneOrientationConstraints ? boneConstraints : null);

                prevBodyFrameTicks = lastBodyFrameTicks;
                lastBodyFrameTicks = DateTime.Now.Ticks;

                trackedBodiesCount = (uint)alMergedBodies.Count;
                if (alTrackedBodies.Length < trackedBodiesCount)
                {
                    Array.Resize<KinectInterop.BodyData>(ref alTrackedBodies, (int)trackedBodiesCount);
                }

                for (int i = 0; i < trackedBodiesCount; i++)
                {
                    alTrackedBodies[i] = alMergedBodies[i];
                    //alMergedBodies[i].CopyTo(ref alTrackedBodies[i]);
                    alTrackedBodies[i].bIsTracked = true;

                    //{
                    //    int j = (int)KinectInterop.JointType.WristLeft;
                    //    Debug.Log(string.Format("KM {0:F3} {1} user: {2}, state: {3}\npos: {4}, rot: {5}", Time.time, (KinectInterop.JointType)j,
                    //        alTrackedBodies[i].liTrackingID, alTrackedBodies[i].joint[j].trackingState,
                    //        alTrackedBodies[i].joint[j].position, alTrackedBodies[i].joint[j].mirroredRotation.eulerAngles));
                    //}
                }

                alMergedBodies.Clear();
                alMergedBodies = null;
            }
            else
            {
                return;
            }

            // estimate and filter joint velocities, if needed
            if (estimateJointVelocities && prevBodyFrameTicks > 0)
            {
                for (int i = 0; i < trackedBodiesCount; i++)
                {
                    KinectInterop.CalcBodyFrameJointVels(ref alTrackedBodies[i], lastBodyFrameTicks, prevBodyFrameTicks);

                    if (jointVelocityFilter != null)
                    {
                        jointVelocityFilter.UpdateFilter(ref alTrackedBodies[i]);
                    }
                }

                if (jointVelocityFilter != null)
                {
                    jointVelocityFilter.CleanUpUserHistory();
                }
            }

            // process the tracked bodies
            ProcessTrackedBodies();

            //// set first user index
            //sensorData.firstUserIndex = (userManager.liPrimaryUserId != 0 && userManager.dictUserIdToIndex.ContainsKey(userManager.liPrimaryUserId) ?
            //    userManager.dictUserIdToIndex[userManager.liPrimaryUserId] : 255);

            //if (userManager.liPrimaryUserId != 0)
            //    Debug.Log("liPrimaryUserId: " + userManager.liPrimaryUserId + ", index: " + sensorData.firstUserIndex);

            // update user gestures
            foreach (ulong userId in userManager.alUserIds)
            {
                gestureManager.UpdateUserGestures(userId, this);
            }
        }


        // tries to find the nearest body to the given position within the specified distance
        private bool GetNearestBodyData(KinectInterop.SensorData sensorData, Vector3 bodyPos, float maxDistance, ref KinectInterop.BodyData bodyData)
        {
            float fMinDistance = float.MaxValue;

            for(int i = 0; i < sensorData.trackedBodiesCount; i++)
            {
                Vector3 sensorBodyPos = sensorData.alTrackedBodies[i].position;
                float fDistance = Vector3.Distance(bodyPos, sensorBodyPos);

                if (fDistance <= maxDistance && fDistance < fMinDistance)
                {
                    fMinDistance = fDistance;
                    bodyData = sensorData.alTrackedBodies[i];
                }
            }

            return (fMinDistance <= maxDistance);
        }


        // copies the joint of sensor-body-data, if needed
        private bool MergeBodyJoint(ref KinectInterop.BodyData bodyData, ref KinectInterop.BodyData sensorBodyData, int jointIndex)
        {
            KinectInterop.TrackingState jointState = bodyData.joint[jointIndex].trackingState;
            KinectInterop.TrackingState sensorJointState = sensorBodyData.joint[jointIndex].trackingState;

            if((int)jointState < (int)sensorJointState)
            {
                sensorBodyData.joint[jointIndex].CopyTo(ref bodyData.joint[jointIndex]);
                //Debug.Log("updated " + (KinectInterop.JointType)jointIndex);
                return true;
            }
            else if(jointState == sensorJointState && (int)jointState >= (int)KinectInterop.TrackingState.Tracked)
            {
                sensorBodyData.joint[jointIndex].AverageTo(ref bodyData.joint[jointIndex]);
                //Debug.Log("averaged " + (KinectInterop.JointType)jointIndex);
                return true;
            }

            return false;
        }


        // processes the tracked bodies
        private void ProcessTrackedBodies()
        {
            List<ulong> addedUsers = new List<ulong>();
            List<int> addedIndexes = new List<int>();

            List<ulong> lostUsers = new List<ulong>();
            lostUsers.AddRange(userManager.alUserIds);

            bLimitedUsers = showAllowedUsersOnly && 
                (maxTrackedUsers > 0 || minUserDistance >= 0.01f || maxUserDistance >= 0.01f || maxLeftRightDistance >= 0.01f);

            for (int i = 0; i < trackedBodiesCount; i++)
            {
                KinectInterop.BodyData bodyData = alTrackedBodies[i];
                ulong userId = bodyData.liTrackingID;

                if (bodyData.bIsTracked && userId != 0 && Mathf.Abs(bodyData.position.z) >= minUserDistance &&
                   (maxUserDistance < 0.01f || Mathf.Abs(bodyData.position.z) <= maxUserDistance) &&
                   (maxLeftRightDistance < 0.01f || Mathf.Abs(bodyData.position.x) <= maxLeftRightDistance))
                {
                    // add userId to the list of new users
                    if (!addedUsers.Contains(userId))
                    {
                        addedUsers.Add(userId);
                        addedIndexes.Add(i);
                    }

                    lostUsers.Remove(userId);
                    userManager.dictUserIdToTime[userId] = Time.time;
                }
                else
                {
                    // consider body as not tracked
                    bodyData.bIsTracked = false;
                    alTrackedBodies[i] = bodyData;
                }

                //Debug.Log("  (M)User ID: " + userId + ", body: " + i + ", bi: " + bodyData.iBodyIndex + ", pos: " + bodyData.position + ", tracked: " + bodyData.bIsTracked);
            }

            // remove the lost users, if any
            if (lostUsers.Count > 0)
            {
                foreach (ulong userId in lostUsers)
                {
                    // prevent user removal upon sporadical tracking failures
                    if ((Time.time - userManager.dictUserIdToTime[userId]) >= waitTimeBeforeRemove)
                    {
                        RemoveUser(userId);
                    }
                }

                lostUsers.Clear();
            }

            if (addedUsers.Count > 0)
            {
                // calibrate the newly detected users
                for (int i = 0; i < addedUsers.Count; i++)
                {
                    ulong userId = addedUsers[i];
                    int userIndex = addedIndexes[i];

                    if (!userManager.alUserIds.Contains(userId))
                    {
                        if (maxTrackedUsers == 0 || userManager.alUserIds.Count < maxTrackedUsers)
                        {
                            CalibrateUser(userId, userIndex, alTrackedBodies[userIndex].position);
                        }
                    }
                }

                // update body indices, as needed
                for (int i = 0; i < addedUsers.Count; i++)
                {
                    ulong userId = addedUsers[i];
                    int userIndex = addedIndexes[i];

                    int ui = userManager.dictUserIdToIndex.ContainsKey(userId) ? userManager.dictUserIdToIndex[userId] : -1;
                    if (ui >= 0 && ui != userIndex)
                    {
                        // update body index if needed
                        userManager.dictUserIdToIndex[userId] = userIndex;

                        //int uidIndex = Array.IndexOf(userManager.aUserIndexIds, userId);
                        //if (consoleLogMessages)
                        //    Debug.Log("Updating user " + uidIndex + ", ID: " + userId + ", Body: " + userIndex + ", Time: " + Time.time);

                        // re-arrange user indices if needed
                        userManager.RearrangeUserIndices(userDetectionOrder);
                    }
                }

                if(addedUsers.Count > 0)
                {
                    // update user indices, as needed
                    userManager.UpdateUserIndices(userDetectionOrder);
                }

                addedUsers.Clear();
                addedIndexes.Clear();
            }
        }


        // Adds UserId to the list of users
        private void CalibrateUser(ulong userId, int bodyIndex, Vector3 userPos)
        {
            int uidIndex = userManager.CalibrateUser(userId, bodyIndex, ref alTrackedBodies, userDetectionOrder, playerCalibrationPose, gestureManager);

            if (uidIndex >= 0)
            {
                if (consoleLogMessages)
                    Debug.Log("Adding user " + uidIndex + ", ID: " + userId + ", Body: " + bodyIndex + ", Pos: " + userPos + ", Time: " + userManager.dictUserIdToTime[userId]);

                // update userIds of the avatar controllers
                //RefreshAvatarUserIds();

                // notify the gesture manager for the newly detected user
                gestureManager.UserWasAdded(userId, uidIndex);

                // reset filters
                ResetJointFilters();

                // fire event
                userManager.FireOnUserAdded(userId, uidIndex);
            }
        }


        // Remove a lost UserId
        private void RemoveUser(ulong userId)
        {
            int bodyIndex = userManager.dictUserIdToIndex[userId];
            int uidIndex = userManager.RemoveUser(userId, userDetectionOrder);

            if(uidIndex >= 0)
            {
                if (consoleLogMessages)
                    Debug.Log("Removing user " + uidIndex + ", ID: " + userId + ", Body: " + bodyIndex + ", Time: " + Time.time);

                // clear gestures list for this user
                gestureManager.UserWasRemoved(userId, uidIndex);

                // update userIds of the avatar controllers
                //RefreshAvatarUserIds();

                // fire event
                userManager.FireOnUserRemoved(userId, uidIndex);
            }
        }

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using com.rfilkov.kinect;
using System.Text;

namespace com.rfilkov.components
{
    /// <summary>
    /// MultiCameraSetup automarically estimates the positions and rotations of the sensors in a multi-camera setup.
    /// </summary>
    public class MultiCameraSetup : MonoBehaviour
    {
        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        private int playerIndex = 0;

        [Tooltip("Whether to use synchronized samples in case of master/sub cameras, or not.")]
        private bool useSynchronizedSamples = false;

        [Tooltip("Number of samples used for the multi-camera setup.")]
        [Range(1, 200)]
        public int numberOfSamples = 100;

        [Tooltip("Percentage of all samples, used for optimization of the pose estimation process.")]
        [Range(0.01f, 1f)]
        private float optimizeForPercentage = 1f;

        //[Tooltip("Smooth factor used for smoothing of user movements and rotations.")]
        ////[Range(0f, 10f)]
        //private float smoothFactor = 0f;

        [Header("User Interface")]

        [Tooltip("Prefab used to display the user mesh, as perceived by each camera.")]
        public GameObject userMeshPrefab;

        [Tooltip("Prefab used to display the user body transoform, as determined by the sensor's body tracker.")]
        private GameObject bodyTransformPrefab = null;

        [Tooltip("Prefab used to display the user body transoform, as determined by the sensor's body tracker.")]
        public GameObject skeletonPrefab;

        [Tooltip("Camera that needs to orbit around the user mesh(es).")]
        public MouseCameraOrbit cameraOrbit;

        //public Transform orbitCenter;

        [Tooltip("Progress bar to show overall calibration progress.")]
        public Scrollbar progressBar;

        [Tooltip("UI text for displaying the progress percentage.")]
        public Text progressText;

        [Tooltip("UI text used for camera information messages.")]
        public Text camInfoText;

        [Tooltip("UI text used for error information messages.")]
        public Text errorInfoText;

        [Tooltip("Sprite transforms that will be used to display countdown, when the camera setup starts.")]
        public Transform[] countdown;

        [Header("Adjust Camera Panel")]

        [Tooltip("UI panel to update camera rotations.")]
        public RectTransform updatePanel;

        [Tooltip("UI dropdown to select the sensor to update by index (the 1st sensor with index 0 is not included).")]
        public Dropdown sensorDropdown;

        [Tooltip("UI toggle to show or hide the respective user mesh.")]
        public Toggle sensorToggle;

        [Tooltip("UI slider to adjust the X-rotation (in degrees) of the currently selected sensor.")]
        public Slider sensorRotationX;

        [Tooltip("UI slider to adjust the Y-rotation (in degrees) of the currently selected sensor.")]
        public Slider sensorRotationY;

        [Tooltip("UI slider to adjust the Z-rotation (in degrees) of the currently selected sensor.")]
        public Slider sensorRotationZ;

        [Tooltip("UI slider to adjust the X-position (in meters) of the currently selected sensor.")]
        public Slider sensorPositionX;

        [Tooltip("UI slider to adjust the Y-position (in meters) of the currently selected sensor.")]
        public Slider sensorPositionY;

        [Tooltip("UI slider to adjust the Z-position (in meters) of the currently selected sensor.")]
        public Slider sensorPositionZ;


        // time between probes, in seconds
        private const float TIME_BETWEEN_PROBES = 0.2f;

        // body joints we are interested in
        private static int[] trackedBodyJoint =
        {
            (int)KinectInterop.JointType.Pelvis, (int)KinectInterop.JointType.Neck,  // 0, 1
            (int)KinectInterop.JointType.ShoulderLeft, (int)KinectInterop.JointType.ShoulderRight,  // 2, 3
            (int)KinectInterop.JointType.ElbowLeft, (int)KinectInterop.JointType.ElbowRight,  // 4, 5
            (int)KinectInterop.JointType.WristLeft, (int)KinectInterop.JointType.WristRight,  // 6, 7
            (int)KinectInterop.JointType.HipLeft, (int)KinectInterop.JointType.HipRight,  // 8, 9
            (int)KinectInterop.JointType.KneeLeft, (int)KinectInterop.JointType.KneeRight,  // 10, 11
            (int)KinectInterop.JointType.AnkleLeft, (int)KinectInterop.JointType.AnkleRight,  // 12, 13
            //(int)KinectInterop.JointType.Head
            //(int)KinectInterop.JointType.EyeLeft, (int)KinectInterop.JointType.EyeRight,
            //(int)KinectInterop.JointType.Nose, (int)KinectInterop.JointType.EarLeft, (int)KinectInterop.JointType.EarRight,
            //(int)KinectInterop.JointType.ClavicleLeft, (int)KinectInterop.JointType.ClavicleRight,
        };

        // different colors
        private static Color[] bodyTransformColor = { Color.green, new Color(1f, 0.9f, 0f), Color.red, Color.magenta, Color.cyan };


        // user body pose
        private struct UserBodyPose
        {
            public ulong bodyTime;
            public float poseTime;

            public bool[] jointTracked;
            public Vector3[] jointPos;
            public Quaternion[] jointRot;

            public UserBodyPose(int numJoints)
            {
                bodyTime = 0;
                poseTime = 0f;

                jointTracked = new bool[numJoints];
                jointPos = new Vector3[numJoints];
                jointRot = new Quaternion[numJoints];
            }

            public UserBodyPose GetDeepCopy()
            {
                int jointLen = jointPos.Length;
                UserBodyPose copyTo = new UserBodyPose(jointLen);

                copyTo.bodyTime = bodyTime;
                copyTo.poseTime = poseTime;

                for(int j = 0; j < jointLen; j++)
                {
                    copyTo.jointTracked[j] = jointTracked[j];
                    copyTo.jointPos[j] = jointPos[j];
                    copyTo.jointRot[j] = jointRot[j];
                }

                return copyTo;
            }
        }

        // multi-camera data to save
        private struct MultiCameraData
        {
            public int version;
            public int numSensors;
            public int numSamples;

            public UserBodyPose[] bodyPose;
            public Vector3[] camPos;
            public Vector3[] camRot;

            public float[] camPoseError;
            public int[] camPoseIndex;

            public long dateTimeValue;
            public string dateTimeString;
        }


        // reference to KinectManager
        private KinectManager kinectManager = null;

        // initial user orientation
        private Quaternion initialUserRot = Quaternion.identity;

        // number of sensors
        private int numSensors = 0;
        private int masterIndex = -1;

        // number of joints
        private int numJoints = 0;

        // temp body pose
        private UserBodyPose tempBodyPose = new UserBodyPose(trackedBodyJoint.Length);

        // multi camera pose
        private KinectInterop.MultiCameraPose multiCamPose = new KinectInterop.MultiCameraPose();

        // user mesh & body transform for each camera
        private GameObject[] cameraUserMesh = null;
        private GameObject[] cameraSkeleton = null;
        private Transform[] bodyTransforms;

        // maximum saved pose samples
        private int maxSavedSamples = 0;
        private int numMvaSamples = 0;

        private float[] minPoseError = null;
        private int[] minPoseIndex = null;

        // saved camera positions & rotations
        private List<Vector3>[] savedCamPos = null;
        private List<Quaternion>[] savedCamRot = null;

        //private List<Vector3>[] savedUserPos = null;
        //private List<Quaternion>[] savedUserRot = null;
        private List<UserBodyPose>[] savedUserPose = null;

        // source camera pose
        private Vector3 refCameraPos = Vector3.zero;
        private Quaternion refCameraRot = Quaternion.identity;

        // user pose in source camera space
        //private Vector3 refUserPos = Vector3.zero;
        //private Quaternion refUserRot = Quaternion.identity;

        //private Vector3[] userBodyPos = null;
        //private Quaternion[] userBodyRot = null;
        //private float[] userBodyTime = null;
        private UserBodyPose[] userBodyPose = null;

        // camera and user pose matrices
        private Matrix4x4 srcCameraMatrix = Matrix4x4.identity;
        //private Matrix4x4 srcUserMatrix = Matrix4x4.identity;

        // whether to stop the co-routine or not
        private bool bStopCoroutine = false;

        // last processed user time
        private float lastProcUserTime = 0f;

        //// user world pos & rot
        //private Vector3[] userWorldPos = null;
        //private Quaternion[] userWorldRot = null;

        // sensor rotation adjustments
        private int selSensorIndex = -1;
        private Vector3[] sensorRotTransform = null;
        private Vector3[] sensorRotAdjust = null;
        private Vector3[] sensorPosTransform = null;
        private Vector3[] sensorPosAdjust = null;


        void Start()
        {
            kinectManager = KinectManager.Instance;
            numSensors = kinectManager ? kinectManager.GetSensorCount() : 0;
            numJoints = trackedBodyJoint.Length;

            if (numSensors > 1)
            {
                ShowDebugMessage(numSensors + " sensors found. Starting multi-camera setup...");
            }
            else
            {
                ShowErrorMessage(numSensors + " sensor(s) found. No need for multi-camera setup.");
                return;
            }

            // user meshes & body transforms per camera
            if(userMeshPrefab != null)
                cameraUserMesh = new GameObject[numSensors];
            if (skeletonPrefab != null)
                cameraSkeleton = new GameObject[numSensors];
            if (bodyTransformPrefab != null)
                bodyTransforms = new Transform[numSensors];

            // maximum saved samples
            maxSavedSamples = numberOfSamples;
            numMvaSamples = Mathf.Min(Mathf.Max(Mathf.RoundToInt(maxSavedSamples * optimizeForPercentage), 1), maxSavedSamples);
            //Debug.Log("OptForPerc: " + numMvaSamples);

            minPoseError = new float[numSensors];
            minPoseIndex = new int[numSensors];

            // init user pos & rot
            userBodyPose = new UserBodyPose[numSensors];

            // init camera pos & rot
            savedCamPos = new List<Vector3>[numSensors];
            savedCamRot = new List<Quaternion>[numSensors];
            savedUserPose = new List<UserBodyPose>[numSensors];

            // init multi-camera pose
            multiCamPose.version = 1;
            multiCamPose.camPose = new KinectInterop.CameraPose[numSensors];
            multiCamPose.settings = new string[numSensors];

            for (int i = 0; i < numSensors; i++)
            {
                KinectInterop.SensorData sensorData = kinectManager.GetSensorData(i);

                if (sensorData != null && sensorData.sensorInterface != null)
                {
                    multiCamPose.camPose[i] = new KinectInterop.CameraPose();
                    multiCamPose.camPose[i].sensorType = (int)sensorData.sensorInterface.GetSensorPlatform();
                    multiCamPose.camPose[i].sensorIndex = ((DepthSensorBase)sensorData.sensorInterface).deviceIndex;
                    multiCamPose.camPose[i].sensorId = sensorData.sensorInterface.GetSensorDeviceId();

                    DepthSensorBase.BaseSensorSettings settings = sensorData.sensorInterface.GetSensorSettings(null);
                    multiCamPose.settings[i] = JsonUtility.ToJson(settings);

                    // set master-sub frame sync
                    //sensorData.sensorInterface.EnableSensorSync(sensorData, useSynchronizedSamples);
                    useSynchronizedSamples = kinectManager.syncMultiCamFrames;
                    if (sensorData.sensorInterface.IsSensorMaster())
                    {
                        masterIndex = i;
                    }

                    if (i == 0)
                    {
                        // first camera
                        Transform sensorTrans = kinectManager.GetSensorTransform(0);
                        refCameraPos = sensorTrans.position;
                        refCameraRot = sensorTrans.rotation;

                        // src camera matrix
                        srcCameraMatrix = Matrix4x4.TRS(refCameraPos, refCameraRot, Vector3.one);
                    }

                    // reset poses of all cameras
                    sensorData.sensorInterface.SetSensorToWorldMatrix(Vector3.zero, Quaternion.identity, true);
                }

                userBodyPose[i] = new UserBodyPose(numJoints);

                savedCamPos[i] = new List<Vector3>();
                savedCamRot[i] = new List<Quaternion>();
                savedUserPose[i] = new List<UserBodyPose>();

                if (bodyTransformPrefab != null)
                {
                    GameObject userBodyTransform = Instantiate(bodyTransformPrefab, Vector3.zero, Quaternion.identity);
                    userBodyTransform.name = "BodyTransform" + i;

                    Renderer renderer = userBodyTransform.GetComponent<Renderer>();
                    if (renderer != null)
                    {
                        renderer.material.color = bodyTransformColor[i % bodyTransformColor.Length];
                    }

                    bodyTransforms[i] = userBodyTransform.transform;
                }

                if (userMeshPrefab != null)
                {
                    cameraUserMesh[i] = Instantiate(userMeshPrefab, transform);
                    cameraUserMesh[i].name = ((KinectInterop.DepthSensorPlatform)multiCamPose.camPose[i].sensorType).ToString() + multiCamPose.camPose[i].sensorIndex + "Mesh";

                    UserMeshRendererGpu userMeshRenderer = cameraUserMesh[i].GetComponent<UserMeshRendererGpu>();
                    if (userMeshRenderer != null)
                    {
                        userMeshRenderer.sensorIndex = i;
                    }
                    else
                    {
                        SceneMeshRendererGpu sceneMeshRenderer = cameraUserMesh[i].GetComponent<SceneMeshRendererGpu>();
                        if(sceneMeshRenderer != null)
                        {
                            sceneMeshRenderer.sensorIndex = i;
                        }
                    }

                    if (bodyTransforms != null && bodyTransforms[i] != null)
                    {
                        bodyTransforms[i].parent = cameraUserMesh[i].transform;
                    }
                }

                if (skeletonPrefab != null)
                {
                    cameraSkeleton[i] = Instantiate(skeletonPrefab, transform);
                    cameraSkeleton[i].name = ((KinectInterop.DepthSensorPlatform)multiCamPose.camPose[i].sensorType).ToString() + multiCamPose.camPose[i].sensorIndex + "Skeleton";

                    SensorSkeletonView sensorSkeletonView = cameraSkeleton[i].GetComponent<SensorSkeletonView>();
                    if (sensorSkeletonView != null)
                    {
                        sensorSkeletonView.sensorIndex = i;
                        sensorSkeletonView.sensorTransform = cameraSkeleton[i].transform;
                        sensorSkeletonView.skeletonColor = bodyTransformColor[i % bodyTransformColor.Length];
                    }
                }

                //minPoseError[i] = float.MaxValue;
            }

            //userWorldPos = new Vector3[numSensors];
            //userWorldRot = new Quaternion[numSensors];

            // initial user rotation
            initialUserRot = Quaternion.Euler(0f, 180f, 0f);  // always mirrored

            if(updatePanel)
            {
                // hide the update panel
                updatePanel.gameObject.SetActive(false);

                sensorRotTransform = new Vector3[numSensors];
                sensorRotAdjust = new Vector3[numSensors];

                sensorPosTransform = new Vector3[numSensors];
                sensorPosAdjust = new Vector3[numSensors];

                if (sensorDropdown)
                {
                    // create list of sensor indices (and exclude the 1st one)
                    List<string> alSensorOptions = new List<string>();
                    for (int i = 1; i < numSensors; i++)
                        alSensorOptions.Add(i.ToString());

                    sensorDropdown.ClearOptions();
                    sensorDropdown.AddOptions(alSensorOptions);
                }
            }

            bool bConfigLoaded = false;
            if(kinectManager.useMultiCamConfig)
            {
                // load the config file
                bConfigLoaded = LoadMultiCamConfig();

                if (bConfigLoaded)
                {
                    // show cam-pose adjustment panel
                    ShowUpdatePanel();
                }
            }

            if(!bConfigLoaded)
            {
                // start auto-calibration co-routine
                bStopCoroutine = false;
                StartCoroutine(AutoCalibrateCameras());
            }
        }


        void OnDestroy()
        {
            // stop all co-routines
            bStopCoroutine = true;
            StopAllCoroutines();
        }


        void Update()
        {
            if (numSensors > 0 && cameraOrbit != null /**&& !updatePanel.gameObject.activeSelf*/)
            {
                // set the center of camera orbit
                KinectInterop.SensorData sensorData = kinectManager.GetSensorData(0);

                //Vector3 vUserPos = Vector3.zero; Quaternion qUserRot = Quaternion.identity;
                if (GetUserPose(0, sensorData, playerIndex, 0, ref tempBodyPose))
                {
                    Matrix4x4 matUserPose = Matrix4x4.TRS(tempBodyPose.jointPos[0], tempBodyPose.jointRot[0], Vector3.one);
                    matUserPose = srcCameraMatrix * matUserPose;

                    Vector3 userSpacePos = matUserPose.GetColumn(3);
                    cameraOrbit.centerPos = userSpacePos;

                    //orbitCenter.position = userSpacePos;
                    //orbitCenter.rotation = matUserPose.rotation;

                    Vector3 camUserDir = userSpacePos - cameraOrbit.transform.position;
                    cameraOrbit.distance = camUserDir.magnitude;
                }
            }

            // check for single user & new frames
            if (!CheckForSingleUser(true))
                return;

            float currentTime = Time.time;
            for (int i = 0; i < numSensors; i++)
            {
                KinectInterop.SensorData sensorData = kinectManager.GetSensorData(i);
                //if (sensorData.trackedBodiesCount != 1)  // check for single user
                //    continue;

                //Vector3 vUserPos = Vector3.zero; Quaternion qUserRot = Quaternion.identity;
                if (userBodyPose != null && GetUserPose(i, sensorData, playerIndex, userBodyPose[i].bodyTime, ref tempBodyPose))
                {
                    userBodyPose[i].bodyTime = tempBodyPose.bodyTime;
                    float deltaTime = currentTime - userBodyPose[i].poseTime;
                    userBodyPose[i].poseTime = currentTime;

                    for(int j = 0; j < numJoints; j++)
                    {
                        userBodyPose[i].jointTracked[j] = tempBodyPose.jointTracked[j];
                        if (!tempBodyPose.jointTracked[j])
                            continue;

                        // update user body pos
                        //Vector3 prevBodyPos = userBodyPose[i].jointPos[j];
                        //if (prevBodyPos == Vector3.zero || smoothFactor <= float.Epsilon)
                            userBodyPose[i].jointPos[j] = tempBodyPose.jointPos[j];
                        //else
                        //    userBodyPose[i].jointPos[j] = Vector3.Lerp(prevBodyPos, tempBodyPose.jointPos[j], smoothFactor * deltaTime);

                        // update user body rot
                        //Quaternion prevBodyRot = userBodyPose[i].jointRot[j];
                        //if (prevBodyRot == Quaternion.identity || smoothFactor <= float.Epsilon)
                            userBodyPose[i].jointRot[j] = tempBodyPose.jointRot[j];
                        //else
                        //    userBodyPose[i].jointRot[j] = Quaternion.Slerp(prevBodyRot, tempBodyPose.jointRot[j], smoothFactor * deltaTime);

                        //Debug.Log(string.Format("S{0}: {1} - p:{2}, r:{3}", i, j, userBodyPose[i].jointPos[j], userBodyPose[i].jointRot[j].eulerAngles));
                    }

                    //Debug.Log(string.Format("Sensor {0}, Time: {1}, Delta: {2}, User oldPos: {3}, newPos: {4}, oldRot: {5}, newRot: {6}", i, currentTime, deltaTime, 
                    //    prevBodyPos, userBodyPos[i], prevBodyRot.eulerAngles, userBodyRot[i].eulerAngles));

                    //// modify body transforms, if applicable
                    //if (bodyTransforms != null && bodyTransforms[i] != null)
                    //{
                    //    bodyTransforms[i].localPosition = userBodyPose[i].jointPos[0];
                    //    bodyTransforms[i].localRotation = userBodyPose[i].jointRot[0];
                    //}
                }
            }

        }


        // takes multiple samples and auto-calibrates the cameras
        private IEnumerator AutoCalibrateCameras()
        {
            if (countdown != null && countdown.Length > 0)
            {
                for (int i = 0; i < countdown.Length; i++)
                {
                    if (countdown[i])
                        countdown[i].gameObject.SetActive(true);

                    yield return new WaitForSeconds(1f);

                    if (countdown[i])
                        countdown[i].gameObject.SetActive(false);
                }
            }
            else
            {
                // wait for 3 seconds
                yield return new WaitForSeconds(3f);
            }

            while (!bStopCoroutine)
            {
                bool bSingleUser = CheckForSingleUser(false);
                int numSamples = 0;

                float lastUserTime = CheckForSameUserTime();
                //Debug.Log("SingleUser: " + bSingleUser + ", LastUserTime: " + lastUserTime + ", ProcUserTime: " + lastProcUserTime);

                if (kinectManager && kinectManager.IsInitialized() && numSensors > 1 && // bSingleUser &&
                    lastUserTime != 0f && lastUserTime != lastProcUserTime)
                {
                    lastProcUserTime = lastUserTime;

                    for (int i = 0; i < numSensors; i++)
                    {
                        KinectInterop.SensorData sensorData = kinectManager.GetSensorData(i);

                        if (i == 0)
                        {
                            SaveSensorPose(i, refCameraPos, refCameraRot, ref userBodyPose[0]);
                        }
                        else
                        {
                            if(GetEstCameraPose(i, out Vector3 estCamPos, out Quaternion estCamRot))
                            {
                                SaveSensorPose(i, estCamPos, estCamRot, ref userBodyPose[i]);
                            }
                            else
                            {
                                CancelSensorPose(i);
                                break;
                            }
                        }
                    }

                    System.DateTime dtNow = System.DateTime.UtcNow;
                    multiCamPose.estimatedAtTime = dtNow.Ticks;
                    multiCamPose.estimatedDateTime = dtNow.ToShortDateString() + " " + dtNow.ToShortTimeString();

                    // show progress
                    numSamples = GetNumberOfSamples();
                    float fProgress = (float)numSamples / (float)maxSavedSamples;

                    if (progressBar != null)
                    {
                        progressBar.size = fProgress;
                    }

                    if (progressText != null)
                    {
                        progressText.text = string.Format("{0:F0}%", fProgress * 100f);
                    }

                    // show sensor info
                    ShowCamPosesInfo(fProgress);
                }

                if (numSensors > 1 && !bSingleUser)
                {
                    if (camInfoText != null)
                    {
                        camInfoText.text = "Only one person should stay visible to all sensors until the calibration completes.";
                    }
                }

                if (numSamples < maxSavedSamples)
                {
                    // wait between samples
                    yield return new WaitForSeconds(TIME_BETWEEN_PROBES);
                }
                else
                {
                    // save the multi-camera config
                    string multiCamJson = JsonUtility.ToJson(multiCamPose, true);
                    KinectInterop.SaveTextFile(KinectInterop.MULTI_CAM_CONFIG_FILE_NAME, multiCamJson);

                    // save the data used for multi-cam calibration
                    SaveMultiCameraData(numSamples);

                    if (camInfoText != null)
                    {
                        camInfoText.text = "Saved multi-camera configuration. Calibration finished!\nYou can manually adjust the sensor poses, if needed.\nUse Alt+mouse drag to orbit around the subject.";
                    }

                    // show the manual adjustment panel
                    ShowUpdatePanel();

                    yield break;
                }

            }
        }


        // loads the multi-camera config file
        private bool LoadMultiCamConfig()
        {
            string multiCamJson = KinectInterop.LoadTextFile(KinectInterop.MULTI_CAM_CONFIG_FILE_NAME);
            
            if(!string.IsNullOrEmpty(multiCamJson))
            {
                multiCamPose = JsonUtility.FromJson<KinectInterop.MultiCameraPose>(multiCamJson);

                if(multiCamPose.camPose.Length != numSensors)
                {
                    ShowDebugMessage(numSensors + " sensors found, but " + multiCamPose.camPose.Length + " defined in 'multicam_config'.");
                    return false;
                }

                for(int s = 0; s < numSensors; s++)
                {
                    //// disable sensor-sync in edit mode
                    //KinectInterop.SensorData sensorData = kinectManager.GetSensorData(s);
                    //sensorData.sensorInterface.EnableSensorSync(sensorData, false);

                    if (cameraUserMesh != null && s < cameraUserMesh.Length && cameraUserMesh[s] != null)
                    {
                        cameraUserMesh[s].transform.position = multiCamPose.camPose[s].position;
                        cameraUserMesh[s].transform.rotation = Quaternion.Euler(multiCamPose.camPose[s].rotation);
                    }

                    if (cameraSkeleton != null && s < cameraSkeleton.Length && cameraSkeleton[s] != null)
                    {
                        cameraSkeleton[s].transform.position = multiCamPose.camPose[s].position;
                        cameraSkeleton[s].transform.rotation = Quaternion.Euler(multiCamPose.camPose[s].rotation);
                    }
                }

                // hide the progress bar
                if (progressBar != null)
                {
                    progressBar.gameObject.SetActive(false);
                }

                if (progressText != null)
                {
                    progressText.gameObject.SetActive(false);
                }

                // hide the status hint
                if(kinectManager != null && kinectManager.statusInfoText != null)
                {
                    kinectManager.statusInfoText.text = string.Empty;
                }

                // show the play-mode message
                ShowDebugMessage(numSensors + " sensors found. Starting edit mode...");

                return true;
            }

            return false;
        }


        // shows the manual camera-pose adjustment panel
        private void ShowUpdatePanel()
        {
            if (updatePanel)
            {
                // show the update panel
                updatePanel.gameObject.SetActive(true);

                for (int i = 0; i < numSensors; i++)
                {
                    sensorRotTransform[i] = multiCamPose.camPose[i].rotation;
                    sensorRotAdjust[i] = Vector3.zero;

                    sensorPosTransform[i] = multiCamPose.camPose[i].position;
                    sensorPosAdjust[i] = Vector3.zero;
                }

                if (sensorDropdown)
                {
                    // select the 1st sensor
                    sensorDropdown.value = 0;
                    selSensorIndex = 1;
                }
            }
        }


        // checks for single user, visible to all sensors
        private bool CheckForSingleUser(bool checkFrameTime)
        {
            ulong masterTime = 0;
            if (useSynchronizedSamples && masterIndex >= 0)
            {
                KinectInterop.SensorData sensorData = kinectManager.GetSensorData(masterIndex);
                masterTime = sensorData.lastBodyFrameTime - (ulong)sensorData.startTimeOffset;
            }

            for (int i = 0; i < numSensors; i++)
            {
                KinectInterop.SensorData sensorData = kinectManager.GetSensorData(i);
                if (sensorData.trackedBodiesCount != 1)
                {
                    //Debug.LogWarning("S" + i + " tracked users count (" + sensorData.trackedBodiesCount + ") is different than one.");
                    return false;
                }

                if (checkFrameTime && userBodyPose != null && sensorData.lastBodyFrameTime == userBodyPose[i].bodyTime)
                {
                    //Debug.LogWarning("S" + i + " the last body frame time (" + sensorData.lastBodyFrameTime + ") is unchanged.");
                    return false;
                }

                if (masterTime != 0)
                {
                    // check for synched frames
                    ulong frameTime = sensorData.lastBodyFrameTime - (ulong)sensorData.startTimeOffset;
                    if (!sensorData.sensorInterface.IsSensorFrameSynched(frameTime, masterTime))
                    {
                        //Debug.LogWarning("S" + i + " frame time (" + frameTime + ") is not synched with master time (" + masterTime + ").");
                        return false;
                    }
                }
            }

            return true;
        }


        // checks if the user times are the same
        private float CheckForSameUserTime()
        {
            float lastUserTime = userBodyPose[0].poseTime;
            for (int i = 1; i < numSensors; i++)
            {
                if (userBodyPose[i].poseTime != lastUserTime)
                    return 0f;
            }

            return lastUserTime;
        }


        // returns the body pose, as perceived by the given sensor
        private bool GetCamBodyPose(int sIndex, int iV1, int iV2, int iH1, int iH2, int iPos, out Pose bodyPose)
        {
            bodyPose = new Pose();

            if (!userBodyPose[sIndex].jointTracked[iV1] || !userBodyPose[sIndex].jointTracked[iV2] || !userBodyPose[sIndex].jointTracked[iH1] || !userBodyPose[sIndex].jointTracked[iH2] || !userBodyPose[sIndex].jointTracked[iPos])
                return false;

            //Debug.Log(string.Format("S{0} - posV1:{1}, posV2:{2}, posH1: {3}, posH2: {4}", sIndex, userBodyPose[sIndex].jointPos[iV1], userBodyPose[sIndex].jointPos[iV2], userBodyPose[sIndex].jointPos[iH1], userBodyPose[sIndex].jointPos[iH2]));

            Vector3 vUp = (userBodyPose[sIndex].jointPos[iV2] - userBodyPose[sIndex].jointPos[iV1]);
            vUp = new Vector3(vUp.x, vUp.y, -vUp.z).normalized;
            Vector3 vRgt = (userBodyPose[sIndex].jointPos[iH2] - userBodyPose[sIndex].jointPos[iH1]);
            vRgt = new Vector3(vRgt.x, vRgt.y, -vRgt.z).normalized;
            Vector3 vFwd = Vector3.Cross(vRgt, vUp).normalized;

            Vector3 vPos = userBodyPose[sIndex].jointPos[iPos];
            Quaternion qRot = Quaternion.LookRotation(vFwd, vUp);

            Vector3 vRot = qRot.eulerAngles;
            vRot = new Vector3(vRot.x, -vRot.y, -vRot.z);
            qRot = initialUserRot * Quaternion.Euler(vRot);

            bodyPose.position = vPos;
            bodyPose.rotation = qRot;

            //Debug.Log(string.Format("S{0} - body pos:{1}, rot:{2}", sIndex, vPos, qRot.eulerAngles));

            return true;
        }


        // tries to estimate the camera pose, according to the tracked body joints
        private bool GetEstCameraPose(int sIndex, out Vector3 estCamPos, out Quaternion estCamRot)
        {
            Matrix4x4 matRefUser = Matrix4x4.identity;
            Matrix4x4 matCamUser = Matrix4x4.identity;

            estCamPos = Vector3.zero;
            estCamRot = Quaternion.identity;
            bool bFoundAny = false;

            // upper part
            if (GetCamBodyPose(0, 0, 1, 4, 5, 1, out Pose bodyPoseR1) &&  // 4, 5
                GetCamBodyPose(sIndex, 0, 1, 4, 5, 1, out Pose bodyPoseI1))  // 4, 5
            {
                matRefUser.SetTRS(bodyPoseR1.position, bodyPoseR1.rotation, Vector3.one);
                matCamUser.SetTRS(bodyPoseI1.position, bodyPoseI1.rotation, Vector3.one);

                Matrix4x4 dstCamMatrix = srcCameraMatrix * matRefUser * matCamUser.inverse;
                estCamPos = dstCamMatrix.GetColumn(3);
                estCamRot = dstCamMatrix.rotation;

                //Debug.Log(string.Format("  S{0} J{1} - dst cam p: {2}, r: {3}", sIndex, 1, estCamPos, estCamRot.eulerAngles));

                // modify body transforms, if applicable
                if (bodyTransforms != null && bodyTransforms[sIndex] != null)
                {
                    bodyTransforms[sIndex].localPosition = bodyPoseI1.position;
                    bodyTransforms[sIndex].localRotation = bodyPoseI1.rotation;
                }

                bFoundAny = true;
            }

            // lower part
            if (GetCamBodyPose(0, 0, 1, 10, 11, 0, out Pose bodyPoseR2) &&  // 10, 11  // 2, 3
                GetCamBodyPose(sIndex, 0, 1, 10, 11, 0, out Pose bodyPoseI2))  // 10, 11  // 2, 3
            {
                matRefUser.SetTRS(bodyPoseR2.position, bodyPoseR2.rotation, Vector3.one);
                matCamUser.SetTRS(bodyPoseI2.position, bodyPoseI2.rotation, Vector3.one);

                Matrix4x4 dstCamMatrix = srcCameraMatrix * matRefUser * matCamUser.inverse;
                Vector3 estCamPos2 = dstCamMatrix.GetColumn(3);
                Quaternion estCamRot2 = dstCamMatrix.rotation;

                //Debug.Log(string.Format("  S{0} J{1} - dst cam p: {2}, r: {3}", sIndex, 0, estCamPos2, estCamRot2.eulerAngles));

                if (bFoundAny)
                {
                    estCamPos = Vector3.Lerp(estCamPos, estCamPos2, 0.5f);
                    estCamRot = Quaternion.Slerp(estCamRot, estCamRot2, 0.5f);
                }
                else
                {
                    estCamPos = estCamPos2;
                    estCamRot = estCamRot2;
                }

                //Debug.Log(string.Format("S{0} - dst cam pos: {1}, r:{2}", sIndex, estCamPos, estCamRot.eulerAngles));

                bFoundAny = true;
            }

            return bFoundAny;
        }


        // returns the minimum number of samples, for all sensors
        private int GetNumberOfSamples()
        {
            int minSamples = maxSavedSamples;

            for (int i = 0; i < numSensors; i++)
            {
                minSamples = Mathf.Min(minSamples, savedCamPos[i].Count);
                minSamples = Mathf.Min(minSamples, savedCamRot[i].Count);
            }

            return minSamples;
        }


        // gets the position and rotation of the given user
        private bool GetUserPose(int sIndex, KinectInterop.SensorData sensorData, int uIndex, ulong lastBodyTime, ref UserBodyPose userPose)
        {
            if (sensorData != null && sensorData.trackedBodiesCount > uIndex && (lastBodyTime == 0 || sensorData.lastBodyFrameTime != lastBodyTime))
            {
                KinectInterop.BodyData bodyData = sensorData.alTrackedBodies[uIndex];
                Vector3 spaceScale = sensorData.sensorSpaceScale;

                userPose.bodyTime = sensorData.lastBodyFrameTime;
                //if(lastBodyTime != 0)
                //{
                //    Debug.Log(string.Format("S{0}, Time: {1}, Last: {2}", sIndex, sensorData.lastBodyFrameTime, lastBodyTime));
                //}

                if (bodyData.joint != null && bodyData.joint.Length > 0)
                {
                    for(int j = 0; j < numJoints; j++)
                    {
                        int joint = trackedBodyJoint[j];

                        KinectInterop.TrackingState trackingState = bodyData.joint[joint].trackingState;
                        userPose.jointTracked[j] = (trackingState == KinectInterop.TrackingState.Tracked) || (trackingState == KinectInterop.TrackingState.HighConf);

                        if (userPose.jointTracked[j])
                        {
                            Vector3 kinectPos = bodyData.joint[joint].kinectPos;
                            userPose.jointPos[j] = new Vector3(kinectPos.x * spaceScale.x, kinectPos.y * spaceScale.y, kinectPos.z);
                            userPose.jointRot[j] = initialUserRot * bodyData.joint[joint].mirroredRotation;

                            //Debug.Log(string.Format("S{0}: {1} - p:{2}, r:{3}", sIndex, (KinectInterop.JointType)joint, userPose.jointPos[j], userPose.jointRot[j].eulerAngles));
                        }
                    }
                }

                return userPose.jointTracked[0];
            }

            return false;
        }


        // cancels the sensor pose up to the given sensor index
        private void CancelSensorPose(int sIndex)
        {
            Debug.Log("Canceling sensor-pose up to S" + sIndex + ", count: " + savedCamPos[sIndex].Count);

            for(int i = 0; i < sIndex; i++)
            {
                savedCamPos[i].RemoveAt(savedCamPos[i].Count - 1);
                savedCamRot[i].RemoveAt(savedCamRot[i].Count - 1);
                savedUserPose[i].RemoveAt(savedUserPose[i].Count - 1);
            }
        }


        // saves the currently estimated sensor pose
        private void SaveSensorPose(int sIndex, Vector3 camPos, Quaternion camRot, ref UserBodyPose userPose)
        {
            while (savedCamPos[sIndex].Count >= maxSavedSamples)
                savedCamPos[sIndex].RemoveAt(0);
            savedCamPos[sIndex].Add(camPos);

            while (savedCamRot[sIndex].Count >= maxSavedSamples)
                savedCamRot[sIndex].RemoveAt(0);
            savedCamRot[sIndex].Add(camRot);

            while (savedUserPose[sIndex].Count >= maxSavedSamples)
                savedUserPose[sIndex].RemoveAt(0);
            UserBodyPose userPoseCopy = userPose.GetDeepCopy();
            savedUserPose[sIndex].Add(userPoseCopy);

            //int spi = savedCamPos[sIndex].Count - 1;
            //Debug.Log(string.Format("S{0}: saved cam p:{1}, r:{2}, i: {3}", sIndex, savedCamPos[sIndex][spi], savedCamRot[sIndex][spi].eulerAngles, spi));

            if (savedCamPos[sIndex].Count == savedCamRot[sIndex].Count)
            {
                int numSavedPoses = savedCamPos[sIndex].Count;
                bool bEnoughSamples = numSavedPoses >= numMvaSamples;
                int fromSavedPR = bEnoughSamples ? (numSavedPoses - numMvaSamples) : 0;
                int mvaCountPR = bEnoughSamples ? numMvaSamples : numSavedPoses;

                int cpi = GetBestCamPoseIndex(sIndex, fromSavedPR, numSavedPoses, 1f, ref minPoseError[sIndex]);
                if(cpi >= 0)
                {
                    minPoseIndex[sIndex] = cpi;
                    //Debug.Log(string.Format("S{0}: best cam p:{1}, r:{2}, i: {3}, err: {4}, from: {5}, to: {6}", sIndex, savedCamPos[sIndex][cpi], savedCamRot[sIndex][cpi].eulerAngles, cpi, minPoseError[sIndex], fromSavedPR, numSavedPR));

                    multiCamPose.camPose[sIndex].position = savedCamPos[sIndex][cpi];
                    multiCamPose.camPose[sIndex].rotation = savedCamRot[sIndex][cpi].eulerAngles;

                    if (cameraUserMesh != null && cameraUserMesh[sIndex] != null)
                    {
                        cameraUserMesh[sIndex].transform.position = savedCamPos[sIndex][cpi];
                        cameraUserMesh[sIndex].transform.rotation = savedCamRot[sIndex][cpi];
                    }

                    if (cameraSkeleton != null && cameraSkeleton[sIndex] != null)
                    {
                        cameraSkeleton[sIndex].transform.position = savedCamPos[sIndex][cpi];
                        cameraSkeleton[sIndex].transform.rotation = savedCamRot[sIndex][cpi];
                    }
                }
            }

        }


        // returns the cam-pose index that matches best
        private int GetBestCamPoseIndex(int sIndex, int fromPose, int toPose, float notTrackedPosError, ref float minPoseError)
        {
            if (sIndex == 0)
                return savedCamPos[sIndex].Count > 0 ? 0 : -1;

            Matrix4x4 matCamPose = Matrix4x4.identity;
            float fErrorMin = float.MaxValue;
            int iPoseIndexMin = -1;

            int numSavedPoses = savedCamPos[sIndex].Count;
            for (int c = 0; c < numSavedPoses; c++)
            {
                matCamPose.SetTRS(savedCamPos[sIndex][c], savedCamRot[sIndex][c], Vector3.one);

                float fTotalError = 0f;
                int numProcPoses = 0;

                for (int i = fromPose; i < toPose; i++)
                {
                    float fPosError = 0f;
                    int numProcJoints = 0;
                    //StringBuilder sbBuf = new StringBuilder();

                    for (int j = 0; j < numJoints; j++)
                    {
                        if (savedUserPose[0][i].jointTracked[j] && savedUserPose[sIndex][i].jointTracked[j])
                        {
                            Vector3 posRefUserJ = srcCameraMatrix.MultiplyPoint3x4(savedUserPose[0][i].jointPos[j]);
                            Vector3 posCamUserJ = matCamPose.MultiplyPoint3x4(savedUserPose[sIndex][i].jointPos[j]);
                            fPosError += (posCamUserJ - posRefUserJ).magnitude;

                            //sbBuf.AppendFormat("{0:F3} ", (posCamUserJ - posRefUserJ).magnitude);
                        }
                        else
                        {
                            fPosError += notTrackedPosError;
                            //sbBuf.AppendFormat("{0:F3} ", notTrackedPosError);
                        }

                        numProcJoints++;
                    }

                    //if(numProcJoints > 0)
                    {
                        //fPosError /= numProcJoints;  // independent of numJoints
                        //fPosError *= (float)numJoints / numProcJoints;  // respect the all-joints/proc-ones ratio

                        fTotalError += fPosError;
                        numProcPoses++;

                        //Debug.Log("  S" + sIndex + " Pose: " + i + ", PosError: " + fPosError + ", TotalError: " + fTotalError + ", ProcPoses: " + numProcPoses + "\n" + sbBuf.ToString());
                    }
                }

                if(numProcPoses > 0)
                {
                    fTotalError /= numProcPoses;  // independent of numPoses
                    //fTotalError *= (float)(toPose - fromPose + 1) / numProcPoses;  // respect the all-poses/proc-ones ratio

                    if (fTotalError < fErrorMin)
                    {
                        fErrorMin = fTotalError;
                        iPoseIndexMin = c;
                    }
                }
            }

            minPoseError = fErrorMin;
            //Debug.Log("S" + sIndex + " PoseIndexMin: " + iPoseIndexMin + ", PoseErrMin: " + fErrorMin + ", from: " + fromPose + ", to: " + toPose);

            return iPoseIndexMin;
        }


        // show the camera poses info on screen
        private void ShowCamPosesInfo(float fProgress)
        {
            StringBuilder sbCamInfo = new StringBuilder();
            StringBuilder sbErrInfo = new StringBuilder();

            float fErrThreshold = 0.1f * numJoints;
            //Debug.Log("ErrThreshold: " + fErrThreshold);

            for (int i = 0; i < numSensors; i++)
            {
                sbCamInfo.AppendFormat("Camera {0} position: {1}, rotation: {2}", i, multiCamPose.camPose[i].position, multiCamPose.camPose[i].rotation);
                sbCamInfo.AppendLine();

                if(i > 0)
                {
                    sbErrInfo.AppendFormat("Camera {0} error: {1:F6}    {2}", i, minPoseError[i], minPoseError[i] <= fErrThreshold ? "<color=yellow>Good!</color>" : "<color=orange>Not good enough.</color>");
                    sbErrInfo.AppendLine();
                }
            }

            //Debug.Log(sbInfo.ToString());
            if (camInfoText != null)
            {
                camInfoText.text = sbCamInfo.ToString();
            }

            if (errorInfoText != null)
            {
                errorInfoText.text = sbErrInfo.ToString();
            }
        }


        // displays debug message
        private void ShowDebugMessage(string sMsg)
        {
            Debug.Log(sMsg);

            if (camInfoText != null)
            {
                camInfoText.text = sMsg;
            }
        }

        // displays error message
        private void ShowErrorMessage(string sMsg)
        {
            Debug.LogError(sMsg);

            if (camInfoText != null)
            {
                camInfoText.text = sMsg;
            }
        }


        // invoked when new sensor index is selected
        public void SensorDropdownValueChanged(int selIndex)
        {
            selSensorIndex = selIndex + 1;
            Debug.Log("Selected sensor index: " + selSensorIndex);

            if (sensorToggle != null && selSensorIndex >= 0)
            {
                if(cameraUserMesh != null && selSensorIndex < cameraUserMesh.Length && cameraUserMesh[selSensorIndex] != null)
                {
                    sensorToggle.isOn = cameraUserMesh[selSensorIndex].activeSelf;
                }
                else if (cameraSkeleton != null && selSensorIndex < cameraSkeleton.Length && cameraSkeleton[selSensorIndex] != null)
                {
                    sensorToggle.isOn = cameraSkeleton[selSensorIndex].activeSelf;
                }
            }

            if (selSensorIndex >= 0 && selSensorIndex < sensorRotAdjust.Length)
            {
                float rotX = sensorRotAdjust[selSensorIndex].x;
                float rotY = sensorRotAdjust[selSensorIndex].y;
                float rotZ = sensorRotAdjust[selSensorIndex].z;

                if (sensorRotationX)
                    sensorRotationX.value = rotX;
                if (sensorRotationY)
                    sensorRotationY.value = rotY;
                if (sensorRotationZ)
                    sensorRotationZ.value = rotZ;

                float posX = sensorPosAdjust[selSensorIndex].x;
                float posY = sensorPosAdjust[selSensorIndex].y;
                float posZ = sensorPosAdjust[selSensorIndex].z;

                if (sensorPositionX)
                    sensorPositionX.value = posX;
                if (sensorPositionY)
                    sensorPositionY.value = posY;
                if (sensorPositionZ)
                    sensorPositionZ.value = posZ;

            }
        }


        // invoked when sensor toggle value is changed
        public void SensorToggleValueChanged(bool isOn)
        {
            if (selSensorIndex >= 0)
            {
                if(cameraUserMesh != null && selSensorIndex < cameraUserMesh.Length && cameraUserMesh[selSensorIndex] != null)
                {
                    cameraUserMesh[selSensorIndex].SetActive(isOn);
                }

                if (cameraSkeleton != null && selSensorIndex < cameraSkeleton.Length && cameraSkeleton[selSensorIndex] != null)
                {
                    cameraSkeleton[selSensorIndex].SetActive(isOn);
                }
            }
        }


        // clears the sensor rotation adjustments
        public void ResetAdjustedRotation()
        {
            if (sensorRotationX)
                sensorRotationX.value = 0f;
            if (sensorRotationY)
                sensorRotationY.value = 0f;
            if (sensorRotationZ)
                sensorRotationZ.value = 0f;
        }


        // clears the sensor position adjustments
        public void ResetAdjustedPosition()
        {
            if (sensorPositionX)
                sensorPositionX.value = 0f;
            if (sensorPositionY)
                sensorPositionY.value = 0f;
            if (sensorPositionZ)
                sensorPositionZ.value = 0f;
        }


        // invoked when the rotation value get changed
        public void SensorRotXValueChanged(float rotValue)
        {
            if(selSensorIndex >= 0 && selSensorIndex < sensorRotAdjust.Length)
            {
                sensorRotAdjust[selSensorIndex].x = rotValue;
                UpdateSelectedMeshTransform();
            }
        }


        // invoked when the rotation value get changed
        public void SensorRotYValueChanged(float rotValue)
        {
            if (selSensorIndex >= 0 && selSensorIndex < sensorRotAdjust.Length)
            {
                sensorRotAdjust[selSensorIndex].y = rotValue;
                UpdateSelectedMeshTransform();
            }
        }


        // invoked when the rotation value get changed
        public void SensorRotZValueChanged(float rotValue)
        {
            if (selSensorIndex >= 0 && selSensorIndex < sensorRotAdjust.Length)
            {
                sensorRotAdjust[selSensorIndex].z = rotValue;
                UpdateSelectedMeshTransform();
            }
        }


        // invoked when the position value get changed
        public void SensorPosXValueChanged(float posValue)
        {
            if (selSensorIndex >= 0 && selSensorIndex < sensorPosAdjust.Length)
            {
                sensorPosAdjust[selSensorIndex].x = posValue;
                UpdateSelectedMeshTransform();
            }
        }


        // invoked when the position value get changed
        public void SensorPosYValueChanged(float posValue)
        {
            if (selSensorIndex >= 0 && selSensorIndex < sensorPosAdjust.Length)
            {
                sensorPosAdjust[selSensorIndex].y = posValue;
                UpdateSelectedMeshTransform();
            }
        }


        // invoked when the position value get changed
        public void SensorPosZValueChanged(float posValue)
        {
            if (selSensorIndex >= 0 && selSensorIndex < sensorPosAdjust.Length)
            {
                sensorPosAdjust[selSensorIndex].z = posValue;
                UpdateSelectedMeshTransform();
            }
        }


        // updates the selected mesh transform pose
        private void UpdateSelectedMeshTransform()
        {
            if (selSensorIndex >= 0 && selSensorIndex < sensorRotAdjust.Length)
            {
                Vector3 adjustedRot = sensorRotTransform[selSensorIndex] + sensorRotAdjust[selSensorIndex];
                Vector3 adjustedPos = sensorPosTransform[selSensorIndex] + sensorPosAdjust[selSensorIndex];

                if (cameraUserMesh != null && cameraUserMesh[selSensorIndex] != null)
                {
                    cameraUserMesh[selSensorIndex].transform.rotation = Quaternion.Euler(adjustedRot);
                    cameraUserMesh[selSensorIndex].transform.position = adjustedPos;
                }

                if (cameraSkeleton != null && cameraSkeleton[selSensorIndex] != null)
                {
                    cameraSkeleton[selSensorIndex].transform.rotation = Quaternion.Euler(adjustedRot);
                    cameraSkeleton[selSensorIndex].transform.position = adjustedPos;
                }

                if (camInfoText != null && camInfoText.text != string.Empty)
                {
                    //camInfoText.text = string.Empty;
                    ShowAdjCamPoseInfo();
                }
            }
        }


        // show the adjusted camera pose info on screen
        private void ShowAdjCamPoseInfo()
        {
            System.Text.StringBuilder sbInfo = new System.Text.StringBuilder();

            for (int i = 0; i < numSensors; i++)
            {
                Vector3 adjustedPos = sensorPosTransform[i] + sensorPosAdjust[i];
                Vector3 adjustedRot = sensorRotTransform[i] + sensorRotAdjust[i];

                sbInfo.AppendFormat("Camera {0} position: {1}, rotation: {2}", i, adjustedPos, adjustedRot);
                sbInfo.AppendLine();
            }

            //Debug.Log(sbInfo.ToString());
            if (camInfoText != null)
            {
                camInfoText.text = sbInfo.ToString();
            }
        }


        // saves the adjusted camera pose to multi-cam config
        public void SaveMultiCamAdjustedPose()
        {
            // adjust the sensor rotation
            for (int i = 1; i < numSensors; i++)
            {
                Vector3 adjustedRot = sensorRotTransform[i] + sensorRotAdjust[i];
                multiCamPose.camPose[i].rotation = Quaternion.Euler(adjustedRot).eulerAngles;

                Vector3 adjustedPos = sensorPosTransform[i] + sensorPosAdjust[i];
                multiCamPose.camPose[i].position = adjustedPos;
            }

            System.DateTime dtNow = System.DateTime.UtcNow;
            multiCamPose.estimatedAtTime = dtNow.Ticks;
            multiCamPose.estimatedDateTime = dtNow.ToShortDateString() + " " + dtNow.ToShortTimeString();

            // save the multi-camera config
            string multiCamJson = JsonUtility.ToJson(multiCamPose, true);
            KinectInterop.SaveTextFile(KinectInterop.MULTI_CAM_CONFIG_FILE_NAME, multiCamJson);

            if (camInfoText != null)
            {
                camInfoText.text = "Saved the adjusted multi-camera configuration.";
            }
        }


        // saves the multi-camera data, to be inspected later
        private void SaveMultiCameraData(int numSamples)
        {
            MultiCameraData data = new MultiCameraData();

            data.version = 1;
            data.numSensors = numSensors;
            data.numSamples = numSamples;
            int numTotal = numSensors * numSamples;

            data.bodyPose = new UserBodyPose[numTotal];
            data.camPos = new Vector3[numTotal];
            data.camRot = new Vector3[numTotal];

            data.camPoseError = new float[numSensors];
            data.camPoseIndex = new int[numSensors];

            for(int i = 0; i < numSensors; i++)
            {
                for(int j = 0; j < numSamples; j++)
                {
                    int k = i * numSamples + j;

                    data.bodyPose[k] = savedUserPose[i][j];
                    data.camPos[k] = savedCamPos[i][j];
                    data.camRot[k] = savedCamRot[i][j].eulerAngles;
                }

                data.camPoseError[i] = minPoseError[i];
                data.camPoseIndex[i] = minPoseIndex[i];
            }

            System.DateTime dtNow = System.DateTime.UtcNow;
            data.dateTimeValue = dtNow.Ticks;
            data.dateTimeString = dtNow.ToShortDateString() + " " + dtNow.ToShortTimeString();

            // save the multi-camera config
            string dataJson = JsonUtility.ToJson(data, false);
            KinectInterop.SaveTextFile("multicam_data.json", dataJson);

            Debug.Log("Saved the data used for estimation of the multi-cam-config.");
        }

    }
}

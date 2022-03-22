﻿using UnityEngine;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// Script that emulates a 3D holographic display based on the viewer position
    /// Courtesy of Davy Loots (Twitter: @davloots)
    /// - For best effect - and if available - use a stereoscopic display and calculate the head 
    ///   position twice by simply offsetting the HeadPosition .03 to the left and to the right for
    ///   each of the views.
    /// </summary>
    class SimpleHolographicCamera : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Camera type.")]
        public CameraEyeType cameraType = CameraEyeType.CenterEye;
        public enum CameraEyeType : int { CenterEye = 0, LeftEye = 1, RightEye = 2 }

        //[Tooltip("How high above the ground is the center of the display, in meters.")]
        //public float ScreenCenterY = 0.5f;

        [Tooltip("The position of display center, in Kinect world coordinates, in meters.")]
        public Vector3 screenCenterPos = new Vector3(0f, 1f, 0f);

        [Tooltip("Width of the display in meters.")]
        public float screenWidth = 1.6f; // 0.88f;

        [Tooltip("Height of the display in meters.")]
        public float screenHeight = 0.9f; // 0.50f;

        [Tooltip("Standard distance from the display to the user, in meters.")]
        public float standardUserDistance = 2f;

        [Tooltip("UI-Text to display status messages.")]
        public UnityEngine.UI.Text statusText = null;

        private float left = -0.2F;
        private float right = 0.2F;
        private float bottom = -0.2F;
        private float top = 0.2F;

        private KinectManager kinectManager;
        private Camera cam;

        private Vector3 jointHeadPos;
        private Vector3 headRelPosition;
        private bool headPosValid = false;

        private Vector3 initialCamPos = Vector3.zero;
        private Quaternion initialCamRot = Quaternion.identity;
        private Matrix4x4 initialCamMat = Matrix4x4.identity;
        private Matrix4x4 initialCamPrjMat = Matrix4x4.identity;
        //private Vector3 initialRelPos = Vector3.zero;

        private Quaternion initialHeadRot = Quaternion.Euler(0f, 180f, 0f);
        private float eyeDistance = 0.03f;


        void Start()
        {
            kinectManager = KinectManager.Instance;
            //screenCenterPos = new Vector3 (0f, ScreenCenterY, 0f);

            cam = GetComponent<Camera>();
            if (cam)
            {
                initialCamPos = cam.transform.position;
                initialCamRot = cam.transform.rotation;
                initialCamMat = Matrix4x4.TRS(initialCamPos, initialCamRot, Vector3.one);
                initialCamPrjMat = cam.projectionMatrix;
            }
        }

        void Update()
        {
            headPosValid = false;

            if (kinectManager && kinectManager.IsInitialized())
            {
                ulong userId = kinectManager.GetUserIdByIndex(playerIndex);

                if (kinectManager.IsUserTracked(userId) && kinectManager.IsJointTracked(userId, KinectInterop.JointType.Head))
                {
                    jointHeadPos = GetCameraPosition(userId);  // kinectManager.GetJointPosition(userId, KinectInterop.JointType.Head);
                    headRelPosition = jointHeadPos - screenCenterPos;
                    headPosValid = true;

                    if (statusText)
                    {
                        string sStatusMsg = string.Format("Head position: {0}\nRelative to screen: {1}", jointHeadPos, headRelPosition);
                        statusText.text = sStatusMsg;
                    }
                }
            }

        }


        // returns the camera position, according to the camera eye type
        private Vector3 GetCameraPosition(ulong userId)
        {
            Vector3 headPos = kinectManager.GetJointPosition(userId, KinectInterop.JointType.Head);
            Quaternion headRot = initialHeadRot * kinectManager.GetJointOrientation(userId, KinectInterop.JointType.Head, false); // mirrored rotation

            Vector3 eyeOffset = Vector3.zero;
            switch (cameraType)
            {
                case CameraEyeType.LeftEye:
                    eyeOffset = new Vector3(eyeDistance, 0f, 0f);
                    eyeOffset = headRot * eyeOffset;
                    break;

                case CameraEyeType.RightEye:
                    eyeOffset = new Vector3(-eyeDistance, 0f, 0f);
                    eyeOffset = headRot * eyeOffset;
                    break;
            }

            return headPos + eyeOffset;
        }


        /// <summary>
        /// Updates the projection matrix and camera position to get the correct anamorph perspective
        /// </summary>
        void LateUpdate()
        {
            if (cam)
            {
                if (headPosValid)
                {
                    // set off-center projection
                    left = cam.nearClipPlane * (-screenWidth / 2 - headRelPosition.x) / standardUserDistance; // initialRelPos.z;
                    right = cam.nearClipPlane * (screenWidth / 2 - headRelPosition.x) / standardUserDistance; // initialRelPos.z;

                    bottom = cam.nearClipPlane * (-screenHeight / 2 - headRelPosition.y) / standardUserDistance; // initialRelPos.z;
                    top = cam.nearClipPlane * (screenHeight / 2 - headRelPosition.y) / standardUserDistance; // initialRelPos.z;

                    //cam.transform.position = new Vector3(headRelPosition.x, headRelPosition.y, -headRelPosition.z);
                    //cam.transform.LookAt(new Vector3(headRelPosition.x, headRelPosition.y, 0));

                    // consider the initial camera pose
                    Vector3 headCamPos = new Vector3(headRelPosition.x, headRelPosition.y, -headRelPosition.z);
                    Quaternion headCamRot = Quaternion.LookRotation(Vector3.forward, Vector3.up);

                    Matrix4x4 camPoseMat = Matrix4x4.TRS(headCamPos, headCamRot, Vector3.one);
                    camPoseMat = camPoseMat * initialCamMat;

                    cam.transform.position = camPoseMat.GetColumn(3);
                    cam.transform.rotation = camPoseMat.rotation;

                    Matrix4x4 m = PerspectiveOffCenter(left, right, bottom, top, cam.nearClipPlane, cam.farClipPlane);
                    cam.projectionMatrix = m;
                }
                else
                {
                    // set the initial camera settings
                    cam.transform.position = initialCamPos;
                    cam.transform.rotation = initialCamRot;
                    cam.projectionMatrix = initialCamPrjMat;
                }
            }
        }

        /// <summary>
        /// Calculates the camera projection matrix
        /// </summary>
        /// <returns>The off center matrix.</returns>
        /// <param name="left">Left.</param>
        /// <param name="right">Right.</param>
        /// <param name="bottom">Bottom.</param>
        /// <param name="top">Top.</param>
        /// <param name="near">Near.</param>
        /// <param name="far">Far.</param>
        private Matrix4x4 PerspectiveOffCenter(float left, float right, float bottom, float top, float near, float far)
        {
            float x = 2.0F * near / (right - left);
            float y = 2.0F * near / (top - bottom);
            float a = (right + left) / (right - left);
            float b = (top + bottom) / (top - bottom);
            float c = -(far + near) / (far - near);
            float d = -(2.0F * far * near) / (far - near);
            float e = -1.0F;

            Matrix4x4 m = new Matrix4x4();
            m[0, 0] = x;
            m[0, 1] = 0;
            m[0, 2] = a;
            m[0, 3] = 0;
            m[1, 0] = 0;
            m[1, 1] = y;
            m[1, 2] = b;
            m[1, 3] = 0;
            m[2, 0] = 0;
            m[2, 1] = 0;
            m[2, 2] = c;
            m[2, 3] = d;
            m[3, 0] = 0;
            m[3, 1] = 0;
            m[3, 2] = e;
            m[3, 3] = 0;

            return m;
        }

    }
}


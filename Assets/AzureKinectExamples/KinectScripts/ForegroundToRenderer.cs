using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// ForegroundToRenderer sets the texture of the Renderer-component to be the BRM's foreground texture.
    /// </summary>
    public class ForegroundToRenderer : MonoBehaviour
    {
        [Tooltip("Reference to background removal manager. If left to None, it looks up the first available BR-manager in the scene.")]
        public BackgroundRemovalManager backgroundRemovalManager = null;


        // component references
        private Renderer thisRenderer = null;
        private KinectManager kinectManager = null;


        void Start()
        {
            thisRenderer = GetComponent<Renderer>();
            kinectManager = KinectManager.Instance;

            if(backgroundRemovalManager == null)
            {
                backgroundRemovalManager = FindObjectOfType<BackgroundRemovalManager>();
            }

            if (kinectManager && kinectManager.IsInitialized() && backgroundRemovalManager && backgroundRemovalManager.enabled)
            {
                Vector3 localScale = transform.localScale;
                localScale.z = localScale.x * kinectManager.GetColorImageHeight(backgroundRemovalManager.sensorIndex) / kinectManager.GetColorImageWidth(backgroundRemovalManager.sensorIndex);
                //localScale.x = -localScale.x;

                // apply color image scale
                Vector3 colorImageScale = kinectManager.GetColorImageScale(backgroundRemovalManager.sensorIndex);
                if (colorImageScale.x > 0f)
                    localScale.x = -localScale.x;
                if (colorImageScale.y > 0f)
                    localScale.z = -localScale.z;

                transform.localScale = localScale;
            }
        }


        void Update()
        {
            if (thisRenderer && thisRenderer.material.mainTexture == null)
            {
                if (kinectManager && backgroundRemovalManager && backgroundRemovalManager.enabled /**&& backManager.IsBackgroundRemovalInitialized()*/)
                {
                    thisRenderer.material.mainTexture = backgroundRemovalManager.GetForegroundTex();
                    //Debug.Log("BR-manager: " + backroundRemovalManager + ", user index: " + backroundRemovalManager.playerIndex);
                }
            }
            //else if (thisRenderer && thisRenderer.material.mainTexture != null)
            //{
            //    if (KinectManager.Instance == null)
            //    {
            //        thisRenderer.sharedMaterial.mainTexture = null;
            //    }
            //}
        }


        void OnApplicationPause(bool isPaused)
        {
            // fix for app pause & restore (UWP)
            if (isPaused && thisRenderer && thisRenderer.material.mainTexture != null)
            {
                thisRenderer.sharedMaterial.mainTexture = null;
            }
        }

    }
}

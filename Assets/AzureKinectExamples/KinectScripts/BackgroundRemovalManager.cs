using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using com.rfilkov.components;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// Background removal manager is the component that filters and renders user body silhouettes.
    /// </summary>
    public class BackgroundRemovalManager : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Index of the player, tracked by this component. -1 means all players, 0 - the 1st player only, 1 - the 2nd player only, etc.")]
        public int playerIndex = -1;

        [Tooltip("RawImage used for displaying the foreground image.")]
        public UnityEngine.UI.RawImage foregroundImage;

        [Tooltip("Camera used for alignment of bodies to color camera image.")]
        public Camera foregroundCamera;

        [Tooltip("Resolution of the generated foreground textures.")]
        private DepthSensorBase.PointCloudResolution foregroundImageResolution = DepthSensorBase.PointCloudResolution.ColorCameraResolution;

        [Tooltip("Whether only the alpha texture is needed.")]
        public bool computeAlphaMaskOnly = false;

        [Tooltip("Whether the alpha texture will be inverted or not..")]
        public bool invertAlphaMask = false;

        [Tooltip("(Advanced) Whether to apply the median filter before the other filters.")]
        public bool applyMedianFilter = false;

        [Tooltip("(Advanced) Number of iterations used by the alpha texture's erode filter 0.")]
        [Range(0, 9)]
        public int erodeIterations0 = 0;  // 1

        [Tooltip("(Advanced) Number of iterations used by the alpha texture's dilate filter 1.")]
        [Range(0, 9)]
        public int dilateIterations = 0;  // 3;

        [Tooltip("(Advanced) Whether to apply the gradient filter.")]
        private bool applyGradientFilter = true;

        [Tooltip("(Advanced) Number of iterations used by the alpha texture's erode filter 2.")]
        [Range(0, 9)]
        public int erodeIterations = 0;  // 4;

        [Tooltip("(Advanced) Whether to apply the blur filter after at the end.")]
        public bool applyBlurFilter = true;

        [Tooltip("(Advanced) Color applied to the body contour after the filters.")]
        public Color bodyContourColor = Color.black;

        [Tooltip("UI-Text to display the BR-Manager debug messages.")]
        public UnityEngine.UI.Text debugText;


        // max number of bodies to track
        private const int MAX_BODY_COUNT = 10;

        // primary sensor data structure
        private KinectInterop.SensorData sensorData = null;
        private KinectManager kinectManager = null;

        // sensor interface
        private DepthSensorBase sensorInt = null;

        // render texture resolution
        private Vector2Int textureRes;

        // Bool to keep track whether Kinect and BR library have been initialized
        private bool bBackgroundRemovalInited = false;
        private int lastColorW = 0, lastColorH = 0;

        // The single instance of BackgroundRemovalManager
        //private static BackgroundRemovalManager instance;

        // last point cloud frame time
        private ulong lastDepth2SpaceFrameTime = 0;
        private ulong lastColorBodyIndexBufferTime = 0;

        // render textures used by the shaders
        private RenderTexture colorTexture = null;
        private RenderTexture vertexTexture = null;
        private RenderTexture alphaTexture = null;
        private RenderTexture foregroundTexture = null;

        // Materials used to apply the shaders
        private Material medianFilterMat = null;
        private Material erodeFilterMat = null;
        private Material dilateFilterMat = null;
        private Material gradientFilterMat = null;
        private Material blurFilterMat = null;
        private Material invertAlphaMat = null;
        private Material foregroundMat = null;

        // reference to filter-by-distance component
        private BackgroundRemovalByBodyBounds filterByBody = null;
        private BackgroundRemovalByDist filterByDist = null;
        private BackgroundRemovalByBodyIndex filterByBI = null;
        private BackgroundRemovalByGreenScreen filterByGS = null;

        // whether the textures are created or not
        private bool bColorTextureCreated = false;
        private bool bVertexTextureCreated = false;


        ///// <summary>
        ///// Gets the single BackgroundRemovalManager instance.
        ///// </summary>
        ///// <value>The BackgroundRemovalManager instance.</value>
        //public static BackgroundRemovalManager Instance
        //{
        //    get
        //    {
        //        return instance;
        //    }
        //}

        /// <summary>
        /// Determines whether the BackgroundRemovalManager was successfully initialized.
        /// </summary>
        /// <returns><c>true</c> if the BackgroundRemovalManager was successfully initialized; otherwise, <c>false</c>.</returns>
        public bool IsBackgroundRemovalInited()
        {
            return bBackgroundRemovalInited;
        }

        /// <summary>
        /// Gets the foreground image texture.
        /// </summary>
        /// <returns>The foreground image texture.</returns>
        public Texture GetForegroundTex()
        {
            return foregroundTexture;
        }

        /// <summary>
        /// Gets the alpha texture.
        /// </summary>
        /// <returns>The alpha texture.</returns>
        public Texture GetAlphaTex()
        {
            return alphaTexture;
        }

        /// <summary>
        /// Gets the color texture.
        /// </summary>
        /// <returns>The color texture.</returns>
        public Texture GetColorTex()
        {
            return colorTexture;
        }

        /// <summary>
        /// Gets the last background removal frame time.
        /// </summary>
        /// <returns>The last background removal time.</returns>
        public ulong GetLastBackgroundRemovalTime()
        {
            return lastDepth2SpaceFrameTime;
        }


        //----------------------------------- end of public functions --------------------------------------//


        //void Awake()
        //{
        //    instance = this;
        //}

        public void Start()
        {
            try
            {
                // get sensor data
                kinectManager = KinectManager.Instance;
                if (kinectManager && kinectManager.IsInitialized())
                {
                    sensorData = kinectManager.GetSensorData(sensorIndex);
                }

                if (sensorData == null || sensorData.sensorInterface == null)
                {
                    throw new Exception("Background removal cannot be started, because KinectManager is missing or not initialized.");
                }

                if(foregroundImage == null)
                {
                    // look for a foreground image
                    foregroundImage = GetComponent<UnityEngine.UI.RawImage>();
                }

                if (!foregroundCamera)
                {
                    // by default - the main camera
                    foregroundCamera = Camera.main;
                }

                // try to get reference to other filter components
                filterByBody = GetComponent<BackgroundRemovalByBodyBounds>();
                if(filterByBody == null)
                    filterByDist = GetComponent<BackgroundRemovalByDist>();
                if (filterByBody == null && filterByDist == null)
                    filterByBI = GetComponent<BackgroundRemovalByBodyIndex>();
                if (filterByBody == null && filterByDist == null && filterByBI == null)
                    filterByGS = GetComponent<BackgroundRemovalByGreenScreen>();

                if (filterByBody == null && filterByDist == null && filterByBI == null && filterByGS == null)
                    filterByBI = gameObject.AddComponent<BackgroundRemovalByBodyIndex>();  // fallback

                //// Initialize the background removal
                //bBackgroundRemovalInited = InitBackgroundRemoval(sensorData);

                //if (bBackgroundRemovalInited)
                //{
                //    if (debugText != null)
                //        debugText.text = string.Empty;
                //}
                //else
                //{
                //    throw new Exception("Background removal could not be initialized.");
                //}

                //bBackgroundRemovalInited = bSuccess;
            }
            catch (DllNotFoundException ex)
            {
                Debug.LogError(ex.ToString());
                if (debugText != null)
                    debugText.text = "Please check the SDK installations.";
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                if (debugText != null)
                    debugText.text = ex.Message;
            }
        }

        public void OnDestroy()
        {
            if (bBackgroundRemovalInited)
            {
                // finish background removal
                FinishBackgroundRemoval(sensorData);
            }

            bBackgroundRemovalInited = false;
            //instance = null;
        }

        void Update()
        {
            if (sensorData == null)
                return;

            if(!bBackgroundRemovalInited || lastColorW != sensorData.colorImageWidth || lastColorH != sensorData.colorImageHeight)
            {
                lastColorW = sensorData.colorImageWidth;
                lastColorH = sensorData.colorImageHeight;

                if (bBackgroundRemovalInited)
                {
                    FinishBackgroundRemoval(sensorData);
                    if(foregroundImage != null)
                        foregroundImage.texture = null;
                    //bBackgroundRemovalInited = false;

                    // dispose the used shaders & buffers, as well
                    if(sensorInt != null)
                        sensorInt.UpdateTransformedFrameTextures(sensorData, kinectManager);
                }

                bBackgroundRemovalInited = InitBackgroundRemoval(sensorData);

                if (bBackgroundRemovalInited)
                {
                    if (debugText != null)
                        debugText.text = string.Empty;
                }
            }

            if (bBackgroundRemovalInited)
            {
                // update the background removal
                UpdateBackgroundRemoval(sensorData);

                // check for valid foreground image texture
                if(foregroundImage != null && foregroundImage.texture == null)
                {
                    foregroundImage.texture = foregroundTexture;
                    foregroundImage.rectTransform.localScale = kinectManager.GetColorImageScale(sensorIndex);
                    foregroundImage.color = Color.white;
                }
            }
        }


        // initializes background removal with shaders
        private bool InitBackgroundRemoval(KinectInterop.SensorData sensorData)
        {
            if (sensorData != null && sensorData.sensorInterface != null && KinectInterop.IsDirectX11Available())
            {
                if(filterByBody != null)
                {
                    if (!filterByBody.InitBackgroundRemoval(sensorData, MAX_BODY_COUNT))
                    {
                        Debug.LogError("Could not init the background removal by body bounds!");
                        return false;
                    }
                }
                else if(filterByBI != null)
                {
                    if(!filterByBI.InitBackgroundRemoval(sensorData))
                    {
                        Debug.LogError("Could not init the background removal by body index!");
                        return false;
                    }
                }
                else if (filterByGS != null)
                {
                    if (!filterByGS.InitBackgroundRemoval(sensorData))
                    {
                        Debug.LogError("Could not init the background removal by green screen!");
                        return false;
                    }
                }

                sensorInt = (DepthSensorBase)sensorData.sensorInterface;

                // set the texture resolution
                if (sensorInt.pointCloudColorTexture == null && sensorInt.pointCloudVertexTexture == null)
                {
                    sensorInt.pointCloudResolution = foregroundImageResolution;
                }

                textureRes = sensorInt.GetPointCloudTexResolution(sensorData);

                if(sensorInt.pointCloudColorTexture == null)
                {
                    colorTexture = KinectInterop.CreateRenderTexture(colorTexture, textureRes.x, textureRes.y, RenderTextureFormat.ARGB32);
                    sensorInt.pointCloudColorTexture = colorTexture;
                    bColorTextureCreated = true;
                }
                else
                {
                    colorTexture = sensorInt.pointCloudColorTexture;
                    bColorTextureCreated = false;
                }

                if (filterByBody != null || filterByDist != null)
                {
                    if(sensorInt.pointCloudVertexTexture == null)
                    {
                        vertexTexture = KinectInterop.CreateRenderTexture(vertexTexture, textureRes.x, textureRes.y, RenderTextureFormat.ARGBHalf);
                        sensorInt.pointCloudVertexTexture = vertexTexture;
                        bVertexTextureCreated = true;
                    }
                    else
                    {
                        vertexTexture = sensorInt.pointCloudVertexTexture;
                        bVertexTextureCreated = false;
                    }
                }

                alphaTexture = KinectInterop.CreateRenderTexture(alphaTexture, textureRes.x, textureRes.y, RenderTextureFormat.ARGB32);
                foregroundTexture = KinectInterop.CreateRenderTexture(foregroundTexture, textureRes.x, textureRes.y, RenderTextureFormat.ARGB32);

                Shader erodeShader = Shader.Find("Kinect/ErodeShader");
                erodeFilterMat = new Material(erodeShader);
                erodeFilterMat.SetFloat("_TexResX", (float)textureRes.x);
                erodeFilterMat.SetFloat("_TexResY", (float)textureRes.y);
                //sensorData.erodeBodyMaterial.SetTexture("_MainTex", sensorData.bodyIndexTexture);

                Shader dilateShader = Shader.Find("Kinect/DilateShader");
                dilateFilterMat = new Material(dilateShader);
                dilateFilterMat.SetFloat("_TexResX", (float)textureRes.x);
                dilateFilterMat.SetFloat("_TexResY", (float)textureRes.y);
                //sensorData.dilateBodyMaterial.SetTexture("_MainTex", sensorData.bodyIndexTexture);

                Shader gradientShader = Shader.Find("Kinect/GradientShader");
                gradientFilterMat = new Material(gradientShader);

                Shader medianShader = Shader.Find("Kinect/MedianShader");
                medianFilterMat = new Material(medianShader);
                //sensorData.medianBodyMaterial.SetFloat("_Amount", 1.0f);

                Shader blurShader = Shader.Find("Kinect/BlurShader");
                blurFilterMat = new Material(blurShader);

                Shader invertShader = Shader.Find("Kinect/InvertShader");
                invertAlphaMat = new Material(invertShader);

                Shader foregroundShader = Shader.Find("Kinect/ForegroundShader");
                foregroundMat = new Material(foregroundShader);

                return true;
            }

            return false;
        }


        // releases background removal shader resources
        private void FinishBackgroundRemoval(KinectInterop.SensorData sensorData)
        {
            if(filterByBody != null)
            {
                filterByBody.FinishBackgroundRemoval(sensorData);
            }
            else if(filterByBI != null)
            {
                filterByBI.FinishBackgroundRemoval(sensorData);
            }

            if (sensorInt)
            {
                sensorInt.pointCloudColorTexture = null;
                sensorInt.pointCloudVertexTexture = null;
            }

            if (bColorTextureCreated && colorTexture)
            {
                colorTexture.Release();
                colorTexture = null;
            }

            if (bVertexTextureCreated && vertexTexture)
            {
                vertexTexture.Release();
                vertexTexture = null;
            }

            if (alphaTexture)
            {
                alphaTexture.Release();
                alphaTexture = null;
            }

            if(foregroundTexture)
            {
                foregroundTexture.Release();
                foregroundTexture = null;
            }

            erodeFilterMat = null;
            dilateFilterMat = null;
            medianFilterMat = null;
            blurFilterMat = null;
            invertAlphaMat = null;
            foregroundMat = null;
        }


        // computes current background removal texture
        private bool UpdateBackgroundRemoval(KinectInterop.SensorData sensorData)
        {
            if (bBackgroundRemovalInited && (lastDepth2SpaceFrameTime != sensorData.lastDepth2SpaceFrameTime ||
                lastColorBodyIndexBufferTime != sensorData.lastColorBodyIndexBufferTime || filterByGS != null))
            {
                lastDepth2SpaceFrameTime = sensorData.lastDepth2SpaceFrameTime;
                lastColorBodyIndexBufferTime = sensorData.lastColorBodyIndexBufferTime;
                //Debug.Log("BR Depth2SpaceFrameTime: " + lastDepth2SpaceFrameTime + " ColorBodyIndexBufferTime: " + lastColorBodyIndexBufferTime);

                RenderTexture[] tempTextures = new RenderTexture[2];
                tempTextures[0] = RenderTexture.GetTemporary(textureRes.x, textureRes.y, 0);
                tempTextures[1] = RenderTexture.GetTemporary(textureRes.x, textureRes.y, 0);

                RenderTexture[] tempGradTextures = null;
                if (applyGradientFilter)
                {
                    tempGradTextures = new RenderTexture[2];
                    tempGradTextures[0] = RenderTexture.GetTemporary(textureRes.x, textureRes.y, 0);
                    tempGradTextures[1] = RenderTexture.GetTemporary(textureRes.x, textureRes.y, 0);
                }

                // filter
                if(filterByBody != null && sensorInt != null)
                {
                    filterByBody.ApplyForegroundFilterByBody(vertexTexture, alphaTexture, playerIndex, sensorIndex, MAX_BODY_COUNT, 
                        sensorInt.GetSensorToWorldMatrix(), kinectManager, foregroundCamera);
                }
                else if(filterByDist != null && sensorInt != null)
                {
                    // filter by distance
                    filterByDist.ApplyVertexFilter(vertexTexture, alphaTexture, sensorInt.GetSensorToWorldMatrix());
                }
                else if(filterByBI != null)
                {
                    // filter by body index
                    filterByBI.ApplyForegroundFilterByBodyIndex(alphaTexture, sensorData, kinectManager, playerIndex, MAX_BODY_COUNT);
                }
                else if (filterByGS != null)
                {
                    // filter by green screen
                    filterByGS.ApplyForegroundFilterByGreenScreen(alphaTexture, sensorData, kinectManager, colorTexture);
                }

                //if(filterByBI == null)
                //{
                //    Graphics.Blit(vertexTexture, alphaTexture);
                //}

                // median
                if (applyMedianFilter)
                {
                    ApplySimpleFilter(alphaTexture, alphaTexture, medianFilterMat, tempTextures);
                }
                //else
                //{
                //    Graphics.Blit(vertexTexture, alphaTexture);
                //}

                // erode0
                ApplyIterableFilter(alphaTexture, alphaTexture, erodeFilterMat, erodeIterations0, tempTextures);
                if(applyGradientFilter)
                {
                    Graphics.CopyTexture(alphaTexture, tempGradTextures[0]);
                }

                // dilate
                ApplyIterableFilter(alphaTexture, alphaTexture, dilateFilterMat, dilateIterations, tempTextures);
                if (applyGradientFilter)
                {
                    //Graphics.Blit(alphaTexture, tempGradTextures[1]);
                    gradientFilterMat.SetTexture("_ErodeTex", tempGradTextures[0]);
                    ApplySimpleFilter(alphaTexture, tempGradTextures[1], gradientFilterMat, tempTextures);
                }

                // erode
                ApplyIterableFilter(alphaTexture, alphaTexture, erodeFilterMat, erodeIterations, tempTextures);
                if (tempGradTextures != null)
                {
                    Graphics.Blit(alphaTexture, tempGradTextures[0]);
                }

                // blur
                if(applyBlurFilter)
                {
                    ApplySimpleFilter(alphaTexture, alphaTexture, blurFilterMat, tempTextures);
                }

                if(invertAlphaMask)
                {
                    ApplySimpleFilter(alphaTexture, alphaTexture, invertAlphaMat, tempTextures);
                }

                if(!computeAlphaMaskOnly)
                {
                    foregroundMat.SetTexture("_ColorTex", colorTexture);
                    foregroundMat.SetTexture("_GradientTex", tempGradTextures[1]);

                    Color gradientColor = (erodeIterations0 != 0 || dilateIterations != 0 || erodeIterations != 0) ? bodyContourColor : Color.clear;
                    foregroundMat.SetColor("_GradientColor", gradientColor);

                    ApplySimpleFilter(alphaTexture, foregroundTexture, foregroundMat, tempTextures);
                }
                else
                {
                    Graphics.CopyTexture(alphaTexture, foregroundTexture);
                }

                // cleanup
                if (tempGradTextures != null)
                {
                    RenderTexture.ReleaseTemporary(tempGradTextures[0]);
                    RenderTexture.ReleaseTemporary(tempGradTextures[1]);
                }

                RenderTexture.ReleaseTemporary(tempTextures[0]);
                RenderTexture.ReleaseTemporary(tempTextures[1]);

                //sensorData.usedColorBodyIndexBufferTime = sensorData.lastColorBodyIndexBufferTime;
            }

            return true;
        }

        // applies iterable filter to the source texture
        private void ApplyIterableFilter(RenderTexture source, RenderTexture destination, Material filterMat, int numIterations, RenderTexture[] tempTextures)
        {
            if (!source || !destination || !filterMat || numIterations == 0)
                return;

            Graphics.Blit(source, tempTextures[0]);

            for (int i = 0; i < numIterations; i++)
            {
                Graphics.Blit(tempTextures[i % 2], tempTextures[(i + 1) % 2], filterMat);
            }

            if ((numIterations % 2) == 0)
            {
                Graphics.Blit(tempTextures[0], destination);
            }
            else
            {
                Graphics.Blit(tempTextures[1], destination);
            }
        }

        // applies simple filter to the source texture
        private void ApplySimpleFilter(RenderTexture source, RenderTexture destination, Material filterMat, RenderTexture[] tempTextures)
        {
            if (!source || !destination || !filterMat)
                return;

            Graphics.Blit(source, tempTextures[0], filterMat);
            Graphics.Blit(tempTextures[0], destination);
        }

    }
}

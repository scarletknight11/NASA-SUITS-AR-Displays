using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// UserMeshRendererGpu renders virtual mesh of a user in the scene, as detected by the given sensor. This component uses GPU for mesh processing rather than CPU. 
    /// </summary>
    public class UserMeshRendererGpu : MonoBehaviour
    {
        [Tooltip("Index of the player, tracked by this component. 0 - the 1st player only, 1 - the 2nd player only, etc.")]
        public int playerIndex = 0;

        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Resolution of the images used to generate the scene.")]
        private DepthSensorBase.PointCloudResolution sourceImageResolution = DepthSensorBase.PointCloudResolution.DepthCameraResolution;

        [Tooltip("Whether to show the mesh as point cloud, or as solid mesh.")]
        public bool showAsPointCloud = true;

        [Tooltip("Mesh coarse factor.")]
        [Range(1, 4)]
        public int coarseFactor = 1;

        [Tooltip("Edge cut-off factor.")]
        [Range(0f, 1f)]
        public float edgeCutoffFactor = 0.5f;

        [Tooltip("Whether the mesh texture is RGB or infrared.")]
        public MeshTextureType meshTexture = MeshTextureType.ColorTexture;
        public enum MeshTextureType : int { ColorTexture = 0, InfraredTexture = 1 }

        [Tooltip("Time interval between scene mesh updates, in seconds. 0 means no wait.")]
        private float updateMeshInterval = 0f;

        [Tooltip("Time interval between mesh-collider updates, in seconds. 0 means no mesh-collider updates.")]
        private float updateColliderInterval = 0f;

        [Tooltip("Whether to apply lighting to the mesh, or not.")]
        public bool applyLighting = false;


        // reference to object's mesh
        private Mesh mesh = null;
        private Transform trans = null;

        // references to KM and data
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;
        private DepthSensorBase sensorInt = null;
        //private Vector3 spaceScale = Vector3.zero;
        private Material meshShaderMat = null;

        // space table & buffers
        private Vector3[] spaceTable = null;
        private ComputeBuffer spaceTableBuffer = null;
        private Vector3 sensorSpaceScale = Vector3.zero;

        private ushort[] depthImageCopy = null;
        private ComputeBuffer depthImageBuffer = null;

        private byte[] bodyIndexCopy = null;
        private ComputeBuffer bodyIndexBuffer = null;

        // render textures 
        private RenderTexture colorTexture = null;
        private RenderTexture colorTextureCopy = null;
        private bool colorTextureCreated = false;
        //private bool depthBufferCreated = false;
        //private bool bodyIndexBufferCreated = false;

        // times
        private ulong lastDepthFrameTime = 0;
        private float lastMeshUpdateTime = 0f;
        private float lastColliderUpdateTime = 0f;

        // user parameters
        private ulong userId = 0;
        private int userBodyIndex = 255;
        private Vector3 userBodyPos = Vector3.zero;

        // image parameters
        private int imageWidth = 0;
        private int imageHeight = 0;

        // mesh parameters
        private bool bMeshInited = false;
        private int meshParamsCache = 0;

        // lighting
        private FragmentLighting lighting = new FragmentLighting();


        void Start()
        {
            // get sensor data
            kinectManager = KinectManager.Instance;
            sensorData = (kinectManager != null && kinectManager.IsInitialized()) ? kinectManager.GetSensorData(sensorIndex) : null;

            if (meshTexture == MeshTextureType.InfraredTexture && kinectManager && kinectManager.GetInfraredImageTex(sensorIndex) == null)
            {
                Debug.LogError("Please set the 'Get Infrared Frames'-setting of KinectManager to 'Infrared texture'.");
            }

            // find scene lights
            Light[] sceneLights = GameObject.FindObjectsOfType<Light>();
            lighting.SetLightsAndBounds(sceneLights, transform.position, new Vector3(20f, 20f, 20f));
        }


        void OnDestroy()
        {
            if (bMeshInited)
            {
                // release the mesh-related resources
                FinishMesh();
            }

            // release lighting resources
            lighting.ReleaseResources();
        }


        void Update()
        {
            if (mesh == null && sensorData != null && sensorData.depthCamIntr != null)
            {
                // init mesh and its related data
                InitMesh();
            }

            if (bMeshInited)
            {
                // user params
                userId = kinectManager.GetUserIdByIndex(playerIndex);
                userBodyIndex = userId != 0 ? kinectManager.GetBodyIndexByUserId(userId) : 255;
                userBodyPos = userId != 0 ? kinectManager.GetUserKinectPosition(userId, true) : Vector3.zero;

                // update the mesh
                UpdateMesh();
            }
        }


        // inits the mesh and related data
        private void InitMesh()
        {
            // create mesh
            mesh = new Mesh
            {
                name = "User" + playerIndex + "Mesh-S" + sensorIndex,
                indexFormat = UnityEngine.Rendering.IndexFormat.UInt32
            };

            MeshFilter meshFilter = GetComponent<MeshFilter>();
            if (meshFilter != null)
            {
                meshFilter.mesh = mesh;
            }
            else
            {
                Debug.LogWarning("MeshFilter not found! You may not see the mesh on screen");
            }

            // set the color texture
            Renderer meshRenderer = GetComponent<Renderer>();
            if (meshRenderer && meshRenderer.material /**&& meshRenderer.material.mainTexture == null*/)
            {
                Shader meshShader = Shader.Find("Kinect/UserMeshUShader");  // Kinect/UserMeshVShader
                if (meshShader != null)
                {
                    meshShaderMat = new Material(meshShader);
                    meshRenderer.material = meshShaderMat;
                }
            }

            // get reference to the transform
            trans = GetComponent<Transform>();

            // get sensor interface
            sensorInt = sensorData != null ? (DepthSensorBase)sensorData.sensorInterface : null;

            // create point cloud color texture
            if (sensorData != null && sensorInt != null && meshShaderMat != null)
            {
                Vector2Int imageRes = Vector2Int.zero;
                if (sensorInt.pointCloudColorTexture == null)
                {
                    sensorInt.pointCloudResolution = sourceImageResolution;
                    imageRes = sensorInt.GetPointCloudTexResolution(sensorData);

                    //colorTexture = KinectInterop.CreateRenderTexture(colorTexture, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
                    //sensorInt.pointCloudColorTexture = colorTexture;
                    colorTextureCreated = true;
                }
                else
                {
                    sourceImageResolution = sensorInt.pointCloudResolution;
                    imageRes = sensorInt.GetPointCloudTexResolution(sensorData);
                    colorTexture = sensorInt.pointCloudColorTexture;
                    colorTextureCreated = false;
                }

                // get space scale
                sensorSpaceScale = kinectManager.GetSensorSpaceScale(sensorIndex);  // kinectManager.GetDepthImageScale(sensorIndex)

                // update textures and buffers
                UpdateTexturesAndBuffers();

                bMeshInited = true;
            }
        }


        // updates the textures and buffers, needed by the mesh renderer
        private void UpdateTexturesAndBuffers()
        {
            if (sensorData == null || sensorInt == null)
                return;

            // get image resolution
            Vector2Int imageRes = sensorInt.GetPointCloudTexResolution(sensorData);

            if (colorTextureCreated && (colorTexture == null ||
                colorTexture.width != imageRes.x || colorTexture.height != imageRes.y))
            {
                colorTexture = KinectInterop.CreateRenderTexture(colorTexture, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
                sensorInt.pointCloudColorTexture = colorTexture;
                //Debug.Log("Created pointCloudColorTexture with resolution " + imageRes);
            }

            // create depth image buffer
            if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
            {
                int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight >> 1;

                if (depthImageBuffer == null || depthImageBuffer.count != depthBufferLength)
                {
                    depthImageCopy = new ushort[depthBufferLength << 1];
                    depthImageBuffer = KinectInterop.CreateComputeBuffer(depthImageBuffer, depthBufferLength, sizeof(uint));
                    //Debug.Log("Created depthImageBuffer with length " + depthBufferLength);
                }

                //meshShaderMat.SetBuffer("_DepthMap", depthImageBuffer);
            }
            else
            {
                int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 1;

                if (sensorData.colorDepthBuffer == null || sensorData.colorDepthBuffer.count != bufferLength)
                {
                    sensorData.colorDepthBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorDepthBuffer, bufferLength, sizeof(uint));
                    //Debug.Log("Created colorDepthBuffer with length " + bufferLength);
                }

                //meshShaderMat.SetBuffer("_DepthMap", sensorData.colorDepthBuffer);

                if (meshTexture == MeshTextureType.InfraredTexture)
                {
                    if (sensorData.colorInfraredBuffer == null || sensorData.colorInfraredBuffer.count != bufferLength)
                    {
                        sensorData.colorInfraredBuffer = KinectInterop.CreateComputeBuffer(sensorData.colorInfraredBuffer, bufferLength, sizeof(uint));
                        //Debug.Log("Created colorInfraredBuffer with length " + bufferLength);
                    }
                }
            }

            // create body index buffer
            if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
            {
                int bodyIndexBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight >> 2;

                if (bodyIndexBuffer == null || bodyIndexBuffer.count != bodyIndexBufferLength)
                {
                    bodyIndexCopy = new byte[bodyIndexBufferLength << 2];
                    bodyIndexBuffer = KinectInterop.CreateComputeBuffer(bodyIndexBuffer, bodyIndexBufferLength, sizeof(uint));
                    //Debug.Log("Created bodyIndexBuffer with length " + bodyIndexBufferLength);
                }

                //meshShaderMat.SetBuffer("_BodyIndexMap", bodyIndexBuffer);
            }
            else
            {
                int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 2;

                if (sensorData.colorBodyIndexBuffer == null || sensorData.colorBodyIndexBuffer.count != bufferLength)
                {
                    sensorData.colorBodyIndexBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
                    //Debug.Log("Created colorBodyIndexBuffer with length " + bufferLength);
                }

                //meshShaderMat.SetBuffer("_BodyIndexMap", sensorData.colorBodyIndexBuffer);
            }

            if (colorTextureCopy == null || colorTextureCopy.width != imageRes.x || colorTextureCopy.height != imageRes.y)
            {
                // create copy texture
                colorTextureCopy = KinectInterop.CreateRenderTexture(colorTextureCopy, imageRes.x, imageRes.y, RenderTextureFormat.ARGB32);
                //Debug.Log("Created colorTextureCopy with resolution " + imageRes);
            }

            if (spaceTableBuffer == null || imageWidth != imageRes.x || imageHeight != imageRes.y)
            {
                // create space table
                spaceTable = sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution ?
                    sensorInt.GetDepthCameraSpaceTable(sensorData) : sensorInt.GetColorCameraSpaceTable(sensorData);

                int spaceBufferLength = imageRes.x * imageRes.y * 3;
                spaceTableBuffer = KinectInterop.CreateComputeBuffer(spaceTableBuffer, spaceBufferLength, sizeof(float));
                spaceTableBuffer.SetData(spaceTable);
                spaceTable = null;

                //Debug.Log("Created spaceTable for resolution " + imageRes);
            }

            // create mesh vertices & indices
            if (imageWidth != imageRes.x || imageHeight != imageRes.y)
            {
                CreateMeshVertInd(imageRes.x, imageRes.y);
            }

            // image width & height
            imageWidth = imageRes.x;
            imageHeight = imageRes.y;
        }


        // creates the mesh vertices and indices
        private void CreateMeshVertInd(int imageWidth, int imageHeight)
        {
            int xVerts = (imageWidth / coarseFactor); // + 1;
            int yVerts = (imageHeight / coarseFactor); // + 1;
            int vCount = xVerts * yVerts;
            //Debug.Log("xVerts: " + xVerts + ", yVerts: " + yVerts + ", vCount: " + vCount);

            // mesh vertices
            mesh.Clear();
            mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;

            Vector3[] meshVertices = new Vector3[vCount];
            Vector3[] meshNormals = new Vector3[vCount];
            Vector2[] meshUv = new Vector2[vCount];

            float vsx = (float)coarseFactor / (float)imageWidth;
            float vsy = (float)coarseFactor / (float)imageHeight;

            for (int y = 0, vi = 0; y < yVerts; y++)
            {
                for (int x = 0; x < xVerts; x++, vi++)
                {
                    meshVertices[vi] = new Vector3(x * vsx, y * vsy, 0f);
                    meshNormals[vi] = new Vector3(0f, 1f, 0f);  // 0f, 0f, -1f
                    meshUv[vi] = new Vector2(x * vsx, y * vsy);
                }
            }

            mesh.vertices = meshVertices;
            mesh.normals = meshNormals;
            mesh.uv = meshUv;

            // mesh indices
            if (showAsPointCloud)
            {
                int[] meshIndices = new int[vCount];
                for (int i = 0; i < vCount; i++)
                    meshIndices[i] = i;

                mesh.SetIndices(meshIndices, MeshTopology.Points, 0);
            }
            else
            {
                int[] meshIndices = new int[(xVerts - 1) * (yVerts - 1) * 6];
                for (int y = 0, ii = 0; y < (yVerts - 1); y++)
                {
                    for (int x = 0; x < (xVerts - 1); x++)
                    {
                        meshIndices[ii++] = (y + 1) * xVerts + x;
                        meshIndices[ii++] = y * xVerts + x + 1;
                        meshIndices[ii++] = y * xVerts + x;

                        meshIndices[ii++] = (y + 1) * xVerts + x + 1;
                        meshIndices[ii++] = y * xVerts + x + 1;
                        meshIndices[ii++] = (y + 1) * xVerts + x;
                    }
                }

                mesh.SetIndices(meshIndices, MeshTopology.Triangles, 0);
            }

            meshParamsCache = coarseFactor + (showAsPointCloud ? 10 : 0);
        }


        // releases mesh-related resources
        private void FinishMesh()
        {
            if (sensorInt)
            {
                sensorInt.pointCloudColorTexture = null;
            }

            if(depthImageBuffer != null /**&& depthBufferCreated*/)
            {
                depthImageCopy = null;

                depthImageBuffer.Release();
                depthImageBuffer.Dispose();
                depthImageBuffer = null;
            }

            if (sensorData.colorDepthBuffer != null /**&& depthBufferCreated*/)
            {
                sensorData.colorDepthBuffer.Release();
                sensorData.colorDepthBuffer.Dispose();
                sensorData.colorDepthBuffer = null;
            }

            if (sensorData.colorInfraredBuffer != null)
            {
                sensorData.colorInfraredBuffer.Release();
                sensorData.colorInfraredBuffer.Dispose();
                sensorData.colorInfraredBuffer = null;
            }

            if (bodyIndexBuffer != null /**&& bodyIndexBufferCreated*/)
            {
                bodyIndexCopy = null;

                bodyIndexBuffer.Release();
                bodyIndexBuffer.Dispose();
                bodyIndexBuffer = null;
            }

            if (sensorData.colorBodyIndexBuffer != null /**&& bodyIndexBufferCreated*/)
            {
                sensorData.colorBodyIndexBuffer.Release();
                sensorData.colorBodyIndexBuffer.Dispose();
                sensorData.colorBodyIndexBuffer = null;
            }

            if (colorTexture && colorTextureCreated)
            {
                colorTexture.Release();
                colorTexture = null;
            }

            if (colorTextureCopy)
            {
                colorTextureCopy.Release();
                colorTextureCopy = null;
            }

            if (spaceTableBuffer != null)
            {
                spaceTableBuffer.Dispose();
                spaceTableBuffer = null;
            }

            bMeshInited = false;
        }


        // updates the mesh according to current depth frame
        private void UpdateMesh()
        {
            if (bMeshInited && colorTexture != null && sensorData.depthImage != null && sensorData.depthCamIntr != null && meshShaderMat != null &&
                lastDepthFrameTime != sensorData.lastDepthFrameTime && (Time.time - lastMeshUpdateTime) >= updateMeshInterval)
            {
                lastDepthFrameTime = sensorData.lastDepthFrameTime;
                lastMeshUpdateTime = Time.time;

                // update textures and buffers
                UpdateTexturesAndBuffers();

                int paramsCache = coarseFactor + (showAsPointCloud ? 10 : 0);
                if(meshParamsCache != paramsCache)
                {
                    //Debug.Log("Mesh params changed. Recreating...");
                    CreateMeshVertInd(imageWidth, imageHeight);
                }

                if (depthImageBuffer != null && sensorData.depthImage != null /**&& depthBufferCreated*/)
                {
                    KinectInterop.CopyBytes(sensorData.depthImage, sizeof(ushort), depthImageCopy, sizeof(ushort));

                    int depthBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 2;
                    KinectInterop.SetComputeBufferData(depthImageBuffer, depthImageCopy, depthBufferLength, sizeof(uint));
                }

                if (bodyIndexBuffer != null && sensorData.bodyIndexImage != null /**&& bodyIndexBufferCreated*/)
                {
                    KinectInterop.CopyBytes(sensorData.bodyIndexImage, sizeof(byte), bodyIndexCopy, sizeof(byte));

                    int bodyIndexBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight / 4;
                    KinectInterop.SetComputeBufferData(bodyIndexBuffer, bodyIndexCopy, bodyIndexBufferLength, sizeof(uint));
                }

                switch (meshTexture)
                {
                    case MeshTextureType.ColorTexture:
                        if (colorTexture != null)
                            Graphics.CopyTexture(colorTexture, colorTextureCopy);
                        break;

                    case MeshTextureType.InfraredTexture:
                        Texture infraredTexture = sensorInt.pointCloudResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution ?
                            sensorData.infraredImageTexture : sensorData.colorInfraredTexture;
                        if (infraredTexture != null)
                            Graphics.CopyTexture(infraredTexture, colorTextureCopy);
                        break;
                }

                if (sourceImageResolution == DepthSensorBase.PointCloudResolution.DepthCameraResolution)
                {
                    meshShaderMat.SetBuffer("_DepthMap", depthImageBuffer);
                    meshShaderMat.SetBuffer("_BodyIndexMap", bodyIndexBuffer);
                }
                else
                {
                    meshShaderMat.SetBuffer("_DepthMap", sensorData.colorDepthBuffer);
                    meshShaderMat.SetBuffer("_BodyIndexMap", sensorData.colorBodyIndexBuffer);
                }

                meshShaderMat.SetTexture("_ColorTex", colorTextureCopy);
                meshShaderMat.SetVector("_SpaceScale", sensorSpaceScale);
                meshShaderMat.SetBuffer("_SpaceTable", spaceTableBuffer);

                meshShaderMat.SetVector("_TexRes", new Vector2(imageWidth, imageHeight));
                //meshShaderMat.SetVector("_Cxy", new Vector2(sensorData.depthCamIntr.ppx, sensorData.depthCamIntr.ppy));
                //meshShaderMat.SetVector("_Fxy", new Vector2(sensorData.depthCamIntr.fx, sensorData.depthCamIntr.fy));

                meshShaderMat.SetInt("_CoarseFactor", coarseFactor);
                meshShaderMat.SetInt("_IsPointCloud", showAsPointCloud ? 1 : 0);
                meshShaderMat.SetFloat("_CutoffFactor", Mathf.Pow(edgeCutoffFactor, 6));

                meshShaderMat.SetInt("_BodyIndexAll", playerIndex < 0 ? 1 : 0);
                meshShaderMat.SetInt("_UserBodyIndex", userBodyIndex);
                meshShaderMat.SetVector("_UserBodyPos", userBodyPos);
                meshShaderMat.SetMatrix("_Transform", sensorInt.GetSensorToWorldMatrix());

                // mesh bounds
                if (kinectManager.GetUserBoundingBox(userId, null, sensorIndex, Rect.zero, out Vector3 posMin, out Vector3 posMax))
                {
                    Vector3 boundsCenter = new Vector3((posMax.x - posMin.x) / 2f, (posMax.y - posMin.y) / 2f, (posMax.z - posMin.z) / 2f);
                    Vector3 boundsSize = new Vector3((posMax.x - posMin.x), (posMax.y - posMin.y), (posMax.z - posMin.z));
                    mesh.bounds = new Bounds(boundsCenter, boundsSize);
                }

                // update lighting parameters
                lighting.UpdateLighting(meshShaderMat, applyLighting);

                if (updateColliderInterval > 0 && (Time.time - lastColliderUpdateTime) >= updateColliderInterval)
                {
                    lastColliderUpdateTime = Time.time;
                    MeshCollider meshCollider = GetComponent<MeshCollider>();

                    if (meshCollider)
                    {
                        meshCollider.sharedMesh = null;
                        meshCollider.sharedMesh = mesh;
                    }
                }

            }
        }

    }
}

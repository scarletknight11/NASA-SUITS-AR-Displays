using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// BackgroundRemovalByBodyIndex filters user silhouettes, according to the body index frames coming from the body tracking SDK.
    /// </summary>
    public class BackgroundRemovalByBodyIndex : MonoBehaviour
    {
        // whether the color-bi-buffer is created or not
        private bool bColorBiBufferCreated = false; 

        // foreground filter shader
        private ComputeShader foregroundFilterShader = null;
        private int foregroundFilterKernel = -1;

        // current body indices
        private int[] userBodyIndex = null;


        // initializes background removal with shaders
        public bool InitBackgroundRemoval(KinectInterop.SensorData sensorData)
        {
            if (sensorData != null && sensorData.colorImageWidth > 0 && sensorData.colorImageHeight > 0)
            {
                if(sensorData.colorBodyIndexBuffer == null)
                {
                    int bufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight / 4;
                    sensorData.colorBodyIndexBuffer = new ComputeBuffer(bufferLength, sizeof(uint));
                    bColorBiBufferCreated = true;
                }

                foregroundFilterShader = Resources.Load("ForegroundFiltBodyIndexShader") as ComputeShader;
                foregroundFilterKernel = foregroundFilterShader != null ? foregroundFilterShader.FindKernel("FgFiltBodyIndex") : -1;

                return true;
            }

            return false;
        }


        // releases background removal shader resources
        public void FinishBackgroundRemoval(KinectInterop.SensorData sensorData)
        {
            if (bColorBiBufferCreated && sensorData.colorBodyIndexBuffer != null)
            {
                sensorData.colorBodyIndexBuffer.Dispose();
                sensorData.colorBodyIndexBuffer = null;
            }
        }


        /// <summary>
        /// Applies foreground filter by body index.
        /// </summary>
        public void ApplyForegroundFilterByBodyIndex(RenderTexture alphaTexture, KinectInterop.SensorData sensorData, 
            KinectManager kinectManager, int playerIndex, int maxBodyCount)
        {
            if (kinectManager != null && kinectManager.userManager != null && sensorData.colorBodyIndexBuffer != null)
            {
                List<ulong> alUserIds = null;

                if (playerIndex < 0)
                {
                    alUserIds = kinectManager.userManager.alUserIds;  // new List<ulong>();  // 
                }
                else
                {
                    alUserIds = new List<ulong>();

                    ulong userId = kinectManager.GetUserIdByIndex(playerIndex);
                    if (userId != 0)
                        alUserIds.Add(userId);
                }

                maxBodyCount = 5;  // limit to 5 body indices in the shader, because SetInts() doesn't work correctly
                if (userBodyIndex == null)
                {
                    userBodyIndex = new int[maxBodyCount];
                }

                int uCount = Mathf.Min(alUserIds.Count, maxBodyCount);
                for (int i = 0; i < uCount; i++)
                {
                    ulong userId = alUserIds[i];
                    userBodyIndex[i] = kinectManager.GetBodyIndexByUserId(userId);
                }

                foregroundFilterShader.SetInt("_TexResX", alphaTexture.width);
                foregroundFilterShader.SetInt("_TexResY", alphaTexture.height);

                //foregroundFilterShader.SetInt("_NumBodies", uCount);
                //foregroundFilterShader.SetInts("_BodyIndices", userBodyIndex);  // ComputeShader.SetInts() doesn't work correctly

                foregroundFilterShader.SetInt("_BodyIndexAll", playerIndex < 0 ? 1 : 0);

                foregroundFilterShader.SetInt("_BodyIndex0", uCount > 0 ? userBodyIndex[0] : -1);
                foregroundFilterShader.SetInt("_BodyIndex1", uCount > 1 ? userBodyIndex[1] : -1);
                foregroundFilterShader.SetInt("_BodyIndex2", uCount > 2 ? userBodyIndex[2] : -1);
                foregroundFilterShader.SetInt("_BodyIndex3", uCount > 3 ? userBodyIndex[3] : -1);
                foregroundFilterShader.SetInt("_BodyIndex4", uCount > 4 ? userBodyIndex[4] : -1);

                foregroundFilterShader.SetBuffer(foregroundFilterKernel, "_BodyIndexMap", sensorData.colorBodyIndexBuffer);
                foregroundFilterShader.SetTexture(foregroundFilterKernel, "_AlphaTex", alphaTexture);

                foregroundFilterShader.Dispatch(foregroundFilterKernel, alphaTexture.width / 8, alphaTexture.height / 8, 1);
            }
        }

    }
}

#if URP_AVAILABLE
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using System.Runtime.InteropServices;
using System;
using Microsoft.Azure.RemoteRendering;
using Microsoft.Azure.RemoteRendering.Unity;

public class HybridRenderingPassFeature : ScriptableRendererFeature
{
    internal class HolographicRemotingCallbackPass : ScriptableRenderPass
    {
#if URP_AVAILABLE
        // Workaround for Unity URP using special temporary textures for rendering
        public Nullable<RenderTargetIdentifier> _urpTemporaryColorBuffer = null;
#endif

        // Workaround for MSFT:24019581
#if ENABLE_IL2CPP
        [DllImport("Microsoft.Holographic.HybridRemoting.dll", CallingConvention = CallingConvention.Cdecl)]
#else
        [DllImport("Microsoft.Holographic.HybridRemoting", CallingConvention = CallingConvention.Cdecl)]
#endif
        private static extern IntPtr GetUnityRenderingEventCallback();

        public HolographicRemotingCallbackPass(RenderPassEvent renderPassEvent, int eventID)
        {
            this.renderPassEvent = renderPassEvent;
            this._eventID = eventID;
            try
            {
                _renderRemoteFrameCallback = GetUnityRenderingEventCallback();

                for (int i = 0; i < 3; ++i)
                {
                    _userDataWrapper[i] = Marshal.AllocHGlobal(Marshal.SizeOf(_userData[i]));
                }
                
            }
            catch (Exception ex)
            {
                Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "{0}", $"Failed to get HolographicHybridRemoting entry point. {ex.Message}");
            }
        }

        ~HolographicRemotingCallbackPass()
        {
            for (int i = 0; i < 3; ++i)
            {
                if (_userDataWrapper[i] != IntPtr.Zero)
                {
                    Marshal.FreeHGlobal(_userDataWrapper[i]);
                }
            }
        }

        public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
        {
            if (!_renderRemoteFrameCallback.Equals(IntPtr.Zero))
            {
                _userData[_userDataBufferIndex].near = renderingData.cameraData.camera.farClipPlane;
                _userData[_userDataBufferIndex].far = renderingData.cameraData.camera.nearClipPlane;

                Marshal.StructureToPtr(_userData[_userDataBufferIndex], _userDataWrapper[_userDataBufferIndex], false);

                var cmd = CommandBufferPool.Get("HolographicRemotingCallbackPass");
#if URP_AVAILABLE
                // On desktop, the URP replaces the proxy render target with its own temporary target and blits
                // the color buffer into the proxy render target in a final blitting pass after the camera completed
                // rendering, which essentially means the depth values never arrive at the proxy render texture's
                // depth buffer. We circumvent this peculiar behavior here by forcing the depth stencil target.
                if (_urpTemporaryColorBuffer.HasValue && RemoteManagerUnity.ProxyCamera.targetTexture != null)
                {
                    cmd.SetRenderTarget(_urpTemporaryColorBuffer.Value, new RenderTargetIdentifier(RemoteManagerUnity.ProxyCamera.targetTexture.depthBuffer));
                }
#endif
                if (RemoteManagerUnity.IsConnected)
                {
                    cmd.IssuePluginEventAndData(_renderRemoteFrameCallback, _eventID, _userDataWrapper[_userDataBufferIndex]);
                }
                context.ExecuteCommandBuffer(cmd);
                CommandBufferPool.Release(cmd);

                // Switch user data buffer index so that we use a different one for the next frame.
                _userDataBufferIndex = (_userDataBufferIndex++) % 3;
            }
        }

        [StructLayout(LayoutKind.Sequential)]
        private struct UserDataStream
        {
            public float near;
            public float far;
        };

        private IntPtr _renderRemoteFrameCallback = IntPtr.Zero;
        private int _eventID = -1;

        private int _userDataBufferIndex = 0;
        private UserDataStream[] _userData = new UserDataStream[3];
        private IntPtr[] _userDataWrapper = new IntPtr[3];
    }

    public override void AddRenderPasses(ScriptableRenderer renderer, ref RenderingData renderingData)
    {
        if (!RemoteManagerUnity.IsInitialized)
        {
            return;
        }

        bool isUsingSimulation = RemoteManagerUnity.IsUsingSimulation;

        if (isUsingSimulation)
        {
            if (renderingData.cameraData.camera == RemoteManagerUnity.ProxyCamera)
            {
#if URP_AVAILABLE
                if (GraphicsSettings.renderPipelineAsset is UniversalRenderPipelineAsset urp && isUsingSimulation)
                {
                    _beforeOpaquePass._urpTemporaryColorBuffer = renderer.cameraColorTarget;
                }
#endif
                // Blit remote frame to proxy camera.
                renderer.EnqueuePass(_beforeOpaquePass);

            }
            if (renderingData.cameraData.camera == Camera.main)
            {
                // Re-project proxy texture to main camera.
                renderer.EnqueuePass(_afterOpaquePass);
            }
        }
        else
        {
            if (renderingData.cameraData.camera == Camera.main)
            {
                // Blit remote frame to main camera.
                renderer.EnqueuePass(_beforeOpaquePass);
            }
        }
    }

    public override void Create()
    {
        _beforeOpaquePass = new HolographicRemotingCallbackPass(RenderPassEvent.BeforeRenderingOpaques, 1);
        _afterOpaquePass = new HolographicRemotingCallbackPass(RenderPassEvent.AfterRenderingOpaques, 2);
    }

    private HolographicRemotingCallbackPass _beforeOpaquePass;
    private HolographicRemotingCallbackPass _afterOpaquePass;
}
#endif

// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
#if UNITY_2019_4_OR_NEWER && !ARFOUNDATION_OPT_OUT
#define USING_ARFOUNDATION
#endif

#if WINDOWS_UWP || DOTNETWINRT_PRESENT
#define SPATIALCOORDINATESYSTEM_API_PRESENT
#endif

#if UNITY_WSA
using System;
using System.Runtime.InteropServices;
using UnityEngine;
#if USING_ARFOUNDATION
using UnityEngine.XR.ARFoundation;
#endif 

#if WINDOWS_UWP
using global::Windows.Perception.Spatial;
#elif DOTNETWINRT_PRESENT
using Microsoft.Windows.Perception.Spatial;
#endif

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    public class ObjectAnchorsWorldManager
    {
        private static readonly object s_syncObj = new object();
        private static ObjectAnchorsWorldManager s_instance;
        
#if SPATIALCOORDINATESYSTEM_API_PRESENT
        private SpatialCoordinateSystem _coordinateSystem;
        public static SpatialCoordinateSystem WorldOrigin
        {
            get
            {
                lock (s_syncObj)
                {
                    if (s_instance == null)
                    {
                        s_instance = new ObjectAnchorsWorldManager();
                    }

                    if (s_instance._coordinateSystem == null)
                    {
                        s_instance._coordinateSystem = TryGetWorldOriginCoordinateSystem();
                    }

                    return s_instance._coordinateSystem;
                }
            }
        }
#endif

        private ObjectAnchorsWorldManager()
        {
            UnityEngine.WSA.Application.windowActivated += this.Application_windowActivated;
#if USING_ARFOUNDATION
            ARSession.stateChanged += this.ARSession_stateChanged;
#else
            UnityEngine.XR.WSA.WorldManager.OnPositionalLocatorStateChanged += this.WorldManager_OnPositionalLocatorStateChanged;
#endif
        }

        ~ObjectAnchorsWorldManager()
        {
            UnityEngine.WSA.Application.windowActivated -= this.Application_windowActivated;
#if USING_ARFOUNDATION
            ARSession.stateChanged -= this.ARSession_stateChanged;
#else
            UnityEngine.XR.WSA.WorldManager.OnPositionalLocatorStateChanged -= this.WorldManager_OnPositionalLocatorStateChanged;
#endif
        }

        // There is no guaruntee that the Untiy Origin will stay the same across focus changes
        private void Application_windowActivated(UnityEngine.WSA.WindowActivationState state)
        {
#if SPATIALCOORDINATESYSTEM_API_PRESENT
            lock (s_syncObj)
            {
                if (s_instance != null)
                {
                    s_instance._coordinateSystem = null;
                }
            }
#endif
        }

#if USING_ARFOUNDATION
        private void ARSession_stateChanged(ARSessionStateChangedEventArgs obj)
        {
            Debug.Log($"ar state changed to {obj.state}");

#if SPATIALCOORDINATESYSTEM_API_PRESENT
            SpatialCoordinateSystem coordinateSystem = null;

            if (obj.state == ARSessionState.SessionTracking)
            {
                coordinateSystem = TryGetWorldOriginCoordinateSystem();
            }

            lock (s_syncObj)
            {
                this._coordinateSystem = coordinateSystem;
            }
#endif
        }
#else
            private void WorldManager_OnPositionalLocatorStateChanged(UnityEngine.XR.WSA.PositionalLocatorState oldState, UnityEngine.XR.WSA.PositionalLocatorState newState)
        {
            Debug.Log($"locator changed from {oldState} to {newState}");

#if SPATIALCOORDINATESYSTEM_API_PRESENT
            SpatialCoordinateSystem coordinateSystem = null;

            if (newState == UnityEngine.XR.WSA.PositionalLocatorState.Active)
            {
                coordinateSystem = TryGetWorldOriginCoordinateSystem();
            }

            lock (s_syncObj)
            {
                this._coordinateSystem = coordinateSystem;
            }
#endif
        }
#endif

#if SPATIALCOORDINATESYSTEM_API_PRESENT
        private static SpatialCoordinateSystem TryGetWorldOriginCoordinateSystem()
        {
            IntPtr originPointer = IntPtr.Zero;
            bool releaseOriginPointer = true;

#if MIXED_REALITY_OPENXR
            // GetIUnknownForObject returns a pointer which has been AddRef-ed, and must be Release-ed.
            originPointer = System.Runtime.InteropServices.Marshal.GetIUnknownForObject(Microsoft.MixedReality.OpenXR.PerceptionInterop.GetSceneCoordinateSystem(Pose.identity));
#elif USING_ARFOUNDATION
            // OriginSpatialCoordinatSystem returns a pointer which has not been AddRef-ed, so skip releasing below.
            originPointer = UnityEngine.XR.WindowsMR.WindowsMREnvironment.OriginSpatialCoordinateSystem;
            releaseOriginPointer = false;
#else
            // GetNativeISpatialCoordinateSystemPtr returns a pointer which has been AddRef-ed, and must be Release-ed.
            originPointer = UnityEngine.XR.WSA.WorldManager.GetNativeISpatialCoordinateSystemPtr();
#endif

            if (originPointer == IntPtr.Zero)
            {
                return null;
            }

            try
            {
#if WINDOWS_UWP
                return (SpatialCoordinateSystem)System.Runtime.InteropServices.Marshal.GetObjectForIUnknown(originPointer);
#elif DOTNETWINRT_PRESENT
                return SpatialCoordinateSystem.FromNativePtr(originPointer);
#endif
            }
            finally
            {
                if (releaseOriginPointer)
                {
                    Marshal.Release(originPointer);
                }
            }
        }
#endif
    }
}
#endif //UNITY_WSA

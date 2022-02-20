﻿using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System;
using System.Text;
using arr = Microsoft.Azure.RemoteRendering;
using ManagerId = System.UInt16;

namespace Microsoft.Azure.RemoteRendering
{
    static public partial class NativeLibraryExtensions
    {
        [DllImport("RemoteRenderingClient", CallingConvention = CallingConvention.Cdecl)]
        public static extern arr.Result RemoteRendering_Startup([MarshalAs(UnmanagedType.Struct), In] ref arr.RemoteRenderingInitialization init);
        [DllImport("RemoteRenderingClient", CallingConvention = CallingConvention.Cdecl)]
        public static extern arr.Result RemoteRendering_Shutdown();

        [DllImport("RemoteRenderingClient", CallingConvention = CallingConvention.Cdecl)]
        public static extern void RemoteManager_Update(ManagerId managerId);

        [DllImport("RemoteRenderingClient", CallingConvention = CallingConvention.Cdecl)]
        public static extern arr.Result RemoteRendering_SetConnectionGameEngine(Int64 engineIdentifier);

        [DllImport("RemoteRenderingClient", CallingConvention = CallingConvention.Cdecl)]
        public static extern arr.Result RemoteRendering_fov_from_projection_matrix([MarshalAs(UnmanagedType.Struct)] ref arr.Matrix4x4 projection, [MarshalAs(UnmanagedType.Struct)] out arr.CameraFov fov);
        [DllImport("RemoteRenderingClient", CallingConvention = CallingConvention.Cdecl)]
        public static extern arr.Result RemoteRendering_fov_to_projection_matrix([MarshalAs(UnmanagedType.Struct)] ref arr.CameraFov fov, float nearPlane, float farPlane, arr.DepthConvention depthConvention, [MarshalAs(UnmanagedType.Struct)] out arr.Matrix4x4 projection);
    }
}

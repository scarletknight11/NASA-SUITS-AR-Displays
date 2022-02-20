﻿using System;
namespace Microsoft.Azure.RemoteRendering
{
    public partial class RemoteManagerStatic
    {

        public delegate void ExceptionLoggedDelegate(Exception ex);

        /// <summary>
        /// Event emitted when an exception is logged.
        /// </summary>
        static public event ExceptionLoggedDelegate ExceptionLogged;

        public delegate void ShutdownDelegate();

        /// <summary>
        /// Event emitting during RenderingConnection.ShutdownManager
        /// </summary>
        static public event ShutdownDelegate OnShutdown;

        /// <summary>
        ///  Query if the manager has been initialized
        /// </summary>
        public static bool IsInitialized { get; private set; } = false;

        #region Runtime

        /// <summary>
        /// Create the singleton instance. Calling this function multiple times will clear any current data/connection from the system.
        /// </summary>
        public static void StartupRemoteRendering(RemoteRenderingInitialization managerInit)
        {
            if (IsInitialized)
            {
                throw new Exception("Remote Rendering Manager already created. Call RenderingConnection.ShutdownManager first.");
            }

            var r = NativeLibraryExtensions.RemoteRendering_Startup(ref managerInit);

            if (r != Result.Success)
            {
                throw new RRException(r, "Could not initialize remote rendering.");
            }

            IsInitialized = true;
        }

        /// <summary>
        /// Destroy the singleton instance.
        /// </summary>
        public static void ShutdownRemoteRendering()
        {
            if (!IsInitialized)
            {
                return;
            }

            OnShutdown?.Invoke();

            // Destroy all memory associated with the system backend
            NativeLibraryExtensions.RemoteRendering_Shutdown();
            IsInitialized = false;
        }

        #endregion


        static public void OnExceptionLogged(Exception ex)
        {
            ExceptionLogged?.Invoke(ex);
        }

    }
}

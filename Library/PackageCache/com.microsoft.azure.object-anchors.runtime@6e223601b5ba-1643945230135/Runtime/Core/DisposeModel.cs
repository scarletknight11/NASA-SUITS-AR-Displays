// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
using System;

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    /// <summary>
    /// Object dispose model
    /// </summary>
    public abstract class DisposeModel : IDisposable
    {
        #region Internal fields

        /// <summary>
        /// True if this object has been disposed, otherwise false
        /// </summary>
        private bool isDisposed = false;

        #endregion
        #region Public methods

        /// <summary>
        /// Finalizer
        /// </summary>
        ~DisposeModel()
        {
            Dispose(false);
        }

        #endregion
        #region Public interfaces

        /// <summary>
        /// Dispose interface
        /// </summary>
        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        #endregion
        #region Protected methods

        /// <summary>
        /// Cannoic dispose pattern which which does the real cleanup works.
        /// </summary>
        /// <param name="disposing">
        /// Indicate whether this method is called by Finalizer (or whether managed resource is in controllable status).
        /// </param>
        protected virtual void Dispose(bool disposing)
        {
            if (!this.isDisposed)
            {
                // set flag to run dispose method only once
                this.IsDisposed = true;

                if (disposing)
                {
                    DisposeManagedResource();
                }

                DisposeUnmanagedResource();
            }
        }

        /// <summary>
        /// Release unmanaged resource here
        /// </summary>
        protected virtual void DisposeUnmanagedResource()
        {
        }

        /// <summary>
        /// Release managed resource here
        /// </summary>
        protected virtual void DisposeManagedResource()
        {
        }

        #endregion
        #region Protected properties

        /// <summary>
        /// Get/set the disposed flag
        /// </summary>
        protected bool IsDisposed
        {
            get { return this.isDisposed; }
            set { this.isDisposed = value; }
        }

        #endregion
    }
}

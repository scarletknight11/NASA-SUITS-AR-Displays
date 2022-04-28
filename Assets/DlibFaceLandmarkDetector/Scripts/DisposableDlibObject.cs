using UnityEngine;
using System;

namespace DlibFaceLandmarkDetector
{
    abstract public class DisposableDlibObject : DisposableObject
    {

        internal IntPtr nativeObj;

        protected DisposableDlibObject ()
            : this (true)
        {
        }

        protected DisposableDlibObject (IntPtr ptr)
            : this (ptr, true)
        {
        }

        protected DisposableDlibObject (bool isEnabledDispose)
            : this (IntPtr.Zero, isEnabledDispose)
        {
        }

        protected DisposableDlibObject (IntPtr ptr, bool isEnabledDispose)
            : base (isEnabledDispose)
        {
            this.nativeObj = ptr;
        }

        protected override void Dispose (bool disposing)
        {
            try {
                if (disposing) {
                }
                nativeObj = IntPtr.Zero;
            } finally {
                base.Dispose (disposing);
            }
        }
    }
}
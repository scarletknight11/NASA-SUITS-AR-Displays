// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
namespace Microsoft.Azure.RemoteRendering
{
    using System;
    using System.Runtime.InteropServices;

    internal class PromiseSafeHandle : SafeHandle
    {
        public PromiseSafeHandle()
            : base(IntPtr.Zero, true)
        {
        }

        public override bool IsInvalid => this.handle == IntPtr.Zero;

        protected override bool ReleaseHandle()
        {
            NativeLibrary.ApiGenPromiseDestroy(this.handle);

            return true;
        }
    }
}

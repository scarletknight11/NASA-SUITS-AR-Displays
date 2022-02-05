// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
namespace Microsoft.Azure.RemoteRendering
{
    using System;
    using System.Runtime.InteropServices;

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void apigen_promise_on_complete(IntPtr context, ref PackedValue value);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void apigen_promise_on_error(IntPtr context, status result);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void apigen_promise_on_progress(IntPtr context, float progress);

    [StructLayout(LayoutKind.Sequential)]
    internal struct PromiseCreateOptions
    {
        public IntPtr context;
        public apigen_promise_on_complete onComplete;
        public apigen_promise_on_error onError;
        public apigen_promise_on_progress onProgress;
    }
}

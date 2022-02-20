// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
namespace Microsoft.Azure.RemoteRendering
{
    using System;
    using System.Runtime.InteropServices;

    internal static partial class NativeLibrary
    {
        [DllImport(DllName, ExactSpelling = true, CallingConvention = CallingConvention.Cdecl, EntryPoint = "apigen_promise_create")]
        public extern static int ApiGenPromiseCreate(ref PromiseCreateOptions options, out PromiseSafeHandle promiseHandle);

        [DllImport(DllName, ExactSpelling = true, CallingConvention = CallingConvention.Cdecl, EntryPoint = "apigen_promise_cancel")]
        public extern static int ApiGenPromiseCancel(PromiseSafeHandle promiseHandle);

        [DllImport(DllName, ExactSpelling = true, CallingConvention = CallingConvention.Cdecl, EntryPoint = "apigen_promise_destroy")]
        public extern static int ApiGenPromiseDestroy(IntPtr promiseHandle);
    }
}

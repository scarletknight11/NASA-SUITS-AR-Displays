// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
namespace Microsoft.Azure.RemoteRendering
{
    internal enum PackedValueType : int
    {
        None,
        Pointer,
        UInt64,
        Int64,
        NarrowString,
        WideString,

        // OR'able to mark the value as a simple array - one-dimensional, with the count in the <see cref="PackedValue.Size" /> field.
        SimpleArray = 0x4000_0000,
    }
}

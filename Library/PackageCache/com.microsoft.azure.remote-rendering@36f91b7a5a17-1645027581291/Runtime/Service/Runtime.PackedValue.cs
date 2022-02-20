// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
namespace Microsoft.Azure.RemoteRendering
{
    using System;
    using System.Collections.Generic;
    using System.Diagnostics;
    using System.Runtime.InteropServices;

    [StructLayout(LayoutKind.Explicit)]
    internal struct PackedValue
    {
        private readonly static int IntPtrSize = Marshal.SizeOf<IntPtr>();

        [FieldOffset(0)]
        public PackedValueType Type;

        [FieldOffset(4)]
        public int Size;

        [FieldOffset(8)]
        public IntPtr Pointer;

        [FieldOffset(8)]
        public UInt64 UInt64;

        [FieldOffset(8)]
        public Int64 Int64;

        public static string UnpackString(PackedValue packedValue)
        {
            switch (packedValue.Type)
            {
                case PackedValueType.NarrowString:
                    return Marshal.PtrToStringAnsi(packedValue.Pointer, packedValue.Size);
                case PackedValueType.WideString:
                    return Marshal.PtrToStringUni(packedValue.Pointer, packedValue.Size);
                default:
                    throw new ArgumentException("UnpackString expects a 'NarrowString' or 'WideString' type.");
            }
        }

        public static IReadOnlyList<T> UnpackList<T>(PackedValue packedValue, Func<IntPtr, T> factory)
        {
            Debug.Assert(packedValue.Type == (PackedValueType.SimpleArray & PackedValueType.Pointer));
            List<T> result = new List<T>(packedValue.Size);

            for (IntPtr cursor = packedValue.Pointer; cursor != packedValue.Pointer + (packedValue.Size * IntPtrSize); cursor += IntPtrSize)
            {
                IntPtr handle = Marshal.ReadIntPtr(cursor);

                result.Add(factory(handle));
            }

            return result;
        }

        public static IReadOnlyList<string> UnpackListString(PackedValue packedValue)
        {
            List<string> result = new List<string>(packedValue.Size);

            if (packedValue.Type == (PackedValueType.SimpleArray & PackedValueType.NarrowString))
            {
                for (IntPtr cursor = packedValue.Pointer; cursor != packedValue.Pointer + (packedValue.Size * IntPtrSize); cursor += IntPtrSize)
                {
                    IntPtr handle = Marshal.ReadIntPtr(cursor);

                    result.Add(Marshal.PtrToStringAnsi(packedValue.Pointer));
                }
            }
            else if (packedValue.Type == (PackedValueType.SimpleArray & PackedValueType.WideString))
            {
                for (IntPtr cursor = packedValue.Pointer; cursor != packedValue.Pointer + (packedValue.Size * IntPtrSize); cursor += IntPtrSize)
                {
                    IntPtr handle = Marshal.ReadIntPtr(cursor);

                    result.Add(Marshal.PtrToStringUni(packedValue.Pointer));
                }
            }
            else
            {
                throw new ArgumentException("UnpackListString expects a 'NarrowString' or 'WideString' type.");
            }

            return result;
        }

        public static implicit operator IntPtr(PackedValue packedValue) => packedValue.Type == PackedValueType.Pointer ? packedValue.Pointer : throw new InvalidCastException();

        public static implicit operator ulong(PackedValue packedValue) => packedValue.Type == PackedValueType.UInt64 ? packedValue.UInt64 : throw new InvalidCastException();

        public static implicit operator long(PackedValue packedValue) => packedValue.Type == PackedValueType.Int64 ? packedValue.Int64 : throw new InvalidCastException();
    }
}

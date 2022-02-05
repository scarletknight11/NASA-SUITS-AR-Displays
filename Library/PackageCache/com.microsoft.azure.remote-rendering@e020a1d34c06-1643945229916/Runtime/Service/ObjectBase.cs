﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using ObjectId = System.UInt32;

namespace Microsoft.Azure.RemoteRendering
{
    public static class ToolingConstants
    {
        public static UInt64 ToolingIndex = 256;
    }

    public partial class ObjectBase
    {
        public ToolingObject AsToolingObject<ToolingObject>()
        {
            UInt64 as64 = handle;
            as64 &= 0x0000ffffffffffff;
            as64 |= ToolingConstants.ToolingIndex << 48;
            System.Reflection.BindingFlags flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance;
            return (ToolingObject)Activator.CreateInstance(typeof(ToolingObject), flags, null, new object[] { as64, false }, null);
        }

        public ObjectId InteropId
        {
            get
            {
                return (ObjectId)handle;
            }
        }

        public static bool operator ==(ObjectBase left, ObjectBase right)
        {
            return left?.handle == right?.handle;
        }

        public static bool operator !=(ObjectBase left, ObjectBase right)
        {
            return left?.handle != right?.handle;
        }

        public override int GetHashCode()
        {
            return handle.GetHashCode();
        }

        public override bool Equals(Object other)
        {
            if (other == null)
            {
                return handle == default(ulong);
            }

            ObjectBase oe = other as ObjectBase;
            if (oe == null)
            {
                return base.Equals(other);
            }

            return handle == oe.handle;
        }
    }

    public partial class ResourceBase
    {
        /// <summary>
        /// Only used for testing
        /// </summary>
        public ObjectId InteropId
        {
            get
            {
                return (ObjectId)handle;
            }
        }

        /// <summary>
        /// Only used for testing
        /// </summary>
        public UInt64 InternalId
        {
            get
            {
                return handle;
            }
        }

        /// <summary>
        /// Only used for testing
        /// </summary>

        public ToolingObject AsToolingObject<ToolingObject>()
        {
            UInt64 as64 = handle;
            as64 &= 0x0000ffffffffffff;
            as64 |= ToolingConstants.ToolingIndex << 48;
            System.Reflection.BindingFlags flags = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance;
            return (ToolingObject)Activator.CreateInstance(typeof(ToolingObject), flags, null, new object[] { as64, false }, null);
        }

        public static bool operator ==(ResourceBase left, ResourceBase right)
        {
            return left?.handle == right?.handle;
        }

        public static bool operator !=(ResourceBase left, ResourceBase right)
        {
            return left?.handle != right?.handle;
        }

        public override int GetHashCode()
        {
            return handle.GetHashCode();
        }

        public override bool Equals(Object other)
        {
            if (other == null)
            {
                return handle == default(ulong);
            }

            ResourceBase oe = other as ResourceBase;
            if (oe == null)
            {
                return base.Equals(other);
            }

            return handle == oe.handle;
        }
    }
}

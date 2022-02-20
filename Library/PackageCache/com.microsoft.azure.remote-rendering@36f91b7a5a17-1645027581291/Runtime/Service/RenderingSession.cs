﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using ObjectId = System.UInt32;

namespace Microsoft.Azure.RemoteRendering
{
    public partial class RenderingSession
    {
        private RenderingConnection _connection = null;
        private GraphicsBinding _binding = null;

        public int InteropId
        {
            get
            {
                UInt64 as64 = (UInt64)handle;
                return (int)((as64 & 0xffff000000000000ul) >> 48);
            }
        }


        public static bool operator ==(RenderingSession left, RenderingSession right)
        {
            return left?.handle == right?.handle;
        }

        public static bool operator !=(RenderingSession left, RenderingSession right)
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

            RenderingSession oe = other as RenderingSession;
            if (oe == null)
            {
                return base.Equals(other);
            }

            return handle == oe.handle;
        }

        /// <summary>
        /// Get the runtime API if connected to this session.
        /// </summary>
        public RenderingConnection Connection
        {
            get
            {
                if (_connection == null)
                {
                    ulong result_handle = handle;
                    _connection = (result_handle != default(ulong)) ? new RenderingConnection(result_handle, transfer: true) : null;
                }

                return _connection;
            }
        }

        /// <summary>
        /// Get the graphics binding for this session.
        /// </summary>
        public GraphicsBinding GraphicsBinding
        {
            get
            {
                if (_binding == null)
                {
                    ulong result_handle = handle;
                    _binding = (result_handle != default(ulong)) ? Factories.GraphicsBindingFactory(result_handle, transfer: true) : null;
                }

                return _binding;
            }
        }
    }
}

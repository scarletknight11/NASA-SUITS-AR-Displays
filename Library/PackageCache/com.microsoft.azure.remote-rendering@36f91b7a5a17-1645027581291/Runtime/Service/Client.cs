﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using ObjectId = System.UInt32;

namespace Microsoft.Azure.RemoteRendering
{
    public partial class RemoteRenderingClient
    {
        public int InteropId
        {
            get
            {
                UInt64 as64 = (UInt64)handle;
                return (int)((as64 & 0xffff000000000000ul) >> 48);
            }
        }

        public static bool operator ==(RemoteRenderingClient left, RemoteRenderingClient right)
        {
            return left?.handle == right?.handle;
        }

        public static bool operator !=(RemoteRenderingClient left, RemoteRenderingClient right)
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

            RemoteRenderingClient oe = other as RemoteRenderingClient;
            if (oe == null)
            {
                return base.Equals(other);
            }

            return handle == oe.handle;
        }
    }

    // Allow the frontend account info to be serialized
    [Serializable]
    public partial struct SessionConfiguration
    {
        public SessionConfiguration(
            string accountDomain = "mixedreality.azure.com",
            string remoteRenderingDomain = "mixedreality.azure.com",
            string accountId = "",
            string accountKey = "",
            string authenticationToken = "",
            string accessToken = ""
            )
        {
            AccountDomain = accountDomain;
            RemoteRenderingDomain = remoteRenderingDomain;
            AccountId = accountId;
            AccountKey = accountKey;
            AuthenticationToken = authenticationToken;
            AccessToken = accessToken;
        }

        public bool HasRequiredInfo()
        {
            return !string.IsNullOrEmpty(AccountId) && !string.IsNullOrEmpty(RemoteRenderingDomain) && !string.IsNullOrEmpty(AccountDomain) &&
                (!string.IsNullOrEmpty(AccountKey) || !string.IsNullOrEmpty(AccessToken) || !string.IsNullOrEmpty(AuthenticationToken));
        }
    }
}

using System;
using System.Threading.Tasks;
using System.Collections.Generic;

namespace Microsoft.Azure.RemoteRendering
{
    /// <summary>
    /// Base class for all remote rendering session exceptions.
    /// </summary>
    public class RRSessionException : Exception
    {
        /// <summary>Creates a new instance of the <see cref='RRSessionException'/> class.</summary>
        public RRSessionException()
        {
            this.Context = default(SessionGeneralContext);
        }

        /// <summary>Creates a new instance of the <see cref='RRSessionException'/> class.</summary>
        /// <param name='code'>Error code for this exception.</param>
        public RRSessionException(SessionGeneralContext context)
            : base($"Operation returned \'{context.Result.ToString()}. {context.ErrorMessage}\'.")
        {
            this.Context = context;
        }

        public SessionGeneralContext Context { get; }
    }
}

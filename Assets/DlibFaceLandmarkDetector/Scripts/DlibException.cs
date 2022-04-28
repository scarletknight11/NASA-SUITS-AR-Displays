using System;

namespace DlibFaceLandmarkDetector
{

    /// <summary>
    /// The exception that is thrown by DlibFaceLandmarkDetector. 
    /// </summary>
    public class DlibException : ApplicationException
    {
        /// <summary>
        /// 
        /// </summary>
        public DlibException ()
            : base ()
        {
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="message"></param>
        public DlibException (string message)
            : base (message)
        {
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="messageFormat"></param>
        /// <param name="args"></param>
        public DlibException (string messageFormat, params object[] args)
            : base (string.Format (messageFormat, args))
        {
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="message"></param>
        /// <param name="innerException"></param>
        public DlibException (string message, Exception innerException)
            : base (message, innerException)
        {
        }
    }
}

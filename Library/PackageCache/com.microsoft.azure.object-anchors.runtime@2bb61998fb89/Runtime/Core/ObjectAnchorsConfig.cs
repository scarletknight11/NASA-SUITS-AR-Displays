// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using UnityEngine;

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    /// <summary>
    /// This menu item generates an optional configuration file which can be
    /// excluded from source control to avoid committing credentials there.
    /// </summary>
    [CreateAssetMenu(fileName = "ObjectAnchorsConfig", menuName = "Azure Object Anchors/Configuration")]
    public class ObjectAnchorsConfig : ScriptableObject
    {
        [Header("Credentials")]
        [SerializeField]
        [Tooltip("The Account ID provided by the Object Anchors service portal.")]
        protected string objectAnchorsAccountId = "";
        public string ObjectAnchorsAccountId => this.objectAnchorsAccountId;

        [SerializeField]
        [Tooltip("The Account Key provided by the Object Anchors service portal.")]
        protected string objectAnchorsAccountKey = "";
        public string ObjectAnchorsAccountKey => this.objectAnchorsAccountKey;

        [SerializeField]
        [Tooltip("The Account Domain to use when connecting to the Azure Object Anchors services.")]
        protected string objectAnchorsAccountDomain = "";
        public string ObjectAnchorsAccountDomain => this.objectAnchorsAccountDomain;

        /// <summary>
        /// Lazily-initialized singleton for accessing Object Anchors configuration for the project.
        /// </summary>
        public static ObjectAnchorsConfig GetConfig() => _instance.Value;
        static System.Lazy<ObjectAnchorsConfig> _instance = new System.Lazy<ObjectAnchorsConfig>(Load, true);

        static ObjectAnchorsConfig Load()
        {
            ObjectAnchorsConfig config = UnityEngine.Resources.Load<ObjectAnchorsConfig>("ObjectAnchorsConfig");
            if (config == null)
            {
                throw new System.ArgumentException("ObjectAnchorsConfig resource was not found; please create one in a folder named Resources using the Asset creation menu.", "ObjectAnchorsConfig");
            }
            return config;
        }

        /// <summary>
        /// Initializes an AccountInformation object from the parameters specified in this configuration.
        /// </summary>
        public AccountInformation AccountInformation
        {
            get
            {
                System.Guid accountId;
                try
                {
                    accountId = System.Guid.Parse(this.ObjectAnchorsAccountId);
                }
                catch (System.Exception ex)
                {
                    throw new System.ArgumentException($"Object Anchors Account Id is not a properly formatted GUID: {this.ObjectAnchorsAccountId}", "ObjectAnchorsAccountId", ex);
                }

                return new AccountInformation(accountId, this.ObjectAnchorsAccountKey, this.ObjectAnchorsAccountDomain);
            }
        }

        /// <summary>
        /// Runtime configurable parameter for maximum size in megabytes of a diagnostics package.
        /// </summary>
        public uint MaxDiagnosticsSessionSizeInMegaBytes { get; set; } = 256;

        /// <summary>
        /// Runtime configurable parameter for folder to store diagnostics packages.
        /// </summary>
        public string DiagnosticsFolderPath
        {
            get => this.diagnosticsFolderPath ?? UnityEngine.Application.temporaryCachePath.Replace('/', '\\');
            set => this.diagnosticsFolderPath = value;
        }
        string diagnosticsFolderPath = null;
    }
}

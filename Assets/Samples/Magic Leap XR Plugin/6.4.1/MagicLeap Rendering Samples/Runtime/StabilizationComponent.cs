﻿using UnityEngine;

namespace Unity.MagicLeap.Samples.Rendering
{
    public sealed class StabilizationComponent : MonoBehaviour
    {
        void OnBecameInvisible()
        {
            enabled = false;
        }
        void OnBecameVisible()
        {
            enabled = true;
        }
        void Update()
        {
            // normally, we'd want to cache the camera reference to save a couple cycles,
            // but since it can change, we need to sample it every frame.
            var camera = Camera.main;
            if (camera)
                camera.SendMessage("UpdateTransformList", transform);
        }
    }
}

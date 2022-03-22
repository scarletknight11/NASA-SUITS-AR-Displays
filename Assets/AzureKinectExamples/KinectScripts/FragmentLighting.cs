using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace com.rfilkov.components
{
    public class FragmentLighting
    {
        // lighting structures
        private Light[] sceneLights = null;
        private Bounds lightBounds;

        private Vector4[] dirLightData = new Vector4[2];

        [SerializeField]
        public struct PointLight
        {
            public Vector4 color;
            public float range;
            public Vector3 pos;
        }

        private const int SIZE_POINT_LIGHT = 32;
        private const int MAX_POINT_LIGHTS = 8;

        [SerializeField]
        private PointLight[] pointLights = new PointLight[MAX_POINT_LIGHTS];
        private ComputeBuffer pointLightsBuffer = null;
        private int pointLightsNumber = 0;

        [SerializeField]
        public struct SpotLight
        {
            public Vector4 color;
            public Vector3 pos;
            public Vector4 dir;
            public Vector4 pars;
        }

        private const int SIZE_SPOT_LIGHT = 60;
        private const int MAX_SPOT_LIGHTS = 8;

        [SerializeField]
        public SpotLight[] spotLights = new SpotLight[MAX_SPOT_LIGHTS];
        private ComputeBuffer spotLightsBuffer = null;
        private int spotLightsNumber = 0;

        const int NUMBER_LIGHTS_MAX = MAX_POINT_LIGHTS / 2 + MAX_SPOT_LIGHTS / 2;


        /// <summary>
        /// Sets the scene lights and lighted volume bounds.
        /// </summary>
        public void SetLightsAndBounds(Light[] sceneLights, Vector3 centerPos, Vector3 sizeBounds)
        {
            this.sceneLights = sceneLights;
            this.lightBounds = new Bounds(centerPos, sizeBounds);
        }


        /// <summary>
        /// Releases the used native resources.
        /// </summary>
        public void ReleaseResources()
        {
            if (pointLightsBuffer != null)
            {
                pointLightsBuffer.Release();
                pointLightsBuffer = null;
            }

            if (spotLightsBuffer != null)
            {
                spotLightsBuffer.Release();
                spotLightsBuffer = null;
            }
        }


        /// <summary>
        /// Updates the lighting parameters of the material. 
        /// </summary>
        public void UpdateLighting(Material matRenderer, bool bApplyLighting)
        {
            matRenderer.SetInt("_ApplyLights", bApplyLighting ? 1 : 0);
            matRenderer.SetInt("_ApplyShadows", 0);
            matRenderer.SetFloat("_Metallic", 0);

            ApplyLighting(matRenderer, bApplyLighting);
        }

        // applies the current lights
        private void ApplyLighting(Material matRenderer, bool bApplyLighting)
        {
            const float interiorCone = 0.1f;  // interior cone of the spotlight
            dirLightData[1] = Vector4.zero;

            int pi = 0;
            int si = 0;

            if(bApplyLighting)
            {
                foreach (Light light in sceneLights)
                {
                    if (!light.gameObject.activeInHierarchy || !light.enabled)
                        continue;

                    if (light.type == LightType.Directional || Vector3.Distance(lightBounds.center, light.transform.position) < (light.range + lightBounds.extents.x))
                    {
                        if (light.type != LightType.Directional && light.shadows != LightShadows.None)
                        {
                            light.shadows = LightShadows.None;
                        }

                        if (light.type == LightType.Point)
                        {
                            if (pi < MAX_POINT_LIGHTS)
                            {
                                pointLights[pi].color = light.color * light.intensity;
                                pointLights[pi].pos = light.gameObject.transform.position;
                                pointLights[pi].range = light.range;

                                pi++;
                            }
                        }
                        else if (light.type == LightType.Spot)
                        {
                            if (si < MAX_SPOT_LIGHTS)
                            {
                                Vector3 vLightFwd = light.gameObject.transform.forward.normalized;

                                spotLights[si].color = light.color * light.intensity;
                                spotLights[si].pos = light.gameObject.transform.position;
                                spotLights[si].dir = new Vector4(vLightFwd.x, vLightFwd.y, vLightFwd.z, Mathf.Cos((light.spotAngle / 2.0f) * Mathf.Deg2Rad));
                                spotLights[si].pars = new Vector4(light.spotAngle, light.intensity, 1.0f / light.range, interiorCone);

                                si++;
                            }
                        }
                        else if (light.type == LightType.Directional)
                        {
                            Vector3 vLightFwd = light.gameObject.transform.forward.normalized;
                            dirLightData[0] = new Vector4(vLightFwd.x, vLightFwd.y, vLightFwd.z, 0);
                            dirLightData[1] = light.color * light.intensity;
                        }

                    }
                }
            }

            if (pointLightsBuffer == null)
            {
                pointLightsBuffer = new ComputeBuffer(MAX_POINT_LIGHTS, SIZE_POINT_LIGHT);
                pointLightsBuffer.SetData(pointLights);

                matRenderer.SetBuffer("_PointLights", pointLightsBuffer);
            }
            else
            {
                pointLightsBuffer.SetData(pointLights);
            }

            if (spotLightsBuffer == null)
            {
                spotLightsBuffer = new ComputeBuffer(MAX_SPOT_LIGHTS, SIZE_SPOT_LIGHT);
                spotLightsBuffer.SetData(spotLights);
                matRenderer.SetBuffer("_SpotLights", spotLightsBuffer);
            }
            else
            {
                spotLightsBuffer.SetData(spotLights);
            }

            pointLightsNumber = pi;
            spotLightsNumber = si;

            matRenderer.SetInt("_PointLightsNumber", pointLightsNumber);
            matRenderer.SetInt("_SpotLightsNumber", spotLightsNumber);

            matRenderer.SetVectorArray("_DirectionalLights", dirLightData);
        }

    }
}

#include "UnityCG.cginc"
#include "Lighting.cginc"
#include "UnityPBSLighting.cginc"
#include "AutoLight.cginc"

struct PointLight
{
	float4 color;
	float range;
	float3 position;
};

StructuredBuffer<PointLight> _PointLights;
int  _PointLightsNumber;

struct SpotLight
{
	float4 color;
	float3 position;
	float4 direction;
	float4 params;
};

StructuredBuffer<SpotLight> _SpotLights;
int  _SpotLightsNumber;

float _Metallic;


UnityLight CreateUnityLight(float3 pos, float4 color, float3 worldPos, float3 normal) 
{
	UnityLight light;

	light.dir = pos;
	light.color = color;
	light.ndotl = DotClamped(normal, light.dir);

	return light;
}

float GetAttenuation(float dist, float inverseRange, float coeff)
{
	return lerp(1.0, (1.0 - pow(dist * inverseRange * inverseRange, coeff)), 1);
}

half4 ApplyLighting(float3 albedo, float3 normals,  float3 worldPos, float alpha)
{
	fixed3 worldViewDir = normalize(UnityWorldSpaceViewDir(worldPos));

#ifdef UNITY_COMPILER_HLSL
	SurfaceOutputStandard o = (SurfaceOutputStandard)0;
#else
	SurfaceOutputStandard o;
#endif

	o.Albedo.rgb = albedo;
	o.Emission = 0.0;
	o.Alpha = 1.0;
	o.Occlusion = 1.0;
	o.Metallic = _Metallic;
	o.Normal.rgb = mul((float3x3)unity_CameraToWorld, normals);

	float3 specularTint;
	float oneMinusReflectivity;
	o.Albedo.rgb = DiffuseAndSpecularFromMetallic(albedo, o.Metallic, specularTint, oneMinusReflectivity);

	float4 c = 0;

	// Setup lighting environment
	UnityGI gi;
	UNITY_INITIALIZE_OUTPUT(UnityGI, gi);
	gi.indirect.diffuse = 0;
	gi.indirect.specular = 0;

	// point light
	UNITY_LOOP
		for (int pi = 0; pi < _PointLightsNumber; pi++)
		{
			float3 lightVec = _PointLights[pi].position - worldPos;


			if (_PointLights[pi].range - length(lightVec) < 0)
				continue;

			float att = GetAttenuation(dot(lightVec, lightVec), 1 / _PointLights[pi].range, 0.2);
			float v = dot(lightVec, float3(o.Normal.x, o.Normal.y, o.Normal.z));

			//Remove light from backward
			if (dot(lightVec, float3(o.Normal.x, o.Normal.y, o.Normal.z)) <= 0.0) 
				continue;

			UnityLight p = CreateUnityLight(lightVec, _PointLights[pi].color * att * alpha, worldPos, o.Normal.rgb);

			gi.light = p;
			c += UNITY_BRDF_PBS(o.Albedo.rgb, specularTint, oneMinusReflectivity, 0, o.Normal.rgb, normalize(_WorldSpaceCameraPos - worldPos), p, gi.indirect);
			c.a = 1.0;
		}

	c.a = 1.0;

	// spot light
	UNITY_LOOP
		for (int si = 0; si < _SpotLightsNumber; si++)
		{
			float3 lightVec = _SpotLights[si].position - worldPos;
			float att = GetAttenuation(dot(lightVec, lightVec), _SpotLights[si].params.z, 0.8);

			float3 dirSpotToWorld = -lightVec;
			float dotDirectionWorld = dot(normalize(dirSpotToWorld), _SpotLights[si].direction.xyz);
			float angleWorld = degrees(acos(dotDirectionWorld));
			float angleMax = _SpotLights[si].params.x / 2.0;

			UNITY_BRANCH
				if (dotDirectionWorld < 0 || dotDirectionWorld < _SpotLights[si].direction.w)
				{
					continue;
				}
				else 
				{
					float angleP = angleMax * (1 - _SpotLights[si].params.w);

					UNITY_BRANCH
						if (angleP < angleWorld && angleWorld < angleMax) 
						{
							att *= (angleMax - angleWorld) / (angleMax - angleP);
						}

				}

				att = saturate(att);
				UnityLight p = CreateUnityLight(lightVec, (_SpotLights[si].color) * att * alpha, worldPos, o.Normal.rgb);

				gi.light = p;
				c += UNITY_BRDF_PBS(o.Albedo.rgb, specularTint, oneMinusReflectivity, 1, o.Normal.rgb, normalize(_WorldSpaceCameraPos - worldPos), p, gi.indirect);
				c.a = 1.0;
		}

	return c;
}


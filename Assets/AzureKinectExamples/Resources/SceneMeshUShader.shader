Shader "Kinect/SceneMeshUShader" 
{
	Properties
	{
		_ColorTex("Albedo (RGB)", 2D) = "white" {}
		_MaxEdgeLen("Max edge length", Range(0.01, 0.5)) = 0.1
	}

	SubShader
	{
		Tags
		{
			"RenderType" = "Transparent"
			"Queue" = "Transparent-1"
		}

		Pass
		{
			ZWrite On
			Blend SrcAlpha OneMinusSrcAlpha
			Cull Off

			CGPROGRAM

			#pragma vertex vert
			#pragma fragment frag
			//#pragma geometry geom

			#pragma target 5.0
			#include "UnityCG.cginc"
			#include "FragmentLighting.cginc"


			sampler2D _ColorTex;
			float4 _ColorTex_ST;
			float4 _ColorTex_TexelSize;

			sampler2D _CameraDepthTexture;

			float _MaxEdgeLen;
			float _CutoffFactor;

			//#ifdef SHADER_API_D3D11
			StructuredBuffer<uint> _DepthMap;
			StructuredBuffer<float> _SpaceTable;
			//#endif

			int _CoarseFactor;
			int _IsPointCloud;
			float2 _SpaceScale;

			float2 _TexRes;

			float4x4 _Transform;
			float3 _PosMin;
			float3 _PosMax;


			struct v2f
			{
				float4 pos : SV_POSITION;
				float2 uv_ColorTex : TEXCOORD0;
				float4 vertexPos : TEXCOORD1;
				uint idx : TEXCOORD2;

				bool mask : TEXCOORD3;
				float3 normal : NORMAL;
				float3 worldDirection : TEXCOORD4;
				float4 scrPos : TEXCOORD5;
			};

			//struct v2f
			//{
			//	float2 uv : TEXCOORD0;
			//	float4 pos : SV_POSITION;
			//	float3 normal : NORMAL;
			//	float3 worldDirection : TEXCOORD1;
			//};

			//struct f2o 
			//{
			//	fixed4 color : SV_Target;
			//	float depth : SV_Depth;
			//};

			int _ApplyLights;
			int _ApplyShadows;

			float4 _DirectionalLights[2];
			sampler2D _DirectionalShadowMap;


			uint getSceneDepthAt(uint di)
			{
				uint depth2 = 0;
				//#ifdef SHADER_API_D3D11
				depth2 = _DepthMap[di >> 1];
				//#endif
				uint depth = di & 1 != 0 ? depth2 >> 16 : depth2 & 0xffff;

				return depth;
			}

			float4 getSpacePos(uint idx, float fDepth)
			{
				uint di = idx * 3;
				//#ifdef SHADER_API_D3D11
				float4 spacePos = float4(_SpaceTable[di] * fDepth * _SpaceScale.x, _SpaceTable[di + 1] * fDepth * _SpaceScale.y, fDepth, 1.0);
				//#else
				//	float4 spacePos = float4(0, 0, 0, 1.0);
				//#endif

				return spacePos;
			}


			v2f vert(appdata_base v)
			{
				v2f o;

				float2 texUv = TRANSFORM_TEX(v.texcoord, _ColorTex);  // v.texcoord;
				o.uv_ColorTex = texUv;

				uint dx = (uint)(texUv.x * _TexRes.x);
				uint dy = (uint)(texUv.y * _TexRes.y);
				uint idx = (dx + dy * _TexRes.x);
				o.idx = idx;

				uint depth = getSceneDepthAt(idx);
				float fDepth = (float)depth * 0.001;
				float4 vPos = getSpacePos(idx, fDepth); // v.vertex.w);

				float4 wPos = vPos;  // mul(_Transform, vPos);
				bool mask = wPos.x >= _PosMin.x && wPos.x <= _PosMax.x && wPos.y >= _PosMin.y && wPos.y <= _PosMax.y && wPos.z >= _PosMin.z && wPos.z <= _PosMax.z;

				v.vertex = vPos;
				o.pos = UnityObjectToClipPos(v.vertex);
				o.scrPos = ComputeScreenPos(o.pos);

				o.vertexPos = vPos;
				o.mask = mask;

				o.normal = v.normal;
				//o.worldNormal = UnityObjectToWorldNormal(v.normal);
				o.worldDirection = mul(unity_ObjectToWorld, vPos).xyz - _WorldSpaceCameraPos;

				return o;
			}


			fixed4 frag(v2f i) : SV_Target
			{
				fixed4 color = tex2D(_ColorTex, i.uv_ColorTex);

				float4 localPos = i.vertexPos;
				float fDepth = localPos.z;
				//color.rgb = float3(3.0 - fDepth, 3.0 - fDepth, 3.0 - fDepth);

				if (!i.mask)
				{
					discard;
				}

				localPos.xy = localPos.xy / localPos.z;
				float3 dx = ddx(localPos);
				float3 dy = ddy(localPos);

				float3 n = normalize(cross(dx, dy));
				float sheerAngle = abs(dot(n, float3(0, 0, 1)));
				//color.rgb = float3(sheerAngle, sheerAngle, sheerAngle);

				if (sheerAngle < _CutoffFactor)  // 0.5^6 = 0.015625
				{
					discard;
				}

				if (_ApplyLights == 1)
				{
					// directional light
					color *= _DirectionalLights[1];

					half4 c = color;

					// shadows
					if (_ApplyShadows == 1)
					{
						//float3 shadows = tex2D(_DirectionalShadowMap, i.uv).rgb;
						//c = color * (half4(saturate(shadows), 1));
					}

					// lights
					float fDepth = i.worldDirection.z;  // LinearEyeDepth(tex2Dproj(_CameraDepthTexture, UNITY_PROJ_COORD(i.scrPos)).r);
					float3 worldPos = (i.worldDirection / i.pos.w) * fDepth + _WorldSpaceCameraPos;
					c += saturate(ApplyLighting(color.rgb, i.normal, worldPos, 1));

					color = c;
				}
		
				return color;
			}


			float getMaxEdgeLen(float3 v0, float3 v1, float3 v2)
			{
				float maxEdgeLen = distance(v0, v1);
				maxEdgeLen = max(maxEdgeLen, distance(v1, v2));
				maxEdgeLen = max(maxEdgeLen, distance(v2, v0));

				return maxEdgeLen;
			}

			v2f copyV2fSurf(v2f p0, float dx, float dy)
			{
				v2f p;

				p = p0;
				p.pos = p0.pos + float4(dx, dy, 0, 0);

				return p;
			}

			[maxvertexcount(6)]
			void geom(triangle v2f input[3], inout TriangleStream<v2f> outStream)
			{
				v2f p0 = input[0];
				v2f p1 = input[1];
				v2f p2 = input[2];

				if (_IsPointCloud)
				{
					if (p0.mask)
					{
						float dxy = min(_ColorTex_TexelSize.x, _ColorTex_TexelSize.y) *_CoarseFactor;

						p1 = copyV2fSurf(p0, dxy, 0);
						p2 = copyV2fSurf(p0, 0, dxy);
						v2f p3 = copyV2fSurf(p0, dxy, dxy);

						outStream.Append(p0);
						outStream.Append(p1);
						outStream.Append(p2);
						outStream.RestartStrip();

						outStream.Append(p1);
						outStream.Append(p3);
						outStream.Append(p2);
						outStream.RestartStrip();
					}
				}
				else
				{
					if (p0.mask && p1.mask && p2.mask && getMaxEdgeLen(p0.vertexPos, p1.vertexPos, p2.vertexPos) < _MaxEdgeLen)
					{
						//p0.worldNormal = p1.worldNormal = p2.worldNormal = cross(normalize(p1.vertexPos - p0.vertexPos), normalize(p2.vertexPos - p0.vertexPos));

						outStream.Append(p0);
						outStream.Append(p1);
						outStream.Append(p2);
						outStream.RestartStrip();
					}
				}
			}

			ENDCG
		}
	
	}
}
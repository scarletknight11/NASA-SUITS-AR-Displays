Shader "Kinect/ForegroundBlendShader" {
	Properties
	{
		_ColorTex("_ColorTex", 2D) = "white" {}
		_AlphaTex("_AlphaTex", 2D) = "white" {}
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

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#pragma target 5.0
			#include "UnityCG.cginc"
			#include "FragmentLighting.cginc"

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 pos : SV_POSITION;
				float3 normal : NORMAL;
				float3 worldDirection : TEXCOORD1;
			};

			struct f2o 
			{
				fixed4 color : SV_Target;
				float depth : SV_Depth;
			};

			uint _TexResX;
			uint _TexResY;

			float _DepthDistance;
			float _InvDepthVal;

			StructuredBuffer<uint> _DepthMap;

			//#define CAM_NEAR_DEPTH 0.9999
			//#define CAM_FAR_DEPTH 0.0001

			sampler2D _ColorTex;
			float4 _ColorTex_ST;
			float4 _ColorTex_TexelSize;

			sampler2D _AlphaTex;


			int _ApplyLights;
			int _ApplyShadows;

			float4 _DirectionalLights[2];
			sampler2D _DirectionalShadowMap;



			v2f vert(appdata_base v)
			{
				v2f o;

				o.pos = UnityObjectToClipPos(v.vertex);
				//o.worldNormal = UnityObjectToWorldNormal(v.normal);
				o.normal = v.normal;
				o.worldDirection = mul(unity_ObjectToWorld, v.vertex).xyz - _WorldSpaceCameraPos;

				o.uv = TRANSFORM_TEX(v.texcoord, _ColorTex);

				return o;
			}



			uint getSensorDepth(float2 uv, int texW, int texH)
			{
				uint dx = (uint)(uv.x * _TexResX);
				uint dy = (uint)(uv.y * _TexResY);
				uint di = (dx + dy * _TexResX);

				uint depth2 = _DepthMap[di >> 1];
				uint depth = di & 1 != 0 ? depth2 >> 16 : depth2 & 0xffff;

				return depth;
			}

			float getEyeDepth(float fDepth)
			{
#if SHADER_API_D3D11 || SHADER_API_METAL
				fDepth = -fDepth;
#elif SHADER_API_GLCORE
				fDepth = -fDepth * 2.0;
#endif
				float4 vDepth = float4(0, 0, fDepth, 1);
				float4 projDepth = mul(UNITY_MATRIX_P, vDepth);

				//if (projDepth.w != projDepth.w)
				//	return CAM_FAR_DEPTH;

				float eyeDepth = projDepth.b / projDepth.w;

				return eyeDepth;
			}

			f2o frag(v2f i)
			{
				f2o o;

				uint cDepth = 0;
				int nDepth = 0;

				//int v = 0;
				for (int v = -1; v <= 1; v++)
				{
					//int u = 0;
					for (int u = -1; u <= 1; u++)
					{
						float2 uv = i.uv + float2(u * _ColorTex_TexelSize.x, v * _ColorTex_TexelSize.y);
						uint depth = getSensorDepth(uv, _TexResX, _TexResY);

						cDepth += depth;
						nDepth += (depth != 0);
					}
				}

				float fDepth = (nDepth != 0 ? ((float)cDepth / abs(nDepth) * 0.001) : _InvDepthVal) + _DepthDistance;
				float eyeDepth = getEyeDepth(fDepth);

				float4 color = tex2D(_ColorTex, i.uv);
				float alpha = tex2D(_AlphaTex, i.uv).a;
				float a = alpha < 0.5 ? 0.0 : 1.0;

				o.color = color;
				o.color.a = alpha;

				o.depth = eyeDepth * a; // * a;

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
					float3 worldPos = (i.worldDirection / i.pos.w) * fDepth + _WorldSpaceCameraPos;
					c += saturate(ApplyLighting(color.rgb, i.normal, worldPos, 1));

					o.color.rgb = c.rgb;
					o.color.a = alpha;
				}
		
				return o;
			}

			ENDCG
		}
	
	}
}
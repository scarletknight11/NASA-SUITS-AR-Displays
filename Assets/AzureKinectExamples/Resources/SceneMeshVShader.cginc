fixed4 _Color;

sampler2D _ColorTex;
float4 _ColorTex_TexelSize;
//float4 _ColorTex_ST;

float _MaxEdgeLen;

//#ifdef SHADER_API_D3D11
StructuredBuffer<uint> _DepthMap;
StructuredBuffer<uint> _BodyIndexMap;
StructuredBuffer<float> _SpaceTable;
//#endif

int _CoarseFactor;
int _IsPointCloud;
float2 _SpaceScale;

float2 _TexRes;
float2 _Cxy;
float2 _Fxy;

uint _UserBodyIndex;
uint _BodyIndexAll;

float4x4 _Transform;
float3 _PosMin;
float3 _PosMax;


struct Input
{
	float2 uv_ColorTex : TEXCOORD0;
	float4 vertexPos : TEXCOORD1;
	uint idx : TEXCOORD2;

	bool mask : TEXCOORD3;
	//float3 normal : TEXCOORD4;
};


//// Add instancing support for this shader. You need to check 'Enable Instancing' on materials that use the shader.
//// See https://docs.unity3d.com/Manual/GPUInstancing.html for more information about instancing.
//// #pragma instancing_options assumeuniformscaling
//UNITY_INSTANCING_BUFFER_START(Props)
//    // put more per-instance properties here
//UNITY_INSTANCING_BUFFER_END(Props)


uint getSceneDepthAt(uint di)
{
	uint depth2 = 0;
//#ifdef SHADER_API_D3D11
	depth2 = _DepthMap[di >> 1];
//#endif
	uint depth = di & 1 != 0 ? depth2 >> 16 : depth2 & 0xffff;

	return depth;
}


uint getBodyDepthAt(uint di, out uint bi)
{
	uint depth2 = 0;
	uint bi4 = 0;
	bi = 255;
//#ifdef SHADER_API_D3D11
	depth2 = _DepthMap[di >> 1];
	bi4 = _BodyIndexMap[di >> 2];
//#endif
	uint depth = di & 1 != 0 ? depth2 >> 16 : depth2 & 0xffff;

	switch (di & 3)
	{
	case 0:
		bi = bi4 & 255;
		break;
	case 1:
		bi = (bi4 >> 8) & 255;
		break;
	case 2:
		bi = (bi4 >> 16) & 255;
		break;
	case 3:
		bi = (bi4 >> 24) & 255;
		break;
	}

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


void vert_scene(inout appdata_full v, out Input o)
{
	UNITY_INITIALIZE_OUTPUT(Input, o);

	float2 texUv = v.texcoord; // (float2)v.vertex;
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

	o.vertexPos = vPos; // float4(vPos.xyz, mask);  // vertexPos * mask;  //
	o.mask = mask;
}


void vert_body(inout appdata_full v, out Input o)
{
	UNITY_INITIALIZE_OUTPUT(Input, o);

	float2 texUv = v.texcoord; // (float2)v.vertex;
	o.uv_ColorTex = texUv;

	uint dx = (uint)(texUv.x * _TexRes.x);
	uint dy = (uint)(texUv.y * _TexRes.y);
	uint idx = (dx + dy * _TexRes.x);
	o.idx = idx;

	uint bi = 255;
	uint depth = getBodyDepthAt(idx, bi);
	float fDepth = (float)depth * 0.001;

	float4 vPos = getSpacePos(idx, fDepth);
	bool mask = _BodyIndexAll != 0 ? (bi != 255) : (bi == _UserBodyIndex && _UserBodyIndex != 255);

	float4 vertexPos = vPos;

	v.vertex = vPos;

	o.vertexPos = vPos; // float4(vPos.xyz, mask);  // vertexPos * mask;  //
	o.mask = mask;
}


void surf(Input IN, inout SurfaceOutput o)
{
	float4 col = tex2D(_ColorTex, IN.uv_ColorTex);
	//float4 col = float3(1, 0, 0);

	//if (!IN.mask)
	//{
	//	discard;
	//}

	o.Albedo = col * _Color;
	o.Alpha = col.a;
}


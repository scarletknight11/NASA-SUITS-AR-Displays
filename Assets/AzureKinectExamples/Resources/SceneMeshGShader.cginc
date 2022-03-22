float getMaxEdgeLen(float3 v0, float3 v1, float3 v2)
{
	float maxEdgeLen = distance(v0, v1);
	maxEdgeLen = max(maxEdgeLen, distance(v1, v2));
	maxEdgeLen = max(maxEdgeLen, distance(v2, v0));

	return maxEdgeLen;
}

v2f_surf copyV2fSurf(v2f_surf p0, float dx, float dy)
{
	v2f_surf p;

	p = p0;
	p.pos = p0.pos + float4(dx, dy, 0, 0);

	return p;
}

//[maxvertexcount(1)]
//void geom_point_surf(point v2f_surf input[1], inout PointStream<v2f_surf> outStream)
//{
//	v2f_surf p0 = input[0];
//
//	if (p0.idxMask.y)
//	{
//		outStream.Append(p0);
//		outStream.RestartStrip();
//	}
//}

//[maxvertexcount(2)]
//void geom_line_surf(line v2f_surf input[2], inout LineStream<v2f_surf> outStream)
//{
//	v2f_surf p0 = input[0];
//	v2f_surf p1 = input[1];
//
//	if (p0.idxMask.y && p1.idxMask.y)
//	{
//		outStream.Append(p0);
//		outStream.Append(p1);
//		outStream.RestartStrip();
//	}
//}

[maxvertexcount(6)]
void geom_tri_surf(triangle v2f_surf input[3], inout TriangleStream<v2f_surf> outStream)
{
	v2f_surf p0 = input[0];
	v2f_surf p1 = input[1];
	v2f_surf p2 = input[2];

	if (_IsPointCloud)
	{
		if (p0.idxMask.y)
		{
			float dxy = min(_ColorTex_TexelSize.x, _ColorTex_TexelSize.y) *_CoarseFactor;

			p1 = copyV2fSurf(p0, dxy, 0);
			p2 = copyV2fSurf(p0, 0, dxy);
			v2f_surf p3 = copyV2fSurf(p0, dxy, dxy);

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
		if (p0.idxMask.y && p1.idxMask.y && p2.idxMask.y && getMaxEdgeLen(p0.vertexPos, p1.vertexPos, p2.vertexPos) < _MaxEdgeLen)
		{
			//p0.worldNormal = p1.worldNormal = p2.worldNormal = cross(normalize(p1.vertexPos - p0.vertexPos), normalize(p2.vertexPos - p0.vertexPos));

			outStream.Append(p0);
			outStream.Append(p1);
			outStream.Append(p2);
			outStream.RestartStrip();
		}
	}
}


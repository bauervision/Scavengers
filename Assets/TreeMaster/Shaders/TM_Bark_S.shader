// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "TM_Bark_S"
{
	Properties
	{
		_BarkAlbedo("Bark Albedo", 2D) = "white" {}
		_DetailAlbedo("Detail Albedo", 2D) = "white" {}
		_BarkNormal("Bark Normal", 2D) = "bump" {}
		_MossSpecularAmount("Moss Specular Amount", Range( 0 , 2)) = 0.13
		_MossBlendColor("Moss Blend Color", Color) = (0,0,0,0)
		_AlbedoTint("Albedo Tint", Color) = (0,0,0,0)
		_DetailAlbedoTintBlend("Detail Albedo Tint Blend", Range( 0 , 1)) = 0
		_DetailAlbedoBlend("Detail Albedo Blend", Range( 0 , 1)) = 0
		_MossBlend("Moss Blend", Range( 0 , 1)) = 0
		_AOBlend("AO Blend", Range( 0 , 10)) = 0
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Opaque"  "Queue" = "Geometry+0" }
		Cull Back
		CGINCLUDE
		#include "UnityPBSLighting.cginc"
		#include "Lighting.cginc"
		#pragma target 3.0
		#ifdef UNITY_PASS_SHADOWCASTER
			#undef INTERNAL_DATA
			#undef WorldReflectionVector
			#undef WorldNormalVector
			#define INTERNAL_DATA half3 internalSurfaceTtoW0; half3 internalSurfaceTtoW1; half3 internalSurfaceTtoW2;
			#define WorldReflectionVector(data,normal) reflect (data.worldRefl, half3(dot(data.internalSurfaceTtoW0,normal), dot(data.internalSurfaceTtoW1,normal), dot(data.internalSurfaceTtoW2,normal)))
			#define WorldNormalVector(data,normal) half3(dot(data.internalSurfaceTtoW0,normal), dot(data.internalSurfaceTtoW1,normal), dot(data.internalSurfaceTtoW2,normal))
		#endif
		struct Input
		{
			float2 uv_texcoord;
			float3 worldNormal;
			INTERNAL_DATA
		};

		uniform sampler2D _BarkNormal;
		uniform float4 _BarkNormal_ST;
		uniform sampler2D _BarkAlbedo;
		uniform float4 _BarkAlbedo_ST;
		uniform float4 _AlbedoTint;
		uniform sampler2D _DetailAlbedo;
		uniform float4 _DetailAlbedo_ST;
		uniform float _DetailAlbedoTintBlend;
		uniform float _DetailAlbedoBlend;
		uniform float4 _MossBlendColor;
		uniform float _MossBlend;
		uniform float _MossSpecularAmount;
		uniform float _AOBlend;

		void surf( Input i , inout SurfaceOutputStandard o )
		{
			float2 uv_BarkNormal = i.uv_texcoord * _BarkNormal_ST.xy + _BarkNormal_ST.zw;
			o.Normal = UnpackNormal( tex2D( _BarkNormal, uv_BarkNormal ) );
			float2 uv_BarkAlbedo = i.uv_texcoord * _BarkAlbedo_ST.xy + _BarkAlbedo_ST.zw;
			float4 tex2DNode12 = tex2D( _BarkAlbedo, uv_BarkAlbedo );
			float2 uv_DetailAlbedo = i.uv_texcoord * _DetailAlbedo_ST.xy + _DetailAlbedo_ST.zw;
			float4 tex2DNode29 = tex2D( _DetailAlbedo, uv_DetailAlbedo );
			float4 lerpResult32 = lerp( _AlbedoTint , tex2DNode29 , _DetailAlbedoTintBlend);
			float4 lerpResult30 = lerp( tex2DNode12 , ( ( lerpResult32 * tex2DNode12 ) * 2.0 ) , _DetailAlbedoBlend);
			float4 lerpResult16 = lerp( lerpResult30 , _MossBlendColor , 0.5257838);
			float3 ase_worldNormal = WorldNormalVector( i, float3( 0, 0, 1 ) );
			float temp_output_10_0 = saturate( ( ase_worldNormal.x * 0.440424 ) );
			float4 lerpResult41 = lerp( lerpResult30 , lerpResult16 , ( _MossBlend * ( 2.3 * temp_output_10_0 ) ));
			o.Albedo = lerpResult41.rgb;
			o.Smoothness = _MossSpecularAmount;
			o.Occlusion = ( tex2DNode12.g * tex2DNode29.g * _AOBlend );
			o.Alpha = 1;
		}

		ENDCG
		CGPROGRAM
		#pragma surface surf Standard keepalpha fullforwardshadows 

		ENDCG
		Pass
		{
			Name "ShadowCaster"
			Tags{ "LightMode" = "ShadowCaster" }
			ZWrite On
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 3.0
			#pragma multi_compile_shadowcaster
			#pragma multi_compile UNITY_PASS_SHADOWCASTER
			#pragma skip_variants FOG_LINEAR FOG_EXP FOG_EXP2
			#include "HLSLSupport.cginc"
			#if ( SHADER_API_D3D11 || SHADER_API_GLCORE || SHADER_API_GLES || SHADER_API_GLES3 || SHADER_API_METAL || SHADER_API_VULKAN )
				#define CAN_SKIP_VPOS
			#endif
			#include "UnityCG.cginc"
			#include "Lighting.cginc"
			#include "UnityPBSLighting.cginc"
			struct v2f
			{
				V2F_SHADOW_CASTER;
				float2 customPack1 : TEXCOORD1;
				float4 tSpace0 : TEXCOORD2;
				float4 tSpace1 : TEXCOORD3;
				float4 tSpace2 : TEXCOORD4;
				UNITY_VERTEX_INPUT_INSTANCE_ID
				UNITY_VERTEX_OUTPUT_STEREO
			};
			v2f vert( appdata_full v )
			{
				v2f o;
				UNITY_SETUP_INSTANCE_ID( v );
				UNITY_INITIALIZE_OUTPUT( v2f, o );
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO( o );
				UNITY_TRANSFER_INSTANCE_ID( v, o );
				Input customInputData;
				float3 worldPos = mul( unity_ObjectToWorld, v.vertex ).xyz;
				half3 worldNormal = UnityObjectToWorldNormal( v.normal );
				half3 worldTangent = UnityObjectToWorldDir( v.tangent.xyz );
				half tangentSign = v.tangent.w * unity_WorldTransformParams.w;
				half3 worldBinormal = cross( worldNormal, worldTangent ) * tangentSign;
				o.tSpace0 = float4( worldTangent.x, worldBinormal.x, worldNormal.x, worldPos.x );
				o.tSpace1 = float4( worldTangent.y, worldBinormal.y, worldNormal.y, worldPos.y );
				o.tSpace2 = float4( worldTangent.z, worldBinormal.z, worldNormal.z, worldPos.z );
				o.customPack1.xy = customInputData.uv_texcoord;
				o.customPack1.xy = v.texcoord;
				TRANSFER_SHADOW_CASTER_NORMALOFFSET( o )
				return o;
			}
			half4 frag( v2f IN
			#if !defined( CAN_SKIP_VPOS )
			, UNITY_VPOS_TYPE vpos : VPOS
			#endif
			) : SV_Target
			{
				UNITY_SETUP_INSTANCE_ID( IN );
				Input surfIN;
				UNITY_INITIALIZE_OUTPUT( Input, surfIN );
				surfIN.uv_texcoord = IN.customPack1.xy;
				float3 worldPos = float3( IN.tSpace0.w, IN.tSpace1.w, IN.tSpace2.w );
				half3 worldViewDir = normalize( UnityWorldSpaceViewDir( worldPos ) );
				surfIN.worldNormal = float3( IN.tSpace0.z, IN.tSpace1.z, IN.tSpace2.z );
				surfIN.internalSurfaceTtoW0 = IN.tSpace0.xyz;
				surfIN.internalSurfaceTtoW1 = IN.tSpace1.xyz;
				surfIN.internalSurfaceTtoW2 = IN.tSpace2.xyz;
				SurfaceOutputStandard o;
				UNITY_INITIALIZE_OUTPUT( SurfaceOutputStandard, o )
				surf( surfIN, o );
				#if defined( CAN_SKIP_VPOS )
				float2 vpos = IN.pos;
				#endif
				SHADOW_CASTER_FRAGMENT( IN )
			}
			ENDCG
		}
	}
	Fallback "Diffuse"
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=18935
12.8;5.6;918.4;789.4;1398.808;1096.206;1.93738;True;False
Node;AmplifyShaderEditor.CommentaryNode;38;-2053.438,-2051.731;Inherit;False;1239.698;451.2324;Comment;7;33;31;29;32;35;36;37;Albedo Detail;1,1,1,1;0;0
Node;AmplifyShaderEditor.SamplerNode;29;-2003.438,-1844.71;Inherit;True;Property;_DetailAlbedo;Detail Albedo;1;0;Create;True;0;0;0;False;0;False;-1;None;ff6ae5b161620624a8a735ded6af1d82;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;0,0;False;1;FLOAT2;0,0;False;2;FLOAT;1;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.CommentaryNode;39;-1343.189,-1550.685;Inherit;False;878.0096;314.1293;Comment;3;12;34;30;Albedo;1,1,1,1;0;0
Node;AmplifyShaderEditor.ColorNode;31;-1747.42,-2001.731;Inherit;False;Property;_AlbedoTint;Albedo Tint;6;0;Create;True;0;0;0;False;0;False;0,0,0,0;1,1,1,1;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;33;-1678.021,-1715.896;Inherit;False;Property;_DetailAlbedoTintBlend;Detail Albedo Tint Blend;7;0;Create;True;0;0;0;False;0;False;0;1;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.WorldNormalVector;8;-1195.855,-79.30399;Inherit;False;False;1;0;FLOAT3;0,0,0;False;4;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3
Node;AmplifyShaderEditor.RangedFloatNode;1;-1961.513,89.24904;Float;False;Constant;_MossAmount;Moss Amount;6;0;Create;True;0;0;0;False;0;False;0.440424;0.61;0;2;0;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;12;-1294.453,-1486.802;Inherit;True;Property;_BarkAlbedo;Bark Albedo;0;0;Create;True;0;0;0;False;0;False;-1;None;33212d368b7c97e45bc2b72c8986a9f9;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;0,0;False;1;FLOAT2;0,0;False;2;FLOAT;1;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.LerpOp;32;-1393.281,-1848.099;Inherit;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.RangedFloatNode;37;-1152.407,-1772.067;Inherit;False;Constant;_Float0;Float 0;15;0;Create;True;0;0;0;False;0;False;2;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;35;-1199.212,-1897.114;Inherit;False;2;2;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;9;-852.1501,71.69275;Inherit;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.CommentaryNode;40;-1800.94,-1037.102;Inherit;False;1264.736;562.9228;Comment;3;16;19;22;Albedo Moss;1,1,1,1;0;0
Node;AmplifyShaderEditor.RangedFloatNode;34;-913.8521,-1351.953;Inherit;False;Property;_DetailAlbedoBlend;Detail Albedo Blend;8;0;Create;True;0;0;0;False;0;False;0;1;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;36;-976.1391,-1811.051;Inherit;False;2;2;0;COLOR;0,0,0,0;False;1;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.SaturateNode;10;-697.0552,77.79535;Inherit;False;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;27;-758.2308,-94.05527;Inherit;False;Constant;_FadeBlending;Fade Blending;11;0;Create;True;0;0;0;False;0;False;2.3;1.67;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;42;-714.2986,-691.3738;Inherit;False;Property;_MossBlend;Moss Blend;9;0;Create;True;0;0;0;False;0;False;0;1;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;22;-1435.786,-658.2653;Float;False;Constant;_MossPower;Moss Power;8;0;Create;True;0;0;0;False;0;False;0.5257838;2;0;2;0;1;FLOAT;0
Node;AmplifyShaderEditor.ColorNode;19;-1710.958,-987.1022;Inherit;False;Property;_MossBlendColor;Moss Blend Color;5;0;Create;True;0;0;0;False;0;False;0,0,0,0;0.1560787,0.4056604,0,1;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.LerpOp;30;-647.1797,-1492.707;Inherit;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;28;-515.9496,-25.80712;Inherit;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;56;-356.7642,-730.9385;Inherit;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.LerpOp;16;-833.2415,-897.8315;Inherit;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.RangedFloatNode;58;-732.759,-233.7079;Inherit;False;Property;_AOBlend;AO Blend;12;0;Create;True;0;0;0;False;0;False;0;4.12;0;10;0;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;13;-893.351,441.8928;Inherit;True;Property;_BarkSpecular;Bark Specular;3;0;Create;True;0;0;0;False;0;False;-1;None;6618005f6bafebf40b3d09f498401fba;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;0,0;False;1;FLOAT2;0,0;False;2;FLOAT;1;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SaturateNode;50;-1248.743,-1235.514;Inherit;False;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SaturateNode;6;-1484.156,-76.50237;Inherit;False;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;46;-829.1074,-1153.803;Inherit;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;5;-1748.451,260.7926;Inherit;True;Property;_BarkNormal;Bark Normal;2;0;Create;True;0;0;0;False;0;False;-1;None;c4d197c65f060c74185262cbcfe3f881;True;0;True;bump;Auto;True;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;0,0;False;1;FLOAT2;0,0;False;2;FLOAT;1;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;51;-1626.22,-1266.727;Inherit;True;Property;_TextureSample0;Texture Sample 0;11;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;17;-426.5993,272.3454;Float;False;Property;_MossSpecularAmount;Moss Specular Amount;4;0;Create;True;0;0;0;False;0;False;0.13;0;0;2;0;1;FLOAT;0
Node;AmplifyShaderEditor.LerpOp;15;-423.7523,505.7936;Inherit;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.WorldNormalVector;2;-2059.281,-108.2669;Inherit;False;False;1;0;FLOAT3;0,0,0;False;4;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3
Node;AmplifyShaderEditor.LerpOp;41;-281.8591,-962.8088;Inherit;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;3;-1644.855,-84.9024;Inherit;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;59;-332.6895,-387.0957;Inherit;False;3;3;0;FLOAT;0;False;1;FLOAT;0;False;2;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;48;-1240.948,-1147.16;Inherit;False;Property;_Float1;Float 1;10;0;Create;True;0;0;0;False;0;False;0;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;0,0;Float;False;True;-1;2;ASEMaterialInspector;0;0;Standard;TM_Bark_S;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;Back;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Opaque;0.5;True;True;0;False;Opaque;;Geometry;All;18;all;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;True;0;0;False;-1;0;False;-1;0;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;True;Relative;0;;-1;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;False;16;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;32;0;31;0
WireConnection;32;1;29;0
WireConnection;32;2;33;0
WireConnection;35;0;32;0
WireConnection;35;1;12;0
WireConnection;9;0;8;1
WireConnection;9;1;1;0
WireConnection;36;0;35;0
WireConnection;36;1;37;0
WireConnection;10;0;9;0
WireConnection;30;0;12;0
WireConnection;30;1;36;0
WireConnection;30;2;34;0
WireConnection;28;0;27;0
WireConnection;28;1;10;0
WireConnection;56;0;42;0
WireConnection;56;1;28;0
WireConnection;16;0;30;0
WireConnection;16;1;19;0
WireConnection;16;2;22;0
WireConnection;50;0;51;1
WireConnection;6;0;3;0
WireConnection;46;0;50;0
WireConnection;46;1;48;0
WireConnection;15;0;13;0
WireConnection;15;2;10;0
WireConnection;41;0;30;0
WireConnection;41;1;16;0
WireConnection;41;2;56;0
WireConnection;3;0;2;2
WireConnection;3;1;1;0
WireConnection;59;0;12;2
WireConnection;59;1;29;2
WireConnection;59;2;58;0
WireConnection;0;0;41;0
WireConnection;0;1;5;0
WireConnection;0;4;17;0
WireConnection;0;5;59;0
ASEEND*/
//CHKSM=E111696BF106E6FFDA73800CB9BA7DFDD7DF6E6A
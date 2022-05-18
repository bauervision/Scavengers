// Upgrade NOTE: upgraded instancing buffer 'TM_Foliage_S' to new syntax.

// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "TM_Foliage_S"
{
	Properties
	{
		_Cutoff( "Mask Clip Value", Float ) = 0.22
		_Color0("Color 0", Color) = (0,0,0,0)
		[Header(Translucency)]
		_Translucency("Strength", Range( 0 , 50)) = 1
		_TransNormalDistortion("Normal Distortion", Range( 0 , 1)) = 0.1
		_TransScattering("Scaterring Falloff", Range( 1 , 50)) = 2
		_TransDirect("Direct", Range( 0 , 1)) = 1
		_TransAmbient("Ambient", Range( 0 , 1)) = 0.2
		_TransShadow("Shadow", Range( 0 , 1)) = 0.9
		_Albedo("Albedo", 2D) = "white" {}
		_Smoothness("Smoothness", Float) = 0
		_Normal("Normal", 2D) = "bump" {}
		_SubSurface("SubSurface", 2D) = "white" {}
		_Tint("Tint", Color) = (0,0,0,0)
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "TransparentCutout"  "Queue" = "Geometry+0" }
		Cull Back
		CGPROGRAM
		#include "UnityPBSLighting.cginc"
		#pragma target 3.0
		#pragma multi_compile_instancing
		#pragma surface surf StandardCustom keepalpha addshadow fullforwardshadows exclude_path:deferred 
		struct Input
		{
			float2 uv_texcoord;
		};

		struct SurfaceOutputStandardCustom
		{
			half3 Albedo;
			half3 Normal;
			half3 Emission;
			half Metallic;
			half Smoothness;
			half Occlusion;
			half Alpha;
			half3 Translucency;
		};

		uniform sampler2D _Normal;
		uniform float4 _Tint;
		uniform sampler2D _Albedo;
		uniform half _Translucency;
		uniform half _TransNormalDistortion;
		uniform half _TransScattering;
		uniform half _TransDirect;
		uniform half _TransAmbient;
		uniform half _TransShadow;
		uniform sampler2D _SubSurface;
		uniform float4 _Color0;
		uniform float _Cutoff = 0.22;

		UNITY_INSTANCING_BUFFER_START(TM_Foliage_S)
			UNITY_DEFINE_INSTANCED_PROP(float4, _SubSurface_ST)
#define _SubSurface_ST_arr TM_Foliage_S
			UNITY_DEFINE_INSTANCED_PROP(float, _Smoothness)
#define _Smoothness_arr TM_Foliage_S
		UNITY_INSTANCING_BUFFER_END(TM_Foliage_S)

		inline half4 LightingStandardCustom(SurfaceOutputStandardCustom s, half3 viewDir, UnityGI gi )
		{
			#if !defined(DIRECTIONAL)
			float3 lightAtten = gi.light.color;
			#else
			float3 lightAtten = lerp( _LightColor0.rgb, gi.light.color, _TransShadow );
			#endif
			half3 lightDir = gi.light.dir + s.Normal * _TransNormalDistortion;
			half transVdotL = pow( saturate( dot( viewDir, -lightDir ) ), _TransScattering );
			half3 translucency = lightAtten * (transVdotL * _TransDirect + gi.indirect.diffuse * _TransAmbient) * s.Translucency;
			half4 c = half4( s.Albedo * translucency * _Translucency, 0 );

			SurfaceOutputStandard r;
			r.Albedo = s.Albedo;
			r.Normal = s.Normal;
			r.Emission = s.Emission;
			r.Metallic = s.Metallic;
			r.Smoothness = s.Smoothness;
			r.Occlusion = s.Occlusion;
			r.Alpha = s.Alpha;
			return LightingStandard (r, viewDir, gi) + c;
		}

		inline void LightingStandardCustom_GI(SurfaceOutputStandardCustom s, UnityGIInput data, inout UnityGI gi )
		{
			#if defined(UNITY_PASS_DEFERRED) && UNITY_ENABLE_REFLECTION_BUFFERS
				gi = UnityGlobalIllumination(data, s.Occlusion, s.Normal);
			#else
				UNITY_GLOSSY_ENV_FROM_SURFACE( g, s, data );
				gi = UnityGlobalIllumination( data, s.Occlusion, s.Normal, g );
			#endif
		}

		void surf( Input i , inout SurfaceOutputStandardCustom o )
		{
			o.Normal = UnpackNormal( tex2D( _Normal, i.uv_texcoord ) );
			float4 tex2DNode6 = tex2D( _Albedo, i.uv_texcoord );
			o.Albedo = ( _Tint * tex2DNode6 ).rgb;
			float _Smoothness_Instance = UNITY_ACCESS_INSTANCED_PROP(_Smoothness_arr, _Smoothness);
			o.Smoothness = _Smoothness_Instance;
			float4 _SubSurface_ST_Instance = UNITY_ACCESS_INSTANCED_PROP(_SubSurface_ST_arr, _SubSurface_ST);
			float2 uv_SubSurface = i.uv_texcoord * _SubSurface_ST_Instance.xy + _SubSurface_ST_Instance.zw;
			o.Translucency = ( tex2D( _SubSurface, uv_SubSurface ) * _Color0 ).rgb;
			o.Alpha = 1;
			clip( tex2DNode6.a - _Cutoff );
		}

		ENDCG
	}
	Fallback "Diffuse"
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=18935
2278;18;1162;993;1185.553;315.9596;1.466612;True;False
Node;AmplifyShaderEditor.TextureCoordinatesNode;9;-1384.198,3.115991;Inherit;False;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;1,1;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.ColorNode;5;-868.9152,-362.4869;Float;False;Property;_Tint;Tint;16;0;Create;True;0;0;0;False;0;False;0,0,0,0;0.754717,0.754717,0.754717,1;False;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.ColorNode;11;-860.142,433.8372;Float;False;Property;_Color0;Color 0;1;0;Create;True;0;0;0;False;0;False;0,0,0,0;1,1,1,1;False;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;6;-892.1418,-153.5626;Inherit;True;Property;_Albedo;Albedo;10;0;Create;True;0;0;0;False;0;False;-1;None;05c7c9f88ea2fcc4f925a81d6bf8f93b;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;1;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;10;-899.3417,237.2372;Inherit;True;Property;_SubSurface;SubSurface;15;0;Create;True;0;0;0;False;0;False;-1;None;7a170c9d5e00ed44d9cd9b94872a23f6;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;1;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.WorldPosInputsNode;15;-914.1605,867.1919;Inherit;False;0;4;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3
Node;AmplifyShaderEditor.NormalVertexDataNode;28;-539.669,494.6641;Inherit;False;0;5;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;12;-425.1418,293.4372;Inherit;False;2;2;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;8;-451.1417,-151.5626;Inherit;False;2;2;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.RangedFloatNode;14;-505.1594,99.9474;Inherit;False;InstancedProperty;_Smoothness;Smoothness;13;0;Create;True;0;0;0;False;0;False;0;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;7;-898.3414,34.83743;Inherit;True;Property;_Normal;Normal;14;0;Create;True;0;0;0;False;0;False;-1;None;bd85966aaa5eba044be0635231c3d7c1;True;0;True;bump;Auto;True;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;1;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;FLOAT3;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.GetLocalVarNode;27;-531.3928,632.3028;Inherit;False;26;Wind;1;0;OBJECT;;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;29;-303.732,551.8719;Inherit;False;2;2;0;FLOAT3;0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.RegisterLocalVarNode;26;248.8589,830.9852;Inherit;False;Wind;-1;True;1;0;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.PannerNode;21;-412.5286,973.5468;Inherit;False;3;0;FLOAT2;0,0;False;2;FLOAT2;1,1;False;1;FLOAT;1;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SamplerNode;20;-206.7151,810.1744;Inherit;True;Property;_WindNoiseTexture;Wind Noise Texture;12;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;18;-571.4872,939.1558;Inherit;False;2;2;0;FLOAT2;0,0;False;1;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;24;-564.8019,1195.283;Inherit;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.DynamicAppendNode;17;-724.5287,920.2404;Inherit;False;FLOAT2;4;0;FLOAT;0;False;1;FLOAT;0;False;2;FLOAT;0;False;3;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.RangedFloatNode;19;-748.8605,1033.46;Inherit;False;Property;_NoiseSize;Noise Size;9;0;Create;True;0;0;0;False;0;False;5;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleTimeNode;25;-785.1615,1258.191;Inherit;False;1;0;FLOAT;1;False;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;22;-775.2896,1164.596;Inherit;False;Property;_WndSpeed;Wnd Speed;11;0;Create;True;0;0;0;False;0;False;2;2;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleAddOpNode;40;155.5971,968.1807;Inherit;False;2;2;0;COLOR;0,0,0,0;False;1;OBJECT;;False;1;COLOR;0
Node;AmplifyShaderEditor.GradientNode;30;-342.3129,1267.057;Inherit;False;0;2;2;0,0,0,0.923537;1,1,1,1;1,0;1,1;0;1;OBJECT;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;60.63472,-100.5817;Float;False;True;-1;2;ASEMaterialInspector;0;0;Standard;TM_Foliage_S;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;Back;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Custom;0.22;True;True;0;True;TransparentCutout;;Geometry;ForwardOnly;18;all;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;True;0;0;False;-1;0;False;-1;0;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;True;Relative;0;;0;2;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;False;16;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;6;1;9;0
WireConnection;12;0;10;0
WireConnection;12;1;11;0
WireConnection;8;0;5;0
WireConnection;8;1;6;0
WireConnection;7;1;9;0
WireConnection;29;0;28;0
WireConnection;29;1;27;0
WireConnection;26;0;40;0
WireConnection;21;0;18;0
WireConnection;21;1;24;0
WireConnection;20;1;21;0
WireConnection;18;0;17;0
WireConnection;18;1;19;0
WireConnection;24;0;22;0
WireConnection;24;1;25;0
WireConnection;17;0;15;1
WireConnection;17;1;15;3
WireConnection;40;0;20;0
WireConnection;40;1;30;0
WireConnection;0;0;8;0
WireConnection;0;1;7;0
WireConnection;0;4;14;0
WireConnection;0;7;12;0
WireConnection;0;10;6;4
ASEEND*/
//CHKSM=BD139414F772B794988208E07023A078AC321767
// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "TM_Test"
{
	Properties
	{
		_Albedo1("Albedo 1", 2D) = "white" {}
		_Albedo2("Albedo 2", 2D) = "white" {}
		_BlendMask("Blend Mask", 2D) = "white" {}
		_Contrast("Contrast", Range( -10 , 20)) = 2
		[Toggle]_InvertMask("Invert Mask", Float) = 0
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Opaque"  "Queue" = "Geometry+0" }
		Cull Back
		CGPROGRAM
		#pragma target 3.0
		#pragma surface surf Standard keepalpha addshadow fullforwardshadows 
		struct Input
		{
			float2 uv_texcoord;
		};

		uniform sampler2D _Albedo1;
		uniform float4 _Albedo1_ST;
		uniform sampler2D _Albedo2;
		uniform float4 _Albedo2_ST;
		uniform float _Contrast;
		uniform float _InvertMask;
		uniform sampler2D _BlendMask;
		uniform float4 _BlendMask_ST;


		float4 CalculateContrast( float contrastValue, float4 colorTarget )
		{
			float t = 0.5 * ( 1.0 - contrastValue );
			return mul( float4x4( contrastValue,0,0,t, 0,contrastValue,0,t, 0,0,contrastValue,t, 0,0,0,1 ), colorTarget );
		}

		void surf( Input i , inout SurfaceOutputStandard o )
		{
			float2 uv_Albedo1 = i.uv_texcoord * _Albedo1_ST.xy + _Albedo1_ST.zw;
			float2 uv_Albedo2 = i.uv_texcoord * _Albedo2_ST.xy + _Albedo2_ST.zw;
			float2 uv_BlendMask = i.uv_texcoord * _BlendMask_ST.xy + _BlendMask_ST.zw;
			float4 tex2DNode1 = tex2D( _BlendMask, uv_BlendMask );
			float4 temp_cast_0 = ((( _InvertMask )?( ( 1.0 - tex2DNode1.b ) ):( tex2DNode1.b ))).xxxx;
			float4 lerpResult15 = lerp( tex2D( _Albedo1, uv_Albedo1 ) , tex2D( _Albedo2, uv_Albedo2 ) , CalculateContrast(_Contrast,temp_cast_0));
			o.Albedo = lerpResult15.rgb;
			o.Alpha = 1;
		}

		ENDCG
	}
	Fallback "Diffuse"
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=18935
1548;6;1162;999;1341.926;1043.754;1.181726;True;False
Node;AmplifyShaderEditor.SamplerNode;1;-1143.303,-187.2479;Inherit;True;Property;_BlendMask;Blend Mask;2;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.OneMinusNode;23;-814.8768,-16.83374;Inherit;False;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.ToggleSwitchNode;19;-624.7106,-129.8659;Inherit;False;Property;_InvertMask;Invert Mask;4;0;Create;True;0;0;0;False;0;False;0;True;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;3;-573.991,34.22529;Inherit;False;Property;_Contrast;Contrast;3;0;Create;True;0;0;0;False;0;False;2;0;-10;20;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleContrastOpNode;8;-367.163,-80.08203;Inherit;False;2;1;COLOR;0,0,0,0;False;0;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.SamplerNode;10;-842.9677,-677.4144;Inherit;True;Property;_Albedo1;Albedo 1;0;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;13;-830.9033,-432.7348;Inherit;True;Property;_Albedo2;Albedo 2;1;0;Create;True;0;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.LerpOp;15;-204.951,-320.4755;Inherit;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;68,-19;Float;False;True;-1;2;ASEMaterialInspector;0;0;Standard;TM_Test;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;Back;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Opaque;0.5;True;True;0;False;Opaque;;Geometry;All;18;all;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;True;0;0;False;-1;0;False;-1;0;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;True;Relative;0;;-1;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;False;16;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;23;0;1;3
WireConnection;19;0;1;3
WireConnection;19;1;23;0
WireConnection;8;1;19;0
WireConnection;8;0;3;0
WireConnection;15;0;10;0
WireConnection;15;1;13;0
WireConnection;15;2;8;0
WireConnection;0;0;15;0
ASEEND*/
//CHKSM=98A673CFD77348A9C32AFB3973EC5666D2F66BE6
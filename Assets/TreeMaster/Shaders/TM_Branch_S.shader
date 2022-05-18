// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "TM_Branch"
{
	Properties
	{
		_Cutoff( "Mask Clip Value", Float ) = 0.07
		_BranchMask("Branch Mask", 2D) = "white" {}
		_Albedo("Albedo", 2D) = "white" {}
		_BranchNormal("Branch Normal", 2D) = "white" {}
		_Smoothness("Smoothness", Range( 0 , 1)) = 0
		_TintAmount("Tint Amount", Range( 0 , 1)) = 0
		_AlbedoTint("Albedo Tint", Color) = (0,0,0,0)
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "TransparentCutout"  "Queue" = "Geometry+0" }
		Cull Back
		CGPROGRAM
		#pragma target 3.0
		#pragma surface surf Standard keepalpha addshadow fullforwardshadows 
		struct Input
		{
			float2 uv_texcoord;
		};

		uniform sampler2D _BranchNormal;
		uniform float4 _BranchNormal_ST;
		uniform float4 _AlbedoTint;
		uniform sampler2D _Albedo;
		uniform float4 _Albedo_ST;
		uniform float _TintAmount;
		uniform float _Smoothness;
		uniform sampler2D _BranchMask;
		uniform float4 _BranchMask_ST;
		uniform float _Cutoff = 0.07;

		void surf( Input i , inout SurfaceOutputStandard o )
		{
			float2 uv_BranchNormal = i.uv_texcoord * _BranchNormal_ST.xy + _BranchNormal_ST.zw;
			o.Normal = tex2D( _BranchNormal, uv_BranchNormal ).rgb;
			float2 uv_Albedo = i.uv_texcoord * _Albedo_ST.xy + _Albedo_ST.zw;
			float4 lerpResult12 = lerp( _AlbedoTint , tex2D( _Albedo, uv_Albedo ) , _TintAmount);
			o.Albedo = lerpResult12.rgb;
			o.Smoothness = _Smoothness;
			o.Alpha = 1;
			float2 uv_BranchMask = i.uv_texcoord * _BranchMask_ST.xy + _BranchMask_ST.zw;
			clip( tex2D( _BranchMask, uv_BranchMask ).r - _Cutoff );
		}

		ENDCG
	}
	Fallback "Diffuse"
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=18935
12;40;708;747;811.3351;620.4938;1.3;False;False
Node;AmplifyShaderEditor.ColorNode;11;-607.7299,-490.1957;Inherit;False;Property;_AlbedoTint;Albedo Tint;6;0;Create;True;0;0;0;False;0;False;0,0,0,0;0,0,0,0;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;2;-694.1177,-248.806;Inherit;True;Property;_Albedo;Albedo;2;0;Create;True;0;0;0;False;0;False;-1;None;6ee22fb638ba23a4582889a0e68d6c6d;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;13;-395.3353,-238.2939;Inherit;False;Property;_TintAmount;Tint Amount;5;0;Create;True;0;0;0;False;0;False;0;0;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;1;-458.8184,340.0943;Inherit;True;Property;_BranchMask;Branch Mask;1;0;Create;True;0;0;0;False;0;False;-1;None;817121989381c5646a6b96ecfcd3b833;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;8;-631.3301,83.60376;Inherit;True;Property;_BranchNormal;Branch Normal;3;0;Create;True;0;0;0;False;0;False;-1;None;376a11e85cbf1694989ec49e9fa83c7f;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;9;-238.5295,175.4038;Inherit;False;Property;_Smoothness;Smoothness;4;0;Create;True;0;0;0;False;0;False;0;0;0;1;0;1;FLOAT;0
Node;AmplifyShaderEditor.LerpOp;12;-163.1301,-423.8958;Inherit;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;58.50002,-38.99999;Float;False;True;-1;2;ASEMaterialInspector;0;0;Standard;TM_Branch;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;Back;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Custom;0.07;True;True;0;True;TransparentCutout;;Geometry;All;18;all;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;True;0;0;False;-1;0;False;-1;0;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;True;Relative;0;;0;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;False;16;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;12;0;11;0
WireConnection;12;1;2;0
WireConnection;12;2;13;0
WireConnection;0;0;12;0
WireConnection;0;1;8;0
WireConnection;0;4;9;0
WireConnection;0;10;1;1
ASEEND*/
//CHKSM=266BD0219A03F5B88D092A15EDABA6831888303A
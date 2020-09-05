// Upgrade NOTE: replaced '_World2Object' with 'unity_WorldToObject'

Shader "BauerVision/MobileWorldNormal" {
    Properties {
        //[Toggle] _UseMain("Blend Using Main Tex?", Float) = 0
        _MainTex ("Base (RGB)", 2D) = "white" {}
        _TopDirection ("Top Direction", Vector) = (0,1,0)
        _TopLevel ("Top Level", Range(0,10) ) = 0.2 //0.2 def
        _TopDepth ("Top Depth", Range(0,1)) = 0.0 //0.7 def
        _TopIntensity ("Top Intensity", Range(0,1)) = 0.0 //0.7 def
        _TopColor ("Top Color", Color) = (1,0.894,0.710,1.0) //orange
        _TintColor("Tint Color", Color) = (1.000000,1.000000,1.000000,1.000000)
        
    }
    SubShader {
        Tags { "RenderType"="Opaque" }
        LOD 200
 
        CGPROGRAM
        #pragma surface surf Lambert vertex:vert
 
        sampler2D _MainTex;
        sampler2D _TopTex;
        //float _UseMain;
        float4 _TopDirection;
        float _TopLevel;
       	float _TopDepth;
        float _TopIntensity;
       	float4 _TopColor;
        float4 _TintColor;
       
 
        struct Input {
            float2 uv_MainTex;
            float3 worldNormal;
            INTERNAL_DATA
        };
 
        void vert (inout appdata_full v) {
            //Convert the normal to world coortinates
            float4 snow = mul(UNITY_MATRIX_IT_MV, _TopDirection);
            float3 snormal = normalize(_TopDirection.xyz);
            float3 sn = mul((float3x3)unity_WorldToObject, snormal).xyz;
 
        }
 
        void surf (Input IN, inout SurfaceOutput o) {
            half4 color = tex2D (_MainTex, IN.uv_MainTex);
            
            half difference2 = dot(WorldNormalVector(IN, o.Normal), _TopDirection.xyz) - lerp(1,-1,_TopLevel);

           difference2 = saturate(difference2 / _TopDepth);
            _TopColor = lerp(color, _TopColor , saturate(difference2 - _TopIntensity));

            if(dot(WorldNormalVector(IN, o.Normal), _TopDirection.xyz)>=lerp(1,-1,_TopLevel))
            {
                o.Albedo = _TopColor   * _TintColor;
            }
            else {
                o.Albedo = color.rgb  * _TintColor;
            }
            
        }
        ENDCG
    }
    FallBack "Diffuse"
}
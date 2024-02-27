#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /Zpc /Tcs_5_0 /Emain /Fh ShaderHeader/gpu_particles_clear_cs.h
//    Shader/gpu_particles_clear_cs.fx
//
//
// Buffer Definitions: 
//
// cbuffer cb1
// {
//
//   struct EmitterData
//   {
//       
//       uint FlagBits;                 // Offset:    0
//       uint Seed;                     // Offset:    4
//       uint ParticleHead;             // Offset:    8
//       uint ParticleSize;             // Offset:   12
//       uint TrailHead;                // Offset:   16
//       uint TrailSize;                // Offset:   20
//       uint TrailPhase;               // Offset:   24
//       uint NextEmitCount;            // Offset:   28
//       uint TotalEmitCount;           // Offset:   32
//       uint EmitPointCount;           // Offset:   36
//       float TimeCount;               // Offset:   40
//       float TimeStopped;             // Offset:   44
//       uint Reserved0;                // Offset:   48
//       uint Reserved1;                // Offset:   52
//       float DeltaTime;               // Offset:   56
//       uint Color;                    // Offset:   60
//       float4x3 Transform;            // Offset:   64
//
//   } _21_emitter;                     // Offset:    0 Size:   112
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// Particles                             UAV    byte         r/w    0        1
// cb1                               cbuffer      NA          NA    1        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer cb1[1], immediateIndexed
dcl_uav_raw u0
dcl_input vThreadID.x
dcl_temps 2
dcl_thread_group 256, 1, 1
iadd r0.x, cb1[0].z, vThreadID.x
imul null, r0.y, r0.x, l(80)
imad r1.xyzw, r0.xxxx, l(80, 80, 80, 80), l(16, 32, 48, 64)
store_raw u0.xyzw, r0.y, l(0,0,0,0)
store_raw u0.xyzw, r1.x, l(0,0,0,0)
store_raw u0.xyzw, r1.y, l(0,0,0,0)
store_raw u0.xyzw, r1.z, l(0,0,0,0)
store_raw u0.xyzw, r1.w, l(0,0,0,0)
ret 
// Approximately 9 instruction slots used
#endif

const BYTE g_main[] =
{
     68,  88,  66,  67, 255, 133, 
     48,  77, 193,  53, 243, 221, 
    246, 151,  55, 225,  63, 206, 
    153, 186,   1,   0,   0,   0, 
    208,   5,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    128,   3,   0,   0, 144,   3, 
      0,   0, 160,   3,   0,   0, 
     52,   5,   0,   0,  82,  68, 
     69,  70,  68,   3,   0,   0, 
      1,   0,   0,   0, 140,   0, 
      0,   0,   2,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
     83,  67,  16,   1,   0,   0, 
     16,   3,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    124,   0,   0,   0,   8,   0, 
      0,   0,   6,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0, 134,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,  80,  97, 
    114, 116, 105,  99, 108, 101, 
    115,   0,  99,  98,  49,   0, 
    171, 171, 134,   0,   0,   0, 
      1,   0,   0,   0, 164,   0, 
      0,   0, 112,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 204,   0,   0,   0, 
      0,   0,   0,   0, 112,   0, 
      0,   0,   2,   0,   0,   0, 
    236,   2,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     95,  50,  49,  95, 101, 109, 
    105, 116, 116, 101, 114,   0, 
     69, 109, 105, 116, 116, 101, 
    114,  68,  97, 116,  97,   0, 
     70, 108,  97, 103,  66, 105, 
    116, 115,   0, 100, 119, 111, 
    114, 100,   0, 171,   0,   0, 
     19,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    237,   0,   0,   0,  83, 101, 
    101, 100,   0,  80,  97, 114, 
    116, 105,  99, 108, 101,  72, 
    101,  97, 100,   0,  80,  97, 
    114, 116, 105,  99, 108, 101, 
     83, 105, 122, 101,   0,  84, 
    114,  97, 105, 108,  72, 101, 
     97, 100,   0,  84, 114,  97, 
    105, 108,  83, 105, 122, 101, 
      0,  84, 114,  97, 105, 108, 
     80, 104,  97, 115, 101,   0, 
     78, 101, 120, 116,  69, 109, 
    105, 116,  67, 111, 117, 110, 
    116,   0,  84, 111, 116,  97, 
    108,  69, 109, 105, 116,  67, 
    111, 117, 110, 116,   0,  69, 
    109, 105, 116,  80, 111, 105, 
    110, 116,  67, 111, 117, 110, 
    116,   0,  84, 105, 109, 101, 
     67, 111, 117, 110, 116,   0, 
    102, 108, 111,  97, 116,   0, 
    171, 171,   0,   0,   3,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 140,   1, 
      0,   0,  84, 105, 109, 101, 
     83, 116, 111, 112, 112, 101, 
    100,   0,  82, 101, 115, 101, 
    114, 118, 101, 100,  48,   0, 
     82, 101, 115, 101, 114, 118, 
    101, 100,  49,   0,  68, 101, 
    108, 116,  97,  84, 105, 109, 
    101,   0,  67, 111, 108, 111, 
    114,   0,  84, 114,  97, 110, 
    115, 102, 111, 114, 109,   0, 
    102, 108, 111,  97, 116,  52, 
    120,  51,   0, 171,   3,   0, 
      3,   0,   4,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    242,   1,   0,   0, 228,   0, 
      0,   0, 244,   0,   0,   0, 
      0,   0,   0,   0,  24,   1, 
      0,   0, 244,   0,   0,   0, 
      4,   0,   0,   0,  29,   1, 
      0,   0, 244,   0,   0,   0, 
      8,   0,   0,   0,  42,   1, 
      0,   0, 244,   0,   0,   0, 
     12,   0,   0,   0,  55,   1, 
      0,   0, 244,   0,   0,   0, 
     16,   0,   0,   0,  65,   1, 
      0,   0, 244,   0,   0,   0, 
     20,   0,   0,   0,  75,   1, 
      0,   0, 244,   0,   0,   0, 
     24,   0,   0,   0,  86,   1, 
      0,   0, 244,   0,   0,   0, 
     28,   0,   0,   0, 100,   1, 
      0,   0, 244,   0,   0,   0, 
     32,   0,   0,   0, 115,   1, 
      0,   0, 244,   0,   0,   0, 
     36,   0,   0,   0, 130,   1, 
      0,   0, 148,   1,   0,   0, 
     40,   0,   0,   0, 184,   1, 
      0,   0, 148,   1,   0,   0, 
     44,   0,   0,   0, 196,   1, 
      0,   0, 244,   0,   0,   0, 
     48,   0,   0,   0, 206,   1, 
      0,   0, 244,   0,   0,   0, 
     52,   0,   0,   0, 216,   1, 
      0,   0, 148,   1,   0,   0, 
     56,   0,   0,   0, 226,   1, 
      0,   0, 244,   0,   0,   0, 
     60,   0,   0,   0, 232,   1, 
      0,   0, 252,   1,   0,   0, 
     64,   0,   0,   0,   5,   0, 
      0,   0,   1,   0,  28,   0, 
      0,   0,  17,   0,  32,   2, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    216,   0,   0,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  57,  46,  50, 
     57,  46,  57,  53,  50,  46, 
     51,  49,  49,  49,   0, 171, 
    171, 171,  73,  83,  71,  78, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     79,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  83,  72, 
     69,  88, 140,   1,   0,   0, 
     80,   0,   5,   0,  99,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 157,   0, 
      0,   3,   0, 224,  17,   0, 
      0,   0,   0,   0,  95,   0, 
      0,   2,  18,   0,   2,   0, 
    104,   0,   0,   2,   2,   0, 
      0,   0, 155,   0,   0,   4, 
      0,   1,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     30,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     10,   0,   2,   0,  38,   0, 
      0,   8,   0, 208,   0,   0, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,  80,   0,   0,   0, 
     35,   0,   0,  15, 242,   0, 
     16,   0,   1,   0,   0,   0, 
      6,   0,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
     80,   0,   0,   0,  80,   0, 
      0,   0,  80,   0,   0,   0, 
     80,   0,   0,   0,   2,  64, 
      0,   0,  16,   0,   0,   0, 
     32,   0,   0,   0,  48,   0, 
      0,   0,  64,   0,   0,   0, 
    166,   0,   0,  10, 242, 224, 
     17,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 166,   0, 
      0,  10, 242, 224,  17,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 166,   0,   0,  10, 
    242, 224,  17,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    166,   0,   0,  10, 242, 224, 
     17,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 166,   0, 
      0,  10, 242, 224,  17,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 148,   0, 
      0,   0,   9,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};

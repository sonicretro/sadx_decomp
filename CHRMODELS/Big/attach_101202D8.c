#include "../../Structs.h"

static struct Vector3 vec3_10120188[] =
{
    { 1.064355f, -0.856026f, 0.84811f },
    { 1.130479f, -0.776677f, -0.108601f },
    { 0.29051f, -0.888738f, 0.138799f },
    { 0.328275f, -0.617908f, -0.392708f },
    { 1.053955f, 0.818546f, 0.873147f },
    { 1.12252f, 0.736855f, -0.133814f },
    { 0.280706f, 0.835444f, 0.119103f },
    { 0.319852f, 0.562626f, -0.4143f },
    { 1.06717f, 7.8E-05f, 0.942761f },
    { 1.042476f, 0.992136f, 0.33617f },
    { 0.248158f, 0.65195f, 0.682886f },
    { 1.055759f, -1.034679f, 0.370291f },
    { 0.257479f, -0.693501f, 0.664125f },
    { -0.782648f, -0.038596f, -0.176745f }
};

static struct Vector3 vec3_10120230[] =
{
    { -0.298572f, -0.58877f, 0.751136f },
    { 0.160278f, -0.597639f, -0.785582f },
    { -0.365654f, -0.925575f, -0.098024f },
    { -0.086765f, -0.506743f, -0.85772f },
    { -0.302519f, 0.593001f, 0.746212f },
    { 0.141894f, 0.592236f, -0.793172f },
    { -0.378884f, 0.918443f, -0.113617f },
    { -0.103168f, 0.49056f, -0.865279f },
    { -0.274328f, -0.013716f, 0.961538f },
    { -0.181251f, 0.982522f, -0.042406f },
    { -0.510083f, 0.51751f, 0.687022f },
    { -0.174938f, -0.98447f, -0.01468f },
    { -0.501334f, -0.515292f, 0.695081f },
    { -0.970731f, -0.013437f, -0.239791f }
};

static short unsigned int strips_101200D0[] =
{
    15 | 0x8000,
    3, 5, 7, 9, 6, 4, 10, 8, 12, 0, 2, 11, 3, 1, 5,
    5 | 0x8000,
    10, 12, 13, 2, 3,
    5,
    10, 6, 13, 7, 3
};

static struct UV uv_10120108[] =
{
    { 24, 183 },
    { 108, 245 },
    { 101, 182 },
    { 123, 244 },
    { 119, 184 },
    { 113, 245 },
    { 107, 182 },
    { 64, 246 },
    { 20, 182 },
    { 14, 246 },
    { 7, 184 },
    { 3, 245 },
    { 24, 183 },
    { 19, 246 },
    { 108, 245 },
    { 107, 182 },
    { 20, 182 },
    { 59, 130 },
    { 7, 184 },
    { 24, 183 },
    { 107, 182 },
    { 119, 184 },
    { 59, 130 },
    { 101, 182 },
    { 24, 183 }
};

static struct MESH mesh_1012016C[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_101200D0, 0, NULL, NULL, uv_10120108, 0 }
};

static struct MATERIAL mat_101200BC[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000007,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_101202D8 =
{
    vec3_10120188,
    vec3_10120230,
    ARRAYSIZE(vec3_10120188),
    mesh_1012016C,
    mat_101200BC,
    ARRAYSIZE(mesh_1012016C),
    ARRAYSIZE(mat_101200BC),
    { 0.173915f, -0.021272f, 0.264231f },
    1.219159f,
    0
};
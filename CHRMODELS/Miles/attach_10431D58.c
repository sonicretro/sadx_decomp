#include "../../Structs.h"

static struct Vector3 vec3_10431C98[] =
{
    { 0.63285f, -0.228525f, -0.004586f },
    { 0.628926f, -0.003538f, 0.227252f },
    { 4.2E-05f, -0.203926f, -0.005867f },
    { 0.000844f, 0.003199f, 0.219283f },
    { 0.635769f, -0.001341f, -0.240156f },
    { 0.632024f, 0.223645f, -0.004546f },
    { 0.001194f, 0.005399f, -0.24021f },
    { 0.000614f, 0.219241f, -0.005893f }
};

static struct Vector3 vec3_10431CF8[] =
{
    { -0.029914f, -0.999552f, -0.001129f },
    { -0.016666f, -0.012136f, 0.999787f },
    { -0.029875f, -0.999546f, 0.003961f },
    { -0.016597f, -0.00215f, 0.99986f },
    { -0.014278f, -0.006965f, -0.999874f },
    { 0.000975f, 0.999991f, 0.004006f },
    { -0.014035f, 0.003209f, -0.999896f },
    { 0.000924f, 0.99996f, 0.008911f }
};

static short unsigned int strips_10431C38[] =
{
    10,
    2, 1, 3, 5, 7, 4, 6, 0, 2, 1
};

static struct UV uv_10431C50[] =
{
    { 63, 151 },
    { 103, 231 },
    { 103, 151 },
    { 63, 231 },
    { 63, 151 },
    { 23, 231 },
    { 23, 151 },
    { 63, 231 },
    { 63, 151 },
    { 103, 231 }
};

static struct MESH mesh_10431C78[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_10431C38, 0, NULL, NULL, uv_10431C50, 0 }
};

static struct MATERIAL mat_10431C24[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000003,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_10431D58 =
{
    vec3_10431C98,
    vec3_10431CF8,
    ARRAYSIZE(vec3_10431C98),
    mesh_10431C78,
    mat_10431C24,
    ARRAYSIZE(mesh_10431C78),
    ARRAYSIZE(mat_10431C24),
    { 0.317906f, -0.00244f, -0.006479f },
    0.419204f,
    0
};

#include "../../Structs.h"

static struct Vector3 vec3_1020CB78[] =
{
    { -3.030452f, -18.0f, 0.276258f },
    { -1.754472f, -18.0f, 2.48632f },
    { -1.584261f, 0.0f, 2.245109f },
    { -2.736452f, 0.0f, 0.249457f },
    { 3.030452f, -18.0f, -0.276258f },
    { 1.754472f, -18.0f, -2.48632f },
    { 1.584261f, 0.0f, -2.245109f },
    { 2.736452f, 0.0f, -0.249457f },
    { 1.754474f, -18.0f, 2.48632f },
    { 3.030452f, -18.0f, 0.276258f },
    { 2.736452f, 0.0f, 0.249457f },
    { 1.584263f, 0.0f, 2.245109f },
    { -1.275979f, -18.0f, 2.762578f },
    { 1.275982f, -18.0f, 2.762578f },
    { 1.152192f, 0.0f, 2.494565f },
    { -1.15219f, 0.0f, 2.494566f },
    { 1.27598f, -18.0f, -2.762578f },
    { -1.275981f, -18.0f, -2.762578f },
    { -1.152191f, 0.0f, -2.494565f },
    { 1.15219f, 0.0f, -2.494566f },
    { -1.754473f, -18.0f, -2.48632f },
    { -3.030452f, -18.0f, -0.276257f },
    { -2.736452f, 0.0f, -0.249456f },
    { -1.584262f, 0.0f, -2.245109f }
};

static struct Vector3 vec3_1020CC98[] =
{
    { -0.865929f, 0.014888f, 0.499945f },
    { -0.865929f, 0.014888f, 0.499945f },
    { -0.865929f, 0.014888f, 0.499945f },
    { -0.865929f, 0.014888f, 0.499945f },
    { 0.865929f, 0.014888f, -0.499945f },
    { 0.865929f, 0.014888f, -0.499945f },
    { 0.865929f, 0.014888f, -0.499945f },
    { 0.865929f, 0.014888f, -0.499945f },
    { 0.86593f, 0.014888f, 0.499944f },
    { 0.86593f, 0.014888f, 0.499944f },
    { 0.86593f, 0.014888f, 0.499944f },
    { 0.86593f, 0.014888f, 0.499944f },
    { 0.0f, 0.014888f, 0.999889f },
    { 0.0f, 0.014888f, 0.999889f },
    { 0.0f, 0.014888f, 0.999889f },
    { 0.0f, 0.014888f, 0.999889f },
    { 0.0f, 0.014888f, -0.999889f },
    { 0.0f, 0.014888f, -0.999889f },
    { 0.0f, 0.014888f, -0.999889f },
    { 0.0f, 0.014888f, -0.999889f },
    { -0.86593f, 0.014888f, -0.499944f },
    { -0.86593f, 0.014888f, -0.499944f },
    { -0.86593f, 0.014888f, -0.499944f },
    { -0.86593f, 0.014888f, -0.499944f }
};

static short unsigned int quads_1020CAC4[] =
{
    0, 1, 3, 2,
    4, 5, 7, 6,
    8, 9, 11, 10,
    12, 13, 15, 14,
    16, 17, 19, 18,
    20, 21, 23, 22
};

static struct UV uv_1020CAF8[] =
{
    { 251, 255 },
    { 0, 255 },
    { 251, 3 },
    { 0, 3 },
    { 251, 255 },
    { 0, 255 },
    { 251, 3 },
    { 0, 3 },
    { 251, 255 },
    { 0, 255 },
    { 251, 3 },
    { 0, 3 },
    { 251, 255 },
    { 0, 255 },
    { 251, 3 },
    { 0, 3 },
    { 251, 255 },
    { 0, 255 },
    { 251, 3 },
    { 0, 3 },
    { 251, 255 },
    { 0, 255 },
    { 251, 3 },
    { 0, 3 }
};

static struct MESH mesh_1020CB58[] =
{
    { 0 | MeshPolyType_Quads, 6, quads_1020CAC4, 0, NULL, NULL, uv_1020CAF8, 0 }
};

static struct MATERIAL mat_1020CAB0[] =
{
    {
        0xFFACACAC,
        0xFFFFFFFF,
        11.0f,
        0x00000023,
        0x8400,
        0xB1,
        0x26
    }
};

struct ATTACH attach_1020CDB8 =
{
    vec3_1020CB78,
    vec3_1020CC98,
    ARRAYSIZE(vec3_1020CB78),
    mesh_1020CB58,
    mat_1020CAB0,
    ARRAYSIZE(mesh_1020CB58),
    ARRAYSIZE(mat_1020CAB0),
    { 0.0f, -9.0f, 0.0f },
    9.496507f,
    0
};

#include "../../Structs.h"

static struct Vector3 vec3_102F7CB0[] =
{
    { 0.953224f, -0.934283f, -0.684814f },
    { 0.996558f, -0.972116f, 0.28368f },
    { 0.005243f, -0.609089f, -0.284351f },
    { 0.042658f, -0.626563f, 0.476986f },
    { 0.96168f, 0.909454f, -0.704685f },
    { 1.00546f, 0.969749f, 0.262648f },
    { 0.016052f, 0.525623f, -0.299467f },
    { 0.050904f, 0.568859f, 0.464199f },
    { 0.960445f, -0.09964f, -0.979087f }
};

static struct Vector3 vec3_102F7D20[] =
{
    { -0.473996f, -0.700096f, -0.534035f },
    { -0.16601f, -0.790012f, 0.590188f },
    { -0.794224f, -0.484535f, -0.366654f },
    { -0.576793f, -0.463422f, 0.672718f },
    { -0.504901f, 0.672098f, -0.541626f },
    { -0.216053f, 0.80339f, 0.554874f },
    { -0.800725f, 0.459208f, -0.384666f },
    { -0.579026f, 0.466318f, 0.668788f },
    { -0.512612f, -0.026102f, -0.858223f }
};

static short unsigned int strips_102F7C30[] =
{
    4,
    2, 3, 6, 7,
    11 | 0x8000,
    1, 0, 2, 8, 6, 4, 7, 5, 3, 1, 2
};

static struct UV uv_102F7C54[] =
{
    { 207, 207 },
    { 207, 207 },
    { 47, 207 },
    { 47, 207 },
    { 247, 7 },
    { 247, 7 },
    { 207, 207 },
    { 127, 7 },
    { 47, 207 },
    { 7, 7 },
    { 47, 207 },
    { 7, 7 },
    { 207, 207 },
    { 247, 7 },
    { 207, 207 }
};

static struct MESH mesh_102F7C90[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_102F7C30, 0, NULL, NULL, uv_102F7C54, 0 }
};

static struct MATERIAL mat_102F7C1C[] =
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

struct ATTACH attach_102F7D8C =
{
    vec3_102F7CB0,
    vec3_102F7D20,
    ARRAYSIZE(vec3_102F7CB0),
    mesh_102F7C90,
    mat_102F7C1C,
    ARRAYSIZE(mesh_102F7C90),
    ARRAYSIZE(mat_102F7C1C),
    { 0.505352f, -0.001183f, -0.25105f },
    1.199411f,
    0
};
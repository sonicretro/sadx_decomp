#include "../../Structs.h"

static struct Vector3 vec3_1000E988[] =
{
    { 0.736365f, -0.156802f, 0.007476f },
    { 0.739043f, 0.002705f, 0.172484f },
    { -0.080482f, -0.119353f, 0.0f },
    { -0.084884f, 0.011223f, 0.145399f },
    { 0.737609f, 0.004346f, -0.159109f },
    { 0.740277f, 0.157382f, 0.005898f },
    { 0.050382f, 0.009498f, -0.134639f },
    { -0.078543f, 0.143153f, 0.0f }
};

static struct Vector3 vec3_1000E9E8[] =
{
    { -0.038975f, -0.999224f, -0.005683f },
    { -0.035047f, 0.005366f, 0.999371f },
    { -0.644938f, -0.755062f, -0.11805f },
    { -0.596189f, 0.009042f, 0.802793f },
    { -0.032758f, 0.004969f, -0.999451f },
    { -0.025448f, 0.999644f, -0.008067f },
    { -0.242858f, 0.002867f, -0.970058f },
    { -0.630225f, 0.767351f, -0.118279f }
};

static short unsigned int strips_1000E914[] =
{
    10,
    0, 6, 4, 7, 5, 3, 1, 2, 0, 6,
    4,
    6, 2, 7, 3
};

static struct UV uv_1000E934[] =
{
    { 116, 134 },
    { 104, 125 },
    { 116, 126 },
    { 101, 117 },
    { 116, 118 },
    { 101, 125 },
    { 116, 126 },
    { 101, 133 },
    { 116, 134 },
    { 104, 125 },
    { 104, 125 },
    { 101, 133 },
    { 101, 117 },
    { 101, 125 }
};

static struct MESH mesh_1000E96C[] =
{
    { 0 | MeshPolyType_StripsB, 2, strips_1000E914, 0, NULL, NULL, uv_1000E934, 0 }
};

static struct MATERIAL mat_1000E900[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000008,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1000EA48 =
{
    vec3_1000E988,
    vec3_1000E9E8,
    ARRAYSIZE(vec3_1000E988),
    mesh_1000E96C,
    mat_1000E900,
    ARRAYSIZE(mesh_1000E96C),
    ARRAYSIZE(mat_1000E900),
    { 0.327697f, 0.00029f, 0.006687f },
    0.44425f,
    0
};

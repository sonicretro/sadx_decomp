#include "../../Structs.h"

static struct Vector3 vec3_10423080[] =
{
    { 0.624114f, -0.229091f, 0.002116f },
    { 0.621142f, -0.004114f, -0.229746f },
    { -0.008686f, -0.204291f, 0.000992f },
    { -0.006964f, 0.002822f, -0.224163f },
    { 0.62621f, -0.001896f, 0.237685f },
    { 0.623431f, 0.223079f, 0.002052f },
    { -0.008359f, 0.005045f, 0.235328f },
    { -0.007981f, 0.218876f, 0.001f }
};

static struct Vector3 vec3_104230E0[] =
{
    { -0.030235f, -0.999542f, 0.001062f },
    { -0.012872f, -0.012179f, -0.999843f },
    { -0.030177f, -0.999536f, -0.004028f },
    { -0.0128f, -0.002192f, -0.999916f },
    { -0.018078f, -0.006913f, 0.999813f },
    { 0.001307f, 0.999991f, -0.004049f },
    { -0.017832f, 0.003261f, 0.999836f },
    { 0.001275f, 0.999959f, -0.008954f }
};

static short unsigned int strips_10423020[] =
{
    10,
    5, 6, 4, 2, 0, 3, 1, 7, 5, 6
};

static struct UV uv_10423038[] =
{
    { 63, 231 },
    { 23, 151 },
    { 23, 231 },
    { 63, 151 },
    { 63, 231 },
    { 103, 151 },
    { 103, 231 },
    { 63, 151 },
    { 63, 231 },
    { 23, 151 }
};

static struct MESH mesh_10423060[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_10423020, 0, NULL, NULL, uv_10423038, 0 }
};

static struct MATERIAL mat_1042300C[] =
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

struct ATTACH attach_10423140 =
{
    vec3_10423080,
    vec3_104230E0,
    ARRAYSIZE(vec3_10423080),
    mesh_10423060,
    mat_1042300C,
    ARRAYSIZE(mesh_10423060),
    ARRAYSIZE(mat_1042300C),
    { 0.308762f, -0.003006f, 0.00397f },
    0.419204f,
    0
};
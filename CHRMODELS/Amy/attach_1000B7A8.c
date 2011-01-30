#include "../../Structs.h"

static struct Vector3 vec3_1000B6E8[] =
{
    { 1.076591f, -0.021262f, 0.226856f },
    { 1.077603f, -0.313814f, -0.041183f },
    { -0.110585f, -0.062161f, 0.246431f },
    { -0.113236f, -0.311745f, 0.012047f },
    { 1.077457f, 0.251617f, -0.04305f },
    { 1.078043f, -0.023421f, -0.296316f },
    { -0.10701f, 0.20514f, 0.010549f },
    { -0.109052f, -0.063766f, -0.216974f }
};

static struct Vector3 vec3_1000B748[] =
{
    { 0.013254f, 0.017475f, 0.999759f },
    { 0.002544f, -0.999553f, -0.029784f },
    { 0.014363f, -0.017647f, 0.999741f },
    { 0.004332f, -0.999874f, 0.015284f },
    { -0.053688f, 0.997888f, -0.036565f },
    { -0.058426f, 0.00949f, -0.998247f },
    { -0.052232f, 0.998602f, 0.008068f },
    { -0.057586f, -0.024343f, -0.998044f }
};

static short unsigned int strips_1000B65C[] =
{
    4,
    1, 0, 3, 2,
    4,
    5, 1, 7, 3,
    4,
    4, 5, 6, 7,
    4,
    0, 4, 2, 6
};

static struct UV uv_1000B688[] =
{
    { 123, 149 },
    { 131, 149 },
    { 123, 137 },
    { 131, 137 },
    { 123, 149 },
    { 131, 149 },
    { 123, 137 },
    { 131, 137 },
    { 123, 149 },
    { 131, 149 },
    { 123, 137 },
    { 131, 137 },
    { 123, 149 },
    { 131, 149 },
    { 123, 137 },
    { 131, 137 }
};

static struct MESH mesh_1000B6C8[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_1000B65C, 0, NULL, NULL, uv_1000B688, 0 }
};

static struct MATERIAL mat_1000B648[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000E,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1000B7A8 =
{
    vec3_1000B6E8,
    vec3_1000B748,
    ARRAYSIZE(vec3_1000B6E8),
    mesh_1000B6C8,
    mat_1000B648,
    ARRAYSIZE(mesh_1000B6C8),
    ARRAYSIZE(mat_1000B648),
    { 0.482403f, -0.031098f, -0.024943f },
    0.654547f,
    0
};
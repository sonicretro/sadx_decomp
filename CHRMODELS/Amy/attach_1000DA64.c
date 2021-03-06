#include "../../Structs.h"

static struct Vector3 vec3_1000D8F8[] =
{
    { 0.168519f, -0.491502f, -0.618198f },
    { 0.13221f, -0.343887f, -0.677776f },
    { -0.066523f, -0.491987f, -0.746106f },
    { -0.054453f, -0.342265f, -0.801256f },
    { -0.164478f, -0.273209f, 0.075653f },
    { -0.158004f, 0.201863f, 0.013796f },
    { -0.633408f, -0.057894f, -0.014496f },
    { -0.512067f, 0.099466f, -0.236775f },
    { -0.328781f, -0.49343f, -0.392154f },
    { -0.02646f, -0.505967f, -0.211562f },
    { -0.283112f, -0.317538f, -0.475367f },
    { 0.01006f, -0.313945f, -0.329205f },
    { -0.152299f, -0.529856f, -0.310333f },
    { -0.391799f, 0.01258f, 0.142789f },
    { -0.329944f, -0.295277f, -0.009061f }
};

static struct Vector3 vec3_1000D9B0[] =
{
    { 0.848357f, -0.506641f, -0.153638f },
    { 0.731699f, 0.545759f, -0.408367f },
    { -0.187965f, -0.667593f, -0.720409f },
    { -0.105546f, 0.461502f, -0.880838f },
    { 0.385473f, -0.406221f, 0.82849f },
    { 0.854113f, 0.511489f, 0.094185f },
    { -0.839294f, -0.517831f, 0.165637f },
    { -0.338984f, 0.320058f, -0.884677f },
    { -0.689703f, -0.700192f, -0.184504f },
    { 0.513391f, -0.679375f, 0.524288f },
    { -0.519307f, 0.42792f, -0.739732f },
    { 0.833665f, 0.548242f, 0.066582f },
    { -0.135913f, -0.969078f, 0.20595f },
    { -0.018143f, -0.233518f, 0.972183f },
    { -0.392756f, -0.693675f, 0.603786f }
};

static short unsigned int strips_1000D800[] =
{
    3,
    6, 7, 10,
    5 | 0x8000,
    8, 14, 12, 4, 9,
    16,
    11, 5, 4, 13, 14, 6, 8, 10, 2, 3, 0, 1, 11, 10, 5, 7,
    3,
    1, 3, 10,
    7 | 0x8000,
    4, 11, 9, 0, 12, 2, 8
};

static struct UV uv_1000D850[] =
{
    { 15, 3 },
    { 51, 3 },
    { 51, 139 },
    { 15, 139 },
    { 3, 79 },
    { 3, 139 },
    { 15, 79 },
    { 15, 139 },
    { 67, 139 },
    { 67, 3 },
    { 15, 79 },
    { 3, 3 },
    { 3, 79 },
    { 15, 3 },
    { 15, 139 },
    { 51, 139 },
    { 3, 247 },
    { 51, 247 },
    { 3, 251 },
    { 67, 251 },
    { 67, 139 },
    { 51, 139 },
    { 67, 3 },
    { 51, 3 },
    { 67, 251 },
    { 51, 247 },
    { 51, 139 },
    { 15, 79 },
    { 67, 139 },
    { 15, 139 },
    { 3, 251 },
    { 3, 139 },
    { 3, 247 },
    { 15, 139 }
};

static struct MESH mesh_1000D8D8[] =
{
    { 0 | MeshPolyType_StripsB, 5, strips_1000D800, 0, NULL, NULL, uv_1000D850, 0 }
};

static struct MATERIAL mat_1000D7E8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000A,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1000DA64 =
{
    vec3_1000D8F8,
    vec3_1000D9B0,
    ARRAYSIZE(vec3_1000D8F8),
    mesh_1000D8D8,
    mat_1000D7E8,
    ARRAYSIZE(mesh_1000D8D8),
    ARRAYSIZE(mat_1000D7E8),
    { -0.232444f, -0.163997f, -0.329233f },
    0.621197f,
    0
};

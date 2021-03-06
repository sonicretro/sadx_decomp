#include "../../Structs.h"

static struct Vector3 vec3_1056DD28[] =
{
    { 1.060602f, -0.44143f, -0.353089f },
    { 1.072282f, 0.236176f, -0.353063f },
    { 0.528252f, -0.436327f, -0.387097f },
    { 0.540514f, 0.254906f, -0.36652f },
    { 1.063704f, -0.599416f, 0.221002f },
    { 1.079769f, 0.397937f, 0.222701f },
    { 0.531194f, -0.61628f, 0.227899f },
    { 0.548917f, 0.435623f, 0.229323f },
    { 0.538121f, -0.286971f, 0.069862f },
    { 0.539577f, -0.058902f, -0.144594f },
    { 0.087233f, -0.282293f, 0.072744f },
    { 0.08869f, -0.054224f, -0.141711f },
    { 0.543913f, -0.070374f, 0.300132f },
    { 0.545369f, 0.157695f, 0.085677f },
    { 0.093025f, -0.065696f, 0.303015f },
    { 0.094482f, 0.162373f, 0.088559f },
    { 1.075648f, -0.114521f, 0.577501f },
    { 0.544132f, -0.102565f, 0.594069f },
    { 0.698153f, -0.108176f, 0.661751f },
    { 0.704188f, 0.504683f, 0.230082f },
    { 0.682129f, -0.689771f, 0.228494f },
    { 0.678659f, -0.485418f, -0.469877f },
    { 0.69381f, 0.299491f, -0.446529f }
};

static struct Vector3 vec3_1056DE40[] =
{
    { 0.693597f, -0.459392f, -0.554871f },
    { 0.713223f, 0.422037f, -0.55964f },
    { -0.800022f, -0.363073f, -0.477642f },
    { -0.786727f, 0.401268f, -0.46909f },
    { 0.675536f, -0.692918f, 0.252023f },
    { 0.698079f, 0.666487f, 0.26169f },
    { -0.765312f, -0.591069f, 0.254824f },
    { -0.741839f, 0.617229f, 0.262113f },
    { -0.010555f, -0.999523f, -0.029017f },
    { -0.006044f, 0.033245f, -0.999429f },
    { -0.010574f, -0.999424f, -0.032251f },
    { -0.006098f, 0.028137f, -0.999585f },
    { 0.006098f, -0.028137f, 0.999585f },
    { 0.010574f, 0.999424f, 0.032251f },
    { 0.006044f, -0.033245f, 0.999429f },
    { 0.010555f, 0.999523f, 0.029017f },
    { 0.677779f, -0.022354f, 0.734926f },
    { -0.725754f, 0.007871f, 0.687909f },
    { -0.067947f, -0.013238f, 0.997601f },
    { -0.071353f, 0.949975f, 0.304066f },
    { -0.108516f, -0.948681f, 0.297034f },
    { -0.119697f, -0.574092f, -0.809994f },
    { -0.095312f, 0.593863f, -0.798901f }
};

static short unsigned int strips_1056DB90[] =
{
    10,
    11, 8, 10, 12, 14, 13, 15, 9, 11, 8
};

static struct UV uv_1056DC08[] =
{
    { 50, 145 },
    { 123, 181 },
    { 51, 183 },
    { 122, 143 },
    { 50, 145 },
    { 122, 106 },
    { 49, 107 },
    { 123, 144 },
    { 50, 145 },
    { 123, 181 }
};

static short unsigned int strips_1056DBA8[] =
{
    6 | 0x8000,
    3, 2, 22, 21, 1, 0,
    5 | 0x8000,
    16, 5, 4, 1, 0,
    6 | 0x8000,
    16, 4, 18, 20, 17, 6,
    6 | 0x8000,
    4, 0, 20, 21, 6, 2,
    6 | 0x8000,
    1, 5, 22, 19, 3, 7,
    6 | 0x8000,
    17, 7, 18, 19, 16, 5
};

static struct UV uv_1056DC30[] =
{
    { 247, 7 },
    { 7, 7 },
    { 247, 71 },
    { 7, 71 },
    { 247, 247 },
    { 7, 247 },
    { 7, 247 },
    { 7, 247 },
    { 7, 247 },
    { 7, 247 },
    { 7, 247 },
    { 7, 247 },
    { 247, 247 },
    { 7, 71 },
    { 247, 71 },
    { 7, 7 },
    { 247, 7 },
    { 7, 247 },
    { 247, 247 },
    { 7, 71 },
    { 247, 71 },
    { 7, 7 },
    { 247, 7 },
    { 7, 247 },
    { 247, 247 },
    { 7, 71 },
    { 247, 71 },
    { 7, 7 },
    { 247, 7 },
    { 247, 7 },
    { 7, 7 },
    { 247, 71 },
    { 7, 71 },
    { 247, 247 },
    { 7, 247 }
};

static short unsigned int strips_1056DBFC[] =
{
    5 | 0x8000,
    3, 7, 2, 17, 6
};

static struct UV uv_1056DCBC[] =
{
    { 207, 7 },
    { 55, 7 },
    { 247, 175 },
    { 7, 175 },
    { 135, 247 }
};

static struct MESH mesh_1056DCD0[] =
{
    { 0 | MeshPolyType_StripsB, 1, strips_1056DB90, 0, NULL, NULL, uv_1056DC08, 0 },
    { 1 | MeshPolyType_StripsB, 6, strips_1056DBA8, 0, NULL, NULL, uv_1056DC30, 0 },
    { 2 | MeshPolyType_StripsB, 1, strips_1056DBFC, 0, NULL, NULL, uv_1056DCBC, 0 }
};

static struct MATERIAL mat_1056DB54[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000A,
        0xA400,
        0x29,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000004,
        0xA400,
        0x29,
        0x94
    },
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000002,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1056DF54 =
{
    vec3_1056DD28,
    vec3_1056DE40,
    ARRAYSIZE(vec3_1056DD28),
    mesh_1056DCD0,
    mat_1056DB54,
    ARRAYSIZE(mesh_1056DCD0),
    ARRAYSIZE(mat_1056DB54),
    { 0.583501f, -0.092544f, 0.095937f },
    0.810728f,
    0
};

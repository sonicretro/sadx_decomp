#include "../../Structs.h"

static struct Vector3 vec3_10015EF8[] =
{
    { 1.941219f, 0.043989f, 0.123999f },
    { 1.95634f, 0.141062f, 0.012359f },
    { 1.9498f, 0.043031f, -0.117198f },
    { 1.934945f, -0.216765f, -0.177214f },
    { 1.865339f, -0.518034f, -0.140807f },
    { 1.839788f, -0.625692f, -0.018082f },
    { 1.856104f, -0.525884f, 0.106486f },
    { 1.921163f, -0.229735f, 0.169324f },
    { 1.934482f, -0.230068f, 0.129029f },
    { 1.948219f, -0.22682f, 0.005337f },
    { 1.945418f, -0.221807f, -0.123863f },
    { 1.843542f, -0.601015f, 0.053254f },
    { 1.847671f, -0.6007f, -0.086504f },
    { 1.956536f, 0.119132f, -0.059538f },
    { 1.952152f, 0.121456f, 0.077326f },
    { 1.925329f, -0.083086f, 0.15744f },
    { 1.880499f, -0.403096f, 0.14581f },
    { 1.892743f, -0.394335f, -0.170754f },
    { 1.938198f, -0.08144f, -0.157134f },
    { 1.950119f, -0.224718f, -0.0664f },
    { 1.943969f, -0.22955f, 0.074306f }
};

static struct Vector3 vec3_10015FF8[] =
{
    { 0.979083f, -0.019666f, 0.202507f },
    { 0.998992f, -0.02279f, 0.038678f },
    { 0.993853f, -0.012711f, -0.10998f },
    { 0.970153f, -0.122562f, -0.20924f },
    { 0.96297f, -0.254489f, -0.089023f },
    { 0.964092f, -0.263853f, 0.030143f },
    { 0.950885f, -0.263823f, 0.161908f },
    { 0.936666f, -0.1363f, 0.322614f },
    { 0.958564f, -0.139785f, 0.248226f },
    { 0.988985f, -0.143835f, 0.034925f },
    { 0.980488f, -0.131148f, -0.146437f },
    { 0.961823f, -0.264692f, 0.069536f },
    { 0.965155f, -0.261538f, -0.008553f },
    { 0.999749f, -0.020376f, -0.00926f },
    { 0.995903f, -0.02265f, 0.087541f },
    { 0.91374f, -0.007351f, 0.406232f },
    { 0.937098f, -0.260566f, 0.232275f },
    { 0.960395f, -0.244925f, -0.132866f },
    { 0.959954f, 0.000407f, -0.280158f },
    { 0.989498f, -0.140349f, -0.034573f },
    { 0.98311f, -0.14501f, 0.111657f }
};

static short unsigned int strips_10015E10[] =
{
    3,
    4, 17, 3,
    3,
    0, 15, 7,
    13 | 0x8000,
    18, 3, 10, 4, 19, 12, 9, 5, 20, 11, 8, 6, 16,
    13,
    18, 2, 10, 13, 19, 1, 9, 14, 20, 0, 8, 7, 16
};

static struct UV uv_10015E58[] =
{
    { 211, 32 },
    { 238, 74 },
    { 247, 127 },
    { 43, 217 },
    { 16, 174 },
    { 7, 127 },
    { 238, 174 },
    { 247, 127 },
    { 211, 127 },
    { 211, 32 },
    { 174, 127 },
    { 174, 16 },
    { 127, 127 },
    { 127, 7 },
    { 80, 127 },
    { 80, 16 },
    { 43, 127 },
    { 43, 32 },
    { 16, 74 },
    { 238, 174 },
    { 211, 217 },
    { 211, 127 },
    { 174, 233 },
    { 174, 127 },
    { 127, 241 },
    { 127, 127 },
    { 80, 233 },
    { 80, 127 },
    { 43, 217 },
    { 43, 127 },
    { 7, 127 },
    { 16, 74 }
};

static struct MESH mesh_10015ED8[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_10015E10, 0, NULL, NULL, uv_10015E58, 0 }
};

static struct MATERIAL mat_10015DF8[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x00000007,
        0xA400,
        0x21,
        0x94
    }
};

struct ATTACH attach_100160F4 =
{
    vec3_10015EF8,
    vec3_10015FF8,
    ARRAYSIZE(vec3_10015EF8),
    mesh_10015ED8,
    mat_10015DF8,
    ARRAYSIZE(mesh_10015ED8),
    ARRAYSIZE(mat_10015DF8),
    { 1.898162f, -0.242315f, -0.003945f },
    0.421344f,
    0
};
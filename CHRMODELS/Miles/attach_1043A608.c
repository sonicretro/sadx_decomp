#include "../../Structs.h"

static struct Vector3 vec3_1043A458[] =
{
    { 1.677469f, -0.848766f, -0.749637f },
    { 1.678389f, -0.848753f, 0.749648f },
    { 0.313059f, -0.848763f, -0.399142f },
    { 0.313642f, -0.848754f, 0.580254f },
    { 1.677469f, 0.550601f, -0.749648f },
    { 1.678389f, 0.550645f, 0.749637f },
    { 0.167011f, 0.550567f, -0.353046f },
    { 0.16755f, 0.550575f, 0.559465f },
    { 1.680095f, 0.967445f, -0.523181f },
    { 1.680664f, 0.967453f, 0.56981f },
    { 1.675379f, 1.150501f, -0.007252f },
    { 0.62526f, 1.051134f, 0.006711f },
    { 0.919013f, -0.848764f, -0.684818f },
    { 0.804519f, 0.550584f, -0.672623f },
    { 0.735884f, 0.863476f, -0.521731f },
    { 0.736438f, 0.863485f, 0.578709f },
    { 0.805248f, 0.55061f, 0.711514f },
    { 0.919764f, -0.848754f, 0.746684f }
};

static struct Vector3 vec3_1043A530[] =
{
    { 0.675563f, -6E-06f, -0.737303f },
    { 0.69837f, 6E-06f, 0.715737f },
    { -0.830308f, -0.068441f, -0.553086f },
    { -0.768668f, -0.070805f, 0.635717f },
    { 0.625889f, 0.188483f, -0.756794f },
    { 0.652709f, 0.151132f, 0.742381f },
    { -0.83334f, 0.297739f, -0.465721f },
    { -0.773856f, 0.310304f, 0.55214f },
    { 0.60306f, 0.612158f, -0.511451f },
    { 0.599245f, 0.60165f, 0.52813f },
    { 0.594883f, 0.803664f, -0.015427f },
    { -0.387962f, 0.921429f, -0.021318f },
    { -0.257508f, -0.007755f, -0.966245f },
    { -0.251143f, 0.206022f, -0.945771f },
    { -0.290211f, 0.690305f, -0.662764f },
    { -0.222357f, 0.709131f, 0.669097f },
    { -0.131121f, 0.18565f, 0.973828f },
    { -0.131503f, -0.005476f, 0.991301f }
};

static short unsigned int strips_1043A338[] =
{
    5 | 0x8000,
    16, 17, 7, 3, 2,
    5 | 0x8000,
    14, 6, 13, 2, 12,
    10,
    2, 7, 6, 11, 14, 8, 13, 4, 12, 0,
    7 | 0x8000,
    0, 1, 4, 5, 8, 9, 10,
    9,
    17, 1, 16, 5, 15, 9, 11, 10, 8,
    4,
    16, 15, 7, 11
};

static struct UV uv_1043A398[] =
{
    { 213, 54 },
    { 116, 63 },
    { 213, 2 },
    { 112, 14 },
    { 112, 14 },
    { 230, 48 },
    { 213, 2 },
    { 213, 54 },
    { 112, 14 },
    { 116, 63 },
    { 112, 14 },
    { 213, 2 },
    { 213, 2 },
    { 243, 39 },
    { 230, 48 },
    { 238, 125 },
    { 213, 54 },
    { 213, 125 },
    { 116, 63 },
    { 116, 125 },
    { 113, 132 },
    { 114, 251 },
    { 210, 132 },
    { 211, 251 },
    { 239, 150 },
    { 239, 237 },
    { 252, 191 },
    { 116, 63 },
    { 116, 125 },
    { 213, 54 },
    { 213, 125 },
    { 230, 48 },
    { 238, 125 },
    { 243, 39 },
    { 250, 125 },
    { 238, 125 },
    { 213, 54 },
    { 230, 48 },
    { 213, 2 },
    { 243, 39 }
};

static struct MESH mesh_1043A438[] =
{
    { 0 | MeshPolyType_StripsB, 6, strips_1043A338, 0, NULL, NULL, uv_1043A398, 0 }
};

static struct MATERIAL mat_1043A320[] =
{
    {
        0xFFB2B2B2,
        0x00FFFFFF,
        11.0f,
        0x0000000B,
        0xA400,
        0x29,
        0x94
    }
};

struct ATTACH attach_1043A608 =
{
    vec3_1043A458,
    vec3_1043A530,
    ARRAYSIZE(vec3_1043A458),
    mesh_1043A438,
    mat_1043A320,
    ARRAYSIZE(mesh_1043A438),
    ARRAYSIZE(mat_1043A320),
    { 0.923838f, 0.150868f, 0.0f },
    1.641931f,
    0
};
#include "../../Structs.h"

static struct Vector3 vec3_10015B00[] =
{
    { 1.939367f, 0.044085f, -0.123203f },
    { 1.95449f, 0.141158f, -0.011563f },
    { 1.947899f, 0.043132f, 0.117996f },
    { 1.932964f, -0.216659f, 0.178015f },
    { 1.863288f, -0.517911f, 0.141602f },
    { 1.837734f, -0.625566f, 0.018875f },
    { 1.854101f, -0.525765f, -0.105692f },
    { 1.919249f, -0.229634f, -0.168524f },
    { 1.93256f, -0.22997f, -0.128227f },
    { 1.946273f, -0.226723f, -0.004532f },
    { 1.943446f, -0.221705f, 0.124666f },
    { 1.878536f, -0.402984f, -0.145015f },
    { 1.841509f, -0.600892f, -0.052461f },
    { 1.84561f, -0.600574f, 0.087297f },
    { 1.890717f, -0.394218f, 0.171552f },
    { 1.936256f, -0.081336f, 0.157933f },
    { 1.954666f, 0.119229f, 0.060336f },
    { 1.95031f, 0.121551f, -0.076529f },
    { 1.923452f, -0.082987f, -0.156644f },
    { 1.942036f, -0.229453f, -0.073503f },
    { 1.948158f, -0.224619f, 0.067205f }
};

static struct Vector3 vec3_10015C00[] =
{
    { 0.97912f, -0.019925f, -0.202305f },
    { 0.998994f, -0.023049f, -0.038473f },
    { 0.993827f, -0.012965f, 0.110184f },
    { 0.970078f, -0.122807f, 0.209444f },
    { 0.962886f, -0.254734f, 0.089227f },
    { 0.96403f, -0.264103f, -0.029939f },
    { 0.950851f, -0.264073f, -0.161705f },
    { 0.936699f, -0.13655f, -0.322412f },
    { 0.958579f, -0.140039f, -0.248022f },
    { 0.988955f, -0.144092f, -0.034719f },
    { 0.980424f, -0.131397f, 0.146643f },
    { 0.93708f, -0.260814f, -0.232071f },
    { 0.961769f, -0.264942f, -0.069333f },
    { 0.965086f, -0.261787f, 0.008759f },
    { 0.960304f, -0.245169f, 0.133075f },
    { 0.959897f, 0.000167f, 0.280355f },
    { 0.999742f, -0.020634f, 0.009466f },
    { 0.995915f, -0.022909f, -0.087337f },
    { 0.913825f, -0.007599f, -0.406038f },
    { 0.983095f, -0.145267f, -0.111452f },
    { 0.989455f, -0.140604f, 0.034779f }
};

static short unsigned int strips_10015A18[] =
{
    13,
    14, 4, 10, 13, 20, 5, 9, 12, 19, 6, 8, 7, 18,
    13,
    18, 0, 8, 17, 19, 1, 9, 16, 20, 2, 10, 3, 14,
    3,
    6, 11, 7,
    3,
    2, 15, 3
};

static struct UV uv_10015A60[] =
{
    { 20, 78 },
    { 45, 42 },
    { 43, 127 },
    { 83, 18 },
    { 84, 127 },
    { 127, 12 },
    { 127, 127 },
    { 169, 19 },
    { 170, 127 },
    { 211, 43 },
    { 211, 127 },
    { 242, 127 },
    { 235, 172 },
    { 235, 172 },
    { 211, 211 },
    { 211, 127 },
    { 170, 232 },
    { 170, 127 },
    { 127, 242 },
    { 127, 127 },
    { 82, 233 },
    { 84, 127 },
    { 42, 207 },
    { 43, 127 },
    { 12, 127 },
    { 20, 78 },
    { 211, 43 },
    { 233, 85 },
    { 242, 127 },
    { 42, 207 },
    { 20, 170 },
    { 12, 127 }
};

static struct MESH mesh_10015AE0[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_10015A18, 0, NULL, NULL, uv_10015A60, 0 }
};

static struct MATERIAL mat_10015A00[] =
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

struct ATTACH attach_10015CFC =
{
    vec3_10015B00,
    vec3_10015C00,
    ARRAYSIZE(vec3_10015B00),
    mesh_10015AE0,
    mat_10015A00,
    ARRAYSIZE(mesh_10015AE0),
    ARRAYSIZE(mat_10015A00),
    { 1.8962f, -0.242204f, 0.004745f },
    0.421344f,
    0
};
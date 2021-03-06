#include "../../Structs.h"

static struct Vector3 vec3_10681B38[] =
{
    { 0.682264f, -0.556134f, 0.979338f },
    { 1.165262f, -0.925918f, -0.280795f },
    { 0.028343f, -0.386389f, 0.430185f },
    { 0.313357f, -0.628081f, -0.332307f },
    { 0.70599f, 0.982599f, 0.607204f },
    { 1.190183f, 0.590135f, -0.64716f },
    { 0.028849f, 0.5422f, 0.185243f },
    { 0.320931f, 0.285098f, -0.573858f },
    { 1.033291f, -0.628127f, 0.739107f },
    { 1.061749f, 0.910884f, 0.319242f }
};

static struct Vector3 vec3_10681BB0[] =
{
    { -0.087576f, -0.427476f, 0.899775f },
    { -0.206905f, -0.855345f, -0.474948f },
    { -0.848445f, -0.387647f, 0.360375f },
    { -0.539976f, -0.655131f, -0.528422f },
    { -0.048494f, 0.837302f, 0.544585f },
    { -0.165315f, 0.483459f, -0.859615f },
    { -0.8426f, 0.53525f, 0.059436f },
    { -0.506127f, 0.268208f, -0.819695f },
    { 0.14013f, -0.739971f, 0.65788f },
    { 0.176256f, 0.98227f, 0.063864f }
};

static short unsigned int strips_10681AE8[] =
{
    5 | 0x8000,
    3, 2, 0, 4, 9,
    4,
    1, 7, 5, 6,
    11 | 0x8000,
    9, 8, 0, 1, 3, 7, 2, 6, 4, 5, 9
};

static struct MESH mesh_10681B18[] =
{
    { 0 | MeshPolyType_StripsB, 3, strips_10681AE8, 0, NULL, NULL, NULL, 0 }
};

extern struct MATERIAL mat_106804E8[1];

struct ATTACH attach_10681C28 =
{
    vec3_10681B38,
    vec3_10681BB0,
    ARRAYSIZE(vec3_10681B38),
    mesh_10681B18,
    mat_106804E8,
    ARRAYSIZE(mesh_10681B18),
    ARRAYSIZE(mat_106804E8),
    { 0.609263f, 0.02834f, 0.166089f },
    1.243366f,
    0
};

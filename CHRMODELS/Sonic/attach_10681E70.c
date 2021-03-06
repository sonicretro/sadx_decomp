#include "../../Structs.h"

static struct Vector3 vec3_10681D50[] =
{
    { 0.48829f, -0.664009f, 1.025853f },
    { 1.030184f, -1.135335f, -0.654542f },
    { -0.825512f, -0.734324f, 0.824159f },
    { -0.825512f, -1.0682f, -0.421886f },
    { 0.506669f, 1.223084f, 0.547095f },
    { 1.048563f, 0.751759f, -1.133301f },
    { -0.807133f, 1.15277f, 0.345401f },
    { -0.807133f, 0.818893f, -0.900644f },
    { 1.288436f, 0.985759f, -0.154288f },
    { 1.270057f, -0.901334f, 0.32447f },
    { 0.203318f, 0.720932f, -1.228102f },
    { 0.184939f, -1.166162f, -0.749343f }
};

static struct Vector3 vec3_10681DE0[] =
{
    { 0.222038f, -0.406411f, 0.886301f },
    { 0.524512f, -0.732472f, -0.434018f },
    { -0.629615f, -0.432391f, 0.645463f },
    { -0.660334f, -0.686073f, -0.305391f },
    { 0.233339f, 0.794524f, 0.560611f },
    { 0.532646f, 0.424932f, -0.73193f },
    { -0.61148f, 0.704702f, 0.359844f },
    { -0.645413f, 0.462126f, -0.608179f },
    { 0.770948f, 0.633369f, 0.06695f },
    { 0.74608f, -0.551689f, 0.372833f },
    { -0.071494f, 0.445938f, -0.892204f },
    { -0.092644f, -0.826426f, -0.555372f }
};

static short unsigned int strips_10681CF0[] =
{
    5 | 0x8000,
    3, 0, 11, 9, 1,
    3,
    7, 6, 10,
    17,
    5, 10, 4, 6, 2, 7, 3, 10, 11, 5, 1, 8, 9, 4, 0, 2, 3,
    3,
    4, 8, 5
};

static struct MESH mesh_10681D30[] =
{
    { 0 | MeshPolyType_StripsB, 4, strips_10681CF0, 0, NULL, NULL, NULL, 0 }
};

extern struct MATERIAL mat_106804E8[1];

struct ATTACH attach_10681E70 =
{
    vec3_10681D50,
    vec3_10681DE0,
    ARRAYSIZE(vec3_10681D50),
    mesh_10681D30,
    mat_106804E8,
    ARRAYSIZE(mesh_10681D30),
    ARRAYSIZE(mat_106804E8),
    { 0.231462f, 0.028461f, -0.101124f },
    1.641271f,
    0
};

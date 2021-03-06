#include "../../Structs.h"

extern struct ATTACH ATTACH_Sonic_Right_Shoe_Heel;
extern struct OBJECT OBJECT_Sonic_Right_Shoe_Toe;

struct OBJECT OBJECT_Sonic_Right_Shoe_Heel =
{
    ObjectFlags_NoRotate | ObjectFlags_NoScale,    &ATTACH_Sonic_Right_Shoe_Heel,
    { 1.391018f, 0.085991f, -0.172312f },
    { 0, 0, 0 },
    { 1.0f, 1.0f, 1.0f },
    &OBJECT_Sonic_Right_Shoe_Toe,
    NULL
};

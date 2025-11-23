#include "mnvibration.h"

extern void* mnVibration_804D6C28;

s32 mnVibration_802474C4(s32 arg0)
{
    void* node;

    node = *(void**)(*(s32*)((u8*)mnVibration_804D6C28 + 0x2C) + 0x50);
    if (node == NULL) {
        node = NULL;
    } else {
        node = *(void**)((u8*)node + 0x10);
    }

    while (arg0-- > 0) {
        if (node == NULL) {
            node = NULL;
        } else {
            node = *(void**)((u8*)node + 8);
        }
    }

    return (s32) node;
}

#ifndef GALE01_1E57BC
#define GALE01_1E57BC

#include <placeholder.h>

#include "baselib/forward.h"
#include "gr/grzakogenerator.h"
#include "gr/forward.h"
#include "gr/stage.h"
#include "gr/types.h"
#include "lb/lb_00F9.h"
#include "lb/forward.h"
#include "lb/lb_00B0.h"
#include "lb/lbvector.h"
#include "baselib/memory.h"
#include "baselib/random.h"
#include "mp/mplib.h"
#include "MSL/trigf.h"
#include <dolphin/mtx.h>


typedef struct {
    unsigned char unk0 : 4;
    unsigned char bit3 : 1;
    unsigned char bit2 : 1;
    unsigned char unk4 : 2;
} StageInfo8CFlags;


typedef struct GrBb_Config {
    u8  pad_00[0x88];  // unknown bytes up to 0x88

    f32 unk88;         // 0x88
    f32 unk8C;         // 0x8C
    f32 unk90;         // 0x90
    f32 unk94;         // 0x94
    f32 unk98;         // 0x98
    f32 unkB0;
    f32 unk9C;
    f32 unkAC;
    f32 unkB4;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkC0;
    f32 unkBC;
    f32 unkC4;
    f32 unkC8;




    u8  pad_A4[0xB8 - 0xA4];
    s32 unkB8;         // 0xB8

    u8  pad_BC[0xDC - 0xBC];
    s32 unkDC;         // 0xDC
    s32 unkE0;         // 0xE0

    u8  pad_E8[0x11C - 0xE8];
    s32 unk11C;        // 0x11C
    s32 unk120;        // 0x120


} GrBb_Config;

typedef struct GrBb803B8108Data {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
} GrBb803B8108Data;


extern GrBb803B8108Data grBb_803B8108;
extern GrBb_Config* grBb_804D69C8;
extern f32 grBb_804DB2F0;
extern f32 grBb_804DB2F4;
extern f32 grBb_804DB2F8;
extern f32 grBb_804DB2FC;
extern f32 grBb_804DB300;
extern f32 grBb_804DB3F0;

extern u8 grBb_803E2938[];
extern char grBb_804D46A8[];
extern char grBb_804D46B0[];

extern f32 grBb_804DB2F0;
extern f32 grBb_804DB2F4;
extern f32 grBb_804DB308;
extern f32 grBb_804DB30C;
extern f32 grBb_804DB310;
extern f32 grBb_804DB314;
extern f32 grBb_804DB318;
extern f32 grBb_804DB31C;
extern f32 grBb_804DB320;
extern f32 grBb_804DB324;
extern f32 grBb_804DB328;
extern f32 grBb_804DB32C;
extern f32 grBb_804DB330;
extern f32 grBb_804DB334;
extern f32 grBb_804DB338;
extern f32 grBb_804DB33C;
extern f32 grBb_804DB340;
extern f32 grBb_804DB344;
extern f32 grBb_804DB348;
extern f32 grBb_804DB34C;
extern f32 grBb_804DB350;
extern f32 grBb_804DB354;

/* 1E57BC */ void grBigBlue_801E57BC(bool arg);
/* 1E57C0 */ void grBigBlue_801E57C0(void);
/* 1E59C8 */ void grBigBlue_801E59C8(void);
/* 1E59CC */ void grBigBlue_801E59CC(void);
/* 1E59F0 */ bool grBigBlue_801E59F0(void);
/* 1E59F8 */ HSD_GObj *grBigBlue_801E59F8(s32);
/* 1E5AE4 */ void grBigBlue_801E5AE4(Ground_GObj*);
/* 1E5B10 */ bool grBigBlue_801E5B10(Ground_GObj*);
/* 1E5B18 */ void grBigBlue_801E5B18(Ground_GObj*);
/* 1E5B1C */ void grBigBlue_801E5B1C(Ground_GObj*);
/* 1E5B20 */ void grBigBlue_801E5B20(Ground_GObj*);
/* 1E6114 */ bool grBigBlue_801E6114(Ground_GObj*);
/* 1E611C */ void grBigBlue_801E611C(Ground_GObj*);
/* 1E6120 */ void grBigBlue_801E6120(Ground_GObj*);
/* 1E6124 */ void fn_801E6124(Ground_GObj* gobj);
/* 1E613C */ void grBigBlue_801E613C(Ground_GObj*);
/* 1E61BC */ bool grBigBlue_801E61BC(Ground_GObj*);
/* 1E61C4 */ void grBigBlue_801E61C4(Ground_GObj*);
/* 1E61FC */ void grBigBlue_801E61FC(Ground_GObj*);
/* 1E6200 */ void grBigBlue_801E6200(Ground_GObj*);
/* 1E6288 */ bool grBigBlue_801E6288(Ground_GObj*);
/* 1E6290 */ void grBigBlue_801E6290(Ground_GObj*);
/* 1E6294 */ void grBigBlue_801E6294(Ground_GObj*);
/* 1E6298 */ void grBigBlue_801E6298(Ground_GObj*);
/* 1E6354 */ bool grBigBlue_801E6354(Ground_GObj*);
/* 1E635C */ void grBigBlue_801E635C(Ground_GObj*);
/* 1E6360 */ void grBigBlue_801E6360(Ground_GObj*);
/* 1E6364 */ void grBigBlue_801E6364(Ground_GObj*);
/* 1E687C */ bool grBigBlue_801E687C(Ground_GObj*);
/* 1E6884 */ void grBigBlue_801E6884(Ground_GObj* arg0);
/* 1E68B8 */ void grBigBlue_801E68B8(Ground_GObj* arg0);
/* 1E6904 */ void grBigBlue_801E6904(Ground_GObj*);
/* 1E6C58 */ bool grBigBlue_801E6C58(Ground_GObj*);
/* 1E6C60 */ void grBigBlue_801E6C60(Ground_GObj* gobj) ;
/* 1E855C */ void grBigBlue_801E855C(Ground_GObj*);
/* 1E8560 */ UNK_RET fn_801E8560(UNK_PARAMS);
/* 1E8794 */ f32 grBigBlue_801E8794(HSD_JObj* jobj, f32* pos, s32 arg2, f32 arg3, f32 arg4);
/* 1E8978 */ s32 grBigBlue_801E8978(s32 arg0, s32 arg1, HSD_JObj* arg2);
/* 1E89DC */ s32 grBigBlue_801E89DC(s32 arg0);
/* 1E8A1C */ s32 grBigBlue_801E8A1C(s32 arg0);
/* 1E8B84 */ s32 grBigBlue_801E8B84(f32 top, f32 bottom, f32 left, f32 right);
/* 1E8D04 */ s32 grBigBlue_801E8D04(void);
/* 1E8D64 */ void grBigBlue_801E8D64(Ground_GObj*);
/* 1E93D0 */ bool grBigBlue_801E93D0(Ground_GObj*);
/* 1E93D8 */ void grBigBlue_801E93D8(Ground_GObj*);
/* 1E9F38 */ void grBigBlue_801E9F38(Ground_GObj*);
/* 1E9F3C */ void grBigBlue_801E9F3C(Ground_GObj*);
/* 1EA054 */ bool grBigBlue_801EA054(Ground_GObj*);
/* 1EA05C */ void grBigBlue_801EA05C(Ground_GObj*);
/* 1EAB4C */ void grBigBlue_801EAB4C(Ground_GObj*);
/* 1EAB50 */ f32 grBigBlue_801EAB50(f32* pos, s32 arg1, f32 arg2, f32 arg3);
/* 1EACE8 */ s32 grBigBlue_801EACE8(HSD_JObj* arg0, f32* arg1, f32* arg2, f32 arg3, f32 arg4);
/* 1EB004 */ UNK_RET grBigBlue_801EB004(UNK_PARAMS);
/* 1EB4AC */ UNK_RET grBigBlue_801EB4AC(UNK_PARAMS);
/* 1EBAF8 */ UNK_RET grBigBlue_801EBAF8(UNK_PARAMS);
/* 1EC58C */ f32 grBigBlue_801EC58C(f32* pos, void* obj, f32 value);
/* 1EC6C0 */ UNK_RET grBigBlue_801EC6C0(UNK_PARAMS);
/* 1ECB50 */ UNK_RET grBigBlue_801ECB50(UNK_PARAMS);
/* 1ED694 */ UNK_RET grBigBlue_801ED694(UNK_PARAMS);
/* 1EDF44 */ UNK_RET grBigBlue_801EDF44(UNK_PARAMS);
/* 1EE398 */ UNK_RET grBigBlue_801EE398(UNK_PARAMS);
/* 1EEF00 */ UNK_RET grBigBlue_801EEF00(UNK_PARAMS);
/* 1EF424 */ UNK_RET grBigBlue_801EF424(UNK_PARAMS);
/* 1EF60C */ UNK_RET fn_801EF60C(UNK_PARAMS);
/* 1EF7D8 */ void grBigBlue_801EF7D8(Point3d* arg0);
/* 1EF844 */ bool grBigBlue_801EF844(enum_t);
/* 1EFB9C */ void fn_801EFB9C(HSD_GObj*, int);
/* 1EFC0C */ DynamicsDesc* grBigBlue_801EFC0C(enum_t);
/* 1EFC14 */ bool grBigBlue_801EFC14(Vec3*, int arg, HSD_JObj* jobj);

#endif

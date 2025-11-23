#ifndef GALE01_23749C
#define GALE01_23749C

#include <platform.h>
#include <mn/mnmain.h>
#include <mn/mnnamenew.h>
#include <gm/gmmain_lib.h>
#include <placeholder.h>
#include <baselib/forward.h>
#include <lb/lblanguage.h>
#include <baselib/jobj.h>



typedef struct Inner {
    u8        _pad0[0x10];
    HSD_JObj* jobj;       // offset 0x10
} Inner;

typedef struct MnNameData {
    u8        _pad0[0x30];
    Inner*    unk30;      // offset 0x30
    u8        _pad34[0x08];
    HSD_Text* unk3C;      // offset 0x3C
} MnNameData;

struct gmm_x2FF8_inner;
struct gmm_x2FF8;



extern s8 mnName_804D4BFC;
extern s8 mnName_804D4BF4;

extern u8** NotAllowedNamesList;
extern u8 mnName_StringTerminator;
extern u8 mnNameNew_NullCharacter;
extern u8* mnNameNew_803EE720[];
extern u8* mnNameNew_803EE724[];

extern void HSD_JObjRemoveAll(HSD_JObj* jobj);
extern void HSD_SisLib_803A5CC4(HSD_Text* text);



struct gmm_x2FF8_inner* GetPersistentNameData(s32 arg0);

/* 23749C */ s32 mnName_8023749C(u8 arg0);
/* 23754C */ char* GetNameText(int slot);
/* 237594 */ int GetNameCount(void);
/* 2375EC */ s32 IsNameListFull(void);
/* 237654 */ s32 CompareNameStrings(const u8* name, u8 slot);
/* 2377A4 */ UNK_RET fn_802377A4(UNK_PARAMS);
/* 2377A8 */ UNK_RET IsNameUnique(UNK_PARAMS);
/* 237834 */ UNK_RET DeleteName(UNK_PARAMS);
/* 2379BC */ s32 IsNameValid(u8 arg0);
/* 237A04 */ UNK_RET CreateNameAtIndex(UNK_PARAMS);
/* 237A68 */ UNK_RET mnName_SortNames(UNK_PARAMS);
/* 237D94 */ UNK_RET mnName_80237D94(UNK_PARAMS);
/* 237F78 */ s32 mnName_ConfirmNameDeleteInput();
/* 23817C */ s32 mnName_MainInput();
/* 238540 */ s32 fn_80238540(s32 arg0);
/* 2385A0 */ s32 mnName_802385A0(MnNameData* arg0);
/* 2385D4 */ UNK_RET mnName_GetPageCount(UNK_PARAMS);
/* 238698 */ UNK_RET mnName_GetColumnCount(UNK_PARAMS);
/* 238754 */ UNK_RET mnName_80238754(UNK_PARAMS);
/* 2388D4 */ s32 mnName_802388D4(void* arg0, u8 arg1);
/* 238964 */ UNK_RET mnName_80238964(UNK_PARAMS);
/* 238A04 */ UNK_RET mnName_80238A04(UNK_PARAMS);
/* 238AE0 */ UNK_RET mnName_80238AE0(UNK_PARAMS);
/* 238C34 */ UNK_RET mnName_80238C34(UNK_PARAMS);
/* 239574 */ UNK_RET fn_80239574(UNK_PARAMS);
/* 239878 */ UNK_RET mnName_80239878(UNK_PARAMS);
/* 239A24 */ s32 mnName_80239A24(MnNameData* arg0);
/* 239EBC */ UNK_RET mnName_80239EBC(UNK_PARAMS);
/* 239F5C */ void mnName_80239F5C(HSD_JObj* obj, f32 x);
/* 239FFC */ void mnName_80239FFC(MnNameData* arg0);
/* 23A058 */ s32 mnName_8023A058(MnNameData* arg0);
/* 23A0BC */ UNK_RET fn_8023A0BC(UNK_PARAMS);
/* 23A290 */ UNK_RET mnName_8023A290(UNK_PARAMS);
/* 23A59C */ UNK_RET mnName_8023A59C(UNK_PARAMS);
/* 23A9B4 */ UNK_RET mnName_8023A9B4(UNK_PARAMS);
/* 23AC40 */ UNK_RET mnName_8023AC40(UNK_PARAMS);
/* 23B084 */ s32 IsNameNotAllowed(s32 arg0);

#endif

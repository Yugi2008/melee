#ifndef MELEE_MN_NAME_NEW_H
#define MELEE_MN_NAME_NEW_H

#include <placeholder.h>
#include <mn/mnmain.h>
#include <lb/lblanguage.h>

typedef struct {
    u8 unk0;       // offset 0
    u8 _pad0[2];   // 1,2
    u8 unk3;       // offset 3
    u8 _pad1[2];   // 4,5
    u8 unk6;       // offset 6
    u8 _pad2[2];   // 7,8
    u8 unk9;       // offset 9
} MnNameNewCurrentNameText;

typedef struct NameEntryUIState {
    u8  _00[1];      // 0x00
    u8  unk1;        // 0x01
    u8  _02[0x4E];   // 0x02–0x4F

    u8  unk50;       // 0x50
    u8  unk51;       // 0x51
    u8  _52[2];      // 0x52–0x53 (padding)

    u32 unk54;       // 0x54
    u8  unk58;       // 0x58
    u8  unk59;       // 0x59
    u8  unk5A;       // 0x5A
    u8  unk5B;       // 0x5B
    u8  unk5C;       // 0x5C
    u8  unk5D;       // 0x5D
    u8  unk5E;       // 0x5E
    u8  _5F[1];      // 0x5F (padding)

    u32 unk60;       // 0x60
    u32 unk64;       // 0x64
    u32 unk68;       // 0x68
} NameEntryUIState;

extern MnNameNewCurrentNameText mnNameNew_CurrentNameText;
extern u8 mnNameNew_NullCharacter;
extern u8** AutoNamesList;
extern s8 mnNameNew_PortInUse;



/* 23B0F8 */ UNK_RET mnNameNew_8023B0F8(UNK_PARAMS);
/* 23B224 */ UNK_RET mnNameNew_8023B224(UNK_PARAMS);
/* 23B314 */ UNK_RET mnNameNew_8023B314(UNK_PARAMS);
/* 23B3FC */ UNK_RET mnNameNew_KeySetup(UNK_PARAMS);
/* 23BAA8 */ UNK_RET mnNameNew_8023BAA8(UNK_PARAMS);
/* 23BD4C */ UNK_RET PickAutoName(UNK_PARAMS);
/* 23BEE0 */ UNK_RET NameContainsOnlySpaces(UNK_PARAMS);
/* 23BFE4 */ UNK_RET WriteCharactersForNameAtIndex(UNK_PARAMS);
/* 23C148 */ UNK_RET AddCharacterToName(UNK_PARAMS);
/* 23C290 */ UNK_RET mnNameNew_GlyphVariantInput(UNK_PARAMS);
/* 23C54C */ s32 mnNameNew_MainInput();
/* 23CE4C */ UNK_RET mnNameNew_8023CE4C(UNK_PARAMS);
/* 23CFC8 */ UNK_RET fn_8023CFC8(UNK_PARAMS);
/* 23D0F8 */ UNK_RET fn_8023D0F8(UNK_PARAMS);
/* 23D130 */ UNK_RET mnNameNew_8023D130(UNK_PARAMS);
/* 23D3E8 */ UNK_RET mnNameNew_GlyphVariantSetup(UNK_PARAMS);
/* 23DA08 */ UNK_RET mnNameNew_8023DA08(UNK_PARAMS);
/* 23DAEC */ UNK_RET fn_8023DAEC(UNK_PARAMS);
/* 23DBE8 */ UNK_RET fn_8023DBE8(UNK_PARAMS);
/* 23E0D8 */ UNK_RET mnNameNew_8023E0D8(UNK_PARAMS);
/* 23E264 */ s32 InitNameEntryUIState(void* arg0, s8 arg1);
/* 23E32C */ s32 mnNameNew_8023E32C(s32 arg0);
/* 23E630 */ s32 mnNameNew_EnterFromMnName(s32 arg0);
/* 23E6D0 */ void mnNameNew_EnterFromMnCharSel(UNK_T, int);
/* 23EA08 */ void mnNameNew_8023EA08(UNK_T);

#endif

#include "mnname.h"

void fn_80249A1C(HSD_GObj* arg0);

/// #mnName_8023749C


char* GetNameText(int slot){
    if (IsNameValid(slot) == 0) {
        return NULL;
    }
    return (char*) GetPersistentNameData((u8)slot) + 0x198;
}

int GetNameCount(void){
    s32 i = 0;        // matches r31
    s32 count = 0;    // matches r30

    do {
        if (IsNameValid((u8)i) != 0) {
            count++;
        }
        i++;
    } while (i < 0x78);

    return count;
}


/// #IsNameListFull

/// #CompareNameStrings

void fn_802377A4(void) {}

/// #IsNameUnique

/// #DeleteName

s32 IsNameValid(u8 arg0){
    if ((s8) mnName_StringTerminator == (s8) GetPersistentNameData((s32) arg0)->namedata[0]) {
        return 0;
    }
    return 1;
}


/// #CreateNameAtIndex

/// #mnName_SortNames

/// #mnName_80237D94

/// #mnName_ConfirmNameDeleteInput

/// #mnName_MainInput

/// #fn_80238540

s32 mnName_802385A0(MnNameData* arg0) {
    mnName_80238754();
    return mnName_8023A058(arg0);
}


/// #mnName_GetPageCount

/// #mnName_GetColumnCount

/// #mnName_80238754

/// #mnName_802388D4

/// #mnName_80238964

/// #mnName_80238A04

/// #mnName_80238AE0

/// #mnName_80238C34

/// #fn_80239574

/// #mnName_80239878

/// #mnName_80239A24

/// #mnName_80239EBC

/// #mnName_80239F5C

/// #mnName_80239FFC


s32 mnName_8023A058(MnNameData* arg0){
    HSD_JObj* jobj;
    Inner*    tmp;

    tmp = arg0->unk30;
    if (tmp == NULL) {
        jobj = NULL;
    }
    else {
        jobj = tmp->unk10;
    }
    HSD_JObjRemoveAll(jobj);

    if (arg0->unk3C != NULL) {
        HSD_SisLib_803A5CC4(arg0->unk3C);
        arg0->unk3C = NULL;
    }

    return mnName_80239A24(arg0);
}


/// #fn_8023A0BC

/// #mnName_8023A290

/// #mnName_8023A59C

/// #mnName_8023A9B4

/// #mnName_8023AC40
s32 IsNameNotAllowed(s32 arg0){
    u8** var_r31 = NotAllowedNamesList;

    loop:
    {
        u8* name = *var_r31;

        if ((s8)mnNameNew_NullCharacter != (s8)*name) {
            if (CompareNameStrings(name, arg0) == 0) {
                return 1;
            }
            var_r31++;
            goto loop;
        }
    }

    return 0;
}


#include "mnname.h"

void fn_80249A1C(HSD_GObj* arg0);

s32 mnName_8023749C(u8 arg0){
    u8** it;
    s32  limit;
    s32  idx;
    u8** base;
    s8   term_loop;
    s8   term_final;

    if (lbLang_IsSavedLanguageUS() != 0) {
        base = mnNameNew_803EE724;
    }
    else {
        base = mnNameNew_803EE720;
    }

    term_loop = (s8) mnName_StringTerminator;
    limit     = (s32)(u8) arg0;

    it  = base;
    idx = 0;

    while (idx != limit && term_loop != (s8)**it) {
        it++;
        idx++;
    }

    {
        s32 offset = idx * 4;
        u8* name   = *(u8**)((u8*)base + offset);

        term_final = (s8) mnName_StringTerminator;

        if (term_final == (s8)*name) {
            name = NULL;
        }

        return (s32) name;
    }
}



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


s32 IsNameListFull(void){
    s32 var_r31;
    s32 var_r30;
    u8  pad[8];

    var_r31 = 0;       // li r31,0
    var_r30 = 0 + var_r31; // addi r30,r31,0 (not translating, li)

    do {
        if (IsNameValid((u8)var_r30) != 0) {
            var_r31 += 1;     // addi r31,r31,1
        }
        var_r30 += 1;         // addi r30,r30,1
    } while (var_r30 < 0x78); // cmpwi r30,0x78

    if (var_r31 < 0x78) {     // cmpwi r31,0x78
        return 0;             // li r3,0 / b 50
    }
    return 1;                 // li r3,1
}


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

s32 CreateNameAtIndex(u32 arg0){
    u8 term;
    u32 idx;

    term = mnName_StringTerminator;
    idx = arg0 & 0xFF;

    GetPersistentNameData(idx)->namedata[0] = term;
    GetPersistentNameData(idx)->x1A1 = 1;

    return InitializePersistentNameData(arg0);
}


/// #mnName_SortNames

/// #mnName_80237D94

/// #mnName_ConfirmNameDeleteInput

/// #mnName_MainInput



s32 fn_80238540(s32 arg0){
    s32 state = (s32) mn_804A04F0.x10;

    switch (state) {
        case 0:
            return mnName_MainInput();

        case 1:
            return mnNameNew_MainInput();

        case 2:
            return mnName_ConfirmNameDeleteInput();

        default:
            return arg0;
    }
}

s32 mnName_802385A0(MnNameData* arg0) {
    mnName_80238754();
    return mnName_8023A058(arg0);
}


/// #mnName_GetPageCount

/// #mnName_GetColumnCount

/// #mnName_80238754

s32 mnName_802388D4(void* arg0, u8 arg1){
    void* start;
    void* cur;

    if (arg1 < 0x18) {
        void* list = *(void**)((u8*)arg0 + 0x30);

        if (list == NULL) {
            start = NULL;
        } else {
            start = *(void**)((u8*)list + 0x10);
        }

        {
            s32 count = (s32)(u8)arg1;
            cur = start;


            for (; count > 0; count--) {
                void* next;

                if (cur == NULL) {
                    next = NULL;
                } else {
                    next = *(void**)((u8*)cur + 8);
                }

                cur = next;
            }

            return (s32)cur;
        }
    }


    switch ((u8)arg1) {
        case 0x18:
            return *(s32*)((u8*)arg0 + 0x24);

        case 0x19:
            return *(s32*)((u8*)arg0 + 0x18);

        case 0x1A:
            return *(s32*)((u8*)arg0 + 0x1C);

        default:
            return (s32)arg0;
    }
}


/// #mnName_80238964

/// #mnName_80238A04

/// #mnName_80238AE0

/// #mnName_80238C34

/// #fn_80239574

/// #mnName_80239878

/// #mnName_80239A24

/// #mnName_80239EBC


void mnName_80239F5C(HSD_JObj* obj, f32 x){

    bool bVar1;

    if (obj == NULL) {
        __assert((char*)&mnName_804D4BF4, 0x3A4U, (char*)&mnName_804D4BFC);
    }

    obj->translate.x = x;

    if ((obj->flags & 0x02000000) == 0) {

        if (obj != NULL) {

            if (obj == NULL) {
                __assert((char*)&mnName_804D4BF4, 0x234U, (char*)&mnName_804D4BFC);
            }

            bVar1 = false;

            {
                u32 flags = obj->flags;

                if (((flags & 0x00800000) == 0) && ((flags & 0x40) != 0)) {

                    bVar1 = true;
                }
            }

            if (!bVar1) {
                HSD_JObjSetMtxDirtySub(obj);
            }
        }
    }
}


void mnName_80239FFC(MnNameData* arg0){
    HSD_JObj* jobj;

    if (arg0->unk30 == NULL) {
        jobj = NULL;
    } else {
        jobj = arg0->unk30->jobj;  // load from +0x10 of child
    }

    HSD_JObjRemoveAll(jobj);

    if (arg0->unk3C != NULL) {
        HSD_SisLib_803A5CC4(arg0->unk3C);
        arg0->unk3C = NULL;
    }
}


s32 mnName_8023A058(MnNameData* arg0){
    HSD_JObj* jobj;
    Inner*    tmp;

    tmp = arg0->unk30;
    if (tmp == NULL) {
        jobj = NULL;
    }
    else {
        jobj = tmp->jobj;
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


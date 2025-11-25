#include "grbigblue.h"

#include <platform.h>

#include "grmaterial.h"
#include "grdisplay.h"
#include "gr/inlines.h"
#include "baselib/jobj.h"
#include "baselib/gobjproc.h"
#include "baselib/gobjgxlink.h"
#include "gr/types.h"

u8 tmpPadData[168] = {0};

StageCallbacks grBb_803E29E0[] = {
    {grBigBlue_801E5AE4, grBigBlue_801E5B10, grBigBlue_801E5B18, grBigBlue_801E5B1C, 0},
    {grBigBlue_801E6298, grBigBlue_801E6354, grBigBlue_801E635C, grBigBlue_801E6360, 40000000},
    {grBigBlue_801E6200, grBigBlue_801E6288, grBigBlue_801E6290, grBigBlue_801E6294, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {grBigBlue_801E5B20, grBigBlue_801E6114, grBigBlue_801E611C, grBigBlue_801E6120, 0},
    {grBigBlue_801E6904, grBigBlue_801E6C58, grBigBlue_801E6C60, grBigBlue_801E855C, 0},
    {grBigBlue_801E6364, grBigBlue_801E687C, grBigBlue_801E6884, grBigBlue_801E68B8, 0},
    {grBigBlue_801E613C, grBigBlue_801E61BC, grBigBlue_801E61C4, grBigBlue_801E61FC, 0},
    {grBigBlue_801E8D64, grBigBlue_801E93D0, grBigBlue_801E93D8, grBigBlue_801E9F38, 80000000},
    {grBigBlue_801E9F3C, grBigBlue_801EA054, grBigBlue_801EA05C, grBigBlue_801EAB4C, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0},
    {NULL, NULL, NULL, NULL, 0}
};

void grBigBlue_801E57BC(bool arg) {}

void grBigBlue_801E57C0(void){
    StageInfo8CFlags*  flags;
    GrBb803B8108Data   pos;
    u8                 pad[0x0C];
    GrBb803B8108Data*  src;

    grBb_804D69C8 = Ground_801C49F8();

    flags = (StageInfo8CFlags*)((u8*)&stage_info + 0x8C);

    flags->bit3 = 0;
    flags->bit2 = 1;

    grBigBlue_801E59F8(0x1F);
    grBigBlue_801E59F8(0);
    grBigBlue_801E59F8(1);
    grBigBlue_801E59F8(2);
    grBigBlue_801E59F8(0x22);
    grBigBlue_801E59F8(0x21);

    HSD_JObjSetFlagsAll(grBigBlue_801E59F8(0x20)->hsd_obj, 0x10U);
    grBigBlue_801E59F8(0x23);
    HSD_JObjSetFlagsAll(grBigBlue_801E59F8(0x24)->hsd_obj, 0x10U);

    Ground_801C39C0();
    Ground_801C3BB4();

    mpLib_80058044(0x21);
    mpLib_80058044(0x22);
    mpLib_80058044(0x23);
    mpLib_80058044(0x24);
    mpLib_80058044(0x25);
    mpLib_80058044(0x26);
    mpLib_80058044(0x27);
    mpLib_80058044(0x28);
    mpLib_80058044(0x29);
    mpLib_80058044(0x2A);
    mpLib_80058044(0x2B);
    mpLib_80058044(0x2C);
    mpLib_80058044(0x2D);
    mpLib_80058044(0x2E);
    mpLib_80058044(0x2F);
    mpLib_80058044(0x30);
    mpLib_80058044(0x31);
    mpLib_80058044(0x32);
    mpLib_80058044(0x33);
    mpLib_80058044(0x34);
    mpLib_80058044(0x35);
    mpLib_80058044(0x36);
    mpLib_80058044(0x37);
    mpLib_80058044(0x38);
    mpLib_80058044(0x39);
    mpLib_80058044(0x3A);
    mpLib_80058044(0x3B);
    mpLib_80058044(0x3C);
    mpLib_80058044(0x3D);
    mpLib_80058044(0x3E);
    mpLib_80058044(0x3F);
    mpLib_80058044(0x40);
    mpLib_80058044(0x41);

    src = &grBb_803B8108;
    pos = *src;

    lb_80011A50(
        (Point3d*)&pos,
                -1,
                grBb_804DB2F0,
                grBb_804DB2F4,
                grBb_804DB2F8,
                grBb_804DB2FC,
                grBb_804DB300,
                grBb_804DB300,
                grBb_804DB2FC
    );

    pad[0] = pad[0];
    src = src;
}


void grBigBlue_801E59C8(void) {}

void grBigBlue_801E59CC(void) {
    grZakoGenerator_801CAE04(0);
}


bool grBigBlue_801E59F0(void)
{
    return false;
}

HSD_GObj *grBigBlue_801E59F8(s32 id)
{
    HSD_GObj *gobj;
    StageCallbacks *cbs = &grBb_803E29E0[id];
    gobj = Ground_801C14D0(id);
    if (gobj != NULL) {
        Ground *gp = GET_GROUND(gobj);
        gp->x8_callback = NULL;
        gp->xC_callback = NULL;

        GObj_SetupGXLink(gobj, grDisplay_801C5DB0, 3U, 0U);
        if (cbs->callback3 != NULL) {
            gp->x1C_callback = cbs->callback3;
        }
        if (cbs->callback0 != NULL) {
            cbs->callback0(gobj);
        }
        if (cbs->callback2 != NULL) {
            HSD_GObjProc_8038FD54(gobj, cbs->callback2, 4U);
        }
    } else {
        OSReport("%s:%d: couldn t get gobj(id=%d)\n", "grbigblue.c", 0x17E, id);
    }
    return gobj;
}

void grBigBlue_801E5AE4(Ground_GObj* arg0)
{
    grAnime_801C8138(arg0, GET_GROUND(arg0)->map_id, 0);
}

bool grBigBlue_801E5B10(Ground_GObj* arg)
{
    return false;
}

void grBigBlue_801E5B18(Ground_GObj* arg) {}

void grBigBlue_801E5B1C(Ground_GObj* arg) {}

/// #grBigBlue_801E5B20

bool grBigBlue_801E6114(Ground_GObj* arg)
{
    return false;
}

void grBigBlue_801E611C(Ground_GObj* arg) {}

void grBigBlue_801E6120(Ground_GObj* arg) {}

void fn_801E6124(Ground_GObj* gobj)
{
    GET_GROUND(gobj)->gv.bigblue.x0_b0 = false;
}

/// #grBigBlue_801E613C

bool grBigBlue_801E61BC(Ground_GObj* arg){
    return false;
}

void grBigBlue_801E61C4(Ground_GObj* arg0){
    u8 unused[0x10];
    (void)unused;

    grBigBlue_801EBAF8();
    lb_800115F4();
    Ground_801C2FE0(arg0);
}


void grBigBlue_801E61FC(Ground_GObj* arg) {}

void grBigBlue_801E6200(Ground_GObj* arg0)
{
    Ground* gp;
    Ground* temp_r5;
    HSD_JObj* jobj;
    void* filler;

    gp = GET_GROUND(arg0);
    jobj = arg0->hsd_obj;
    grAnime_801C8138(arg0, gp->map_id, 0);
    temp_r5 = GET_GROUND(arg0);
    temp_r5->x10_flags.b2 = 0;
    grMaterial_801C8A04(jobj, 0x08000000U);
    grMaterial_801C8858(jobj, 0x20000000U);
    gp->x11_flags.b012 = 1;
}

bool grBigBlue_801E6288(Ground_GObj* arg)
{
    return false;
}

void grBigBlue_801E6290(Ground_GObj* arg) {}

void grBigBlue_801E6294(Ground_GObj* arg) {}

void grBigBlue_801E6298(Ground_GObj* arg0)
{
    HSD_JObj* temp_r31;
    HSD_JObj* temp_r30;
    HSD_JObj* temp_r29;
    HSD_JObj* temp_r28;
    HSD_JObj* temp_r27;

    Ground* gp = GET_GROUND(arg0);
    grAnime_801C8138(arg0, gp->map_id, 0);
    temp_r27 = Ground_801C3FA4(arg0, 6);
    temp_r28 = Ground_801C3FA4(arg0, 7);
    temp_r29 = Ground_801C3FA4(arg0, 3);
    temp_r30 = Ground_801C3FA4(arg0, 4);
    temp_r31 = Ground_801C3FA4(arg0, 2);
    Ground_801C4E70(Ground_801C3FA4(arg0, 5), temp_r31, temp_r30, temp_r29,
                    temp_r28, temp_r27);
    gp->x11_flags.b012 = 2;
}

bool grBigBlue_801E6354(Ground_GObj* arg)
{
    return false;
}

void grBigBlue_801E635C(Ground_GObj* arg) {}

void grBigBlue_801E6360(Ground_GObj* arg) {}

/// #grBigBlue_801E6364

bool grBigBlue_801E687C(Ground_GObj* arg)
{
    return false;
}

void grBigBlue_801E6884(Ground_GObj* arg0) {
    grBigBlue_801EF424();
    Ground_801C2FE0(arg0);
}


void grBigBlue_801E68B8(Ground_GObj* arg0) {
    Ground* temp_r30;

    temp_r30 = arg0->user_data;
    HSD_Free((void* ) temp_r30->gv.corneria.xC8);
    temp_r30->gv.corneria.xC8 = 0;
    HSD_Free((void* ) temp_r30->gv.corneria.xCC);
    temp_r30->gv.corneria.xCC = 0;
}


/// #grBigBlue_801E6904

bool grBigBlue_801E6C58(Ground_GObj* arg)
{
    return false;
}

void grBigBlue_801E6C60(Ground_GObj* gobj) {
    GrBb803B8108Data* cfg;
    Ground* gp = 0;
    Ground* temp_r27 = 0;
    struct grCorneria_GroundVars* work = 0;

    s32 var_r25 = 0;
    f64 sp170 = 0;
    f64 sp168 = 0;
    f64 sp160 = 0;
    f64 sp158 = 0;
    f64 sp150 = 0;
    f64 sp148 = 0;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    s32 spE8;
    s32 spE4;
    f32 spE0;
    s32 spDC;
    s32 spD8;
    f32 spD4;
    s32 spD0;
    s32 spCC;
    f32 spC8;
    s32 spC4;
    s32 spC0;
    f32 spBC;
    s32 spA8;
    s32 spA4;
    f32 spA0;
    s32 sp9C;
    s32 sp98;
    f32 sp94;
    s32 sp90;
    s32 sp8C;
    f32 sp88;
    Ground* var_r18;
    Ground* var_r19;
    Ground* var_r30 = 0;
    HSD_JObj* temp_r31;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f14 = 0.0f;
    f32 temp_f15 = 0.0f;
    f32 temp_f16 = 0.0f;
    f32 temp_f17 = 0.0f;
    f32 temp_f18 = 0.0f;
    f32 temp_f19 = 0.0f;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20 = 0.0f;
    f32 temp_f22;
    f32 temp_f23 = 0.0f;
    f32 temp_f24;
    f32 temp_f24_10;
    f32 temp_f24_11;
    f32 temp_f24_12;
    f32 temp_f24_13;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f24_5;
    f32 temp_f24_6;
    f32 temp_f24_7;
    f32 temp_f24_8;
    f32 temp_f24_9;
    f32 temp_f25;
    f32 temp_f25_2;
    f32 temp_f25_3 = 0.0f;
    f32 temp_f27 = 0.0f;
    f32 temp_f28 = 0.0f;
    f32 temp_f29 = 0.0f;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30 = 0.0f;
    f32 temp_f31 = 0.0f;
    f32 temp_r5;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_10;
    s32 temp_cr0_eq_11;
    s32 temp_cr0_eq_12;
    s32 temp_cr0_eq_13;
    s32 temp_cr0_eq_14;
    s32 temp_cr0_eq_15;
    s32 temp_cr0_eq_16;
    s32 temp_cr0_eq_17;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    s32 temp_cr0_eq_6;
    s32 temp_cr0_eq_7;
    s32 temp_cr0_eq_8;
    s32 temp_cr0_eq_9;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_4;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 var_r16;
    s32 var_r16_2;
    s32 var_r17;
    s32 var_r17_2;
    s32 var_r3;
    s32 var_r3_10;
    s32 var_r3_11;
    s32 var_r3_12;
    s32 var_r3_13;
    s32 var_r3_14;
    s32 var_r3_15;
    s32 var_r3_16;
    s32 var_r3_17;
    s32 var_r3_18;
    s32 var_r3_19;
    s32 var_r3_20;
    s32 var_r3_21;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r3_5;
    s32 var_r3_6;
    s32 var_r3_7;
    s32 var_r3_8;
    s32 var_r3_9;
    s32 var_r4;
    s8 var_r0;
    s8 var_r0_2;
    u32 temp_r3_5;
    u32 temp_r4_10;
    u32 temp_r4_11;
    u32 temp_r4_12;
    u32 temp_r4_13;
    u32 temp_r4_14;
    u32 temp_r4_15;
    u32 temp_r4_16;
    u32 temp_r4_17;
    u32 temp_r4_18;
    u32 temp_r4_19;
    u32 temp_r4_20;
    u32 temp_r4_21;
    u32 temp_r4_2;
    u32 temp_r4_6;
    u32 temp_r4_7;
    u32 temp_r4_8;
    u32 temp_r4_9;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r16;
    u8* bb_work;
    u8* icemt_work;


    do {
        bb_work = (u8*)var_r30;
        icemt_work = (u8*)&var_r30->gv.icemt;

        temp_r16 = *(u8*)((u8*)gp + 0xE4);  // lbz r16,0xe4(r30)
        temp_r0 = *(u8*)((u8*)gp + 0xE5);   // lbz r0,0xe5(r30)
        {
            s8 state = (s8)temp_r16;  // extsb r3,r16
            s8 mode = (s8)temp_r0;    // extsb r0,r0

            temp_r31 = *(HSD_JObj**)((u8*)temp_r27 + 0xD4 + state * 4);
            switch (mode) {
                case 0:  // temp_r0 == 0
                    if (grBigBlue_801E89DC(0) == 0) {
                        var_r30->gv.corneria.xE8 = 0;
                        *(u8*)((u8*)gp + 0xE5) = 0;
                        break;
                    }

                    if (grBb_804D69C8->unk8C != 0) {
                        temp_r3 = HSD_Randi(grBb_804D69C8->unk8C);
                    }
                    else {
                        temp_r3 = 0;
                    }

                    gp->gv.corneria.xE8 = grBb_804D69C8->unk88 + temp_r3;

                    if (temp_r31 == NULL) {
                        __assert(grBb_804D46A8, 0x3D3, grBb_804D46B0);
                    }

                    {
                        // copy JObj 0x38/0x3C/0x40 into work
                        Vec3* p = (Vec3*)((u8*)gp + 0x11C);
                        *p = *(Vec3*)((u8*)temp_r31 + 0x38);

                        gp->gv.corneria.x130 = temp_f31;
                        *(f32*) &gp->gv.corneria.x12C = temp_f31;
                        *(f32*) &gp->gv.corneria.x128 = temp_f31;
                        gp->gv.corneria.x104 = temp_f31;
                        gp->gv.corneria.x100 = temp_f31;
                        gp->gv.corneria.xFC = temp_f31;

                        *(u8*)((u8*)gp + 0xE5) = 1;
                    }
                    break;

                case 1:
                    if (grBigBlue_801E89DC(0) == 0) {
                        *(u8*)(bb_work + 0xE5) = 0;
                    } else {
                case 2:
                    if ((s32)var_r30->gv.corneria.xE8 <= 0) {
                        memzero(&sp13C, 0xC);
                        memzero(&sp124, 0xC);
                        sp13C = temp_f28 + Stage_GetBlastZoneRightOffset();
                        sp124 = -(temp_f28 + Stage_GetBlastZoneRightOffset());
                        temp_f25 = grBigBlue_801EC58C(&sp13C, NULL, grBb_804DB30C);
                        temp_f24 = grBigBlue_801EC58C(&sp124, NULL, grBb_804DB30C);

                        if ((temp_f27 != temp_f25) || (temp_f27 != temp_f24)) {
                            var_r30->gv.corneria.xEC = grBb_804D69C8->unk90;
                            var_f0 = grBb_804D69C8->unk94 - grBb_804D69C8->unk90;
                            if (var_f0 < temp_f31) {
                                var_f0 = -var_f0;
                            }
                            if ((s32)var_f0 != 0) {
                                var_r3_2 = HSD_Randi((s32)var_f0);
                            } else {
                                var_r3_2 = 0;
                            }
                            var_r30->gv.corneria.xEC += (f32)var_r3_2;
                            sp140 = temp_f25 + var_r30->gv.corneria.xEC;
                            sp128 = temp_f24 + var_r30->gv.corneria.xEC;
                            if (temp_f27 == temp_f24) {
                                icemt_work[0x22] = (u8)-1;
                            } else if (temp_f27 == temp_f25) {
                                icemt_work[0x22] = 1;
                            } else {
                                var_f0_2 = temp_f25 - temp_f24;
                                if (var_f0_2 < temp_f31) {
                                    var_f0_2 = -var_f0_2;
                                }
                                if (var_f0_2 < temp_f19) {
                                    if (HSD_Randi(2) != 0) {
                                        var_r0 = 1;
                                    } else {
                                        var_r0 = -1;
                                    }
                                    icemt_work[0x22] = (u8)var_r0;
                                } else {
                                    if (temp_f25 < temp_f24) {
                                        var_r0_2 = -1;
                                    } else {
                                        var_r0_2 = 1;
                                    }
                                    icemt_work[0x22] = (u8)var_r0_2;
                                }
                            }
                            if (grBigBlue_801E89DC(1) != 0) {
                                icemt_work[0x22] = 1;
                                sp13C = -(temp_f28 + Stage_GetBlastZoneRightOffset());
                            } else if ((s32)(s8)icemt_work[0x22] == 1) {
                                sp13C = sp124;
                                sp140 = sp128;
                                sp144 = sp12C;
                            }
                            var_r16 = 0;
                            loop_45:
                            spE0 = grBb_803B8108.unkC;
                            spE4 = grBb_803B8108.unk10;
                            spE8 = grBb_803B8108.unk14;
                            var_r17 = grBigBlue_801E8794(temp_r31, &sp13C, 0, temp_f30 * (spE0 * Ground_801C0498()), grBb_804DB31C);
                            if (var_r17 == 0) {
                                spD4 = grBb_803B8108.unkC;
                                spD8 = grBb_803B8108.unk10;
                                spDC = grBb_803B8108.unk14;
                                var_r17 = grBigBlue_801EAB50(&sp13C, 0, temp_f30 * (spD4 * Ground_801C0498()),grBb_804DB31C);
                            }
                            if (var_r17 == 0) {
                                M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                                if (sp140 == *(f32*)&(s32){grBigBlue_801E8D04()}) {
                                    var_r17 = 1;
                                }
                            }
                            if (var_r17 == 1) {
                                var_r16 += 1;
                                sp140 += temp_f29;
                                if (var_r16 < 3) {
                                    goto loop_45;
                                }
                            }
                            if (var_r17 != 0) {
                                sp140 = temp_f28 + Stage_GetCamBoundsTopOffset();
                            }
                            if (temp_f27 == sp140) {
                                sp140 = temp_f28 + Stage_GetCamBoundsTopOffset();
                            }
                            if (temp_r31 == NULL) {
                                __assert(grBb_804D46A8, 0x394U, grBb_804D46B0);
                            }
                            temp_r31->translate.x = sp13C;
                            temp_r31->translate.y = sp140;
                            temp_r31->translate.z = sp144;
                            if (!(temp_r31->flags & 0x02000000)) {
                                temp_cr0_eq = temp_r31 == NULL;
                                if (temp_cr0_eq == 0) {
                                    if (temp_cr0_eq != 0) {
                                        __assert(grBb_804D46A8, 0x394U, grBb_804D46B0);
                                    }
                                    temp_r4_2 = temp_r31->flags;
                                    var_r3_3 = 0;
                                    if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                                        var_r3_3 = 1;
                                    }
                                    if (var_r3_3 == 0) {
                                        HSD_JObjSetMtxDirtySub(temp_r31);
                                    }
                                }
                            }
                            var_r30->gv.corneria.xF8 = sp140;

                            // x11C, x120, x124, x128, x12C are used as float storage
                            *(f32*)&var_r30->gv.corneria.x11C = sp13C;
                            *(f32*)&var_r30->gv.corneria.x120 = sp140;
                            *(f32*)&var_r30->gv.corneria.x124 = sp144;
                            *(f32*)&var_r30->gv.corneria.x128 =
                            grBb_804D69C8->unk98 * (f32)(s8)icemt_work[0x22];

                            *(f32*)(bb_work + 0x130) = temp_f31;  // was var_r30->unk130
                            *(f32*)&var_r30->gv.corneria.x12C = temp_f31;

                            var_r30->gv.corneria.x104 = temp_f31;
                            var_r30->gv.corneria.x100 = temp_f31;
                            var_r30->gv.corneria.xFC = temp_f31;

                            *(u8*)(bb_work + 0x118) = 0;  // or u32*, depending on decomp,
                            // but u8 is fine to compile
                            var_r30->gv.corneria.x110 = 0;
                            *(u8*)(bb_work + 0xE5) = 3;  // unkE5 = 3U
                            HSD_JObjClearFlagsAll(temp_r31, 0x10U);
                            *(u8*)(bb_work + 0x134) = 0;  // unk134 = 0

                            temp_r3_4 = grBb_804D69C8->unkB8;
                            if (temp_r3_4 != 0) {
                                var_r3_4 = HSD_Randi(temp_r3_4);
                            } else {
                                var_r3_4 = 0;
                            }
                            if (var_r3_4 == 0) {
                                grBigBlue_801E8A1C(var_r25);
                            }
                            temp_r4_3 = temp_r27->gv.flatzone2.xC4;
                            temp_r27->gv.flatzone2.xC4 = temp_r4_3 + 1;
                            if (grBigBlue_801E89DC(2) == 0) {
                                temp_r4_4 = temp_r27->gv.flatzone2.xC4;
                                if (temp_r4_4 >= (s32)grBb_804D69C8->unk11C) {
                                    temp_r0_2 = grBb_804D69C8->unk120;
                                    if ((temp_r4_4 <= temp_r0_2) &&
                                        ((temp_r4_4 == temp_r0_2) || (HSD_Randi(2) != 0))) {
                                        grBigBlue_801E8978(2, 1, temp_r31);
                                        }
                                }
                            }
                            if (grBigBlue_801E89DC(1) == 0) {
                                temp_r4_5 = temp_r27->gv.flatzone2.xC4;
                                if ((temp_r4_5 >= (s32)grBb_804D69C8->unkDC) &&
                                    ((s32)(s8)icemt_work[0x22] == 1) &&
                                    ((temp_r4_5 >= (s32)grBb_804D69C8->unkE0) ||
                                    (HSD_Randi(2) != 0))) {
                                    grBigBlue_801E8978(0, 0, NULL);
                                grBigBlue_801E8978(1, 1, temp_r31);
                                temp_r27->gv.flatzone2.xC4 = 0;
                                    }
                            }
                        }
                    } else {
                        var_r19 = temp_r27;
                        var_r18 = temp_r27;
                        var_r16_2 = 0;
                        var_r17_2 = 0;
                        do {
                            /* compare against that car’s xD4 “owner” object */
                            if (temp_r31 != *(HSD_JObj**)&var_r19->gv.corneria.xD4) {
                                /* read that car’s unkE5 state byte at offset 0xE5 */
                                temp_r0_3 = *((u8*)var_r18 + 0xE5);

                                if ((s8)temp_r0_3 == 3) {
                                    u8* icemt_other = (u8*)&var_r18->gv.icemt;
                                    f32 other_x = *(f32*)&var_r18->gv.corneria.x11C;

                                    if (((s32)(s8)icemt_other[0x22] == 1 &&
                                        other_x < Stage_GetCamBoundsRightOffset()) ||
                                        ((s8)icemt_other[0x22] == -1 &&
                                        other_x > Stage_GetCamBoundsLeftOffset())) {
                                        var_r16_2 += 1;
                                        }
                                } else if ((s8)temp_r0_3 == 1 &&
                                    (*(s32*)&var_r18->gv.corneria.xE8 == 0)) {
                                    /* state == 1 and countdown == 0 */
                                    var_r16_2 += 1;
                                    }
                            }

                            var_r17_2 += 1;
                            var_r19 = (Ground*)((u8*)var_r19 + 4);
                            var_r18 = (Ground*)((u8*)var_r18 + 0x54);
                        } while (var_r17_2 < 3);
                        if (var_r16_2 <= 1) {
                            var_r30->gv.corneria.xE8 = 0.0f;
                        } else {
                            /* treat xE8 as an integer countdown and decrement */
                            s32 tmp = *(s32*)&var_r30->gv.corneria.xE8;
                            tmp -= 1;
                            *(s32*)&var_r30->gv.corneria.xE8 = tmp;
                        }
                    }
                    }
                    break;
                    case 3:
                        if (temp_r31 == NULL) {
                            __assert(grBb_804D46A8, 0x3D3U, grBb_804D46B0);
                        }
                        temp_r5 = temp_r31->translate.x;
                        sp13C = temp_r5;
                        sp140 = temp_r31->translate.y;
                        sp144 = temp_r31->translate.z;
                        temp_f1 = grBigBlue_801EC58C(&sp13C, &sp118, temp_r5);
                        if (temp_f27 == temp_f1) {
                            sp120 = temp_f31;
                            sp118 = temp_f31;
                            sp11C = temp_f18;
                        }
                        sp108 = temp_f31;
                        sp104 = temp_f31;
                        sp10C = atan2f(-sp118, sp11C);
                        spC8 = grBb_803B8108.unkC;
                        spCC = grBb_803B8108.unk10;
                        spD0 = grBb_803B8108.unk14;
                        sp130 = (f32)(s8)icemt_work[0x22] *
                        ((&spC8)[(s8)temp_r16] * Ground_801C0498());
                        sp138 = temp_f31;
                        sp134 = temp_f31;
                        lbVector_ApplyEulerRotation((Point3d*)&sp130, (Point3d*)&sp104);
                        lbVector_Add((Point3d*)&sp130, (Point3d*)&sp13C);
                        spBC = grBb_803B8108.unkC;
                        spC0 = grBb_803B8108.unk10;
                        spC4 = grBb_803B8108.unk14;
                        sp124 = (f32) - (s8)icemt_work[0x22] *
                        ((&spBC)[(s8)temp_r16] * Ground_801C0498());
                        sp12C = temp_f31;
                        sp128 = temp_f31;
                        lbVector_ApplyEulerRotation((Point3d*)&sp124, (Point3d*)&sp104);
                        lbVector_Add((Point3d*)&sp124, (Point3d*)&sp13C);
                        temp_r3_5 = var_r30->gv.corneria.x110;
                        if (((s32)temp_r3_5 == 0) || (*(u8*)(bb_work + 0x118) == 3)) {
                            if ((*(s32*)&var_r30->gv.corneria.x114 == 0) &&
                                ((s32)temp_r3_5 != 0)) {
                                var_r30->gv.corneria.xF4 = sp140;
                            var_r30->gv.corneria.xE8 = grBb_804D69C8->unkB0;
                            *(u8*)(bb_work + 0x118) = 1;
                                }
                                var_r30->gv.corneria.xF0 = sp10C;
                                if (temp_r31 == NULL) {
                                    __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                }
                                if (temp_r31->rotate.z < var_r30->gv.corneria.xF0) {
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                    }
                                    temp_f24_2 =
                                    temp_f23 * (grBb_804D69C8->unk9C *
                                    (var_r30->gv.corneria.xF0 - temp_r31->rotate.z));
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x41DU, grBb_804D46B0);
                                    }
                                    temp_r31->rotate.z += temp_f24_2;
                                    if (!(temp_r31->flags & 0x02000000)) {
                                        temp_cr0_eq_2 = temp_r31 == NULL;
                                        if (temp_cr0_eq_2 == 0) {
                                            if (temp_cr0_eq_2 != 0) {
                                                __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                            }
                                            temp_r4_6 = temp_r31->flags;
                                            var_r3_5 = 0;
                                            if (!(temp_r4_6 & 0x800000) && (temp_r4_6 & 0x40)) {
                                                var_r3_5 = 1;
                                            }
                                            if (var_r3_5 == 0) {
                                                HSD_JObjSetMtxDirtySub(temp_r31);
                                            }
                                        }
                                    }
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                    }
                                    temp_f24_3 = var_r30->gv.corneria.xF0;
                                    M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
                                    if (temp_r31->rotate.z == temp_f24_3) {
                                        if (temp_r31 == NULL) {
                                            __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                                        }
                                        if (temp_r31->flags & 0x20000) {
                                            __assert(grBb_804D46A8, 0x2AAU,
                                                     (char*)(grBb_803E2938 + 0x538));
                                        }
                                        temp_r31->rotate.z = temp_f24_3;
                                        if (!(temp_r31->flags & 0x02000000)) {
                                            temp_cr0_eq_3 = temp_r31 == NULL;
                                            if (temp_cr0_eq_3 == 0) {
                                                if (temp_cr0_eq_3 != 0) {
                                                    __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                                }
                                                temp_r4_7 = temp_r31->flags;
                                                var_r3_6 = 0;
                                                if (!(temp_r4_7 & 0x800000) && (temp_r4_7 & 0x40)) {
                                                    var_r3_6 = 1;
                                                }
                                                if (var_r3_6 == 0) {
                                                    HSD_JObjSetMtxDirtySub(temp_r31);
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                    }
                                    temp_f24_4 =
                                    temp_f23 * (grBb_804D69C8->unk9C *
                                    (var_r30->gv.corneria.xF0 - temp_r31->rotate.z));
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x41DU, grBb_804D46B0);
                                    }
                                    temp_r31->rotate.z += temp_f24_4;
                                    if (!(temp_r31->flags & 0x02000000)) {
                                        temp_cr0_eq_4 = temp_r31 == NULL;
                                        if (temp_cr0_eq_4 == 0) {
                                            if (temp_cr0_eq_4 != 0) {
                                                __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                            }
                                            temp_r4_8 = temp_r31->flags;
                                            var_r3_7 = 0;
                                            if (!(temp_r4_8 & 0x800000) && (temp_r4_8 & 0x40)) {
                                                var_r3_7 = 1;
                                            }
                                            if (var_r3_7 == 0) {
                                                HSD_JObjSetMtxDirtySub(temp_r31);
                                            }
                                        }
                                    }
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                    }
                                    temp_f24_5 = var_r30->gv.corneria.xF0;
                                    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                                    if (temp_r31->rotate.z == temp_f24_5) {
                                        if (temp_r31 == NULL) {
                                            __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                                        }
                                        if (temp_r31->flags & 0x20000) {
                                            __assert((char*)grBb_804D46A8, 0x2AAU,
                                                     (char*)(grBb_803E2938 + 0x538));
                                        }
                                        temp_r31->rotate.z = temp_f24_5;
                                        if (!(temp_r31->flags & 0x02000000)) {
                                            temp_cr0_eq_5 = temp_r31 == NULL;
                                            if (temp_cr0_eq_5 == 0) {
                                                if (temp_cr0_eq_5 != 0) {
                                                    __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                                }
                                                temp_r4_9 = temp_r31->flags;
                                                var_r3_8 = 0;
                                                if (!(temp_r4_9 & 0x800000) && (temp_r4_9 & 0x40)) {
                                                    var_r3_8 = 1;
                                                }
                                                if (var_r3_8 == 0) {
                                                    HSD_JObjSetMtxDirtySub(temp_r31);
                                                }
                                            }
                                        }
                                    }
                                }
                        } else {
                            if (*(s32*)&var_r30->gv.corneria.x114 == 0) {
                                var_r30->gv.corneria.xF4 = sp140;
                                var_r30->gv.corneria.xE8 = grBb_804D69C8->unkB0;
                                *(u8*)(bb_work + 0x118) = 1;  // unk118 = 1
                            }
                            if (*(f32*)&var_r30->gv.corneria.x108 <
                                *(f32*)&var_r30->gv.corneria.x10C) {
                                var_r4 = 1;
                                } else {
                                    var_r4 = -1;
                                }
                                if (*(f32*)&var_r30->gv.corneria.x100 != (f32)var_r4) {
                                    var_r30->gv.corneria.xE8 = grBb_804D69C8->unkB0;
                                    *(u8*)(bb_work + 0x118) = 1;
                                }
                                var_r30->gv.corneria.x100 = (f32)var_r4;
                            if (*(u8*)(bb_work + 0x118) == 2) {
                                sp140 += *(f32*)&var_r30->gv.corneria.x12C;
                                var_r30->gv.corneria.xF0 = sp10C;
                                if (temp_r31 == NULL) {
                                    __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                }
                                if (temp_r31->rotate.z < var_r30->gv.corneria.xF0) {
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                    }
                                    temp_f24_6 = temp_f23 *
                                    (grBb_804D69C8->unk9C *
                                    (var_r30->gv.corneria.xF0 - temp_r31->rotate.z));
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x41DU, grBb_804D46B0);
                                    }
                                    temp_r31->rotate.z += temp_f24_6;
                                    if (!(temp_r31->flags & 0x02000000)) {
                                        temp_cr0_eq_6 = temp_r31 == NULL;
                                        if (temp_cr0_eq_6 == 0) {
                                            if (temp_cr0_eq_6 != 0) {
                                                __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                            }
                                            temp_r4_10 = temp_r31->flags;
                                            var_r3_9 = 0;
                                            if (!(temp_r4_10 & 0x800000) && (temp_r4_10 & 0x40)) {
                                                var_r3_9 = 1;
                                            }
                                            if (var_r3_9 == 0) {
                                                HSD_JObjSetMtxDirtySub(temp_r31);
                                            }
                                        }
                                    }
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                    }
                                    temp_f24_7 = var_r30->gv.corneria.xF0;
                                    M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
                                    if (temp_r31->rotate.z == temp_f24_7) {
                                        if (temp_r31 == NULL) {
                                            __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                                        }
                                        if (temp_r31->flags & 0x20000) {
                                            __assert((char*)grBb_804D46A8, 0x2AAU,
                                                     (char*)grBb_803E2938 + 0x538);
                                        }
                                        temp_r31->rotate.z = temp_f24_7;
                                        if (!(temp_r31->flags & 0x02000000)) {
                                            temp_cr0_eq_7 = temp_r31 == NULL;
                                            if (temp_cr0_eq_7 == 0) {
                                                if (temp_cr0_eq_7 != 0) {
                                                    __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                                }
                                                temp_r4_11 = temp_r31->flags;
                                                var_r3_10 = 0;
                                                if (!(temp_r4_11 & 0x800000) && (temp_r4_11 & 0x40)) {
                                                    var_r3_10 = 1;
                                                }
                                                if (var_r3_10 == 0) {
                                                    HSD_JObjSetMtxDirtySub(temp_r31);
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                    }
                                    temp_f24_8 = temp_f23 *
                                    (grBb_804D69C8->unk9C *
                                    (var_r30->gv.corneria.xF0 - temp_r31->rotate.z));
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x41DU, grBb_804D46B0);
                                    }
                                    temp_r31->rotate.z += temp_f24_8;
                                    if (!(temp_r31->flags & 0x02000000)) {
                                        temp_cr0_eq_8 = temp_r31 == NULL;
                                        if (temp_cr0_eq_8 == 0) {
                                            if (temp_cr0_eq_8 != 0) {
                                                __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                            }
                                            temp_r4_12 = temp_r31->flags;
                                            var_r3_11 = 0;
                                            if (!(temp_r4_12 & 0x800000) && (temp_r4_12 & 0x40)) {
                                                var_r3_11 = 1;
                                            }
                                            if (var_r3_11 == 0) {
                                                HSD_JObjSetMtxDirtySub(temp_r31);
                                            }
                                        }
                                    }
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                    }
                                    temp_f24_9 = var_r30->gv.corneria.xF0;
                                    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                                    if (temp_r31->rotate.z == temp_f24_9) {
                                        if (temp_r31 == NULL) {
                                            __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                                        }
                                        if (temp_r31->flags & 0x20000) {
                                            __assert((char*)grBb_804D46A8, 0x2AAU,
                                                     (char*)grBb_803E2938 + 0x538);
                                        }
                                        temp_r31->rotate.z = temp_f24_9;
                                        if (!(temp_r31->flags & 0x02000000)) {
                                            temp_cr0_eq_9 = temp_r31 == NULL;
                                            if (temp_cr0_eq_9 == 0) {
                                                if (temp_cr0_eq_9 != 0) {
                                                    __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                                }
                                                temp_r4_13 = temp_r31->flags;
                                                var_r3_12 = 0;
                                                if (!(temp_r4_13 & 0x800000) && (temp_r4_13 & 0x40)) {
                                                    var_r3_12 = 1;
                                                }
                                                if (var_r3_12 == 0) {
                                                    HSD_JObjSetMtxDirtySub(temp_r31);
                                                }
                                            }
                                        }
                                    }
                                }
                                M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
                                if (sp140 == var_r30->gv.corneria.xF4) {
                                    *(f32*)&var_r30->gv.corneria.x12C = temp_f31;
                                    *(f32*)&var_r30->gv.corneria.x104 = temp_f31;
                                    *(f32*)&var_r30->gv.corneria.x100 = temp_f31;
                                    *(u8*)(bb_work + 0x118) = 3;
                                }
                            } else if (*(s32*)&var_r30->gv.corneria.xE8 <= 0) {
                                *(f32*)&var_r30->gv.corneria.x12C = grBb_804D69C8->unkAC;
                                var_r30->gv.corneria.xE8 = grBb_804D69C8->unkB4;
                                *(u8*)(bb_work + 0x118) = 2;
                            } else {
                                temp_f0 = *(f32*)&var_r30->gv.corneria.x108;
                                temp_f1_2 = *(f32*)&var_r30->gv.corneria.x10C;

                                if (temp_f0 < temp_f1_2) {
                                    *(f32*)&var_r30->gv.corneria.x104 =
                                    grBb_804D69C8->unkA0 * (temp_f1_2 - temp_f0);
                                    temp_f1_3 = grBb_804D69C8->unkA4;
                                    M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
                                    if (*(f32*)&var_r30->gv.corneria.x104 == temp_f1_3) {
                                        var_r30->gv.corneria.x104 = temp_f1_3;
                                    }
                                    sp140 -= grBb_804D69C8->unkA8;
                                } else {
                                    var_r30->gv.corneria.x104 =
                                    -grBb_804D69C8->unkA0 * (temp_f0 - temp_f1_2);
                                    temp_f0_2 = -grBb_804D69C8->unkA4;
                                    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                                    if (*(f32*)&var_r30->gv.corneria.x104 == temp_f0_2) {
                                        var_r30->gv.corneria.x104 = temp_f0_2;
                                    }
                                    sp140 += grBb_804D69C8->unkA8;
                                }
                                temp_f24_10 = temp_f23 * (*(f32*)&var_r30->gv.corneria.x104);
                                if (temp_r31 == NULL) {
                                    __assert(grBb_804D46A8, 0x41DU, grBb_804D46B0);
                                }
                                temp_r31->rotate.z += temp_f24_10;
                                if (!(temp_r31->flags & 0x02000000)) {
                                    temp_cr0_eq_10 = temp_r31 == NULL;
                                    if (temp_cr0_eq_10 == 0) {
                                        if (temp_cr0_eq_10 != 0) {
                                            __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                        }
                                        temp_r4_14 = temp_r31->flags;
                                        var_r3_13 = 0;
                                        if (!(temp_r4_14 & 0x800000) && (temp_r4_14 & 0x40)) {
                                            var_r3_13 = 1;
                                        }
                                        if (var_r3_13 == 0) {
                                            HSD_JObjSetMtxDirtySub(temp_r31);
                                        }
                                    }
                                }
                                if (temp_r31 == NULL) {
                                    __assert(grBb_804D46A8, 0x2E9U, grBb_804D46B0);
                                }
                                temp_f24_11 = temp_f17 * temp_r31->rotate.z;
                                if (sp140 < (temp_f1 + grBb_804D69C8->unk90)) {
                                    if (temp_f24_11 > temp_f16) {
                                        if (temp_r31 == NULL) {
                                            __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                                        }
                                        if (temp_r31->flags & 0x20000) {
                                            __assert((char*)grBb_804D46A8, 0x2AAU,
                                                     (char*)grBb_803E2938 + 0x538);
                                        }
                                        temp_r31->rotate.z = temp_f15;
                                        if (!(temp_r31->flags & 0x02000000)) {
                                            temp_cr0_eq_11 = temp_r31 == NULL;
                                            if (temp_cr0_eq_11 == 0) {
                                                if (temp_cr0_eq_11 != 0) {
                                                    __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                                }
                                                temp_r4_15 = temp_r31->flags;
                                                var_r3_14 = 0;
                                                if (!(temp_r4_15 & 0x800000) && (temp_r4_15 & 0x40)) {
                                                    var_r3_14 = 1;
                                                }
                                                if (var_r3_14 == 0) {
                                                    HSD_JObjSetMtxDirtySub(temp_r31);
                                                }
                                            }
                                        }
                                    }
                                    if (temp_f24_11 < temp_f14) {
                                        if (temp_r31 == NULL) {
                                            __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                                        }
                                        if (temp_r31->flags & 0x20000) {
                                            __assert((char*)grBb_804D46A8, 0x2AAU,
                                                     (char*)grBb_803E2938 + 0x538);
                                        }
                                        temp_r31->rotate.z = (f32)sp148;
                                        if (!(temp_r31->flags & 0x02000000)) {
                                            temp_cr0_eq_12 = temp_r31 == NULL;
                                            if (temp_cr0_eq_12 == 0) {
                                                if (temp_cr0_eq_12 != 0) {
                                                    __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                                }
                                                temp_r4_16 = temp_r31->flags;
                                                var_r3_15 = 0;
                                                if (!(temp_r4_16 & 0x800000) && (temp_r4_16 & 0x40)) {
                                                    var_r3_15 = 1;
                                                }
                                                if (var_r3_15 == 0) {
                                                    HSD_JObjSetMtxDirtySub(temp_r31);
                                                }
                                            }
                                        }
                                    }
                                }
                                if (temp_f24_11 > (f32)sp150) {
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                                    }
                                    if (temp_r31->flags & 0x20000) {
                                        __assert((char*)grBb_804D46A8, 0x2AAU,
                                                 (char*)grBb_803E2938 + 0x538);
                                    }
                                    temp_r31->rotate.z = (f32)sp158;
                                    if (!(temp_r31->flags & 0x02000000)) {
                                        temp_cr0_eq_13 = temp_r31 == NULL;
                                        if (temp_cr0_eq_13 == 0) {
                                            if (temp_cr0_eq_13 != 0) {
                                                __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                            }
                                            temp_r4_17 = temp_r31->flags;
                                            var_r3_16 = 0;
                                            if (!(temp_r4_17 & 0x800000) && (temp_r4_17 & 0x40)) {
                                                var_r3_16 = 1;
                                            }
                                            if (var_r3_16 == 0) {
                                                HSD_JObjSetMtxDirtySub(temp_r31);
                                            }
                                        }
                                    }
                                }
                                if (temp_f24_11 < (f32)sp160) {
                                    if (temp_r31 == NULL) {
                                        __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                                    }
                                    if (temp_r31->flags & 0x20000) {
                                        __assert((char*)grBb_804D46A8, 0x2AAU,
                                                 (char*)grBb_803E2938 + 0x538);
                                    }
                                    temp_r31->rotate.z = (f32)sp168;
                                    if (!(temp_r31->flags & 0x02000000)) {
                                        temp_cr0_eq_14 = temp_r31 == NULL;
                                        if (temp_cr0_eq_14 == 0) {
                                            if (temp_cr0_eq_14 != 0) {
                                                __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                            }
                                            temp_r4_18 = temp_r31->flags;
                                            var_r3_17 = 0;
                                            if (!(temp_r4_18 & 0x800000) && (temp_r4_18 & 0x40)) {
                                                var_r3_17 = 1;
                                            }
                                            if (var_r3_17 == 0) {
                                                HSD_JObjSetMtxDirtySub(temp_r31);
                                            }
                                        }
                                    }
                                }
                                *(f32*)&var_r30->gv.corneria.xE8 =
                                (f32)((*(s32*)&var_r30->gv.corneria.xE8) - 1);
                            }
                        }
                        temp_f22 = Stage_GetCamBoundsTopOffset();
                        temp_f25_2 = Stage_GetCamBoundsBottomOffset();
                        spA0 = grBb_803B8108.unkC;
                        spA4 = grBb_803B8108.unk10;
                        spA8 = grBb_803B8108.unk14;
                        temp_f0_3 = (&spA0)[(s8)temp_r16] * Ground_801C0498();
                        sp94 = grBb_803B8108.unkC;
                        sp98 = grBb_803B8108.unk10;
                        sp9C = grBb_803B8108.unk14;
                        temp_r3_6 = grBigBlue_801EACE8(
                            temp_r31,   // HSD_JObj*
                            &sp13C,     // used like f32*
                            &spEC,      // used like f32*
                            temp_f28 + ((&sp88)[(s8) temp_r16] * Ground_801C0498()),
                                                       grBb_804DB34C
                        );

                        spF0 = sp13C;
                        spF4 = sp140;
                        spF8 = sp144;
                        temp_f24_12 = (f32)grBigBlue_801EC58C(&spF0, NULL, grBb_804DB30C);
                        sp88 = grBb_803B8108.unkC;
                        sp8C = grBb_803B8108.unk10;
                        sp90 = grBb_803B8108.unk14;
                        temp_r3_6 = grBigBlue_801EACE8(temp_r31, &sp13C, &spEC, temp_f28 + ((&sp88)[(s8)temp_r16] * Ground_801C0498()), grBb_804DB34C);
                        if ((temp_r3_6 == 0) || ((temp_r3_6 == 1) && (sp140 < spEC))) {
                            M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                            if (temp_f25_3 == temp_f24_12) {
                                if (temp_f27 == temp_f24_12) {
                                    var_r30->gv.corneria.xF8 = sp134;
                                } else {
                                    var_r30->gv.corneria.xF8 =
                                    temp_f24_12 + var_r30->gv.corneria.xEC;
                                }
                            } else {
                                var_r30->gv.corneria.xF8 = temp_f25_3 + var_r30->gv.corneria.xEC;
                            }
                        } else if (temp_r3_6 == 1) {
                            var_r30->gv.corneria.xF8 = sp140 + (sp140 - spEC);
                        }
                        temp_f2 = var_r30->gv.corneria.xF8;
                        var_f1 = sp140 - temp_f2;
                        if (var_f1 < temp_f31) {
                            var_f1 = -var_f1;
                        }
                        if (var_f1 < (f32)sp170) {
                            var_f1_2 = grBb_804DB2F4;
                        } else if (sp140 < temp_f2) {
                            temp_f2_2 = grBb_804D69C8->unkC0;
                            temp_f0_4 = (temp_f2 - sp140) / grBb_804D69C8->unkBC;
                            var_f1_2 = temp_f0_4;
                            if (temp_f0_4 > temp_f2_2) {
                                var_f1_2 = temp_f2_2;
                            }
                        } else {
                            var_f1_2 = (temp_f2 - sp140) / grBb_804D69C8->unkC4;
                            temp_f0_5 = -grBb_804D69C8->unkC8;
                            if (var_f1_2 < temp_f0_5) {
                                var_f1_2 = temp_f0_5;
                            }
                        }
                        sp140 += var_f1_2;
                        temp_f24_13 = *(f32*)&var_r30->gv.corneria.x128;
                        if (temp_r31 == NULL) {
                            __assert(grBb_804D46A8, 0x44EU, grBb_804D46B0);
                        }
                        temp_r31->translate.x += temp_f24_13;
                        if (!(temp_r31->flags & 0x02000000)) {
                            temp_cr0_eq_15 = temp_r31 == NULL;
                            if (temp_cr0_eq_15 == 0) {
                                if (temp_cr0_eq_15 != 0) {
                                    __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                }
                                temp_r4_19 = temp_r31->flags;
                                var_r3_18 = 0;
                                if (!(temp_r4_19 & 0x800000) && (temp_r4_19 & 0x40)) {
                                    var_r3_18 = 1;
                                }
                                if (var_r3_18 == 0) {
                                    HSD_JObjSetMtxDirtySub(temp_r31);
                                }
                            }
                        }
                        if (temp_r31 == NULL) {
                            __assert(grBb_804D46A8, 0x3B3U, grBb_804D46B0);
                        }
                        temp_r31->translate.y = sp140;
                        if (!(temp_r31->flags & 0x02000000)) {
                            temp_cr0_eq_16 = temp_r31 == NULL;
                            if (temp_cr0_eq_16 == 0) {
                                if (temp_cr0_eq_16 != 0) {
                                    __assert(grBb_804D46A8, 0x234U, grBb_804D46B0);
                                }
                                temp_r4_20 = temp_r31->flags;
                                var_r3_19 = 0;
                                if (!(temp_r4_20 & 0x800000) && (temp_r4_20 & 0x40)) {
                                    var_r3_19 = 1;
                                }
                                if (var_r3_19 == 0) {
                                    HSD_JObjSetMtxDirtySub(temp_r31);
                                }
                            }
                        }
                        var_r30->gv.corneria.x11C = sp13C;
                        *(f32*)&gp->gv.corneria.x12C = temp_f31;
                        *(f32*)&gp->gv.corneria.x128 = temp_f31;
                        var_r30->gv.corneria.x104 = temp_f31;
                        var_r30->gv.corneria.x110 = 0;
                        var_r30->gv.corneria.x10C = temp_f31;
                        var_r30->gv.corneria.x108 = temp_f31;

                        if (*(f32*)&var_r30->gv.corneria.x128 < temp_f31) {
                            if (temp_r31 == NULL) {
                                __assert(grBb_804D46A8, 0x3E1U, grBb_804D46B0);
                            }
                            if (!(temp_r31->translate.x <
                                -((temp_f28 + Stage_GetBlastZoneRightOffset()) - temp_f20))) {
                                goto block_365;
                                }
                                goto block_369;
                        }
                        block_365:

                       if (*(f32*)&var_r30->gv.corneria.x128 < temp_f31){
                            if (temp_r31 == NULL) {
                                __assert(grBb_804D46A8, 0x3E1U, grBb_804D46B0);
                            }
                            if (temp_r31->translate.x >
                                ((temp_f28 + Stage_GetBlastZoneRightOffset()) - temp_f20)) {
                                block_369:
                                HSD_JObjSetFlagsAll(temp_r31, 0x10U);
                            if (temp_r31 == NULL) {
                                __assert(grBb_804D46A8, 0x2A9U, grBb_804D46B0);
                            }
                            if (temp_r31->flags & 0x20000) {
                                __assert((char*)grBb_804D46A8, 0x2AAU,
                                         (char*)grBb_803E2938 + 0x538);
                            }
                            temp_r31->rotate.z = temp_f31;
                            if (!(temp_r31->flags & 0x02000000)) {
                                temp_cr0_eq_17 = temp_r31 == NULL;
                                if (temp_cr0_eq_17 == 0) {
                                    if (temp_cr0_eq_17 != 0) {
                                        __assert((char*)grBb_804D46A8, 0x234U,
                                                 (char*)grBb_804D46B0);
                                    }
                                    temp_r4_21 = temp_r31->flags;
                                    var_r3_20 = 0;
                                    if (!(temp_r4_21 & 0x800000) && (temp_r4_21 & 0x40)) {
                                        var_r3_20 = 1;
                                    }
                                    if (var_r3_20 == 0) {
                                        HSD_JObjSetMtxDirtySub(temp_r31);
                                    }
                                }
                            }
                            var_r30->gv.corneria.x130 = temp_f31;
                            *(f32*)&gp->gv.corneria.x12C = temp_f31;
                            *(f32*)&gp->gv.corneria.x128 = temp_f31;
                            var_r30->gv.corneria.x104 = temp_f31;
                            var_r30->gv.corneria.x100 = temp_f31;
                            var_r30->gv.corneria.xFC = temp_f31;
                            var_r30->gv.corneria.xF0 = temp_f31;
                            work->unk118 = 0;
                            var_r30->gv.corneria.x110 = 0;
                            temp_r3_7 = grBb_804D69C8->unk8C;
                            if (temp_r3_7 != 0) {
                                var_r3_21 = HSD_Randi(temp_r3_7);
                            } else {
                                var_r3_21 = 0;
                            }
                            var_r30->gv.corneria.xE8 =
                            (f32)((grBb_804D69C8->unk88 + var_r3_21) / 2);
                            work->unkE5 = 1U;
                                }
                        }
                        break;
            }
        }
        var_r25 += 1;
        var_r30 += 0x54;
    } while (var_r25 < 3);
    Ground_801C2FE0(gobj);
}

void grBigBlue_801E855C(Ground_GObj* arg) {}

/// #fn_801E8560

/// #grBigBlue_801E8794

s32 grBigBlue_801E8978(s32 arg0, s32 arg1, HSD_JObj* arg2){
    u8 unused[8];
    u8* base;
    u8* entry;

    (void)unused;


    base = Ground_801C2BA4(0x20)->user_data;

    if (arg2 != NULL){
        *(HSD_JObj**)(base + 0xE0) = arg2;
    }

    entry = base + (arg0 * 4);
    *(s32*)(entry + 0xC8) = arg1;

    return (s32) entry;
}


/// #grBigBlue_801E89DC

/// #grBigBlue_801E8A1C

/// #grBigBlue_801E8B84

s32 grBigBlue_801E8D04(void){
    f32 bottom;
    f32 left;
    f32 right;

    right  = Stage_GetCamBoundsRightOffset();
    left   = Stage_GetCamBoundsLeftOffset();
    bottom = Stage_GetCamBoundsBottomOffset();

    return grBigBlue_801E8B84(Stage_GetCamBoundsTopOffset(), bottom, left, right);
}


/// #grBigBlue_801E8D64

bool grBigBlue_801E93D0(Ground_GObj* arg)
{
    return false;
}

/// #grBigBlue_801E93D8

void grBigBlue_801E9F38(Ground_GObj* arg) {}

/// #grBigBlue_801E9F3C

bool grBigBlue_801EA054(Ground_GObj* arg)
{
    return false;
}

/// #grBigBlue_801EA05C

void grBigBlue_801EAB4C(Ground_GObj* arg) {}

/// #grBigBlue_801EAB50

/// #grBigBlue_801EACE8

/// #grBigBlue_801EB004

/// #grBigBlue_801EB4AC

/// #grBigBlue_801EBAF8

/// #grBigBlue_801EC58C

/// #grBigBlue_801EC6C0

/// #grBigBlue_801ECB50

/// #grBigBlue_801ED694

/// #grBigBlue_801EDF44

/// #grBigBlue_801EE398

/// #grBigBlue_801EEF00

/// #grBigBlue_801EF424

/// #fn_801EF60C

void grBigBlue_801EF7D8(Point3d* arg0){

    HSD_GObj* gobj;
    f32 val;

    gobj = Ground_801C2BA4(0x22);
    if ((gobj != NULL) && (gobj->user_data != NULL)) {
        arg0->x = grBb_804DB3F0;

        val = grBb_804DB2F4;
        arg0->y = val;
        arg0->z = val;
    }
    else {
        val = grBb_804DB2F4;
        arg0->z = val;
        arg0->y = val;
        arg0->x = val;
    }
}


/// #grBigBlue_801EF844

/// #fn_801EFB9C

DynamicsDesc* grBigBlue_801EFC0C(enum_t arg)
{
    return false;
}

/// #grBigBlue_801EFC14

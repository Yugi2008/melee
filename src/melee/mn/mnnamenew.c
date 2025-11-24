#include "mnnamenew.h"

/// #mnNameNew_8023B0F8

/// #mnNameNew_8023B224

/// #mnNameNew_8023B314

/// #mnNameNew_KeySetup

/// #mnNameNew_8023BAA8

/// #PickAutoName

/// #NameContainsOnlySpaces

/// #WriteCharactersForNameAtIndex

/// #AddCharacterToName

/// #mnNameNew_GlyphVariantInput

/// #mnNameNew_MainInput

/// #mnNameNew_8023CE4C

/// #fn_8023CFC8

/// #fn_8023D0F8

/// #mnNameNew_8023D130

/// #mnNameNew_GlyphVariantSetup

/// #mnNameNew_8023DA08

/// #fn_8023DAEC

/// #fn_8023DBE8

/// #mnNameNew_8023E0D8

s32 InitNameEntryUIState(void* arg0, s8 arg1){
    NameEntryUIState* state;
    s32 lang;
    s32 idx;
    u8** names;

    u8 pad[0x20];

    state = (NameEntryUIState*) arg0;
    state->unk1 = (u8) mn_804A04F0.x2;

    lang = lbLang_IsSavedLanguageUS();
    if (lang != 0) {
        state->unk50 = 2;
    }
    else {
        state->unk50 = 0;
    }

    idx = 0;

    state->unk58 = (u8) idx;
    state->unk51 = state->unk1;
    state->unk54 = idx;
    state->unk59 = (u8) arg1;
    state->unk60 = idx;
    state->unk64 = idx;
    state->unk68 = idx;

    names = AutoNamesList;
    while ((s8) mnNameNew_NullCharacter != (s8) **names) {
        names++;
        idx++;
    }

    state->unk5A = (u8) idx;
    state->unk5B = (u8) idx;
    state->unk5C = (u8) idx;
    state->unk5D = (u8) idx;
    state->unk5E = (u8) idx;

    return lang;
}


/// #mnNameNew_8023E32C

s32 mnNameNew_EnterFromMnName(s32 arg0){
    MnNameNewCurrentNameText* text = &mnNameNew_CurrentNameText;
    u8 unused[8];
    (void)unused;

    mn_804A04F0.x10 = 1;

    if (lbLang_IsSavedLanguageUS() != 0) {
        mn_804A04F0.x2 = 0x2D;
    }
    else {
        mn_804A04F0.x2 = 0;
    }

    mnNameNew_PortInUse = 4;

    text->unk0 = mnNameNew_NullCharacter;
    text->unk3 = mnNameNew_NullCharacter;
    text->unk6 = mnNameNew_NullCharacter;
    text->unk9 = mnNameNew_NullCharacter;

    return mnNameNew_8023E32C(arg0);
}


/// #mnNameNew_EnterFromMnCharSel

void mnNameNew_8023EA08(UNK_T arg0)
{
    mnNameNew_EnterFromMnCharSel(arg0, 4);
}

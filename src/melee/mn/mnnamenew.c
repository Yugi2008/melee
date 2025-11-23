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

/// #InitNameEntryUIState

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

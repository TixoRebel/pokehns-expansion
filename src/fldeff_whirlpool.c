#include "global.h"
#include "braille_puzzles.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "fldeff.h"
#include "fieldmap.h"
#include "constants/metatile_behaviors.h"
#include "item_use.h"
#include "overworld.h"
#include "party_menu.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/map_types.h"
#include "constants/songs.h"

static void FieldCallback_Whirlpool(void);
static void FieldMove_Whirlpool(void);

// Called when Whirlpool is used from the party menu
// For interacting with a headbutt-able tree in the field, see EventScript_Whirlpool
bool8 SetUpFieldMove_Whirlpool(void)
{
    if (CheckObjectGraphicsInFrontOfPlayer(OBJ_EVENT_GFX_WHIRLPOOL) == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Whirlpool;
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static void FieldCallback_Whirlpool(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext_SetupScript(EventScript_Whirlpool);
}

bool8 FldEff_UseWhirlpool(void)
{
    u8 taskId = CreateFieldMoveTask();

    gTasks[taskId].data[8] = (u32)FieldMove_Whirlpool >> 16;
    gTasks[taskId].data[9] = (u32)FieldMove_Whirlpool;
    return FALSE;
}

// The actual rock smashing is handled by EventScript_SmashRock, so this function does very little
static void FieldMove_Whirlpool(void)
{
    PlaySE(SE_M_WHIRLPOOL);
    FieldEffectActiveListRemove(FLDEFF_USE_WHIRLPOOL);
    ScriptContext_Enable();
}

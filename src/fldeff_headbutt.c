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

static void FieldCallback_Headbutt(void);
static void FieldMove_Headbutt(void);

// MB_HEADBUTT_TREE
bool8 CheckMetatileBehaviorInFrontOfPlayer(u32 metatileBehavior)
{
    GetXYCoordsOneStepInFrontOfPlayer(&gPlayerFacingPosition.x, &gPlayerFacingPosition.y);
    // gPlayerFacingPosition.elevation = PlayerGetElevation();
    if (metatileBehavior == MapGridGetMetatileBehaviorAt(gPlayerFacingPosition.x, gPlayerFacingPosition.y))
    {
        return TRUE;
    }
    return FALSE;
}

// Called when Headbutt is used from the party menu
// For interacting with a headbutt-able tree in the field, see EventScript_Headbutt
bool8 SetUpFieldMove_Headbutt(void)
{
    if (CheckMetatileBehaviorInFrontOfPlayer(MB_HEADBUTT_TREE))
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Headbutt;
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static void FieldCallback_Headbutt(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext_SetupScript(EventScript_Headbutt);
}

bool8 FldEff_UseHeadbutt(void)
{
    u8 taskId = CreateFieldMoveTask();

    gTasks[taskId].data[8] = (u32)FieldMove_Headbutt >> 16;
    gTasks[taskId].data[9] = (u32)FieldMove_Headbutt;
    IncrementGameStat(GAME_STAT_USED_HEADBUTT);
    return FALSE;
}

// The actual rock smashing is handled by EventScript_SmashRock, so this function does very little
static void FieldMove_Headbutt(void)
{
    PlaySE(SE_M_HEADBUTT);
    FieldEffectActiveListRemove(FLDEFF_USE_HEADBUTT);
    ScriptContext_Enable();
}

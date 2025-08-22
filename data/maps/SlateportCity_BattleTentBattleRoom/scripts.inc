@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_SLATEPORT_TENT_BATTLE_PLAYER).
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by factory_setopponentgfx.

SlateportCity_BattleTentBattleRoom_MapScripts::

SlateportCity_BattleTentBattleRoom_OnTransition:

SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx::

SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxMale::

SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale::

SlateportCity_BattleTentBattleRoom_OnWarp:

SlateportCity_BattleTentBattleRoom_EventScript_SetUpObjects::

SlateportCity_BattleTentBattleRoom_OnFrame:

SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom::
SlateportCity_BattleTent_EventScript_WarpToLobbyLost::
@ forced stop

SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent::
@ forced stop

SlateportCity_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
@ forced stop

SlateportCity_BattleTentBattleRoom_Movement_PlayerEnter:

SlateportCity_BattleTentBattleRoom_Movement_OpponentEnter:


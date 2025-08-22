@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_TOWER_MULTI_BATTLE_PLAYER).
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_F.
@ The graphics of the partner are represented with VAR_OBJ_GFX_ID_E, which will ultimately be set by tower_setpartnergfx.
@ The graphics of the opponents are represented with VAR_OBJ_GFX_ID_0 and OBJ_EVENT_GFX_VAR_1, which will ultimately be set by tower_setopponent.

BattleFrontier_BattleTowerMultiBattleRoom_MapScripts::

BattleFrontier_BattleTowerMultiBattleRoom_OnTransition:

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetPlayerGfxFemale::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetLinkPlayerGfx::

BattleFrontier_BattleTowerMultiBattleRoom_OnWarp:

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_HidePlayerObj::

BattleFrontier_BattleTowerMultiBattleRoom_OnFrame:

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoOpponentIntrosLink::
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle::
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetorePartyMsgLink::
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty::
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RecordBattle::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyWon::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_PauseChallenge::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSet::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSet::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSet::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSet::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSet::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSet::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSetLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSetLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSetLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSetLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSetLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSetLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_LinkDelayForMsg::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetireChallengeLink::

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReconnectLink::

BattleFrontier_BattleTowerMultiBattleRoom_Movement_PlayerEnterRoom:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_PartnerEnterRoom:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Enter:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Enter:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Exit:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Exit:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos:

BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft:

BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet:
	.string "The 2nd set of opponents is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet:
	.string "The 3rd set of opponents is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet:
	.string "The 4th set of opponents is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet:
	.string "The 5th set of opponents is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet:
	.string "The 6th set of opponents is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet:
	.string "The 7th set of opponents is next.\n"
	.string "Are you ready?$"

@ Unused
BattleFrontier_BattleTowerMultiBattleRoom_Text_2ndOpponentSetNext:
	.string "The 2nd set of opponents is next.\n"
	.string "Do your best!$"

@ Unused
BattleFrontier_BattleTowerMultiBattleRoom_Text_3rdOpponentSetNext:
	.string "The 3rd set of opponents is next.\n"
	.string "Do your best!$"

@ Unused
BattleFrontier_BattleTowerMultiBattleRoom_Text_4thOpponentSetNext:
	.string "The 4th set of opponents is next.\n"
	.string "Do your best!$"

@ Unused
BattleFrontier_BattleTowerMultiBattleRoom_Text_5thOpponentSetNext:
	.string "The 5th set of opponents is next.\n"
	.string "Do your best!$"

@ Unused
BattleFrontier_BattleTowerMultiBattleRoom_Text_6thOpponentSetNext:
	.string "The 6th set of opponents is next.\n"
	.string "Do your best!$"

@ Unused
BattleFrontier_BattleTowerMultiBattleRoom_Text_7thOpponentSetNext:
	.string "The 7th set of opponents is next.\n"
	.string "Do your best!$"

gText_LinkStandby3::
	.string "Link standby…$"

gText_YourPartnerHasRetired::
	.string "Your partner has retired.\p"
	.string "Your BATTLE ROOM challenge\n"
	.string "will be canceled.$"

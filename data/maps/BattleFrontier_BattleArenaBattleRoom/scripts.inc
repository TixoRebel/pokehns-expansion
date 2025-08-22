@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_ARENA_BATTLE_PLAYER).
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by tower_setopponent.
BattleFrontier_BattleArenaBattleRoom_MapScripts::

BattleFrontier_BattleArenaBattleRoom_OnResume:

BattleFrontier_BattleArenaBattleRoom_OnTransition:

BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx::

BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxMale::

BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxFemale::

BattleFrontier_BattleArenaBattleRoom_OnFrame:

BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom::

BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers::
BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner::
BattleFrontier_BattleArenaBattleRoom_EventScript_WarpToLobbyLost::

BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent::
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent::

BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord::

BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle::

BattleFrontier_BattleArenaBattleRoom_EventScript_RecordBattle::

BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge::

BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge::

BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge::
BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon::

BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor2ndOpponent::

BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor3rdOpponent::

BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor4thOpponent::

BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor5thOpponent::

BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor6thOpponent::

BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor7thOpponent::

BattleFrontier_BattleArenaBattleRoom_EventScript_PauseChallenge::

BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext::
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon::

BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord::

BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta::
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver::

BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver::

BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold::
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold::

BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold::

BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle::

BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle::

BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner::

BattleFrontier_BattleArenaBattleRoom_Movement_PlayerEnter:
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForwardLong:
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward:

BattleFrontier_BattleArenaBattleRoom_Movement_PlayerWalkBackToLine:

BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft:

BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight:

BattleFrontier_BattleArenaBattleRoom_Movement_OpponentEnter:
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong:
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward:

BattleFrontier_BattleArenaBattleRoom_Movement_GretaEnter:

BattleFrontier_BattleArenaBattleRoom_Movement_OpponentExit:

BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown:

BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp:

BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown:

@ Unused, redundant
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight2:

BattleFrontier_BattleArenaBattleRoom_OnWarp:

BattleFrontier_BattleArenaBattleRoom_EventScript_SetUpRoomObjects::

BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer:

BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter:

BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward:
	.string "REFEREE: TRAINER {PLAYER}!\n"
	.string "Step forward, please!$"

BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward:
	.string "REFEREE: TRAINER {STR_VAR_1}!\n"
	.string "Step forward, please!$"

BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin:
	.string "REFEREE: Set KO Tourney!\n"
	.string "Begin!$"

BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer:
	.string "REFEREE: The winner is {PLAYER}!$"

BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent:
	.string "REFEREE: The winner is {STR_VAR_1}!$"

BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored:
	.string "Your POKéMON will be restored to\n"
	.string "full health.$"

BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent:
	.string "Next up, your second opponent!\n"
	.string "Are you ready to move on?$"

BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent:
	.string "Next up, your third opponent!\n"
	.string "Are you ready to move on?$"

BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent:
	.string "Next up, your fourth opponent!\n"
	.string "Are you ready to move on?$"

BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent:
	.string "Next up, your fifth opponent!\n"
	.string "Are you ready to move on?$"

BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent:
	.string "Next up, your sixth opponent!\n"
	.string "Are you ready to move on?$"

BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent:
	.string "Next up, your seventh opponent!\n"
	.string "Are you ready to move on?$"

BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown:
	.string "Would you like to save the game and\n"
	.string "shut down now?$"

BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge:
	.string "Would you like to retire from your\n"
	.string "Set KO Tourney challenge?$"

BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait:
	.string "I am saving your game data.\n"
	.string "Please wait.$"

BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle:
	.string "Would you like to record your last\n"
	.string "battle on your FRONTIER PASS?$"

BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon:
	.string "My dear challenger!\p"
	.string "Your skill level is truly astounding!\p"
	.string "We now would like you to face our\n"
	.string "leader, the ARENA TYCOON!$"

BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon:
	.string "A battle with the ARENA TYCOON!\n"
	.string "Are you prepared?$"

BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta:
	.string "REFEREE: The ARENA TYCOON!\n"
	.string "Make way for GRETA!$"

BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger:
	.string "GRETA: Hey!\n"
	.string "Howdy!\p"
	.string "…Wait, are you the challenger?$"

BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight:
	.string "Is that right? Hmm…\n"
	.string "Hmhm…$"

BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy:
	.string "I don't know how to say it, but…\n"
	.string "To put it bluntly, you look pretty weak.\l"
	.string "Are you sure you're up for me?\p"
	.string "Hmm…\p"
	.string "Well, all right!\n"
	.string "We'll take things easy to start with!$"

BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle:
	.string "Okay! Let's see you ignite my passion\n"
	.string "for battle!$"

BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll:
	.string "GRETA: Ow, wait a second!\n"
	.string "You are tough after all!\p"
	.string "I like you!\n"
	.string "Let's see your FRONTIER PASS.$"

BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol:
	.string "The Guts Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime:
	.string "Hmm…\p"
	.string "It's going to be fun the next time!\n"
	.string "I'm looking forward to it!$"

BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain:
	.string "GRETA: Hey! Howdy!\n"
	.string "You finally won your way up to me!\p"
	.string "I was getting worried waiting for you!\n"
	.string "I was really looking forward to seeing\l"
	.string "you again!$"

BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady:
	.string "… … …\n"
	.string "So, are you ready?$"

BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort:
	.string "I won't allow a halfhearted effort!\n"
	.string "Be ready for a thrashing!$"

BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted:
	.string "Come on, REFEREE!\n"
	.string "Let's get this started!$"

BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway:
	.string "GRETA: Gaaah! Blown away!\n"
	.string "Let's see your FRONTIER PASS!$"

BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine:
	.string "The Guts Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose:
	.string "Arrrgh!\n"
	.string "This is so infuriating!\p"
	.string "If we ever battle again, I won't lose!\n"
	.string "Don't you forget it! Bye-bye!$"

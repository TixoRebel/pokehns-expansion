@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_FACTORY_BATTLE_PLAYER).
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_F.
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by factory_setopponentgfx.

BattleFrontier_BattleFactoryBattleRoom_MapScripts::

BattleFrontier_BattleFactoryBattleRoom_OnTransition:

BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj::

BattleFrontier_BattleFactoryBattleRoom_OnWarp:

BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects::
BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects::

BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale::

BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale::

BattleFrontier_BattleFactoryBattleRoom_OnFrame:

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle::

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom::
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent::
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost::

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent::
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak::
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum::
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon::

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland::
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver::

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver::

BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold::
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold::

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold::

BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle::

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland::

BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom:

BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland:

BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter:

BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle:

BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby::

BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles::

BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle::

BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn:
	.string "Hey, hey!\n"
	.string "Get a move on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead:
	.string "Hey, my name's NOLAND!\n"
	.string "I'm basically in charge of this place,\l"
	.string "which is why I'm the FACTORY HEAD!\p"
	.string "I had a look at your Battle Swap data.\p"
	.string "You seem to have the right idea,\n"
	.string "but you're still square in your head!\p"
	.string "Listen up, okay? Knowledge isn't only\n"
	.string "about reading books or doing desk work.\p"
	.string "Just doing that sort of thing…\n"
	.string "It may as well be useless!\p"
	.string "You have to experience things with\n"
	.string "your heart and your body, understand?\p"
	.string "I'll take you on under the same\n"
	.string "conditions as you.\p"
	.string "I'll be using rental POKéMON, too!$"

BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn:
	.string "Shake out every last bit of your\n"
	.string "knowledge and bring it on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass:
	.string "NOLAND: Smart going!\n"
	.string "Let's see your FRONTIER PASS.$"

BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol:
	.string "The Knowledge Symbol was embossed\n"
	.string "on the FRONTIER PASS!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred:
	.string "Heh…\n"
	.string "You're a pretty bright spark…\p"
	.string "Next time, I'll come after you hard.\n"
	.string "No holds barred, understand?\p"
	.string "You keep up your studies!$"

BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime:
	.string "NOLAND: Hey, hey! How's it going?\n"
	.string "You keeping up with your studies?\p"
	.string "…Oh?\p"
	.string "You've taken on a harder look than\n"
	.string "the last time I saw you.\p"
	.string "Now, this should be fun!\n"
	.string "I'm getting excited, hey!$"

BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn:
	.string "All right!\n"
	.string "Bring it on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass:
	.string "NOLAND: What the…\n"
	.string "You're getting out of my league!\p"
	.string "Sheesh!\n"
	.string "Let's see that FRONTIER PASS!$"

BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine:
	.string "The Knowledge Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou:
	.string "Pfft, man!\p"
	.string "That's absolutely the last time\n"
	.string "I lose to you!\p"
	.string "We have to do this again, hey?$"


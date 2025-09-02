.set LOCALID_SAFARIZONEGATE_BAOBA, 1

SafariZoneEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZoneEntrance_OnFrame
	.byte 0

SafariZoneEntrance_OnFrame::
	map_script_2 VAR_SAFARI_ZONE_GATE_STATE, 3, SafariZoneEntrance_MeetBaoba
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, SafariZoneEntrance_EventScript_ExitSafari
	.2byte 0

SafariZoneEntrance_EventScript_ExitSafari::
	lock
	turnobject LOCALID_PLAYER, DIR_EAST
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SafariZoneEntrance_EventScript_ReenterSafari
	special ExitSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 1
	setflag FLAG_GOOD_LUCK_SAFARI_ZONE
	msgbox SafariZone_South_Text_ExitEarlyThankYouForPlaying
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	release
	end

SafariZoneEntrance_EventScript_ReenterSafari::
	closemessage
	applymovement LOCALID_PLAYER, SafariZoneEntrance_Movement_EnterSafariZone
	waitmovement 0
	warp MAP_SAFARI_ZONE_ENTERANCE, 0
	delay 120
	end

SafariZoneEntrance_MeetBaoba::
	lock
	playse SE_PIN
	applymovement LOCALID_SAFARIZONEGATE_BAOBA, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_SAFARIZONEGATE_BAOBA, SafariZoneEntrance_Movement_WalkToPlayer
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	waitmovement LOCALID_SAFARIZONEGATE_BAOBA
	msgbox SafariZoneEntrance_Text_BaobaWelcome, MSGBOX_DEFAULT
	closemessage
	msgbox SafariZoneEntrance_Text_BaobaPokeblocks, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_POKEBLOCK_CASE
	closemessage
	applymovement LOCALID_SAFARIZONEGATE_BAOBA, SafariZoneEntrance_Movement_ReturnToTable
	waitmovement 0
	setvar VAR_SAFARI_ZONE_GATE_STATE, 4
	release
	end

SafariZoneEntrance_EventScript_Baoba::
	lock
	faceplayer
	goto_if_eq VAR_BAOBA_QUEST_STATE, 1, SafariZoneEntrance_EventScript_BaobaBeach
	goto_if_eq VAR_BAOBA_QUEST_STATE, 2, SafariZoneEntrance_EventScript_BaobaBrush
	goto_if_eq VAR_BAOBA_QUEST_STATE, 3, SafariZoneEntrance_EventScript_BaobaMountain
	goto_if_eq VAR_BAOBA_QUEST_STATE, 4, SafariZoneEntrance_EventScript_BaobaCave
	goto_if_ge VAR_BAOBA_QUEST_STATE, 5, SafariZoneEntrance_EventScript_BaobaDone
	msgbox SafariZoneEntrance_Text_Baoba, MSGBOX_DEFAULT 
	closemessage
	release
	end

SafariZoneEntrance_EventScript_BaobaBeach::
	msgbox SafariZoneEntrance_Text_BaobaBeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SafariZoneEntrance_EventScript_BaobaDeclined
	special ChoosePartyMon
	waitstate
	lockall
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SafariZoneEntrance_EventScript_BaobaDeclined
	baobacheckmon 1
	goto_if_eq VAR_RESULT, FALSE, SafarioneEntrance_EventScript_BaobaWrong
	msgbox SafariZoneEntrance_Text_BaobaBeachDone, MSGBOX_DEFAULT
	showmoneybox 0, 0
	addmoney 200000
	delay 60
	playse SE_SHOP
	updatemoneybox
	delay 60
	closemessage
	hidemoneybox
	setvar VAR_BAOBA_QUEST_STATE, 2
	release
	end

SafariZoneEntrance_EventScript_BaobaBrush::
	msgbox SafariZoneEntrance_Text_BaobaBrush, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SafariZoneEntrance_EventScript_BaobaDeclined
	special ChoosePartyMon
	waitstate
	lockall
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SafariZoneEntrance_EventScript_BaobaDeclined
	baobacheckmon 2
	goto_if_eq VAR_RESULT, FALSE, SafarioneEntrance_EventScript_BaobaWrong
	msgbox SafariZoneEntrance_Text_BaobaBrushDone, MSGBOX_DEFAULT
	showmoneybox 0, 0
	addmoney 300000
	delay 60
	playse SE_SHOP
	updatemoneybox
	delay 60
	closemessage
	hidemoneybox
	setvar VAR_BAOBA_QUEST_STATE, 3
	release
	end

SafariZoneEntrance_EventScript_BaobaMountain::
	msgbox SafariZoneEntrance_Text_BaobaMountain, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SafariZoneEntrance_EventScript_BaobaDeclined
	special ChoosePartyMon
	waitstate
	lockall
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SafariZoneEntrance_EventScript_BaobaDeclined
	baobacheckmon 3
	goto_if_eq VAR_RESULT, FALSE, SafarioneEntrance_EventScript_BaobaWrong
	msgbox SafariZoneEntrance_Text_BaobaMountainDone, MSGBOX_DEFAULT
	showmoneybox 0, 0
	addmoney 400000
	delay 60
	playse SE_SHOP
	updatemoneybox
	delay 60
	closemessage
	hidemoneybox
	setvar VAR_BAOBA_QUEST_STATE, 4
	release
	end

SafariZoneEntrance_EventScript_BaobaCave::
	msgbox SafariZoneEntrance_Text_BaobaCave, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SafariZoneEntrance_EventScript_BaobaDeclined
	special ChoosePartyMon
	waitstate
	lockall
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SafariZoneEntrance_EventScript_BaobaDeclined
	baobacheckmon 4
	goto_if_eq VAR_RESULT, FALSE, SafarioneEntrance_EventScript_BaobaWrong
	msgbox SafariZoneEntrance_Text_BaobaCaveDone, MSGBOX_DEFAULT
	showmoneybox 0, 0
	addmoney 400000
	delay 20
	playse SE_SHOP
	updatemoneybox
	delay 20
	closemessage
	hidemoneybox
	setvar VAR_BAOBA_QUEST_STATE, 5
	release
	end

SafarioneEntrance_EventScript_BaobaWrong::
	msgbox SafariZoneEntrance_Text_BaobaWrong, MSGBOX_DEFAULT
	release
	end

SafariZoneEntrance_EventScript_BaobaDeclined:
	msgbox SafariZoneEntrance_Text_BaobaDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneEntrance_EventScript_BaobaDone::
	msgbox SafariZoneEntrance_Text_BaobaDone, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneEntrance_EventScript_Test::
	givemon SPECIES_BELDUM, 5
	givemon SPECIES_CASTFORM, 5
	givemon SPECIES_MEDICHAM, 5
	givemon SPECIES_BAGON, 5
	end

SafariZoneEntrance_Text_BaobaBeachDone:
	.string "Thank you, {PLAYER}!\n"
	.string "Here, take this money to upgrade\l"
	.string "your SAFARI LEVEL and show me an\l"
	.string "exotic POKéMON from the BRUSH area\l"
	.string "next!$"
	
SafariZoneEntrance_Text_BaobaBrushDone:
	.string "Thank you, {PLAYER}!\n"
	.string "Here, take this money to upgrade\l"
	.string "your SAFARI LEVEL and show me an\l"
	.string "exotic POKéMON from the MOUNTAIN\l"
	.string "area next!$"

SafariZoneEntrance_Text_BaobaMountainDone:
	.string "Thank you, {PLAYER}!\n"
	.string "Here, take this money to upgrade\l"
	.string "your SAFARI LEVEL and show me an\l"
	.string "exotic POKéMON from the CAVE area\l"
	.string "next!$"

SafariZoneEntrance_Text_BaobaCaveDone:
	.string "Thank you, {PLAYER}!\n"
	.string "That's all I need to see.\p"
	.string "Now that I know what DEVON is up\n"
	.string "to, I'll be able to keep my SAFARI\l"
	.string "competitive. Here, take this as a\l"
	.string "reward for your troubles.$"

SafariZoneEntrance_Text_BaobaWrong:
	.string "That can't be right!$"

SafariZoneEntrance_Text_BaobaBeach:
	.string "Ah, {PLAYER}!\p"
	.string "Did you bring an exotic POKéMON\n"
	.string "from the BEACH area of the FUCHSIA\l"
	.string "SAFARI ZONE to show me?$"

SafariZoneEntrance_Text_BaobaBrush:
	.string "Ah, {PLAYER}!\p"
	.string "Did you bring an exotic POKéMON\n"
	.string "from the BRUSH area of the FUCHSIA\l"
	.string "SAFARI ZONE to show me?$"

SafariZoneEntrance_Text_BaobaMountain:
	.string "Ah, {PLAYER}!\p"
	.string "Did you bring an exotic POKéMON\n"
	.string "from the MOUNTAIN area of the\l"
	.string "FUCHSIA SAFARI ZONE to show me?$"

SafariZoneEntrance_Text_BaobaCave:
	.string "Ah, {PLAYER}!\p"
	.string "Did you bring an exotic POKéMON\n"
	.string "from the CAVE area of the FUCHSIA\l"
	.string "SAFARI ZONE to show me?$"

SafariZoneEntrance_Text_BaobaDeclined:
	.string "What will I do now?\n"
	.string "We'll never keep up with DEVON!$"

SafariZoneEntrance_Text_BaobaLastMon:
	.string "I can't take your last POKéMON!$"

SafariZoneEntrance_Text_BaobaDone:
	.string "Ah, {PLAYER}!\p"
	.string "Thanks to you, the SAFARI ZONE is\n"
	.string "thriving!\p"
	.string "Maybe I should name you OWNER of\n"
	.string "the safari zone...\p"
	.string "No, that would be ridiculous.\n"
	.string "Ahahahaha.$"

SafariZoneEntrance_EventScript_EntranceCounterTrigger::
	lockall
	turnobject LOCALID_PLAYER, DIR_EAST
	showmoneybox 0, 0
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZoneEntrance_EventScript_TryEnterSafariZone
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
	goto SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

SafariZoneEntrance_EventScript_TryEnterSafariZone::
	checkitem ITEM_POKEBLOCK_CASE
	goto_if_eq VAR_RESULT, 0, SafariZoneEntrance_EventScript_NoPokeblockCase
	call SafariZoneEntrance_EventScript_CheckHasRoomForPokemon
	checkmoney 500
	goto_if_eq VAR_RESULT, 0, SafariZoneEntrance_EventScript_NotEnoughMoney
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
	removemoney 500
	playse SE_SHOP
	updatemoneybox
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
	waitfanfare
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	applymovement LOCALID_PLAYER, SafariZoneEntrance_Movement_EnterSafariZone
	waitmovement 0
	special EnterSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 2
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
	warp MAP_SAFARI_ZONE_ENTERANCE, 0
	waitstate
	end

SafariZoneEntrance_EventScript_CheckHasRoomForPokemon::
	getpartysize
	goto_if_ne VAR_RESULT, PARTY_SIZE, SafariZoneEntrance_EventScript_HasRoomForPokemon
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
	goto_if_eq VAR_RESULT, 1, SafariZoneEntrance_EventScript_HasRoomForPokemon
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
	goto SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

SafariZoneEntrance_EventScript_HasRoomForPokemon::
	return

SafariZoneEntrance_EventScript_NoPokeblockCase::
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
	goto SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

SafariZoneEntrance_EventScript_NotEnoughMoney::
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

SafariZoneEntrance_EventScript_MovePlayerBackFromCounter::
	closemessage
	hidemoneybox
	applymovement LOCALID_PLAYER, SafariZoneEntrance_Movement_BackAwayFromCounter
	waitmovement 0
	releaseall
	end

SafariZoneEntrance_EventScript_Boy::
	lock
	faceplayer
	msgbox SafariZoneEntrance_Text_Boy, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneEntrance_EventScript_Engineer::
	lock
	faceplayer
	msgbox SafariZoneEntrance_Text_Engineer, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneEntrance_Movement_BackAwayFromCounter:
	walk_down
	step_end

SafariZoneEntrance_Movement_EnterSafariZone:
	walk_up
	step_end

SafariZoneEntrance_Movement_WalkToPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

SafariZoneEntrance_Movement_ReturnToTable:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SafariZoneEntrance_Text_BaobaWelcome:
	.string "Hi {PLAYER}!\n"
	.string "I've been waiting for you.\n"
	.string "What do you think?\p"
	.string "This is a brand new SAFARI ZONE\n"
	.string "by the way...\p"
	.string "And it's still expanding!\p"
	.string "So far, we have two zones open\n"
	.string "and 4 more on the way!\p"
	.string "Enjoy the SAFARI ZONE! I'll\n"
	.string "call you when the other zones\l"
	.string "are ready!$"

SafariZoneEntrance_Text_BaobaPokeblocks:
	.string "Oh! I almost forgot.\p"
	.string "POKéBLOCKS are an essential\n"
	.string "feature of my SAFARI ZONE, so\l"
	.string "you'd better have one of these!$"

SafariZoneEntrance_Text_Baoba:
	.string "Hi {PLAYER}!\p"
	.string "How are you enjoying the SAFARI\n"
	.string "ZONE?$"

SafariZoneEntrance_Text_Boy:
	.string "I heard the new zone they\n"
	.string "are working on has dragons!$"

SafariZoneEntrance_Text_Engineer:
	.string "Sorry Trainer, this area is still\n"
	.string "under construction. Check back\l"
	.string "later!$"

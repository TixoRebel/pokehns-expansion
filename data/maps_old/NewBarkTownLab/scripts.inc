.set LOCALID_ELM, 2
.set LOCALID_AIDE1, 1
.set LOCALID_AIDE2, 3
.set LOCALID_COP, 7
.set PLAYER_STARTER_SPECIES,  VAR_TEMP_2

NewBarkTownLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTownLab_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBarkTownLab_OnFrame
	.byte 0

NewBarkTownLab_OnTransition::
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 6, NewBarkTownLab_EventScript_ElmAtComputer
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 2, NewBarkTownLab_EventScript_ElmAtComputer
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 3, NewBarkTownLab_EventScript_ElmAtComputer
	end
	
NewBarkTownLab_OnFrame::
	map_script_2 VAR_NEWBARKTOWN_LABSTATE, 4, NewBarkTownLab_EventScript_PoliceEpisode
	.2byte 0

NewBarkTownLab_EventScript_ElmAtComputer::
	setobjectxyperm LOCALID_ELM, 3, 2
	setobjectmovementtype LOCALID_ELM, MOVEMENT_TYPE_FACE_UP
	end

NewBarkTownLab_EventScript_TriggerStartLabLeft::	
	lock
	applymovement LOCALID_PLAYER, NewBarkTownLab_Movement_WalkRight
	waitmovement 0
	goto NewBarkTownLab_EventScript_TriggerStartLab
	end

NewBarkTownLab_EventScript_TriggerStartLabRight::
	lock
	applymovement LOCALID_PLAYER, NewBarkTownLab_Movement_WalkLeft
	waitmovement 0
	goto NewBarkTownLab_EventScript_TriggerStartLab
	end

NewBarkTownLab_EventScript_TriggerStartLab::
	lock
	applymovement LOCALID_PLAYER, NewBarkTownLabMovement_WalkToElm
	waitmovement 0
	goto NewBarkTownLab_EventScript_ElmIntro
	end

NewBarkTown_EventScript_Aide1::
	lock
	faceplayer
	msgbox NewBarkTownLab_Text_AideAlwaysBusy, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_EventScript_Aide2::
	lock
	faceplayer
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 5, NewBarkTown_EventScript_Aide2Testimony
	msgbox NewBarkTownLab_Text_AideSave, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_EventScript_Aide2Testimony::
	msgbox NewBarkTownLab_Text_AideTheftTestimony, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTownLab_EventScript_Elm::
	lock
	faceplayer
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 7, NewBarkTownLab_EventScript_ElmMasterBall
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 8, NewBarkTownLab_EventScript_ElmKimono
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 9, NewBarkTownLab_EventScript_ElmLeague
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 10, NewBarkTownLab_EventScript_ElmSSTicket

	goto_if_set FLAG_SHOWN_ELM_TOGEPI, NewBarkTownLab_EventScript_Elm_CallMe
	call_if_unset FLAG_SHOWN_ELM_TOGEPI, NewBarkTownLab_EventScript_Elm_Check_Togepi
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 1, NewBarkTownLab_EventScript_Elm_Check_WhereIsEgg
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 5, NewBarkTownLab_EventScript_ElmState5

	goto_if_ge VAR_NEWBARKTOWN_LABSTATE, 6, NewBarkTownLab_EventScript_ElmState5
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 2, CopNewBarkTownLab_EventScript_ElmState2
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 3, CopNewBarkTownLab_EventScript_ElmState2
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTownLab_EventScript_MrPokemon
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTownLab_EventScript_ElmChoosePokemon
	end

NewBarkTownLab_EventScript_ElmIntro::
	msgbox NewBarkTownLab_Text_ElmIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTownLab_EventScript_ElmAccepted
	goto_if_eq VAR_RESULT, NO, NewBarkTownLab_EventScript_ElmRefused
	end

NewBarkTownLab_EventScript_ElmRefused::
	msgbox NewBarkTownLab_Text_ElmRefused, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTownLab_EventScript_ElmAccepted
	goto_if_eq VAR_RESULT, NO, NewBarkTownLab_EventScript_ElmRefused
	end

NewBarkTownLab_EventScript_ElmAccepted::
	msgbox NewBarkTownLab_Text_ElmAccepted, MSGBOX_DEFAULT
	msgbox NewBarkTownLab_Text_ElmResearchAmbitions, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement LOCALID_ELM, Common_Movement_QuestionMark
	waitmovement 0 
	delay 50
	applymovement LOCALID_ELM, NewBarkTownLab_Movement_CheckEmail
	applymovement LOCALID_PLAYER, NewBarkTownLab_Movement_Look_Left
	waitmovement 0
	waitmovement 0
	msgbox NewBarkTownLab_Text_ElmGotAnEmail, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ELM, NewBarkTownLab_Movement_ReturnFromEmail
	waitmovement 0
	applymovement LOCALID_PLAYER, NewBarkTownLab_Movement_Look_Up
	waitmovement 0
	delay 30
	msgbox NewBarkTownLab_Text_ElmMissionFromMrPokemon, MSGBOX_DEFAULT
	goto NewBarkTownLab_EventScript_ElmChoosePokemon
	end

NewBarkTownLab_EventScript_ElmChoosePokemon::
	msgbox NewBarkTownLab_Text_ElmChooseAPokemon, MSGBOX_DEFAULT
	closemessage
	setvar VAR_NEWBARKTOWN_LABSTATE, 1
	release
	end

NewBarkTownLab_EventScript_TriggerReturnPlayer::
	lock
	msgbox NewBarkTownLab_Text_ElmWhereGoing, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, NewBarkTownLab_Movement_ReturnPlayer
	waitmovement 0
	release
	end

NewBarkTownLab_EventScript_ShouldntTouch::
	msgbox NewBarkTownLab_Text_ShouldntTouch, MSGBOX_DEFAULT
	closemessage
	end


NewBarkTownLab_EventScript_ChikoritaBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTownLab_EventScript_ShouldntTouch
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTownLab_EventScript_ChikoritaBall_Choice
	msgbox NewBarkTownLab_Text_ShouldntTouch, MSGBOX_DEFAULT
	release
	closemessage
	end

NewBarkTownLab_EventScript_ChikoritaBall_Choice::
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHIKORITA
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
	msgbox NewBarkTownLab_Text_ChooseChikorita, MSGBOX_YESNO
	setvar VAR_STARTER_MON, 0
	goto_if_eq VAR_RESULT, YES, NewBarkTownLab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, NewBarkTownLab_EventScript_DeclinedStarter
	end

NewBarkTownLab_EventScript_CyndaquilBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTownLab_EventScript_ShouldntTouch
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTownLab_EventScript_CyndaquilBall_Choice
	msgbox NewBarkTownLab_Text_ShouldntTouch, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTownLab_EventScript_CyndaquilBall_Choice::
	setvar PLAYER_STARTER_SPECIES, SPECIES_CYNDAQUIL
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
	msgbox NewBarkTownLab_Text_ChooseCyndaquil, MSGBOX_YESNO
	setvar VAR_STARTER_MON, 1
	goto_if_eq VAR_RESULT, YES, NewBarkTownLab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, NewBarkTownLab_EventScript_DeclinedStarter
	end

NewBarkTownLab_EventScript_TotodileBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTownLab_EventScript_ShouldntTouch
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTownLab_EventScript_TotodileBall_Choice
	msgbox NewBarkTownLab_Text_ShouldntTouch, MSGBOX_DEFAULT
	release
	closemessage
	end

NewBarkTownLab_EventScript_TotodileBall_Choice::
	setvar PLAYER_STARTER_SPECIES, SPECIES_TOTODILE
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
	msgbox NewBarkTownLab_Text_ChooseTotodile, MSGBOX_YESNO
	setvar VAR_STARTER_MON, 2
	goto_if_eq VAR_RESULT, YES, NewBarkTownLab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, NewBarkTownLab_EventScript_DeclinedStarter
	end

NewBarkTownLab_EventScript_DeclinedStarter::
	hidemonpic
	msgbox NewBarkTownLab_Text_DidntChooseStarter, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTownLab_EventScript_ChoseStarter::
	hidemonpic
	removeobject VAR_LAST_TALKED
	setflag FLAG_SYS_POKEMON_GET
	msgbox NewBarkTownLab_Text_ChoseStarter, MSGBOX_DEFAULT
	givemon PLAYER_STARTER_SPECIES, 5
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
	message NewBarkTownLab_Text_ReceivedStarter
	waitfanfare
	msgbox NewBarkTownLab_Text_Nickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTownLab_EventScript_NicknameStarter
	release
	end

NewBarkTownLab_EventScript_NicknameStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	end

NewBarkTownLab_EventScript_MrPokemon::
	setvar VAR_NEWBARKTOWN_LABSTATE, 2
	setvar VAR_NEWBARK_TOWN_STATE, 3
	msgbox NewBarkTownLab_Text_ElmDirections1, MSGBOX_DEFAULT
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	msgbox NewBarkTownLab_Text_ElmDirections2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ELM, NewBarkTownLab_Movement_CheckEmailSlow
	waitmovement 0
	clearflag FLAG_RECEIVED_FIRST_BALLS
	clearflag FLAG_RECEIVED_FIRST_POTION
	setvar VAR_NEWBARK_TOWN_STATE, 3
	release
	end

CopNewBarkTownLab_EventScript_ElmState2::
	msgbox NewBarkTownLab_Text_ElmDirections1, MSGBOX_DEFAULT
	msgbox NewBarkTownLab_Text_ElmDirections2, MSGBOX_DEFAULT
	applymovement LOCALID_ELM, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	closemessage
	release
	end

NewBarkTownLab_EventScript_HealingMachine1::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTownLab_EventScript_HealingMachine2
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
	closemessage
	release
	end

NewBarkTownLab_EventScript_HealingMachine2::
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end



NewBarkTownLab_EventScript_TriggerAideGivePotion::
	lock
	applymovement LOCALID_AIDE1, NewBarkTownLab_Movement_Aide1WalkToPlayer
	waitmovement 0
	turnobject LOCALID_PLAYER, DIR_WEST
	msgbox NewBarkTownLab_Text_AideGivePotion, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FIRST_POTION
	setvar VAR_NEWBARKTOWN_LABSTATE, 3
	applymovement LOCALID_AIDE1, NewBarkTownLab_Movement_Aide1LeavePlayer
	waitmovement 0
	turnobject LOCALID_PLAYER, DIR_SOUTH
	release
	end

NewBarkTownLab_EventScript_HideCyndaquil::
	setflag FLAG_HIDE_CYNDAQUILBALL
	return
NewBarkTownLab_EventScript_HideTotodile::
	setflag FLAG_HIDE_TOTODILEBALL
	return
NewBarkTownLab_EventScript_HideChikorita::
	setflag FLAG_HIDE_CHIKORITABALL
	return

NewBarkTownLab_EventScript_PoliceEpisode::
	lock
	setmetatile 7, 1, METATILE_R26_21_Broken_Window, TRUE
	call_if_eq VAR_STARTER_MON, 0 NewBarkTownLab_EventScript_HideCyndaquil
	call_if_eq VAR_STARTER_MON, 1 NewBarkTownLab_EventScript_HideTotodile
	call_if_eq VAR_STARTER_MON, 2 NewBarkTownLab_EventScript_HideChikorita
	applymovement LOCALID_PLAYER, NeBarkTownLab_Movement_PlayerWalkToCop
	waitmovement 0
	setflag FLAG_HIDE_LAB_POLICEMAN
	turnobject LOCALID_COP DIR_WEST
	msgbox NewBarkTownLab_Text_Officer1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTownLab_EventScript_PoliceYes
	goto_if_eq VAR_RESULT, NO, NewBarkTownLab_EventScript_PoliceNo
	end

NewBarkTownLab_EventScript_PoliceNo::
	msgbox NewBarkTownLab_Text_OfficerNo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTownLab_EventScript_PoliceYes
	goto_if_eq VAR_RESULT, NO, NewBarkTownLab_EventScript_PoliceNo
	end

NewBarkTownLab_EventScript_PoliceYes::
	msgbox NewBarkTownLab_Text_Officer2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_COP, NewBarkTownLab_Movement_CopLeaves
	waitmovement 0
	removeobject LOCALID_COP

	@ setobjectxyperm LOCALID_COP, 25, 4
	applymovement LOCALID_PLAYER, NewBarkTownLab_Movement_PlayerStepsToElm
	waitmovement 0
	msgbox NewBarkTownLab_Text_ElmAfterTheft1, MSGBOX_DEFAULT
	msgbox NewBarkTownLab_Text_ElmAfterTheft2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ELM, NewBarkTownLab_Movement_ElmStepBack
	waitmovement 0
	msgbox NewBarkTownLab_Text_ElmAfterTheft3, MSGBOX_DEFAULT
	delay 20
	closemessage
	applymovement LOCALID_ELM, NewBarkTownLab_Movement_ElmStepForward
	waitmovement 0
	msgbox NewBarkTownLab_Text_ElmAfterTheft4, MSGBOX_DEFAULT
	closemessage
	setvar VAR_NEWBARKTOWN_LABSTATE, 5
	setvar VAR_NEWBARK_TOWN_STATE, 4
	setflag FLAG_HIDE_MOMS_FRIEND
	clearflag FLAG_HIDE_MOMS_FRIEND2
	setflag FLAG_ADVENTURE_STARTED
	removeitem ITEM_MYSTERY_EGG
	end

NewBarkTownLab_EventScript_ElmState5::
	lock
	faceplayer
	msgbox NewBarkTownLab_Text_ElmStudyingEgg, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ELM Common_Movement_FaceOriginalDirection
	release
	end
	
NewBarkTownLab_EventScript_ElmMasterBall::
	lock
	faceplayer
	msgbox NewBarkTownLab_Text_ElmGiveMasterBall1, MSGBOX_DEFAULT
	giveitem ITEM_MASTER_BALL
	msgbox NewBarkTownLab_Text_ElmGiveMasterBall2, MSGBOX_DEFAULT
	closemessage
	delay 20
	playse SE_PIN
	applymovement LOCALID_ELM, Common_Movement_ExclamationMark
	delay 60
	msgbox NewBarkTownLab_Text_KimonoGirls, MSGBOX_DEFAULT
	closemessage
	setvar VAR_NEWBARKTOWN_LABSTATE, 8
	setvar VAR_ECRUTEAK_THEATER, 4
	setflag FLAG_HIDE_ECRUTEAK_SILVER
	setflag FLAG_HIDE_ECRUTEAK_THEATER_NPCS
	clearflag FLAG_HIDE_ECRUTEAK_THEATER_KIMONOS
	release
	end

NewBarkTownLab_EventScript_ElmKimono::
	lock
	faceplayer
	msgbox NewBarkTownLab_Text_KimonoWaiting, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTownLab_EventScript_ElmLeague::
	lock
	faceplayer
	msgbox NewBarkTownLab_Text_League, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTownLab_EventScript_ElmSSTicket::
	msgbox NewBarkTownLab_Text_ElmGiveTicket1, MSGBOX_DEFAULT
	giveitem ITEM_SS_TICKET
	msgbox NewBarkTownLab_Text_ElmGiveTicket2, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_SSAQUA1_GRANDPA
	setvar VAR_NEWBARKTOWN_LABSTATE, 11
	release
	end

NewBarkTownLab_EventScript_TriggerAideGiveBalls::
	lock
	applymovement LOCALID_AIDE1, NewBarkTownLab_Movement_Aide1WalkToPlayer
	waitmovement 0
	turnobject LOCALID_PLAYER, DIR_WEST
	msgbox NewBarkTownLab_Text_AideGiveBalls, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_POKE_BALL, 5
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FIRST_BALLS
	setvar VAR_NEWBARKTOWN_LABSTATE, 6
	applymovement LOCALID_AIDE1, NewBarkTownLab_Movement_Aide1LeavePlayer
	waitmovement 0
	turnobject LOCALID_PLAYER, DIR_SOUTH
	release
	end

NewBarkTownLab_EventScript_Elm_Check_WhereIsEgg::
	msgbox NewBarkTownLab_Text_ElmWaitingEggHatch, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTownLab_EventScript_Elm_Check_Togepi::
	specialvar VAR_RESULT, CheckTogepi
	goto_if_eq VAR_RESULT, TRUE, NewBarkTownLab_EventScript_Elm_Togepi_Seen
	return

NewBarkTownLab_EventScript_Elm_Togepi_Seen::
	msgbox NewBarkTownLab_Text_ShowTogepi1, MSGBOX_DEFAULT
	waitmessage
	msgbox NewBarkTownLab_Text_ShowTogepi2, MSGBOX_DEFAULT
	waitmessage
	msgbox NewBarkTownLab_Text_ShowTogepi3, MSGBOX_DEFAULT
	waitmessage
	msgbox NewBarkTownLab_Text_ElmGiveEverstone1, MSGBOX_DEFAULT
	waitmessage
	giveitem ITEM_EVERSTONE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox NewBarkTownLab_Text_ElmGiveEverstone2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SHOWN_ELM_TOGEPI
	release
	end

NewBarkTownLab_EventScript_Elm_CallMe::
	msgbox NewBarkTownLab_Text_Elm_CallMe, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTownLab_Movement_WalkRight:
	walk_right
	step_end

NewBarkTownLab_Movement_WalkLeft:
	walk_left
	step_end

NewBarkTownLabMovement_WalkToElm:
	walk_up
	walk_up
	walk_up
	step_end

NewBarkTownLab_Movement_ReturnPlayer:
	walk_up
	step_end

NewBarkTownLab_Movement_CheckEmail:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	step_end

NewBarkTownLab_Movement_CheckEmailSlow:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

NewBarkTownLab_Movement_ReturnFromEmail:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

NewBarkTownLab_Movement_Look_Left:
	face_left
	step_end

NewBarkTownLab_Movement_Look_Up:
	face_up
	step_end


NewBarkTownLab_Movement_Aide1WalkToPlayer:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

NewBarkTownLab_Movement_Aide1LeavePlayer:
	walk_left
	walk_left
	walk_up
	walk_up
	face_down
	step_end

NeBarkTownLab_Movement_PlayerWalkToCop:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	face_right
	step_end

NewBarkTownLab_Movement_CopLeaves:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

NewBarkTownLab_Movement_PlayerStepsToElm:
	walk_right
	face_up
	step_end

NewBarkTownLab_Movement_ElmStepBack:
	lock_facing_direction
	walk_fast_up
	unlock_facing_direction
	step_end

NewBarkTownLab_Movement_ElmStepForward:
	walk_fast_down
	step_end

NewBarkTownLab_Text_ShouldntTouch:
	.string "Probably shouldn't touch!$"

NewBarkTownLab_Text_ElmIntro:
	.string "ELM: {PLAYER}! There you are!\p"
	.string "I needed to ask you a favor.\p"
	.string "I'm conducting new POKéMON\n"
	.string "research right now. I was\l"
	.string "wondering if you could help\l"
	.string "me with it, {PLAYER}.\p"
	.string "You see…\p"
	.string "I'm writing a paper that I\n"
	.string "want to present at a conference.\p"
	.string "But there are some things I\n"
	.string "don't quite understand yet.\p"
	.string "So!\p"
	.string "I'd like you to raise a\n"
	.string "POKéMON that I recently caught$"

NewBarkTownLab_Text_ElmAccepted:
	.string "Thanks, {PLAYER}!\n"
	.string "You're a great help!$"

NewBarkTownLab_Text_ElmRefused:
	.string "But… Please, I need your\n"
	.string "help!$"

NewBarkTownLab_Text_ElmResearchAmbitions:
	.string "When I announce my findings,\n"
	.string "I'm sure we'll delve deeper\p"
	.string "into the many mysteries of\n"
	.string "POKéMON.\p"
	.string "You can count on it!$"

NewBarkTownLab_Text_ElmGotAnEmail:
	.string "Oh, hey! I got an e-mail!\p"
	.string "… … … … … … … …\n"
	.string "Hm… Uh-huh…\p"
	.string "Okay…$"

NewBarkTownLab_Text_ElmMissionFromMrPokemon:
	.string "Hey, listen.\p"
	.string "I have an acquaintance called\n"
	.string "MR. POKéMON.\p"
	.string "He keeps finding weird things and\n"
	.string "raving about his discoveries.\p"
	.string "Anyway, I just got an e-mail\n"
	.string "from him saying that this\l"
	.string "time it's real.\p"
	.string "It is intriguing, but we're\n"
	.string "busy with our POKéMON research...\p"
	.string "Wait!\n"
	.string "I know!\p"
	.string "{PLAYER}, can you go in our\n"
	.string "place?$"

NewBarkTownLab_Text_ElmChooseAPokemon:
	.string "I want you to raise one of\n"
	.string "the POKéMON contained in these Balls.\p"
	.string "You'll be that POKéMON's\n"
	.string "first partner, {PLAYER}!\p"
	.string "Go on. Pick one!$"

NewBarkTownLab_Text_ElmWhereGoing:
	.string "ELM: Wait! Where are you\n"
	.string "going?$"

NewBarkTownLab_Text_ChooseCyndaquil:
	.string "ELM: You'll take CYNDAQUIL,\n"
	.string "the fire POKéMON?$"

NewBarkTownLab_Text_ChooseTotodile:
	.string "ELM: Do you want TOTODILE,\n"
	.string "the water POKéMON?$"

NewBarkTownLab_Text_ChooseChikorita:
	.string "ELM: So, you like CHIKORITA,\n"
	.string "the grass POKéMON?$"

NewBarkTownLab_Text_DidntChooseStarter:
	.string "ELM: Think it over carefully.\p"
	.string "Your partner is important.$"

NewBarkTownLab_Text_ChoseStarter:
	.string "ELM: I think that's a great\n"
	.string "POKéMON too!$"

NewBarkTownLab_Text_ReceivedStarter:
	.string "{PLAYER} received {STR_VAR_1}!$"

NewBarkTownLab_Text_Nickname:
	.string "Would you like to give your\n"
	.string "{STR_VAR_1} a nickname?$"

NewBarkTownLab_Text_ElmDirections1:
	.string "MR. POKéMON lives a little bit\n"
	.string "beyond CHERRYGROVE, the next\l"
	.string "city over.\p"
	.string "It's almost a direct route\n"
	.string "there, so you can't miss it.\p"
	.string "But just in case, you have my\n"
	.string "phone number. Call me if\l"
	.string "anything comes up!$"


NewBarkTownLab_Text_ElmLetYourMonBattle:
	.string "If a wild POKéMON appears,\n"
	.string "let your POKéMON battle it!$"

NewBarkTownLab_Text_ElmDirections2:
	.string "If a wild POKéMON appears, let\n"
	.string "your POKéMON battle it!\p"
	.string "If your POKéMON is hurt, you\n"
	.string "should heal it with the machine\l"
	.string "to my right, or at the POKéCENTER.\p"
	.string "I'm counting on you!$"

NewBarkTownLab_Text_GotElmsNumber:
	.string "{PLAYER} got ELM's phone\n"
	.string "number.$"

NewBarkTownLab_Text_ElmDescribesMrPokemon:
	.string "MR. POKéMON goes everywhere and\n"
	.string "finds rarities.\p"
	.string "Too bad they're just rare and\n"
	.string "not very useful…$"

NewBarkTownLab_Text_ElmPokeBall:
	.string "It contains a POKéMON caught\n"
	.string "by PROF.ELM.$"

@THEFT================================================================================

NewBarkTownLab_Text_ElmAfterTheft1:
	.string "ELM: {PLAYER}, this is terrible…\p"
	.string "Oh, yes, what was MR. POKéMON's\n"
	.string "big discovery?$"

NewBarkTownLab_Text_ElmAfterTheft2:
	.string "{PLAYER} handed the MYSTERY EGG\n"
	.string "to PROF.ELM.$"

NewBarkTownLab_Text_ElmAfterTheft3:
	.string "ELM: This?$"

NewBarkTownLab_Text_ElmAfterTheft4:
	.string "But… Is it a POKéMON EGG?\p"
	.string "If it is, it is a great\n"
	.string "discovery!\p"
	.string "ELM: What?!?\p"
	.string "PROF.OAK gave you a Pokédex?\p"
	.string "{PLAYER}, is that true?\n"
	.string "Th-that's incredible!\p"
	.string "He is superb at seeing the\n"
	.string "potential of people as trainers.\p"
	.string "Wow, {PLAYER}. You may have what\n"
	.string "it takes to become the CHAMPION.\p"
	.string "You seem to be getting on\n"
	.string "great with POKéMON too.\p"
	.string "You should take the POKéMON\n"
	.string "GYM challenge.\p"
	.string "The closest GYM would be the\n"
	.string "one in VIOLET CITY.\p"
	.string "…{PLAYER}. The road to the\n"
	.string "championship will be a long one.\p"
	.string "Before you leave, make sure\n"
	.string "that you talk to your mom.$"

NewBarkTownLab_Text_ElmStudyingEgg:
	.string "ELM: Don't give up!\n"
	.string "I'll call if I learn anything\p"
	.string "about that EGG!$"

NewBarkTownLab_Text_ElmAideHasEgg:
	.string "ELM: {PLAYER}? Didn't you meet\n"
	.string "my assistant?\p"
	.string "He should have met you with\n"
	.string "the EGG at VIOLET CITY's\p"
	.string "POKéMON CENTER.\p"
	.string "You must have just missed him.\n"
	.string "Try to catch him there.$"

NewBarkTownLab_Text_ElmWaitingEggHatch:
	.string "ELM: Hey, has that EGG changed\n"
	.string "any?$"

NewBarkTownLab_Text_ElmThoughtEggHatched:
	.string "{PLAYER}? I thought the EGG\n"
	.string "hatched.\p"
	.string "Where is the POKéMON?$"

NewBarkTownLab_Text_ShowTogepi1:
	.string "ELM: {PLAYER}, you look great!$"

NewBarkTownLab_Text_ShowTogepi2:
	.string "What? That POKéMON!?!$"

NewBarkTownLab_Text_ShowTogepi3:
	.string "The EGG hatched! So, POKéMON\n"
	.string "are born from EGGS…\p"
	.string "No, perhaps not all POKéMON\n"
	.string "are.\p"
	.string "Wow, there's still a lot of\n"
	.string "research to be done.$"

NewBarkTownLab_Text_ElmGiveEverstone1:
	.string "Thanks, {PLAYER}! You're helping\n"
	.string "unravel POKéMON mysteries for us!\p"
	.string "I want you to have this as a\n"
	.string "token of our appreciation.$"

NewBarkTownLab_Text_ElmGiveEverstone2:
	.string "That's an EVERSTONE.\p"
	.string "Some species of POKéMON evolve\n"
	.string "when they grow to certain levels.\p"
	.string "A POKéMON holding the EVERSTONE\n"
	.string "won't evolve.\p"
	.string "Give it to a POKéMON you don't\n"
	.string "want to evolve.$"

NewBarkTownLab_Text_ElmCallYou:
	.string "ELM: {PLAYER}, I'll call you if\n"
	.string "anything comes up.$"

NewBarkTownLab_Text_AideAfterTheft:
	.string "…sigh… That stolen POKéMON.\p"
	.string "I wonder how it's doing.\p"
	.string "They say a POKéMON raised by a\n"
	.string "bad person turns bad itself.$"

NewBarkTownLab_Text_ElmGiveMasterBall1:
	.string "ELM: Hi, {PLAYER}!\p"
	.string "Thanks to you, my research is\n"
	.string "going great!\p"
	.string "Take this as a token of my\n"
	.string "appreciation.$"

NewBarkTownLab_Text_ElmGiveMasterBall2:
	.string "The MASTER BALL is the best!\p"
	.string "It's the ultimate BALL! It'll\n"
	.string "catch any POKéMON without fail.\p"
	.string "It's given only to recognized\n"
	.string "POKéMON researchers.\p"
	.string "I think you can make much better\n"
	.string "use of it than I can, {PLAYER}!$"

NewBarkTownLab_Text_KimonoGirls:
	.string "By the way...\n"
	.string "A group of beautiful KIMONO\l"
	.string "GIRLS were looking for you.\p"
	.string "They told me they\n"
	.string "are waiting for you at the ECRUTEAK\l"
	.string "DANCE THEATER.\p"
	.string "I know you've gone through many\n"
	.string "things since that Egg got you\l"
	.string "involved in all this...\p"
	.string "I hope you'll carry through it.$"

NewBarkTownLab_Text_KimonoWaiting:
	.string "PROF. ELM: The KIMONO\n"
	.string "GIRLS are waiting for you at\l"
	.string "the Ecruteak Dance Theater.$"

NewBarkTownLab_Text_League:
	.string "PROF. ELM: Hahaha...\n"
	.string "Good job!\p"
	.string "That rare Egg has brought you\n"
	.string "a lot of trouble, huh?\p"
	.string "The KIMONO GIRLS said something\n"
	.string "about me?\p"
	.string "I have nothing to do with it.\p"
	.string "You made your decision and went\n"
	.string "through with it.\p"
	.string "Having done so much, you should\n"
	.string "be able to face the League now!\p"
	.string "You should head for Indigo\n"
	.string "Plateau!\p"
	.string "Do you know how to get there?\n"
	.string "Follow Route 27 to Route 26.\p"
	.string "Once there, go straight north!$"


NewBarkTownLab_Text_ElmGiveTicket1:
	.string "ELM: {PLAYER}! There you are!\p"
	.string "I called because I have\n"
	.string "something for you.\p"
	.string "See? It's an S.S.TICKET.\p"
	.string "Now you can catch POKéMON in\n"
	.string "KANTO.$"

NewBarkTownLab_Text_ElmGiveTicket2:
	.string "The ship departs from OLIVINE\n"
	.string "CITY.\p"
	.string "But you knew that already,\n"
	.string "{PLAYER}.\p"
	.string "After all, you've traveled all\n"
	.string "over with your POKéMON.\p"
	.string "Give my regards to PROF.OAK in\n"
	.string "KANTO!$"

NewBarkTownLab_Text_LabMonEgg:
	.string "It's the POKéMON EGG being\n"
	.string "studied by PROF.ELM.$"

NewBarkTownLab_Text_AideGivePotion:
	.string "{PLAYER}, I want you to have\n"
	.string "this for your errand.$"

NewBarkTownLab_Text_AideAlwaysBusy:
	.string "There are only three of us, so\n"
	.string "we're always busy.$"

NewBarkTownLab_Text_AideSave:
	.string "Don't forget to save your game\n"
	.string "regularly!\p"
	.string "Press the START button, then\n"
	.string "SAVE the game!$"

NewBarkTownLab_Text_AideTheftTestimony:
	.string "There was a loud noise\n"
	.string "outside…\p"
	.string "When we went to look,\n"
	.string "someone stole a POKéMON.\p"
	.string "It's unbelievable that anyone\n"
	.string "would do that!\p"
	.string "…sigh… That stolen POKéMON.\p"
	.string "I wonder how it's doing.\p"
	.string "They say a POKéMON raised by a\n"
	.string "bad person turns bad itself.$"

NewBarkTownLab_Text_AideGiveBalls:
	.string "{PLAYER}!\p"
	.string "Use these on your Pokédex\n"
	.string "quest!$"

NewBarkTownLab_Text_AideExplainBalls:
	.string "To add to your Pokédex, you\n"
	.string "have to catch POKéMON.\p"
	.string "Throw POKé BALLS at wild\n"
	.string "POKéMON to get them.$"

NewBarkTownLab_Text_Officer1:
	.string "I heard a POKéMON was stolen\n"
	.string "here…\p"
	.string "I was just getting some\n"
	.string "information from PROF.ELM.\p"
	.string "Apparently, it was a young\n"
	.string "male with long, red hair…\p"
	.string "What?\p"
	.string "You battled a trainer like\n"
	.string "that?\p"
	.string "Did you happen to get his\n"
	.string "name?$"

NewBarkTownLab_Text_Officer2:
	.string "OK! So SILVER was his name.\p"
	.string "Thanks for helping my\n"
	.string "investigation!$"

NewBarkTownLab_Text_OfficerNo:
	.string "Surely you got his name?!$"

NewBarkTownLab_Text_Elm_CallMe:
	.string "Ah, {PLAYER}!\p"
	.string "How's your POKéDEX coming along?\n"
	.string "I'm busy now, but call me sometime\l"
	.string "and I can check your progress!$"

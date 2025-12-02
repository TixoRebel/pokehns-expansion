NewBarkTown_PlayersHouse_2F_hns_MapScripts::
	.byte 0

NewBarkTown_PlayersHouse_2F_Script_ClockSetupTrigger1::
    lock
	playse SE_PIN
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 60
    applymovement LOCALID_PLAYER, NewBarkTown_PlayersHouse_2F_Movement_PlayerWalkToClock1
	waitmovement 0
    msgbox NewBarkTown_PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	call NewBarkTown_PlayersHouse_2F_EventScript_SetWallClock
	delay 30
	setvar VAR_NEWBARK_TOWN_STATE, 1
	setflag FLAG_SET_WALL_CLOCK
	releaseall
	end

NewBarkTown_PlayersHouse_2F_Script_ClockSetupTrigger2::
    lock
	playse SE_PIN
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 60
    applymovement LOCALID_PLAYER, NewBarkTown_PlayersHouse_2F_Movement_PlayerWalkToClock2
    msgbox NewBarkTown_PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	call NewBarkTown_PlayersHouse_2F_EventScript_SetWallClock
	delay 30
	setvar VAR_NEWBARK_TOWN_STATE, 1
	setflag FLAG_SET_WALL_CLOCK
	releaseall
	end

NewBarkTown_PlayersHouse_2F_Movement_PlayerWalkToClock1:
	walk_right
	walk_up
	delay_8
	step_end

NewBarkTown_PlayersHouse_2F_Movement_PlayerWalkToClock2:	
	walk_up
	delay_8
	step_end

NewBarkTown_PlayersHouse_2F_EventScript_PC::
	lockall
	checkplayergender
	goto NewBarkTown_PlayersHouse_2F_EventScript_CheckPlayersPC
	end

NewBarkTown_PlayersHouse_2F_EventScript_CheckPlayersPC::
	setvar VAR_0x8004, PC_LOCATION_OTHER
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

NewBarkTown_PlayersHouse_2F_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_OTHER
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

NewBarkTown_PlayersHouse_2F_EventScript_NES::
	msgbox NewBarkTown_PlayersHouse_2F_Text_NES, MSGBOX_SIGN
	end

NewBarkTown_PlayersHouse_2F_Text_NES:
    .string "{PLAYER} played with the NES.\p"
    .string "…Okay!\n"
    .string "It's time to go!$"

NewBarkTown_PlayersHouse_2F_Text_ClockIsStopped:
	.string "The clock is stopped…\p"
	.string "Better set it and start it before\n"
	.string "heading downstairs!$"

NewBarkTown_PlayersHouse_2F_EventScript_CheckWallClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end

NewBarkTown_PlayersHouse_2F_EventScript_SetWallClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	return

NewBarkTown_PlayersHouse_2F_EventScript_WallClock::
	goto_if_set FLAG_SET_WALL_CLOCK, NewBarkTown_PlayersHouse_2F_EventScript_CheckWallClock
	msgbox NewBarkTown_PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	call NewBarkTown_PlayersHouse_2F_EventScript_SetWallClock
	delay 30
	setflag FLAG_SET_WALL_CLOCK
	releaseall
	end

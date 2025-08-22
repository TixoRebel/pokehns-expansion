.set LOCALID_SSAQUA1_DOORSAILOR, 4
.set LOCALID_SSAQUA1_GRANDPA, 2

SSAqua1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSAqua1_OnFrame
	.byte 0

SSAqua1_OnFrame::
	map_script_2 VAR_SSAQUA_STATE, 5, SSAqua1_EventScript_Arrived
	.2byte 0

SSAqua1_EventScript_Arrived::
	lock
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 10  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	playse SE_DING_DONG
	msgbox SSAqua1_Text_Sailor1_InVermilion, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SSAQUA_STATE, 6
	release
	end

SSAqua1_EventScript_DoorSailor::
	lock
	faceplayer
	goto_if_ge VAR_SSAQUA_STATE, 5, SSAqua1_EventScript_DoorSailorArrived
	msgbox SSAqua1_Text_Sailor1_ToVermilion, MSGBOX_NPC
	end

SSAqua1_EventScript_DoorSailorArrived::
	msgbox SSAqua1_Text_SailorDoorArrived, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, SSAqua1_EventScript_LeaveBoat
	closemessage
	release
	end

SSAqua1_EventScript_LeaveBoat::
	fadescreenswapbuffers FADE_TO_BLACK
	warp MAP_VERMILION_CITY_PORT_INDOOR, 8, 9
	release
	end

SSAqua1_EventScript_RoomSailor::
	msgbox SSAqua1_Text_Sailor2_FirstTime, MSGBOX_NPC
	end

SSAqua1_EventScript_Sailor3::
	msgbox SSAqua1_Text_Sailor3, MSGBOX_NPC
	end

SSAqua1_Trigger_Grandpa::
	lock
	clearflag FLAG_HIDE_SSAQUA1_GRANDPA
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 28, SSAqua1_EventScript_GrandpaEnterLeft
	call_if_eq VAR_TEMP_0, 29, SSAqua1_EventScript_GrandpaEnterRight
	applymovement OBJ_EVENT_ID_PLAYER, SSAqua1_Movement_PlayerSlideRight
	waitmovement 0
	applymovement LOCALID_SSAQUA1_GRANDPA, Common_Movement_WalkRight1
	waitmovement 0
	msgbox SSAqua1_Text_Grandpa, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SSAQUA1_GRANDPA, SSAqua1_Movement_GrandpaLeave
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_SSAQUA1_GRANDPA
	
	setflag FLAG_HIDE_SSAQUA1_GRANDPA		@flagheap
	setflag FLAG_HIDE_SSAQUA8_GRANDDAUGHTER

	clearflag FLAG_HIDE_SSAQUA_SAILOR
	clearflag FLAG_HIDE_SSAQUA3_GRANDDAUGHTER

	setvar VAR_SSAQUA_STATE, 2
	release
	end

SSAqua1_EventScript_GrandpaEnterLeft::
	applymovement LOCALID_SSAQUA1_GRANDPA, SSAqua1_Movement_GrandpaEnterLeft
	waitmovement 0
	return

SSAqua1_EventScript_GrandpaEnterRight::
	applymovement LOCALID_SSAQUA1_GRANDPA, SSAqua1_Movement_GrandpaEnterRight
	waitmovement 0
	return

SSAqua1_Movement_GrandpaEnterLeft:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SSAqua1_Movement_GrandpaEnterRight:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SSAqua1_Movement_PlayerSlideRight:
	face_left
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end

SSAqua1_Movement_GrandpaLeave:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SSAqua1_Text_Sailor1_ToVermilion:
    .string "FAST SHIP S.S.AQUA is en route to\n"
    .string "VERMILION CITY.\p"
    .string "We will make an announcement when\n"
    .string "we arrive.$"

SSAqua1_Text_Sailor1_ToOlivine:
    .string "FAST SHIP S.S.AQUA is en route to\n"
    .string "OLIVINE CITY.\p"
    .string "We will make an announcement when\n"
    .string "we arrive.$"

SSAqua1_Text_Sailor2_FirstTime:
    .string "Here's your cabin.\p"
    .string "If your POKéMON are hurt, take a\n"
    .string "nap in the bed.\p"
    .string "That will heal them.$"

SSAqua1_Text_Sailor3:
    .string "The passengers are all trainers.\p"
    .string "They're all itching to battle in\n"
    .string "their cabins.$"

SSAqua1_Text_Grandpa:
    .string "Whoa! Excuse me. I was in a hurry!\p"
    .string "My granddaughter is missing!\p"
    .string "She's just a wee girl. If you see\n"
    .string "her, please let me know!$"

SSAqua1_Text_Sailor1_InOlivine:
    .string "FAST SHIP S.S.AQUA has arrived in\n"
    .string "OLIVINE CITY.$"

SSAqua1_Text_Sailor1_InVermilion:
    .string "FAST SHIP S.S.AQUA has arrived in\n"
    .string "VERMILION CITY.$"


SSAqua1_Text_SailorDoorArrived:
    .string "We have arrived in VERMILION CITY.\n"
    .string "Would you like to disembark?$"

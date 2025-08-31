.set LOCALID_NURSE, 1
.set LOCALID_ECRUTEAK_BILL, 6

EcruteakPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EcruteakPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EcruteakPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_ECRUTEAK_CITY
	end

EcruteakPokecenter_EventScript_Bill::
	lock
	delay 30
	playse SE_PC_OFF
	delay 55
	faceplayer
	msgbox EcruteakPokecenter1F_Text_Bill1, MSGBOX_DEFAULT
	msgbox EcruteakPokecenter1F_Text_Bill2, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, EcruteakPokecenter_EventScript_BillLeaveBot
	call_if_eq VAR_FACING, DIR_WEST, EcruteakPokecenter_EventScript_BillLeaveTop
	playse SE_EXIT
	setflag FLAG_HIDE_ECRUTEAK_BILL
	removeobject LOCALID_ECRUTEAK_BILL
	setflag FLAG_SYS_PC_BILL
	clearflag FLAG_HIDE_GOLDENROD_BILL
	release
	end

EcruteakPokecenter_EventScript_BillFaceDown::
	turnobject LOCALID_ECRUTEAK_BILL, DIR_SOUTH
	return

EcruteakPokecenter_EventScript_BillFaceRight::
	turnobject LOCALID_ECRUTEAK_BILL, DIR_EAST
	return

EcruteakPokecenter_EventScript_BillLeaveTop::
	applymovement LOCALID_ECRUTEAK_BILL, EcruteakPokecenter_Movement_BillTop
	waitmovement 0
	return

EcruteakPokecenter_EventScript_BillLeaveBot::
	applymovement LOCALID_ECRUTEAK_BILL, EcruteakPokecenter_Movement_BillBot
	waitmovement 0
	return

EcruteakPokecenter_EventScript_Hiker::
	lock
	faceplayer
	msgbox EcruteakPokecenter1F_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakPokecenter_EventScript_Woman::
	lock
	faceplayer
	msgbox EcruteakPokecenter1F_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakPokecenter_EventScript_Nerd::
	lock
	faceplayer
	msgbox EcruteakPokecenter1F_Text_GymGuide, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakPokecenter_Movement_BillTop:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

EcruteakPokecenter_Movement_BillBot:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end


EcruteakPokecenter1F_Text_Bill1:
	.string "Hi, I'm BILL. And who are you?\p"
	.string "Hmm, {PLAYER}, huh?\n"
	.string "You've come at the right time.$"

EcruteakPokecenter1F_Text_Bill2:
	.string "I just finished adjustments on my\n"
	.string "POKéMON STORAGE SYSTEM.\p"
	.string "You know that PC you use to store\n"
	.string "all your POKéMON?\p"
	.string "I developed that myself!\p"
	.string "Now that I've installed this one,\n"
	.string "my PC is running at all\l"
	.string "POKéMON CENTERS in JOHTO and KANTO.\p"
	.string "I have to hurry on back to\n"
	.string "GOLDENROD and see my folks. Feel\l"
	.string "free to visit anytime!\p"
	.string "Buh-bye!$"

EcruteakPokecenter1F_Text_PokefanM:
	.string "The way the KIMONO GIRLS dance is\n"
	.string "marvelous.\p"
	.string "Just like the way they use their\n"
	.string "POKéMON.$"

EcruteakPokecenter1F_Text_PokefanM_Mobile:
	.string "You must be hoping to battle more\n"
	.string "people, right?\p"
	.string "There's apparently some place where\n"
	.string "trainers gather.\p"
	.string "Where, you ask?\p"
	.string "It's a little past OLIVINE CITY.$"

EcruteakPokecenter1F_Text_CooltrainerF:
	.string "MORTY, the GYM LEADER, is soooo\n"
	.string "cool.\p"
	.string "His POKéMON are really tough too.$"

EcruteakPokecenter1F_Text_GymGuide:
	.string "LAKE OF RAGE…\p"
	.string "The appearance of a GYARADOS\n"
	.string "swarm…\p"
	.string "I smell a conspiracy. I know it!$"


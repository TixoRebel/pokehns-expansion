.set LOCALID_CELADON_FALKNER, 5

CeladonCityDepartmentStore5_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonDept5_EventScript_SetWarp
	.byte 0

CeladonDept5_EventScript_SetWarp::
	goto_if_set FLAG_NIGHT_POKEMON, CeladonDept5_EventScript_SetWarpDay
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE7, 15, 6
	end

CeladonDept5_EventScript_SetWarpDay::
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE6, 15, 6
	end

CeladonDept5_EventScript_Gent::
	msgbox CeladonDeptStore5F_Text_Gentleman, MSGBOX_NPC
	end
CeladonDept5_EventScript_Sailor::
	msgbox CeladonDeptStore5F_Text_Sailor, MSGBOX_NPC
	end
CeladonDept5_EventScript_Teacher::
	msgbox CeladonDeptStore5F_Text_Teacher, MSGBOX_NPC
	end
CeladonDept5_EventScript_Directory::
	msgbox CeladonDeptStore5F_Text_Directory, MSGBOX_SIGN
	end

CeladonDeptStore5_EventScript_Falkner::
	lock
	faceplayer
	msgbox CeladonDeptStore5_Text_Falkner, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_CELADON_FALKNER
	removeobject LOCALID_CELADON_FALKNER
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_FALKNER
	release
	end

CeladonDeptStore5_Text_Falkner:
	.string "{PLAYER}. I didn't expect to see\n"
	.string "you here.\p"
	.string "I'm picking up gear for my\n"
	.string "bird POKéMON.\p"
	.string "If you want to face me again, I'll\n"
	.string "be at the DOJO in SAFFRON CITY.$"

CeladonDeptStore5F_Text_Gentleman:
	.string "I want to buy some items that\n"
	.string "raise POKéMON stats, but I don't\n"
	.string "have enough money…$"

CeladonDeptStore5F_Text_Sailor:
	.string "I want PP UP, so I can raise the\n"
	.string "PP of moves. But you can't buy it…$"

CeladonDeptStore5F_Text_Teacher:
	.string "Using items on them makes POKéMON\n"
	.string "happy.\p"
	.string "They hate certain items, though…$"

CeladonDeptStore5F_Text_Directory:
	.string "5F: DRUG STORE$"

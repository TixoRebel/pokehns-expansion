.set LOCALID_NURSE, 1

MahoganyPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MahoganyPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MahoganyPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_MAHOGANYTOWN
	end

MahoganyPokecenter_EventScript_Hiker::
	msgbox MahoganyPokecenter_Text_PokefanM, MSGBOX_NPC
	end
	
MahoganyPokecenter_EventScript_Boy::
	msgbox MahoganyPokecenter_Text_Youngster, MSGBOX_NPC
	end

MahoganyPokecenter_EventScript_Girl::
	msgbox MahoganyPokecenter_Text_CooltrainerF, MSGBOX_NPC
	end

MahoganyPokecenter_Text_PokefanM:
    .string "What's this? TEAM ROCKET has come\n"
    .string "back?\p"
    .string "I saw some men in black at LAKE OF\n"
    .string "RAGE…$"

MahoganyPokecenter_Text_Youngster:
    .string "I stop my POKéMON from evolving too\n"
    .string "early.\p"
    .string "I make them learn certain moves be-\n"
    .string "fore I let them evolve.$"

MahoganyPokecenter_Text_CooltrainerF:
    .string "POKéMON do become stronger when they\n"
    .string "evolve,\p"
    .string "but they also learn moves more\n"
    .string "slowly.$"

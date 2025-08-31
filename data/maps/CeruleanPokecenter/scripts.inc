.set LOCALID_NURSE, 1

CeruleanPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CeruleanPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end

CeruleanPokecenter_EventScript_Nerd::
	msgbox CeruleanPokecenter1F_Text_SuperNerd, MSGBOX_NPC
	end

CeruleanPokecenter_EventScript_Guy::
	msgbox CeruleanPokecenter1F_Text_GymGuide, MSGBOX_NPC
	end

CeruleanPokecenter1F_Text_SuperNerd:
	.string "For battles, I'd much rather use\n"
	.string "POKéMON I've been raising, even if\p"
	.string "they're weaker than some newly\n"
	.string "caught POKéMON.$"

CeruleanPokecenter1F_Text_GymGuide:
	.string "The MAGNET TRAIN travels at over\n"
	.string "340 mph. It goes between KANTO and\n"
	.string "JOHTO in almost no time at all.\p"
	.string "It really makes JOHTO accessible.$"

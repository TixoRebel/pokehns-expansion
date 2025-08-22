.set LOCALID_NURSE, 1

ViridianPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianPokecenter_OnTransition
	.byte 0

ViridianPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end

ViridianPokecenter_EventScript_CooltrainerM::
	goto_if_set FLAG_HIDE_CINNABAR_BLUE, VirianCity_EventScript_GymGrampsBlue
	msgbox ViridianPokecenter_Text_1FCooltrainerM, MSGBOX_NPC
	end

ViridianPokecenter_EventScript_CooltrainerMBlue::
	msgbox ViridianPokecenter_Text_1FCooltrainerM_BlueReturned, MSGBOX_NPC
	end

ViridianPokecenter_EventScript_CooltrainerF::
	msgbox ViridianPokecenter_Text_1FCooltrainerF, MSGBOX_NPC
	end

ViridianPokecenter_EventScript_BugCatcher::
	msgbox ViridianPokecenter_Text_1FBugCatcher, MSGBOX_NPC
	end

ViridianPokecenter_Text_1FCooltrainerM:
	.string "Where in the world is VIRIDIAN's GYM\n"
	.string "LEADER? I wanted to challenge him.$"

ViridianPokecenter_Text_1FCooltrainerM_BlueReturned:
	.string "There are no GYM TRAINERS at the\n"
	.string "VIRIDIAN GYM.\p"
	.string "The LEADER claims his policy is to\n"
	.string "win without having any underlings.$"

ViridianPokecenter_Text_1FCooltrainerF:
	.string "I heard that the GYM in CINNABAR is\n"
	.string "gone.\p"
	.string "I wonder what became of BLAINE, the\n"
	.string "GYM LEADER.$"

ViridianPokecenter_Text_1FBugCatcher:
	.string "My dream is to become a GYM LEADER.$"

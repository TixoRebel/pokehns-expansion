.set LOCALID_NURSE, 1

PewterPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PewterPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end

PewterPokecenter_EventScript_Teacher::
	msgbox PewterPokecenter1F_Text_Teacher, MSGBOX_NPC
	end

PewterPokecenter_EventScript_BugCatcher::
	msgbox PewterPokecenter1F_Text_BugCatcher, MSGBOX_NPC
	end

PewterPokecenter1F_Text_Teacher:
	.string "…Yeah, and the GYM in CINNABAR's gone.\p"
	.string "I was really amazed.\p"
	.string "…Yes? I'm on the phone. Go away!$"

PewterPokecenter1F_Text_Jigglypuff:
	.string "JIGGLYPUFF: Puu pupuu.$"

PewterPokecenter1F_Text_BugCatcher:
	.string "Most POKéMON get drowsy if they hear a\n"
	.string "JIGGLYPUFF singing.\p"
	.string "There are several moves that can be\n"
	.string "used only while a POKéMON is asleep.$"

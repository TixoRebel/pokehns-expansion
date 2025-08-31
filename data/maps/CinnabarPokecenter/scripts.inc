.set LOCALID_NURSE, 1

CinnabarPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CinnabarPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
	end

CinnabarPokecenter_EventScript_Cooltrainer::
	msgbox CinnabarPokecenter1F_Text_CooltrainerF, MSGBOX_NPC
	end

CinnabarPokecenter_EventScript_Fisher::
	msgbox CinnabarPokecenter1F_Text_Fisher, MSGBOX_NPC
	end

CinnabarPokecenter1F_Text_CooltrainerF:
	.string "CINNABAR GYM's BLAINE apparently\n"
	.string "lives alone in the SEAFOAM ISLANDS\n"
	.string "cave…$"

CinnabarPokecenter1F_Text_Fisher:
	.string "It's been a year since the volcano\n"
	.string "erupted.$"

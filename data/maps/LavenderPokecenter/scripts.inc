.set LOCALID_NURSE, 1

LavenderPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavenderPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
	end

LavenderPokecenter_EventScript_Gent::
	msgbox LavenderPokecenter1F_Text_Gentleman, MSGBOX_NPC
	end

LavenderPokecenter_EventScript_Teacher::
	msgbox LavenderPokecenter1F_Text_Teacher, MSGBOX_NPC
	end

LavenderPokecenter_EventScript_Youngster::
	goto_if_set FLAG_RETURNED_MACHINE_PART, LavenderPokecenter_EventScript_YoungsterReturnedMachinePart
	msgbox LavenderPokecenter1F_Text_Youngster, MSGBOX_NPC
	end

LavenderPokecenter_EventScript_YoungsterReturnedMachinePart::
	msgbox LavenderPokecenter1F_Text_Youngster_ReturnedMachinePart, MSGBOX_NPC
	end

LavenderPokecenter1F_Text_Gentleman:
	.string "To the north of LAVENDER is ROCK\n"
	.string "TUNNEL. Go through it to get to\l"
	.string "the POWER PLANT.$"

LavenderPokecenter1F_Text_Teacher:
	.string "There's a radio program that plays\n"
	.string "POKé FLUTE music.\p"
	.string "Oh? Ah, your radio needs an EXPN\n"
	.string "CARD to tune into it.$"

LavenderPokecenter1F_Text_Youngster:
	.string "If the POWER PLANT isn't running,\n"
	.string "the MAGNET TRAIN won't run either…\p"
	.string "It also means the RADIO STATION\n"
	.string "can't broadcast…$"

LavenderPokecenter1F_Text_Youngster_ReturnedMachinePart:
	.string "The DIRECTOR of the RADIO STATION\n"
	.string "sure was happy.\p"
	.string "He said they're back on the air\n"
	.string "because the POWER PLANT is running\l"
	.string "smoothly again.$"

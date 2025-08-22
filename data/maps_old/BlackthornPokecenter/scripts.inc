.set LOCALID_NURSE, 1

BlackthornPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornPokecenter_OnTransition
	.byte 0

BlackthornPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	end

BlackthornPokecenter_EventScript_Gent::
	msgbox BlackthornPokecenter1FGentlemanText, MSGBOX_NPC
	end

BlackthornPokecenter_EventScript_Twin::
	msgbox BlackthornPokecenter1FTwinText, MSGBOX_NPC
	end

BlackthornPokecenter1FGentlemanText:
	.string "Deep inside far-off INDIGO\n"
	.string "PLATEAU is the POKéMON LEAGUE.\p"
	.string "I hear the best trainers gather\n"
	.string "there from around the country.$"

BlackthornPokecenter1FTwinText:
	.string "There was this move I just had\n"
	.string "to teach my POKéMON.\p"
	.string "So I got the MOVE DELETER to make\n"
	.string "it forget an HM move.$"

Route22_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route22_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route22_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route22_EventScript_Sign::
	msgbox Route22_Text_VictoryRoadEntranceSign, MSGBOX_NPC
	end

Route22_Text_VictoryRoadEntranceSign:
	.string "POKéMON LEAGUE\p"
	.string "VICTORY ROAD ENTRANCE$"


MtSilver7_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver7_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtSilver7_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtSilver5_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver5_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtSilver5_OnTransition: 
	callnative SetTimeBasedEncounters
	end

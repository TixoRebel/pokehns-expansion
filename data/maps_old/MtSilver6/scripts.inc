MtSilver6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver6_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtSilver6_OnTransition: 
	callnative SetTimeBasedEncounters
	end

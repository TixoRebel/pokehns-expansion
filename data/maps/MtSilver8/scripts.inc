MtSilver8_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver8_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtSilver8_OnTransition: 
	call_if_set FLAG_NIGHT_POKEMON, MtSilver8_EventScript_SetwarpDay
	call_if_unset FLAG_NIGHT_POKEMON, MtSilver8_EventScript_SetwarpNight
	callnative SetTimeBasedEncounters
	end

MtSilver8_EventScript_SetwarpNight::
	setdynamicwarp MAP_MT_SILVER_SUMMIT_TEST_NIGHT, 0
	return

MtSilver8_EventScript_SetwarpDay::
	setdynamicwarp MAP_MT_SILVER_SUMMIT_TEST, 0
	return

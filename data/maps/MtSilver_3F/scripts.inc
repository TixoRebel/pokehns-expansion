MtSilver_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver_3F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtSilver_3F_OnTransition: 
	call_if_set FLAG_NIGHT_POKEMON, MtSilver_3F_EventScript_SetwarpDay
	call_if_unset FLAG_NIGHT_POKEMON, MtSilver_3F_EventScript_SetwarpNight
	callnative SetTimeBasedEncounters
	end

MtSilver_3F_EventScript_SetwarpNight::
	setdynamicwarp MAP_MT_SILVER_SUMMIT_NIGHT, 0
	return

MtSilver_3F_EventScript_SetwarpDay::
	setdynamicwarp MAP_MT_SILVER_SUMMIT_DAY, 0
	return

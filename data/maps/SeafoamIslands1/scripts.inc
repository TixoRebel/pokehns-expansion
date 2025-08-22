SeafoamIslands1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SeafoamIslands1_SetHoleWarp
	.byte 0

SeafoamIslands1_OnTransition: 
	copyvar VAR_ICE_STEP_COUNT, 1
	end

SeafoamIslands1_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_SEAFOAM_ISLANDS3
	callnative SetTimeBasedEncounters
	end


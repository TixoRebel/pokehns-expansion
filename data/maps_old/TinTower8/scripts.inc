TinTower8_MapScripts::
	.byte 0

TinTower8_EventScript_SetWarp::
	lock
	goto_if_set FLAG_NIGHT_POKEMON, TinTower8_EventScript_SetWarpDay
	setdynamicwarp MAP_TIN_TOWER10NIGHT, 10, 14
	release
	end

TinTower8_EventScript_SetWarpDay::
	setdynamicwarp MAP_TIN_TOWER10, 10, 14
	release
	end
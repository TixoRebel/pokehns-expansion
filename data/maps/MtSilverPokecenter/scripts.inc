.set LOCALID_NURSE, 1

MtSilverPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilverPokecenter_OnTransition
	.byte 0

MtSilverPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_MT_SILVER
	end

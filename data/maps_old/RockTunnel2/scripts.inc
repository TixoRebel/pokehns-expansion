RockTunnel2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel2_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

RockTunnel2_OnTransition: 
	callnative SetTimeBasedEncounters
	end

RockTunnel2_EventScript_ItemIron::
	finditem ITEM_IRON
	end

RockTunnel2_EventScript_PPup::
	finditem ITEM_PP_UP
	end

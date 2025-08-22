RockTunnel1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

RockTunnel1_OnTransition: 
	callnative SetTimeBasedEncounters
	end

RockTunnel1_EventScript_ItemFacade::
	finditem ITEM_TM_FACADE
	end

RockTunnel1_EventScript_Elixir::
	finditem ITEM_ELIXIR
	end

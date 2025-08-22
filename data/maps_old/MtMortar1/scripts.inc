MtMortar1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMortar1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMortar1_OnTransition: 
	callnative SetTimeBasedEncounters
	end



MtMortar1_EventScript_Item_Revive::
    finditem ITEM_REVIVE
    end

MtMortar1_EventScript_Item_Elixir::
    finditem ITEM_ELIXIR
    end

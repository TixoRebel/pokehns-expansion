MtSilverSideTest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilverSideTest_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtSilverSideTest_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtSilverSideTest_EventScript_RareCandy::
	finditem ITEM_RARE_CANDY
	end
MtSilverSideTest_EventScript_NevermeltIce::	
	finditem ITEM_NEVER_MELT_ICE
	end

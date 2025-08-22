MtSilver2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver2_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtSilver2_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtSilver2_EventScript_MaxPotion::
	finditem ITEM_MAX_POTION
	end

MtSilver2_EventScript_DireHit::
	finditem ITEM_DIRE_HIT
	end

MtSilver2_EventScript_FullRestore::
	finditem ITEM_FULL_RESTORE
	end

MtSilver2_EventScript_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

MtSilver2_EventScript_SpellTag::
	finditem ITEM_SPELL_TAG
	end

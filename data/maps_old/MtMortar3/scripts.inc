MtMortar3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMortar3_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMortar3_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtMortar3_EventScript_Item_Iron::
    finditem ITEM_IRON
    end

MtMortar3_EventScript_Item_MaxRevive::
    finditem ITEM_MAX_REVIVE
    end

MtMortar3_EventScript_Item_Ether::
    finditem ITEM_ETHER
    end

MtMortar3_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

MtMortar3_EventScript_Item_DragonScale::
    finditem ITEM_DRAGON_SCALE
    end

MtMortar3_EventScript_Item_Elixir::
    finditem ITEM_ELIXIR
    end

MtMortar3_EventScript_Nerd::
	trainerbattle_single TRAINER_HUGH MtMortar3_Text_SupernerdHughSeen, MtMortar3_Text_SupernerdHughBeaten
	msgbox MtMortar3_Text_SupernerdHughAfter, MSGBOX_AUTOCLOSE
	end

MtMortar3_Text_SupernerdHughSeen::
	.string "Yo! MARKUS!$"

MtMortar3_Text_SupernerdHughBeaten:
	.string "Sorry, my mistake.\n"
	.string "I misjudged you.$"

MtMortar3_Text_SupernerdHughAfter:
	.string "I'm investigating MT.MORTAR,\n"
	.string "but my pal's gone AWOL.\p"
	.string "Have you seen a trainer who\n"
	.string "has a SLOWPOKE that can use\l"
	.string "STRENGTH?$"

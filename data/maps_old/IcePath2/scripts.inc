.set LOCALID_ICEPATH2_BOULDER1, 3
.set LOCALID_ICEPATH2_BOULDER2, 4
.set LOCALID_ICEPATH2_BOULDER3, 2
.set LOCALID_ICEPATH2_BOULDER4, 1

IcePath2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, IcePath2_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, IcePath2_SetHoleWarp
	.byte 0

IcePath2_OnTransition: 
	copyvar VAR_ICE_STEP_COUNT, 1
	callnative SetTimeBasedEncounters
	end

IcePath2_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_ICE_PATH3
	callnative SetTimeBasedEncounters
	end

IcePath2_EventScript_Item_Iron::
	finditem ITEM_IRON
	end
IcePath2_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

IcePath2_EventScript_Sign::
	msgbox IcePath2_Text_Sign, MSGBOX_SIGN
	end

IcePath2_Text_Sign:
	.string "The sign is faded:\n"
	.string "DANG-R CR--KED ICE\l"
	.string "FA-- B-CYCLE --QUIRED$"

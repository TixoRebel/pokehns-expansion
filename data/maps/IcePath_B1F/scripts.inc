.set LOCALID_ICEPATH2_BOULDER1, 3
.set LOCALID_ICEPATH2_BOULDER2, 4
.set LOCALID_ICEPATH2_BOULDER3, 2
.set LOCALID_ICEPATH2_BOULDER4, 1

IcePath_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, IcePath_B1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, IcePath_B1F_SetHoleWarp
	.byte 0

IcePath_B1F_OnTransition: 
	copyvar VAR_ICE_STEP_COUNT, 1
	callnative SetTimeBasedEncounters
	end

IcePath_B1F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_ICE_PATH_B2F
	callnative SetTimeBasedEncounters
	end

IcePath_B1F_EventScript_Item_Iron::
	finditem ITEM_IRON
	end
IcePath_B1F_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

IcePath_B1F_EventScript_Sign::
	msgbox IcePath_B1F_Text_Sign, MSGBOX_SIGN
	end

IcePath_B1F_Text_Sign:
	.string "The sign is faded:\n"
	.string "DANG-R CR--KED ICE\l"
	.string "FA-- B-CYCLE --QUIRED$"

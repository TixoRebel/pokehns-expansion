MtSilver_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtSilver_OnFrame
	.byte 0

MtSilver_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtSilver_OnFrame::
	map_script_2 VAR_MT_SILVER_STATE, 0,  MtSilver_EventScript_CityEnter
	.2byte 0

MtSilver_EventScript_CityEnter::
	setflag FLAG_VISITED_MT_SILVER
	setvar VAR_MT_SILVER_STATE, 1
	end

MtSilver_EventScript_Sign::
	msgbox MtSilver_Text_Sign, MSGBOX_SIGN
	end

MtSilver_Text_Sign:
	.string "MT. SILVER$"

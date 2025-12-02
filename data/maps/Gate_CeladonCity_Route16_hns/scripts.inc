Gate_CeladonCity_Route16_hns_MapScripts::
	.byte 0

Gate_CeladonCity_Route16_TriggerScript::
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, Gate_CeladonCity_Route16_NoBike
	goto_if_set FLAG_SYS_CYCLING_ROAD, Gate_CeladonCity_Route16_ExitCyclingRoad
	goto_if_unset FLAG_SYS_CYCLING_ROAD, Gate_CeladonCity_Route16_EnterCyclingRoad

Gate_CeladonCity_Route16_NoBike::
	msgbox Gate_CeladonCity_Route16_Text_TooDangerousToWalk, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	clearflag FLAG_SYS_CYCLING_ROAD
	releaseall
	end

Gate_CeladonCity_Route16_EnterCyclingRoad::
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	setflag FLAG_SYS_CYCLING_ROAD
	end

Gate_CeladonCity_Route16_ExitCyclingRoad::
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	clearflag FLAG_SYS_CYCLING_ROAD
	end

Gate_CeladonCity_Route16_Text_TooDangerousToWalk:
	.string "Sorry, you can't walk on CYCLING\n"
	.string "ROAD. It's too dangerous.\p"
	.string "Please come back with a BIKE.$"

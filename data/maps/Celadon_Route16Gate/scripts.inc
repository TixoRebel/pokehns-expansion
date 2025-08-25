Celadon_Route16Gate_MapScripts::
	.byte 0

Celadon_Route16Gate_TriggerScript::
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, Celadon_Route16Gate_NoBike
	goto_if_set FLAG_SYS_CYCLING_ROAD, Celadon_Route16Gate_ExitCyclingRoad
	goto_if_unset FLAG_SYS_CYCLING_ROAD, Celadon_Route16Gate_EnterCyclingRoad

Celadon_Route16Gate_NoBike::
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	clearflag FLAG_SYS_CYCLING_ROAD
	releaseall
	end

Celadon_Route16Gate_EnterCyclingRoad::
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	setflag FLAG_SYS_CYCLING_ROAD
	end

Celadon_Route16Gate_ExitCyclingRoad::
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	clearflag FLAG_SYS_CYCLING_ROAD
	end


.set LOCALID_MTSILVER_RED, 1

MtSilverSummitTestNight_MapScripts::
	.byte 0

MtSilverSummitTest_EventScript_Red::
	lock
	faceplayer
	msgbox MtSilverSummitTest_Text_Red, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RED_2, MtSilverSummitTest_Text_RedBeaten
	setrespawn HEAL_LOCATION_NEW_BARK_TOWN
	msgbox MtSilverSummitTest_Text_Red, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_MTSILVER_RED
	removeobject LOCALID_MTSILVER_RED
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 180
	fadescreenspeed FADE_TO_BLACK, 24
	setflag FLAG_DEFEATED_RED
	clearflag FLAG_HIDE_MTSILVER_RED
	special GameClear
	waitstate
	releaseall
	end

MtSilverSummitTest_Text_Red:
	.string ".........................\n"
	.string ".........................$"

MtSilverSummitTest_Text_RedBeaten:
	.string "...!$"


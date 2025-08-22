.set LOCALID_NURSE, 1
.set LOCALID_FUCHSIAPOKECENTER_WOMAN, 6
.set LOCALID_FUCHSIAPOKECENTER_JASMINE, 4

FuchsiaPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaPokecenter_OnTransition
	.byte 0

FuchsiaPokecenter_OnTransition::
	setflag FLAG_TEMP_1
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
	end

FuchsiaPokecenter_EventScript_CooltrainerM::
	msgbox FuchsiaPokecenter1F_Text_CooltrainerM, MSGBOX_NPC
	end

FuchsiaPokecenter_EventScript_CooltrainerF::
	msgbox FuchsiaPokecenter1F_Text_CooltrainerF, MSGBOX_NPC
	end

FuchsiaPokecenter_EventScript_JanineClone::
	lock
	faceplayer
	msgbox FuchsiaPokecenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAPOKECENTER_WOMAN, GoldenrodRadioTower5_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAPOKECENTER_WOMAN
	clearflag FLAG_TEMP_1
	addobject LOCALID_FUCHSIAPOKECENTER_JASMINE
	applymovement LOCALID_FUCHSIAPOKECENTER_JASMINE, GoldenrodRadioTower5_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAPOKECENTER_JASMINE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaPokecenter1F_Text_JanineImpersonator2, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAPOKECENTER_JASMINE, GoldenrodRadioTower5_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAPOKECENTER_JASMINE
	clearflag FLAG_TEMP_2
	addobject LOCALID_FUCHSIAPOKECENTER_WOMAN
	applymovement LOCALID_FUCHSIAPOKECENTER_WOMAN, GoldenrodRadioTower5_Movement_Spin2
	waitmovement 0
	release
	closemessage
	end

FuchsiaPokecenter1F_Text_CooltrainerM:
	.string "Hey! You have a brand new kind of\n"
	.string "POKéDEX.\p"
	.string "Did PROF.OAK give that to you?$"

FuchsiaPokecenter1F_Text_CooltrainerF:
	.string "I got quite a shock at the GYM.\p"
	.string "There were all these girls who\n"
	.string "looked identical.$"

FuchsiaPokecenter1F_Text_JanineImpersonator1:
	.string "I'm JANINE! Hocus-pocus… Poof!$"

FuchsiaPokecenter1F_Text_JanineImpersonator2:
	.string "See? I look just like her now!$"


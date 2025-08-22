.set LOCALID_OLIVINE_GYM_NPC1, 3
.set LOCALID_OLIVINE_GYM_NPC2, 2

OlivineGym_MapScripts::
	.byte 0

OlivineGym_EventScript_Gent::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_OLIVINE_GYM, OlivineGym_EventScript_Gent2
	msgbox OlivineGym_Text_Gent, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_EventScript_Gent2::
	msgbox OlivineGym_Text_Gent2, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_TriggerRow1::
	lock
	setvar VAR_TEMP_0, LOCALID_OLIVINE_GYM_NPC1
	playse SE_PIN
	applymovement VAR_TEMP_0, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_eq VAR_TEMP_1, 6, OlivineGym_EventScript_MoveLeft4
	call_if_eq VAR_TEMP_1, 7, OlivineGym_EventScript_MoveLeft3
	call_if_eq VAR_TEMP_1, 8, OlivineGym_EventScript_MoveLeft2
	call_if_eq VAR_TEMP_1, 9, OlivineGym_EventScript_MoveLeft1
	call_if_eq VAR_TEMP_1, 10, OlivineGym_EventScript_MoveLeft0
	turnobject LOCALID_PLAYER, DIR_EAST
	msgbox OlivineGym_Text_Gent, MSGBOX_DEFAULT
	closemessage
	setvar VAR_OLIVINE_CITY_STATE, 6
	release
	end

OlivineGym_EventScript_MoveLeft0::
	turnobject VAR_TEMP_0, DIR_WEST
	return

OlivineGym_EventScript_MoveLeft1::
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineGym_EventScript_MoveLeft2::
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineGym_EventScript_MoveLeft3::
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineGym_EventScript_MoveLeft4::
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineGym_Text_Gent:
	.string "I knew you'd come here.\p"
	.string "Thank you for helping the GYM LEADER,\n"
	.string "but battle is a separate matter.\p"
	.string "Go for it!$"

OlivineGym_Text_Gent2:
	.string "Impressive!\n"
	.string "You should continue your journey to\n"
	.string "different places.\p"
	.string "Since you can use SURF, why don't you\n"
	.string "try it on the LAKE OF RAGE?$"

OlivineGym_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_OLIVINE_GYM, OlivineGym_EventScript_Lass2
	msgbox OlivineGym_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_EventScript_Lass2::
	msgbox OlivineGym_Text_Lass2, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_TriggerRow2::
	lock
	setvar VAR_TEMP_0, LOCALID_OLIVINE_GYM_NPC2
	playse SE_PIN
	applymovement VAR_TEMP_0, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_eq VAR_TEMP_1, 6, OlivineGym_EventScript_MoveRight0
	call_if_eq VAR_TEMP_1, 7, OlivineGym_EventScript_MoveRight1
	call_if_eq VAR_TEMP_1, 8, OlivineGym_EventScript_MoveRight2
	call_if_eq VAR_TEMP_1, 9, OlivineGym_EventScript_MoveRight3
	call_if_eq VAR_TEMP_1, 10, OlivineGym_EventScript_MoveRight4
	turnobject LOCALID_PLAYER, DIR_WEST
	msgbox OlivineGym_Text_Lass, MSGBOX_DEFAULT
	closemessage
	setvar VAR_OLIVINE_CITY_STATE, 7
	release
	end

OlivineGym_EventScript_MoveRight0::
	turnobject VAR_TEMP_0, DIR_EAST
	return

OlivineGym_EventScript_MoveRight1::
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineGym_EventScript_MoveRight2::
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineGym_EventScript_MoveRight3::
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineGym_EventScript_MoveRight4::
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineGym_Text_Lass:
	.string "Giggle...\n"
	.string "I know how capable you are\l"
	.string "from the LIGHTHOUSE.\p"
	.string "It's time you showed that side of\n"
	.string "yourself to JASMINE! Good luck!$"

OlivineGym_Text_Lass2:
	.string "You are amazing...\n"
	.string "You should aim even higher, since\l"
	.string "you have such potential.\p"
	.string "Have you been to MAHOGANY TOWN?$"

OlivineGym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_lt VAR_OLIVINE_CITY_STATE, 5, OlivineGym_EventScript_GymGuideSick
	goto_if_set FLAG_DEFEATED_OLIVINE_GYM, OlivineGym_EventScript_GymGuideAfter
	msgbox OlivineGym_Text_GymGuideText, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_EventScript_GymGuideSick::
	msgbox OlivineGym_Text_GymGuidePreText, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_EventScript_GymGuideAfter::
	msgbox OlivineGym_Text_GymGuideWinText, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_Text_GymGuideText:
	.string "JASMINE uses the newly discovered\n"
	.string "STEEL-type.\p"
	.string "She's known for having not one,\n"
	.string "but two aces.\p"
	.string "The first is a metal bug that can\n"
	.string "use a technique to boost its ATTACK.\p"
	.string "While fire will hurt it, it can\n"
	.string "sometimes endure powerful blows.\p"
	.string "The second is a giant iron snake\n"
	.string "with lots of powerful moves.\p"
	.string "Approach it with caution.\p"
	.string "It may look slow, but I've seen it\n"
	.string "strike first with shocking displays\l"
	.string "of SPEED.$"

OlivineGym_Text_GymGuideWinText:
	.string "That was awesome.\p"
	.string "The STEEL-type, huh?\p"
	.string "That was a close encounter of an\n"
	.string "unknown kind!$"

OlivineGym_Text_GymGuidePreText:
	.string "JASMINE, the GYM LEADER, is at the\n"
	.string "LIGHTHOUSE.\p"
	.string "She's been tending to a sick POKéMON.\p"
	.string "A strong trainer has to be\n"
	.string "compassionate.$"

OlivineGym_EventScript_Jasmine::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_OLIVINE_GYM, OlivineGym_EventScript_Jasmine_Defeated
	msgbox OlivineGym_Text_JasmineSteelTypeIntro, MSGBOX_DEFAULT
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, OlivineGym_EventScript_CianwoodCheckMahog
	goto_if_set FLAG_DEFEATED_MAHOGANY_GYM, OlivineGym_EventScript_MahogCheckCianwood
	goto OlivineGym_EventScript_Jasmine_Battle1

OlivineGym_EventScript_JasmineVictory::
	message OlivineGym_Text_ReceivedMineralBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox OlivineGym_Text_JasmineBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE06_GET
	setflag FLAG_DEFEATED_OLIVINE_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM_IRON_TAIL
	msgbox OlivineGym_Text_JasmineIronTailSpeech, MSGBOX_DEFAULT
	setvar VAR_OLIVINE_CITY_STATE, 8
	closemessage
	release
	end

OlivineGym_EventScript_CianwoodCheckMahog::
	goto_if_set FLAG_DEFEATED_MAHOGANY_GYM, OlivineGym_EventScript_Jasmine_Battle3
	goto OlivineGym_EventScript_Jasmine_Battle2

OlivineGym_EventScript_MahogCheckCianwood::
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, OlivineGym_EventScript_Jasmine_Battle3
	goto OlivineGym_EventScript_Jasmine_Battle2
	
OlivineGym_EventScript_Jasmine_Battle1::
	trainerbattle_no_intro TRAINER_JASMINE_1, OlivineGym_Text_JasmineBetterTrainer
	goto OlivineGym_EventScript_JasmineVictory

OlivineGym_EventScript_Jasmine_Battle2::
	trainerbattle_no_intro TRAINER_JASMINE_1_2, OlivineGym_Text_JasmineBetterTrainer
	goto OlivineGym_EventScript_JasmineVictory

OlivineGym_EventScript_Jasmine_Battle3::
	trainerbattle_no_intro TRAINER_JASMINE_1_3, OlivineGym_Text_JasmineBetterTrainer
	goto OlivineGym_EventScript_JasmineVictory

OlivineGym_EventScript_Jasmine_Defeated::
	msgbox OlivineGym_Text_JasmineGoodLuck, MSGBOX_DEFAULT
	closemessage
	release
	end


OlivineGym_Text_JasmineSteelTypeIntro:
	.string "…Thank you for your help at the\n"
	.string "LIGHTHOUSE…\p"
	.string "But this is different.\n"
	.string "Please allow me to introduce myself.\p"
	.string "I am JASMINE, a GYM LEADER.\n"
	.string "I use the STEEL-type.\p"
	.string "…Do you know about the STEEL-type?\p"
	.string "It's a type that was only recently\n"
	.string "discovered.\p"
	.string "…Um… May I begin?$"

OlivineGym_Text_JasmineBetterTrainer:
	.string "…You are a better trainer than me,\n"
	.string "in both skill and kindness.\p"
	.string "In accordance with LEAGUE rules,\n"
	.string "I confer upon you this BADGE.$"

OlivineGym_Text_ReceivedMineralBadge:
	.string "{PLAYER} received MINERALBADGE.$"

OlivineGym_Text_JasmineBadgeSpeech:
	.string "MINERALBADGE raises POKéMON's DEFENSE.\p"
	.string "…Um… Please take this too…$"

OlivineGym_Text_JasmineIronTailSpeech:
	.string "…You could use that TM to teach\n"
	.string "IRON TAIL.$"

OlivineGym_Text_JasmineGoodLuck:
	.string "Um… I don't know how to say this,\n"
	.string "but good luck…$"

OlivineGym_Text_JasmineRematchText:
	.string "…Congratulations, JOHTO CHAMPION.\p"
	.string "You have become so strong…\p"
	.string "I wonder if I have improved.\p"
	.string "Would you like to test that?\p"
	.string "Want to have a rematch with me?$"

OlivineGym_Text_JasmineRematchDefeatText:
	.string "…You are a better trainer than me,\n"
	.string "in both skill and kindness.$"

OlivineGym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_OLIVINE_GYM, OlivineGym_EventScript_Statue2
	msgbox OlivineGym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_EventScript_Statue2::
	msgbox OlivineGym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineGym_Text_GymStatue:
	.string "OLIVINE CITY POKéMON GYM$"

OlivineGym_Text_GymStatueCertified:
	.string "OLIVINE CITY POKéMON GYM\p"
	.string "JASMINE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

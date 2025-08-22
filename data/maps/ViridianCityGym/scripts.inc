ViridianCityGym_MapScripts::
	.byte 0

ViridianCityGym_EventScript_Blue::
	lock
	faceplayer
	goto_if_unset FLAG_HIDE_DOJO_BLUE, ViridianCityGym_EventScript_BlueAtDojo
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCityGym_EventScript_BlueGotoDojo
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCityGym_EventScript_Blue_Defeated
	msgbox ViridianCityGym_Text_LeaderBlue_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BLUE, ViridianCityGym_Text_LeaderBlue_Win
	message ViridianCityGym_Text_ReceivedEarthBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox ViridianCityGym_Text_LeaderBlue_After, MSGBOX_DEFAULT
	giveitem ITEM_TM_BULK_UP
	setflag FLAG_BADGE16_GET
	setflag FLAG_DEFEATED_VIRIDIAN_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 16
	call Common_EventScript_SetGymTrainers
	closemessage
	setflag FLAG_HIDE_LEAGUE_BLACKBELT
	setflag FLAG_HIDE_CERULEANCAVE_GUARD
	setflag FLAG_HIDE_SEAFOAM_BLAINE
	clearflag FLAG_HIDE_CINNABAR_BLAINE
	release
	end

ViridianCityGym_EventScript_Blue_Defeated::
	msgbox ViridianCityGym_Text_LeaderBlue_Epilogue, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianCityGym_EventScript_BlueGotoDojo::
	msgbox ViridianCityGym_Text_BlueGotoDojo, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_DOJO_BLUE
	release
	end

ViridianCityGym_Text_BlueGotoDojo:
	.string "BLUE: Back for more already?\p"
	.string "If you want another shot at me,\n"
	.string "come to the FIGHTING DOJO!$"

ViridianCityGym_EventScript_BlueAtDojo::
	msgbox ViridianCityGym_Text_LeaderBlue_Epilogue, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianCityGym_Text_LeaderBlue_Before:
	.string "BLUE: Yo! Finally got here, huh?\p"
	.string "I wasn't in the mood at CINNABAR,\p"
	.string "but now I'm ready to battle you.\p"
	.string "…\p"
	.string "You're telling me you conquered all\n"
	.string "the GYMS in JOHTO?\p"
	.string "Heh! JOHTO's GYMS must be pretty\n"
	.string "pathetic then.\p"
	.string "Hey, don't worry about it.\p"
	.string "I'll know if you are good or not by\n"
	.string "battling you right now.\p"
	.string "Ready, JOHTO CHAMP?$"

ViridianCityGym_Text_LeaderBlue_Win:
	.string "BLUE: What?\p"
	.string "How the heck did I lose to you?\p"
	.string "…\p"
	.string "Tch, all right… Here, take this--it's\n"
	.string "EARTHBADGE.$"

ViridianCityGym_Text_ReceivedEarthBadge:
	.string "{PLAYER} received EARTHBADGE.$"

ViridianCityGym_Text_LeaderBlue_After:
	.string "BLUE: …\p"
	.string "All right, I was wrong. You're the\n"
	.string "real deal. You are a good trainer.\p"
	.string "But I'm going to beat you someday.\p"
	.string "Don't you forget it!$"

ViridianCityGym_Text_LeaderBlue_Epilogue:
	.string "BLUE: Listen, you.\p"
	.string "You'd better not lose until I beat\n"
	.string "you. Got it?$"


ViridianCityGym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCityGym_EventScript_GymGuyAfter
	msgbox ViridianCityGym_Text_Guide, MSGBOX_NPC
	end

ViridianCityGym_EventScript_GymGuyAfter::
	msgbox ViridianCityGym_Text_Guide_Win, MSGBOX_NPC
	end

ViridianCityGym_Text_Guide:
	.string "Yo, CHAMP in making!\p"
	.string "How's it going? Looks like you're on\n"
	.string "a roll.\p"
	.string "The GYM LEADER is a guy who battled\n"
	.string "the CHAMPION three years ago.\p"
	.string "He's no pushover.\p"
	.string "Give it everything you've got!$"

ViridianCityGym_Text_Guide_Win:
	.string "Man, you are truly tough…\p"
	.string "That was a heck of an inspirational\n"
	.string "battle. It brought tears to my eyes.$"


ViridianCityGym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE16_GET, ViridianCityGym_EventScript_GymStatuePostVictory
	msgbox ViridianCityGym_Text_GymStatue
	releaseall
	end

ViridianCityGym_EventScript_GymStatuePostVictory::
	msgbox ViridianCityGym_Text_GymStatuePlayerWon
	releaseall
	end

ViridianCityGym_Text_GymStatue::
    .string "VIRIDIAN POKéMON GYM\n"
    .string "LEADER: BLUE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"

ViridianCityGym_Text_GymStatuePlayerWon::
    .string "VIRIDIAN POKéMON GYM\n"
    .string "LEADER: BLUE\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"


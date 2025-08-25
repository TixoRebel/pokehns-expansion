SaffronCityGym_MapScripts::
	.byte 0

SaffronCityGym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_JOHTO_SAFFRON_GYM, SaffronCityGym_EventScript_GymGuy2
	msgbox SaffronCityGym_Text_GymGuideIntro, MSGBOX_NPC
	end

SaffronCityGym_EventScript_GymGuy2::
	msgbox SaffronCityGym_Text_GymGuideWin, MSGBOX_NPC
	end

SaffronCityGym_EventScript_Rebecca::
	trainerbattle_single TRAINER_REBECCA SaffronCityGym_Text_MediumRebeccaSeen, SaffronCityGym_Text_MediumRebeccaBeaten
	msgbox SaffronCityGym_Text_MediumRebeccaAfter, MSGBOX_AUTOCLOSE
	end

SaffronCityGym_EventScript_Franklin::
	trainerbattle_single TRAINER_FRANKLIN SaffronCityGym_Text_PsychicFranklinSeen, SaffronCityGym_Text_PsychicFranklinBeaten
	msgbox SaffronCityGym_Text_PsychicFranklinAfter, MSGBOX_AUTOCLOSE
	end

SaffronCityGym_EventScript_Doris::
	trainerbattle_single TRAINER_DORIS SaffronCityGym_Text_MediumDorisSeen, SaffronCityGym_Text_MediumDorisBeaten
	msgbox SaffronCityGym_Text_MediumDorisAfter, MSGBOX_AUTOCLOSE
	end

SaffronCityGym_EventScript_Jared::
	trainerbattle_single TRAINER_JARED SaffronCityGym_Text_PsychicJaredSeen, SaffronCityGym_Text_PsychicJaredBeaten
	msgbox SaffronCityGym_Text_PsychicJaredAfter, MSGBOX_AUTOCLOSE
	end

SaffronCityGym_EventScript_Sabrina::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_JOHTO_SAFFRON_GYM, SaffronCityGym_EventScript_Sabrina_Defeated
	msgbox SaffronCityGym_Text_SabrinaIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SABRINA, SaffronCityGym_Text_SabrinaWinLoss
	message SaffronCityGym_Text_ReceivedMarshBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SaffronCityGym_Text_MarshBadgeInfo, MSGBOX_DEFAULT
	setflag FLAG_BADGE13_GET
	setflag FLAG_DEFEATED_JOHTO_SAFFRON_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 13
	call Common_EventScript_SetGymTrainers
	closemessage
	clearflag FLAG_HIDE_OLIVINE_SABRINA
	release
	end

SaffronCityGym_EventScript_Sabrina_Defeated::
	msgbox SaffronCityGym_Text_SabrinaPostBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCityGym_Text_SabrinaIntro:
	.string "SABRINA: I knew you were coming…\p"
	.string "Three years ago I had a vision\n"
	.string "of your arrival.\p"
	.string "You're after my BADGE.\p"
	.string "I don't enjoy battling, but it's\n"
	.string "my duty as a LEADER to confer\l"
	.string "BADGES on anyone who has proven\l"
	.string "him- or herself worthy.\p"
	.string "Since you wish it, I will show\n"
	.string "you my psychic powers!$"

SaffronCityGym_Text_SabrinaWinLoss:
	.string "SABRINA: Your power…\p"
	.string "It far exceeds what I foresaw…\p"
	.string "Maybe it isn't possible to fully\n"
	.string "predict what the future holds…\p"
	.string "OK, you win. You earned yourself\n"
	.string "MARSHBADGE.$"

SaffronCityGym_Text_ReceivedMarshBadge:
	.string "{PLAYER} received MARSHBADGE.$"

SaffronCityGym_Text_MarshBadgeInfo:
	.string "SABRINA: MARSHBADGE draws out\n"
	.string "your subliminal powers…\p"
	.string "Although I failed to accurately\n"
	.string "predict your power, this much I\l"
	.string "know to be true.\p"
	.string "You will become a celebrated and\n"
	.string "beloved CHAMPION!$"

SaffronCityGym_Text_SabrinaPostBattle:
	.string "SABRINA: Your love for your\n"
	.string "POKéMON overwhelmed my psychic\l"
	.string "power…\p"
	.string "The power of love, I think, is\n"
	.string "also a kind of psychic power…$"

SaffronCityGym_Text_SabrinaRematch:
	.string "SABRINA: Ah, the KANTO CHAMPION.\p"
	.string "I sensed your return.\p"
	.string "Your power has grown immensely.\p"
	.string "Even now, I feel your aura.\p"
	.string "Want to have a rematch with me?$"

SaffronCityGym_Text_SabrinaRematchDefeat:
	.string "SABRINA: Your love for your\n"
	.string "POKéMON again overwhelmed my\l"
	.string "psychic power…$"

SaffronCityGym_Text_MediumRebeccaSeen:
	.string "The power of all those you\n"
	.string "defeated comes to me!$"

SaffronCityGym_Text_MediumRebeccaBeaten:
	.string "Strong… Far too strong…$"

SaffronCityGym_Text_MediumRebeccaAfter:
	.string "What is the source of your power?$"

SaffronCityGym_Text_PsychicFranklinSeen:
	.string "Psychic power is the power of\n"
	.string "your soul.$"

SaffronCityGym_Text_PsychicFranklinBeaten:
	.string "Your soul has more power than\n"
	.string "mine!$"

SaffronCityGym_Text_PsychicFranklinAfter:
	.string "You made your soul stronger, not\n"
	.string "just your abilities.$"

SaffronCityGym_Text_MediumDorisSeen:
	.string "Fufufufu… I see it clearly.\p"
	.string "I can see into your soul!$"

SaffronCityGym_Text_MediumDorisBeaten:
	.string "Though I read you, I still lost…$"

SaffronCityGym_Text_MediumDorisAfter:
	.string "Darn! I forgot that I predicted I\n"
	.string "would lose to you.$"

SaffronCityGym_Text_PsychicJaredSeen:
	.string "The FIGHTING DOJO next door was\n"
	.string "once this city's GYM.$"

SaffronCityGym_Text_PsychicJaredBeaten:
	.string "I was no match…$"

SaffronCityGym_Text_PsychicJaredAfter:
	.string "KARATE KING, the master of the\n"
	.string "FIGHTING DOJO, was just destroyed\l"
	.string "by SABRINA.$"

SaffronCityGym_Text_GymGuideIntro:
	.string "Yo, CHAMP in making!\p"
	.string "A trainer as skilled as you\n"
	.string "doesn't need to be told how to\l"
	.string "deal with PSYCHIC-type POKéMON,\l"
	.string "right?\p"
	.string "I expect great things from you!\p"
	.string "Good luck!$"

SaffronCityGym_Text_GymGuideWin:
	.string "That was another fantastic battle!$"

SaffronCityGym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE13_GET, SaffronCityGym_EventScript_GymStatuePostVictory
	msgbox SaffronCityGym_Text_GymStatue
	releaseall
	end

SaffronCityGym_EventScript_GymStatuePostVictory::
	msgbox SaffronCityGym_Text_GymStatuePlayerWon
	releaseall
	end


SaffronCityGym_Text_GymStatue::
    .string "SAFFRON POKéMON GYM\n"
    .string "LEADER: SABRINA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"

SaffronCityGym_Text_GymStatuePlayerWon::
    .string "SAFFRON POKéMON GYM\n"
    .string "LEADER: SABRINA\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"

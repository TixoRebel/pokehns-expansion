CeladonCityGym_MapScripts::
	.byte 0


CeladonCityGym_EventScript_Erika::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_JOHTO_CELADON_GYM, CeladonCityGym_EventScript_Erika_Defeated
	msgbox CeladonCityGym_Text_ErikaBeforeBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERIKA, CeladonCityGym_Text_ErikaBeaten
	message CeladonCityGym_Text_PlayerReceivedRainbowBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CeladonCityGym_Text_ErikaExplainTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
	setflag FLAG_BADGE12_GET
	setflag FLAG_DEFEATED_JOHTO_CELADON_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 12
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_FOUNTAIN_ERIKA
	closemessage
	release
	end

CeladonCityGym_EventScript_Erika_Defeated::
	msgbox CeladonCityGym_Text_ErikaAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonCityGym_Text_ErikaBeforeBattle:
	.string "ERIKA: Hello… Lovely weather,\n"
	.string "isn't it? It's so pleasant…\p"
	.string "…I'm afraid I may doze off…\p"
	.string "My name is ERIKA. I am the LEADER\n"
	.string "of CELADON GYM.\p"
	.string "…Oh? All the way from JOHTO, you\n"
	.string "say? How nice…\p"
	.string "Oh. I'm sorry, I didn't realize\n"
	.string "that you wished to challenge me.\p"
	.string "Very well, but I shall not lose.$"

CeladonCityGym_Text_ErikaBeaten:
	.string "ERIKA: Oh! I concede defeat…\p"
	.string "You are remarkably strong…\p"
	.string "I shall give you RAINBOWBADGE…$"

CeladonCityGym_Text_PlayerReceivedRainbowBadge:
	.string "{PLAYER} received RAINBOWBADGE.$"

CeladonCityGym_Text_ErikaExplainTM:
	.string "ERIKA: That was a delightful\n"
	.string "match.\p"
	.string "I felt inspired. Please, I wish\n"
	.string "you to have this TM.\p"
	.string "It is GIGA DRAIN.\p"
	.string "It is a wonderful move that\n"
	.string "drains half the damage it inflicts\l"
	.string "to heal your POKéMON.\p"
	.string "Please use it if it pleases you…$"

CeladonCityGym_Text_ErikaAfterBattle:
	.string "ERIKA: Losing leaves a bitter\n"
	.string "aftertaste…\p"
	.string "But knowing that there are strong\n"
	.string "trainers spurs me to do better…$"

CeladonCityGym_Text_ErikaRematch:
	.string "ERIKA: Oh, hello.\p"
	.string "What a surprise, KANTO CHAMPION!\p"
	.string "It's so lovely to see you again.\p"
	.string "Your journey must have been so\n"
	.string "exciting.\p"
	.string "Even champions enjoy a challenge.\p"
	.string "Want to have a rematch with me?$"

CeladonCityGym_Text_ErikaRematchDefeat:
	.string "ERIKA: Losing still leaves a\n"
	.string "bitter aftertaste…\p"
	.string "But knowing that there are strong\n"
	.string "trainers spurs me to do better…$"

CeladonCityGym_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE CeladonCityGym_Text_LassMichelleSeen, CeladonCityGym_Text_LassMichelleBeaten
	msgbox CeladonCityGym_Text_LassMichelleAfter, MSGBOX_AUTOCLOSE
	end

CeladonCityGym_Text_LassMichelleSeen:
	.string "Do you think a girls-only GYM is\n"
	.string "rare?$"

CeladonCityGym_Text_LassMichelleBeaten:
	.string "Oh, bleah!$"

CeladonCityGym_Text_LassMichelleAfter:
	.string "I just got careless, that's all!$"


CeladonCityGym_EventScript_Tanya::
	trainerbattle_single TRAINER_TANYA CeladonCityGym_Text_PicnickerTanyaSeen, CeladonCityGym_Text_PicnickerTanyaBeaten
	msgbox CeladonCityGym_Text_PicnickerTanyaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCityGym_Text_PicnickerTanyaSeen:
	.string "Oh, a battle? That's kind of scary,\n"
	.string "but OK!$"

CeladonCityGym_Text_PicnickerTanyaBeaten:
	.string "Oh, that's it?$"

CeladonCityGym_Text_PicnickerTanyaAfter:
	.string "Oh, look at all your BADGES. No\n"
	.string "wonder I couldn't win!$"

CeladonCityGym_EventScript_Julia::
	trainerbattle_single TRAINER_JULIA CeladonCityGym_Text_BeautyJuliaSeen, CeladonCityGym_Text_BeautyJuliaBeaten
	msgbox CeladonCityGym_Text_BeautyJuliaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCityGym_Text_BeautyJuliaSeen:
	.string "Were you looking at these flowers\n"
	.string "or at me?$"

CeladonCityGym_Text_BeautyJuliaBeaten:
	.string "How annoying!$"

CeladonCityGym_Text_BeautyJuliaAfter:
	.string "How do I go about becoming\n"
	.string "ladylike like ERIKA?$"

CeladonCityGym_EventScript_Jo::
	trainerbattle_double TRAINER_JO_AND_ZOE, CeladonCityGym_Text_TwinsJoAndZoe1Seen, CeladonCityGym_Text_TwinsJoAndZoe1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox CeladonCityGym_Text_TwinsJoAndZoe1After, MSGBOX_AUTOCLOSE
	end

CeladonCityGym_EventScript_Zoe::
	trainerbattle_double TRAINER_JO_AND_ZOE, CeladonCityGym_Text_TwinsJoAndZoe2Seen, CeladonCityGym_Text_TwinsJoAndZoe2Beaten, Route104_Text_GinaNotEnoughMons
	msgbox CeladonCityGym_Text_TwinsJoAndZoe2After, MSGBOX_AUTOCLOSE
	end

CeladonCityGym_Text_TwinsJoAndZoe1Seen:
	.string "We'll show you POKéMON moves that\n"
	.string "ERIKA taught us!$"

CeladonCityGym_Text_TwinsJoAndZoe1Beaten:
	.string "Oh… We lost…$"

CeladonCityGym_Text_TwinsJoAndZoe1After:
	.string "ERIKA will get you back for us!$"

CeladonCityGym_Text_TwinsJoAndZoe2Seen:
	.string "We're going to protect ERIKA!$"

CeladonCityGym_Text_TwinsJoAndZoe2Beaten:
	.string "We couldn't win…$"

CeladonCityGym_Text_TwinsJoAndZoe2After:
	.string "ERIKA is much, much stronger!$"

CeladonCityGym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE12_GET, CeladonCityGym_EventScript_GymStatuePostVictory
	msgbox CeladonCityGym_Text_GymStatue
	releaseall
	end

CeladonCityGym_EventScript_GymStatuePostVictory::
	msgbox CeladonCityGym_Text_GymStatuePlayerWon
	releaseall
	end

CeladonCityGym_Text_GymStatue::
    .string "CELADON POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"

CeladonCityGym_Text_GymStatuePlayerWon::
    .string "CELADON POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"

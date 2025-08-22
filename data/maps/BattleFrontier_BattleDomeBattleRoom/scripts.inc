@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_DOME_PLAYER).
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by dome_setopponentgfx.

.set NO_DRAW,       0
.set DRAW_TRAINER,  1
.set DRAW_TUCKER,   2

BattleFrontier_BattleDomeBattleRoom_MapScripts::

BattleFrontier_BattleDomeBattleRoom_OnTransition:

BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx::

BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxMale::

BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxFemale::

BattleFrontier_BattleDomeBattleRoom_OnFrame:

BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom::
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter::

BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnterForTucker::
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer::
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent::
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw::
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent::
BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney::
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost::

BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon::

BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWonDraw::

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw::

BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent::

BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney::

BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney::
BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin::

BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon::

BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWonDraw::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound1::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound2::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptSemifinal::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptFinal::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound1::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound2::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonSemifinal::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonFinal::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion::
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound1::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound2::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionSemifinal::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionFinal::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound1::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound2::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakSemifinal::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakFinal::

BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver::

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold::
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter::
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver::

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro::
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold::

BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle::

BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker::

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw::

BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle::

BattleFrontier_BattleDomeBattleRoom_OnWarp:

BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects::
BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects::

BattleFrontier_BattleDomeBattleRoom_OnResume:

BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience::

@ Add audience members to supplement the permanent object event audience
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience::

BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience::

BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience::

BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience::

BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience::

BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible:

BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter:
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward:

BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience:

@ Identical to Movement_PlayerEnter
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnterForTucker:

BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward2:

BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward:

BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisibleFacingUp:

BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance:

BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance:

BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward:

BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer:

BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround::

BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby::

BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles::

@ On round 1 there's a 50% chance that a specific audience member will walk to his seat
BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos::

BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat::

BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump:

BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat:

BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter:

BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft:

BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit:

BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome:
	.string "{PLAYER} has entered the BATTLE DOME!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer:
	.string "{STR_VAR_1}\n"
	.string "match!\p"
	.string "{PLAYER} versus {STR_VAR_2}!\p"
	.string "Let the battle begin!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner:
	.string "{PLAYER} is the winner!\n"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner:
	.string "{STR_VAR_2} is the winner!\n"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ:
	.string "{PLAYER} is the Level 50\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp:
	.string "{PLAYER} is the Open Level\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait:
	.string "What an unbelievable finish!\n"
	.string "We have a double knockout!\p"
	.string "In this event, the Battle Tournament\n"
	.string "rules call for a REFEREE'S decision.\p"
	.string "Please wait while the judging\n"
	.string "is under way.$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer:
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is {STR_VAR_1}!\l"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer:
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is {PLAYER}!\l"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope:
	.string "The bright new hope!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_RisingStar:
	.string "The rising star!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship:
	.string "Will this TRAINER race to\n"
	.string "the championship?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry:
	.string "Can the feat of a championship\n"
	.string "on the first try be achieved?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged:
	.string "Can the loss of the last match\n"
	.string "be avenged?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship:
	.string "The TRAINER is on fire for\n"
	.string "the first championship try!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal:
	.string "A win here means this TRAINER\n"
	.string "advances to the final!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue:
	.string "Will the long-held dream of\n"
	.string "a championship finally come true?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion:
	.string "The invincible champion!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer:
	.string "Can anyone hope to beat this\n"
	.string "TRAINER?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer:
	.string "Do battles exist solely for\n"
	.string "this TRAINER?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle:
	.string "The current champion aiming to\n"
	.string "retain the title!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned:
	.string "The former champion has returned!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned:
	.string "The former toughness has returned!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals:
	.string "Will this TRAINER do as expected\n"
	.string "and advance to the finals?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory:
	.string "Will the former champ regain\n"
	.string "lost glory?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster:
	.string "Feel the glow of a true master!$"

BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker:
	.string "And now… The TRAINER standing in\n"
	.string "{PLAYER}'s record-setting path…\p"
	.string "Yes! The one and only!\n"
	.string "The BATTLE DOME COMMISSIONER!\l"
	.string "Our very own DOME ACE!\l"
	.string "Make way for TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant:
	.string "Spectators: TUCKER! TUCKER!\n"
	.string "TUCKER! TUCKER! TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro:
	.string "TUCKER: Ahahah!\p"
	.string "Do you hear it? This crowd!\n"
	.string "They're all itching to see our match!\p"
	.string "Ahahah!\p"
	.string "I bet you're twitching all over from\n"
	.string "the tension of getting to battle me!\p"
	.string "But don't you worry about a thing!\p"
	.string "I'm the no. 1 star of the BATTLE DOME!\n"
	.string "I, TUCKER the DOME ACE, will bathe you\l"
	.string "in my brilliant glow!$"

BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy:
	.string "Your strategy!\n"
	.string "Let's see it!$"

BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer:
	.string "Unbelievable! It's incredible!\n"
	.string "The victor is {PLAYER}!$"

BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker:
	.string "The winner is TUCKER!\n"
	.string "The DOME ACE has prevailed!\p"
	.string "Congratulations, TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass:
	.string "TUCKER: Rules are rules!\n"
	.string "Let me see your FRONTIER PASS.$"

BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol:
	.string "The Tactics Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime:
	.string "… … … … … …\p"
	.string "I sorely underestimated you. I won't\n"
	.string "make the same mistake next time…$"

BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched:
	.string "Can the win streak be stretched?\n"
	.string "The confidence is there!$"

BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker:
	.string "Ladies and gentlemen!\n"
	.string "Boys, girls, and POKéMON!\p"
	.string "Finally!\n"
	.string "Finally, the legend has returned!\p"
	.string "Yes, the name of that legend!\n"
	.string "Our very own DOME ACE!\l"
	.string "It's none other than TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro:
	.string "TUCKER: Ah…\n"
	.string "The pummeling roar of the crowd…\l"
	.string "Their furnace-like heat of excitement…\l"
	.string "This is a wonderful place…\p"
	.string "To the crowd, I am the DOME ACE…\n"
	.string "I represent their hopes and dreams…\l"
	.string "I must never fade from their sight…\p"
	.string "I must burn!\n"
	.string "Brighter and more brilliant!\l"
	.string "I must light all that gather here!$"

BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess:
	.string "I will unleash all the power that\n"
	.string "I possess! Right here and now!$"

BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed:
	.string "TUCKER: You're genuinely fantastic!\p"
	.string "Never before! I haven't ever lost in the\n"
	.string "times I've had to unleash my power.\p"
	.string "Yes, quite fantastic!\n"
	.string "Your FRONTIER PASS, please?$"

BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine:
	.string "The Tactics Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter:
	.string "You're strong, but above all,\n"
	.string "you have a unique charm!\p"
	.string "In you, I see a definite potential for\n"
	.string "a superstar like me.\p"
	.string "I will very much look forward to\n"
	.string "our next encounter!$"

@ Unused
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ2:
	.string "{PLAYER} is the Level 50\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

@ Unused
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp2:
	.string "{PLAYER} is the Open Level\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker:
	.string "The final match!\p"
	.string "{PLAYER} versus the DOME ACE, TUCKER!\p"
	.string "Let the battle begin!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker:
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is our very own DOME ACE!\l"
	.string "It's TUCKER!\p"
	.string "Congratulations! And thank you!\n"
	.string "Let's hear it for the DOME ACE, TUCKER!$"

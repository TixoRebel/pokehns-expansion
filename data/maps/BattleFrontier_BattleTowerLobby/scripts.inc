BattleFrontier_BattleTowerLobby_MapScripts::

BattleFrontier_BattleTowerLobby_OnResume:

BattleFrontier_BattleTowerLobby_OnTransition:
BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice::
BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice::

BattleFrontier_BattleTowerLobby_EventScript_HideApprentice::

BattleFrontier_BattleTowerLobby_OnWarp:

BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth::

BattleFrontier_BattleTowerLobby_OnFrame:

BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus::

BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving::

BattleFrontier_BattleTowerLobby_EventScript_WonChallenge::

BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden::
BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons::
BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints::
BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge::

BattleFrontier_BattleTowerLobby_EventScript_LostChallenge::
BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak::
BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying::

BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle::

BattleFrontier_EventScript_SaveBattle::

BattleFrontier_EventScript_BattleSaveFailed::
BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle::

BattleFrontier_EventScript_GetCantRecordBattle::

BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge::

BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn::

BattleFrontier_BattleTowerLobby_EventScript_SinglesAttendant::
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge::

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge::

BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge::

BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge::

BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant::
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge::

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge::

BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge::

BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge::

BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant::
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge::

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge::

BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge::

BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge::

BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant::
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge::

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge::

BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge::
@ The command tower_save ultimately calls TrySavingData(SAVE_LINK), which writes data in SaveBlock1 and SaveBlock2
@ to the flash, but not data in PokemonStorage. The SaveGame script that follows asks the player to do a full save,
@ which they can opt out of. As a result the player can save their party and quit without having saved the PC.
@ This allows players to clone pokemon and their held items by withdrawing them (or erase them by despositing).
#ifndef BUGFIX
#endif
@ GAME_STAT_ENTERED_BATTLE_TOWER should not be incremented here, for two reasons:
@ 1. It is incremented again in BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful or BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
@ 2. If the player tries to connect, but fails, the counter will still be incremented even if the player never enters the tower.
#ifndef BUGFIX
#endif

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan::

BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow::

BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon::

BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost::

BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell::

BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings::

BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat::

BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings::

BattleFrontier_BattleTowerLobby_EventScript_Woman::

BattleFrontier_BattleTowerLobby_EventScript_Boy::

BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults::

BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults::

BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults::

BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults::

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons::

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50::

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles::

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles::

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen::

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles::

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles::

BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed::

BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge::
BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge::
BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge::

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator::
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad::

BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom::

BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom::
BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator::

BattleFrontier_BattleTowerLobby_Movement_WalkToElevator:

BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator:

BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator:

@ Unused
BattleFrontier_BattleTowerLobby_Movement_UnusedEnterElevator:

BattleFrontier_BattleTowerLobby_EventScript_BufferModeText::

BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle::

BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble::

BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti::

BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti::

BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo::

BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant::

BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant::

BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant::

BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant::

BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord::

BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles::

BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles::

BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis::

BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis::

BattleFrontier_BattleTowerLobby_EventScript_GetPartySize::

BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize::

BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize::

BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize::

BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize::

BattleFrontier_EventScript_GetLvlMode::

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink::

BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections::

BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection::

BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers::

BattleFrontier_BattleTowerLobby_EventScript_AbortLink::

BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode::

BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon::

BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons::

BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful::

BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge::

BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink::

BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader::

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader::

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup::

BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful::

BattleFrontier_BattleTowerLobby_EventScript_RulesBoard::

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard::

BattleFrontier_BattleTowerLobby_EventScript_RulesTower::

BattleFrontier_BattleTowerLobby_EventScript_RulesMons::

BattleFrontier_BattleTowerLobby_EventScript_RulesSalon::

BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink::

BattleFrontier_BattleTowerLobby_EventScript_ExitRules::

@ Unused
BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom:
	.string "I'll direct you to your BATTLE ROOM now.$"

BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting:
	.string "Excuse me!\p"
	.string "You didn't save before you quit your\n"
	.string "challenge last time.\p"
	.string "Because of that, your challenge so far\n"
	.string "has been disqualified. Sorry!$"

BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven:
	.string "Congratulations!\n"
	.string "You've beaten all seven TRAINERS!\p"
	.string "$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize:
	.string "For beating seven TRAINERS in a row,\n"
	.string "you have earned this fabulous prize!\p"
	.string "$"

BattleFrontier_BattleTowerLobby_Text_ReceivedPrize:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom:
	.string "Oh, your BAG appears to be full.\p"
	.string "Please make room in your BAG, then come\n"
	.string "see me.$"

BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying:
	.string "Thank you for playing!\p"
	.string "$"

BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved:
	.string "Your record will be saved.\n"
	.string "Please wait.$"

BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou:
	.string "We've been waiting for you!\p"
	.string "$"

BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved:
	.string "Before entering a BATTLE ROOM, your\n"
	.string "progress will be saved. Please wait.$"

BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer:
	.string "You're finally about to face the\n"
	.string "50th TRAINER.\p"
	.string "From here on, every time you beat seven\n"
	.string "TRAINERS in a row, your POKéMON will\l"
	.string "receive a commemorative RIBBON.\p"
	.string "Good luck!$"

BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons:
	.string "Here are some RIBBONS for beating\n"
	.string "seven tough TRAINERS in a row.\p"
	.string "{PLAYER} received some RIBBONS!$"

BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons:
	.string "{PLAYER} put the RIBBONS on\n"
	.string "the challenger POKéMON.$"

BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower:
	.string "Excuse me, do you have a moment?\p"
	.string "Can you describe your feelings when\n"
	.string "you're about to begin a BATTLE TOWER\l"
	.string "match, or when you've either won or\l"
	.string "lost a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin:
	.string "Okay, what are your feelings when\n"
	.string "you're about to begin a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon:
	.string "What do you feel when you've won\n"
	.string "a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost:
	.string "Can I hear about your feelings when\n"
	.string "you have lost a match?$"

BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt:
	.string "Oh, so you don't think much about it?\n"
	.string "You're one cool customer.$"

BattleFrontier_BattleTowerLobby_Text_ChangedYourMind:
	.string "Hunh? You changed your mind?\n"
	.string "I guess you're fickle.$"

BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel:
	.string "Okay, so that's how you feel?\n"
	.string "That's quite original.\p"
	.string "Thanks!$"

BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded:
	.string "The number of matches you win in a row\n"
	.string "is recorded.\p"
	.string "I'd better not get beaten in\n"
	.string "an embarrassing way!$"

BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins:
	.string "Once you've entered the BATTLE TOWER,\n"
	.string "you can't leave until you either lose\l"
	.string "or you beat seven TRAINERS in a row.\p"
	.string "You'd best be certain that you're up\n"
	.string "to the challenge.$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction:
	.string "Welcome to the BATTLE TOWER\n"
	.string "DOUBLE BATTLE CORNER!\p"
	.string "Unfortunately, the BATTLE ROOMS\n"
	.string "are still under construction.\p"
	.string "Please come back when the work\n"
	.string "is completed.$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction:
	.string "Welcome to the BATTLE TOWER\n"
	.string "MULTI BATTLE CORNER!\p"
	.string "Unfortunately, the BATTLE ROOMS\n"
	.string "are still under construction.\p"
	.string "Please come back when the work\n"
	.string "is completed.$"

BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge:
	.string "We look forward to seeing you on\n"
	.string "another challenge!$"

BattleFrontier_BattleTowerLobby_Text_WhichLevelMode:
	.string "The BATTLE ROOM offers two levels\n"
	.string "of challenge, Level 50 and Open Level.\l"
	.string "Which is your choice?$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons:
	.string "Please select the POKéMON you wish\n"
	.string "to enter.$"

BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering:
	.string "Before entering a BATTLE ROOM, your\n"
	.string "progress must be saved. Is that okay?$"

BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom:
	.string "I will now show you to the\n"
	.string "{STR_VAR_1} BATTLE ROOM.$"

BattleFrontier_BattleTowerLobby_Text_RecordLastMatch:
	.string "Shall I record your last BATTLE TOWER\n"
	.string "match on your FRONTIER PASS?$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50:
	.string "Excuse me!\p"
	.string "You don't have {STR_VAR_2} eligible POKéMON.\p"
	.string "You must have {STR_VAR_2} different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1} ineligible.\p"
	.string "Please come see me when you are ready.$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpen:
	.string "Excuse me!\p"
	.string "You don't have {STR_VAR_2} eligible POKéMON.\p"
	.string "You must have {STR_VAR_2} different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1} ineligible.\p"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles:
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "You must have three different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1} ineligible.\p"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles:
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "You must have three different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1} ineligible.\p"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles:
	.string "Excuse me!\p"
	.string "You don't have four eligible POKéMON.\p"
	.string "You must have four different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1} ineligible.\p"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles:
	.string "Excuse me!\p"
	.string "You don't have four eligible POKéMON.\p"
	.string "You must have four different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1} ineligible.\p"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis:
	.string "Excuse me!\p"
	.string "You don't have two eligible POKéMON.\p"
	.string "You must have two different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1} ineligible.\p"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis:
	.string "Excuse me!\p"
	.string "You don't have two eligible POKéMON.\p"
	.string "You must have two different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1} ineligible.\p"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle:
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the SINGLE\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge:
	.string "Would you like to take the SINGLE\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge:
	.string "The BATTLE TOWER's SINGLE BATTLE\n"
	.string "ROOMS are facilities for conducting\l"
	.string "SINGLE BATTLES with three POKéMON.\p"
	.string "There are many SINGLE BATTLE ROOMS\n"
	.string "in the BATTLE TOWER for team battles.\p"
	.string "In each of the SINGLE BATTLE ROOMS,\n"
	.string "seven TRAINERS await your challenge.\p"
	.string "If you manage to defeat all seven,\n"
	.string "you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleTowerLobby_Text_SelectThreeMons:
	.string "Now please select the three POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle:
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the DOUBLE\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge:
	.string "Would you like to take the DOUBLE\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge:
	.string "The BATTLE TOWER's DOUBLE BATTLE\n"
	.string "ROOMS are facilities for conducting\l"
	.string "DOUBLE BATTLES with four POKéMON.\p"
	.string "There are many DOUBLE BATTLE ROOMS\n"
	.string "in the BATTLE TOWER for team battles.\p"
	.string "In each of the DOUBLE BATTLE ROOMS,\n"
	.string "seven TRAINERS await your challenge.\p"
	.string "If you manage to defeat all seven,\n"
	.string "you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons:
	.string "Now please select the four POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle:
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the MULTI\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge:
	.string "Would you like to take the MULTI\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge:
	.string "The BATTLE TOWER's MULTI BATTLE\n"
	.string "ROOMS are facilities for conducting\l"
	.string "MULTI BATTLES.\p"
	.string "For MULTI BATTLES, you must partner\n"
	.string "with a TRAINER in the TOWER and enter\l"
	.string "with two POKéMON each.\p"
	.string "Inside the TOWER is a room named\n"
	.string "the BATTLE SALON where you may meet\l"
	.string "other TRAINERS.\p"
	.string "There, you must find a TRAINER to act\n"
	.string "as your partner in MULTI BATTLES.\p"
	.string "Once you have partnered up, you will\n"
	.string "be shown to a MULTI BATTLE ROOM.\p"
	.string "In the MULTI BATTLE ROOM, seven\n"
	.string "tag teams await your challenge.\p"
	.string "If you manage to defeat all seven\n"
	.string "teams, you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons:
	.string "Now please select the two POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle:
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the LINK MULTI\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge:
	.string "Would you like to take the LINK MULTI\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge:
	.string "The BATTLE TOWER's MULTI BATTLE\n"
	.string "ROOMS are facilities for conducting\l"
	.string "MULTI BATTLES with a friend.\p"
	.string "You must link with your friend using\n"
	.string "Wireless Adapters or a Game Boy\l"
	.string "Advance Game Link cable.\p"
	.string "You must partner with your friend and\n"
	.string "enter two different kinds of POKéMON.\p"
	.string "There are many MULTI BATTLE ROOMS\n"
	.string "in the BATTLE TOWER for team battles.\p"
	.string "In a MULTI BATTLE ROOM, seven\n"
	.string "tag teams await you and your friend\l"
	.string "to make a tag-team challenge.\p"
	.string "If you manage to defeat all seven\n"
	.string "teams, you will earn Battle Points.\p"
	.string "Please beware that unlike other ROOMS,\n"
	.string "you may not interrupt your challenge.\p"
	.string "Once you start, you must battle seven\n"
	.string "MULTI BATTLES in a row nonstop.$"

BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2:
	.string "Now please select the two POKéMON\n"
	.string "that are to be entered.$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend:
	.string "You have chosen the same kind of\n"
	.string "POKéMON as your friend.\p"
	.string "Please choose two POKéMON different\n"
	.string "from your friend's, match the level\l"
	.string "you wish to enter, and register again.$"

BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers:
	.string "The LINK MULTI BATTLE ROOM challenge\n"
	.string "is only for two linked players.$"

BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon:
	.string "Your friend has also selected\n"
	.string "the POKéMON {STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons:
	.string "Your friend has also selected the\n"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"

BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode:
	.string "Your friend has chosen a different\n"
	.string "battle level.$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon:
	.string "Your friend has chosen a different\n"
	.string "battle level.\p"
	.string "Your friend has also selected\n"
	.string "the POKéMON {STR_VAR_1}.$"

@ Unused
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons:
	.string "Your friend has chosen a different\n"
	.string "battle level.\p"
	.string "Your friend has also selected the\n"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"

BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode:
	.string "Please choose two POKéMON different\n"
	.string "from your friend's, match the level\l"
	.string "you wish to enter, and register again.$"

BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn:
	.string "I will save the game before\n"
	.string "showing you in. Please wait.$"

BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden:
	.string "Congratulations!\n"
	.string "You have defeated the SALON MAIDEN\l"
	.string "and swept seven TRAINERS!$"

BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints:
	.string "In recognition of your infinite talent,\n"
	.string "we award you these Battle Point(s).$"

BattleFrontier_Text_ObtainedXBattlePoints:
	.string "{PLAYER} obtained {STR_VAR_1} Battle Point(s).$"

BattleFrontier_BattleTowerLobby_Text_RulesAreListed:
	.string "The BATTLE TOWER rules are listed.$"

BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading:
	.string "Which heading do you want to read?$"

BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules:
	.string "The BATTLE TOWER is a facility where\n"
	.string "four types of battles are waged--\l"
	.string "SINGLE BATTLE, DOUBLE BATTLE, MULTI\l"
	.string "BATTLE, and LINK MULTI BATTLE.\p"
	.string "For each of these types, there are\n"
	.string "separate BATTLE ROOMS.\p"
	.string "Please speak with a guide offering\n"
	.string "the type of battle you wish to enter.$"

BattleFrontier_BattleTowerLobby_Text_ExplainMonRules:
	.string "Depending on the BATTLE ROOM you are\n"
	.string "entering, you will be required to take\l"
	.string "a certain number of POKéMON.\p"
	.string "The SINGLE BATTLE mode requires\n"
	.string "three POKéMON.\p"
	.string "The DOUBLE BATTLE mode requires four,\n"
	.string "and the MULTI modes both require two.$"

BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules:
	.string "The BATTLE SALON is where you must\n"
	.string "find a partner to form a tag team for\l"
	.string "the MULTI BATTLE ROOM challenge.\p"
	.string "Choose the best partner for you by\n"
	.string "examining other TRAINERS'\l"
	.string "POKéMON and their moves.\p"
	.string "You may choose a new tag partner\n"
	.string "after winning seven straight matches.$"

BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules:
	.string "The LINK MULTI BATTLE Mode is for two\n"
	.string "friends to mount a challenge together.\p"
	.string "You and your friend must be linked with\n"
	.string "Wireless Adapters or a GBA Game Link\l"
	.string "cable.\p"
	.string "You must choose two POKéMON at\n"
	.string "the registration counter.\p"
	.string "These POKéMON must be different\n"
	.string "from those of your friend.\p"
	.string "You may not interrupt this challenge\n"
	.string "in the middle, unlike other modes.$"

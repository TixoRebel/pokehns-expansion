NewMap2_MapScripts::
	.byte 0

SSAquaRoomSSW_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE SSAquaRoomSSW_Text_FirebreatherLyleSeen, SSAquaRoomSSW_Text_FirebreatherLyleBeaten
	msgbox SSAquaRoomSSW_Text_FirebreatherLyleAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomSSW_EventScript_Ken::
	trainerbattle_single TRAINER_KEN SSAquaRoomSSW_Text_BugCatcherKenSeen, SSAquaRoomSSW_Text_BugCatcherKenBeaten
	msgbox SSAquaRoomSSW_Text_BugCatcherKenAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomSSW_Text_FirebreatherLyleSeen:
    .string "I'm going to KANTO to put\n"
    .string "on fire-breathing shows!$"

SSAquaRoomSSW_Text_FirebreatherLyleBeaten:
    .string "Fizzle… The flame's tiny…$"

SSAquaRoomSSW_Text_FirebreatherLyleAfterBattle:
    .string "I guess fire is weak on the sea.\n"
    .string "It doesn't matter? Really?$"

SSAquaRoomSSW_Text_BugCatcherKenSeen:
    .string "I'm visiting my grandma to\n"
    .string "catch me some bugs!$"

SSAquaRoomSSW_Text_BugCatcherKenBeaten:
    .string "Ooh, wow. You're tough!$"

SSAquaRoomSSW_Text_BugCatcherKenAfterBattle:
    .string "You can find lots of POKéMON\n"
    .string "in the trees of JOHTO!$"

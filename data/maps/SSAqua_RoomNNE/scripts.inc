SSAqua_RoomNNE_MapScripts::
	.byte 0

SSAquaRoomNNE_EventScript_Sean::
	trainerbattle_single TRAINER_SEAN SSAquaRoomNNE_Text_CooltrainermSeanSeen, SSAquaRoomNNE_Text_CooltrainermSeanBeaten
	msgbox SSAquaRoomNNE_Text_CooltrainermSeanAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomNNE_EventScript_Carol::
	trainerbattle_single TRAINER_CAROL SSAquaRoomNNE_Text_CooltrainerfCarolSeen, SSAquaRoomNNE_Text_CooltrainerfCarolBeaten
	msgbox SSAquaRoomNNE_Text_CooltrainerfCarolAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAquaRoomNNE_Text_CooltrainermSeanSeen:
    .string "I'm going to KANTO\n"
    .string "to test my skills.$"

SSAquaRoomNNE_Text_CooltrainermSeanBeaten:
    .string "I wanted to win!$"

SSAquaRoomNNE_Text_CooltrainermSeanAfterBattle:
    .string "Trainers from JOHTO\n"
    .string "can battle with KANTO\n"
    .string "GYM LEADERS.$"

SSAquaRoomNNE_Text_CooltrainerfCarolSeen:
    .string "I'm training to\n"
    .string "become the CHAMP!$"

SSAquaRoomNNE_Text_CooltrainerfCarolBeaten:
    .string "What's so differ-\n"
    .string "ent between us?$"

SSAquaRoomNNE_Text_CooltrainerfCarolAfterBattle:
    .string "I'm going to beat\n"
    .string "you someday!$"

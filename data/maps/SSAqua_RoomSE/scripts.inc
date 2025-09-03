SSAqua_RoomSE_MapScripts::
	.byte 0

SSAquaRoomSE_EventScript_Colin::
	trainerbattle_single TRAINER_COLIN SSAquaRoomSE_Text_PokefanmColinSeen, SSAquaRoomSE_Text_PokefanmColinBeaten
	msgbox SSAquaRoomSE_Text_PokefanmColinAfter, MSGBOX_AUTOCLOSE
	end

SSAquaRoomSE_EventScript_Meg::
	trainerbattle_double TRAINER_MEG_AND_PEG, SSAquaRoomSE_Text_TwinsMegandpeg1Seen, SSAquaRoomSE_Text_TwinsMegandpeg1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox SSAquaRoomSE_Text_TwinsMegandpeg1After, MSGBOX_AUTOCLOSE
	end

SSAquaRoomSE_EventScript_Peg::
	trainerbattle_double TRAINER_MEG_AND_PEG, SSAquaRoomSE_Text_TwinsMegandpeg2Seen, SSAquaRoomSE_Text_TwinsMegandpeg2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox SSAquaRoomSE_Text_TwinsMegandpeg2After, MSGBOX_AUTOCLOSE
	end

SSAquaRoomSE_Text_PokefanmColinSeen:
    .string "Hey, kid! Want to battle\n"
    .string "with me?$"

SSAquaRoomSE_Text_PokefanmColinBeaten:
    .string "You're strong!$"

SSAquaRoomSE_Text_PokefanmColinAfter:
    .string "You're traveling all alone?\n"
    .string "Isn't your mom worried?$"

SSAquaRoomSE_Text_TwinsMegandpeg1Seen:
    .string "You think I'm a baby?\n"
    .string "That's not fair!$"

SSAquaRoomSE_Text_TwinsMegandpeg1Beaten:
    .string "Oh! We lost!$"

SSAquaRoomSE_Text_TwinsMegandpeg1After:
    .string "Baby is a rude name to call\n"
    .string "us girls!$"

SSAquaRoomSE_Text_TwinsMegandpeg2Seen:
    .string "I'm not a baby!\n"
    .string "That's not nice to say to a lady!$"

SSAquaRoomSE_Text_TwinsMegandpeg2Beaten:
    .string "Oh! We lost!$"

SSAquaRoomSE_Text_TwinsMegandpeg2After:
    .string "Sometimes, kids are smarter\n"
    .string "than grown-ups!$"

CeladonCity_Apartments_2F_MapScripts::
	.byte 0

CeladonCity_Apartments_2F_EventScript_Computer::
	lock
	playse SE_PC_ON
	msgbox CeladonMansion2F_Text_Computer
	playse SE_PC_OFF
	waitse
	release
	end

CeladonCity_Apartments_2F_EventScript_Sign::
	msgbox CeladonMansion2F_Text_MeetingRoomSign, MSGBOX_SIGN
	end

CeladonMansion2F_Text_Computer:
	.string "{PLAYER} turned on the PC.\p"
	.string "…\p"
	.string "Someone was in the middle of\n"
	.string "composing an e-mail.\p"
	.string "…I hope you'll come visit KANTO.\p"
	.string "I think you'll be surprised at\n"
	.string "how much things have changed here.\p"
	.string "You'll also see many POKéMON that\n"
	.string "aren't native to JOHTO.\p"
	.string "To the PRODUCER\p"
	.string "…$"

CeladonMansion2F_Text_MeetingRoomSign:
	.string "GAME FREAK MEETING ROOM$"

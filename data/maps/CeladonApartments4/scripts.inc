CeladonApartments4_MapScripts::
	.byte 0

CeladonApartments4_EventScript_Fisher::
	msgbox CeladonMansionRoof_Text_Fisher, MSGBOX_NPC
	end

CeladonApartments4_EventScript_Sign::
	msgbox CeladonMansionRoof_Text_Graffiti, MSGBOX_NPC
	end

CeladonMansionRoof_Text_Fisher:
	.string "High places--I do love them so!\p"
	.string "I'd say the only thing that loves\n"
	.string "heights as much as me is smoke!$"

CeladonMansionRoof_Text_Graffiti:
	.string "There's graffiti on the wall…\p"
	.string "{PLAYER} added a moustache!$"

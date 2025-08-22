Saffron_Route6Gate_MapScripts::
	.byte 0

Saffron_Route6Gate_EventScript_Guard::
	goto_if_eq VAR_TEMP_0, 1, Saffron_Route6Gate_EventScript_Guard2
	msgbox Route6_Text_SaffronGuardWelcome, MSGBOX_NPC
	setvar VAR_TEMP_0, 1
	end
Saffron_Route6Gate_EventScript_Guard2::
	msgbox Route6_Text_SaffronGuardMagnetTrain, MSGBOX_NPC
	end

Route6_Text_SaffronGuardWelcome:
	.string "Welcome to SAFFRON CITY, home of\n"
	.string "the MAGNET TRAIN!\p"
	.string "…That's what I'd normally say,\n"
	.string "but the MAGNET TRAIN isn't\n"
	.string "running now.\p"
	.string "It's not getting any electricity\n"
	.string "because there's something wrong\l"
	.string "with the POWER PLANT.$"

Route6_Text_SaffronGuardMagnetTrain:
	.string "The MAGNET TRAIN is the most\n"
	.string "famous thing about SAFFRON.$"

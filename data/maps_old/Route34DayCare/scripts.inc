Route34DayCare_MapScripts::
	.byte 0


Route34DayCare_EventScript_Ditto::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DITTO, CRY_MODE_NORMAL
	msgbox Route34DayCare_Text_Ditto, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route34DayCare_Text_Ditto:
	.string "DITTO: Tto!$"

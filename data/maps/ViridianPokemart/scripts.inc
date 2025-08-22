ViridianPokemart_MapScripts::
	.byte 0

ViridianPokemart_EventScript_Lass::
	msgbox ViridianMart_Text_Lass, MSGBOX_NPC
	end

ViridianPokemart_EventScript_Cooltrainer::
	msgbox ViridianMart_Text_CooltrainerM, MSGBOX_NPC
	end

ViridianMart_Text_Lass:
	.string "The GYM LEADER here is totally cool.$"

ViridianMart_Text_CooltrainerM:
	.string "Have you been to CINNABAR?\p"
	.string "It's an island way south of here.$"


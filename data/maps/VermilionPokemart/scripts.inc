VermilionPokemart_MapScripts::
	.byte 0

VermilionPokemart_EventScript_BirdMan::
	msgbox VermilionMart_Text_SuperNerd, MSGBOX_NPC
	end

VermilionPokemart_EventScript_Woman::
	msgbox VermilionMart_Text_Beauty, MSGBOX_NPC
	end

VermilionMart_Text_SuperNerd:
	.string "TEAM ROCKET is no longer in\n"
	.string "KANTO.\p"
	.string "That alone makes me happy.$"

VermilionMart_Text_Beauty:
	.string "I'm thinking about going shopping\n"
	.string "in SAFFRON.$"

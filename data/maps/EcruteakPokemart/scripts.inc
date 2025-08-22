EcruteakPokemart_MapScripts::
	.byte 0

EcruteakPokemart_EventScript_Nerd::
	lock
	faceplayer
	msgbox EcruteakMart_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakPokemart_EventScript_Granny::
	lock
	faceplayer
	msgbox EcruteakMart_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakMart_Text_SuperNerd:
	.string "My EEVEE evolved into an ESPEON.\p"
	.string "But my friend's EEVEE turned into\n"
	.string "an UMBREON.\p"
	.string "I wonder why? We both were raising\n"
	.string "our EEVEE in the same way…$"

EcruteakMart_Text_Granny:
	.string "If you use REVIVE, a POKéMON that's\n"
	.string "fainted will wake right up.$"

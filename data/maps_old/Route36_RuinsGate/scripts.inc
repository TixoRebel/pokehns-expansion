Route36_RuinsGate_MapScripts::
	.byte 0

Route36_RuinsGate_EventScript_Officer::
	lock
	faceplayer
	msgbox Route36_RuinsGate_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Route36_RuinsGate_EventScript_PokefanM::
	lock
	faceplayer
	msgbox Route36_RuinsGate_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

Route36_RuinsGate_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route36_RuinsGate_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Route36_RuinsGate_Text_Officer:
	.string "RUINS OF ALPH\p"
	.string "A Look-and-Touch Tourist Site\p"
	.string "Try the sliding stone panels!$"

Route36_RuinsGate_Text_PokefanM:
	.string "You're studying the RUINS?\p"
	.string "I see a scientist in the making.$"

Route36_RuinsGate_Text_Youngster:
	.string "There are drawings on stone\n"
	.string "panels.\p"
	.string "I tried moving them.\n"
	.string "I wonder what they are.$"

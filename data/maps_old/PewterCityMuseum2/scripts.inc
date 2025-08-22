PewterCityMuseum2_MapScripts::
	.byte 0


PewterCityMuseum2_EventScript_Nerd::
	msgbox PewterCityMuseum2_Text_Nerd, MSGBOX_NPC
	end

PewterCityMuseum2_EventScript_Daughter::
	lock
	msgbox PewterCityMuseum2_Text_AskedDaddyToCatchPikachu, MSGBOX_DEFAULT
	release
	end

PewterCityMuseum2_EventScript_Dad::
	lock
	msgbox PewterCityMuseum2_Text_PikachuSoonIPromise, MSGBOX_DEFAULT
	release
	end

PewterCityMuseum2_EventScript_Meteor::
	msgbox PewterCityMuseum2_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end

PewterCityMuseum2_Text_Nerd:
	.string "They say that meteorites struck\n"
	.string "BIRTH ISLAND.\p"
	.string "We would love to display them here\n"
	.string "in our museum, but...\p"
	.string "These meteorites are said to emit\n"
	.string "strange energy and cannot be\l"
	.string "carried away...$"

PewterCityMuseum2_Text_AskedDaddyToCatchPikachu::
    .string "I want a PIKACHU!\n"
    .string "It's so cute!\p"
    .string "I asked my daddy to catch me one!$"

PewterCityMuseum2_Text_PikachuSoonIPromise::
    .string "Yeah, a PIKACHU soon, I promise!$"

PewterCityMuseum2_Text_SpaceShuttle::
    .string "Space Shuttle$"

PewterCityMuseum2_Text_MeteoriteThatFellOnMtMoon::
    .string "A meteorite that fell on MT. MOON.\n"
    .string "It is thought to be a MOON STONE.$"

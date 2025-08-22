.set LOCALID_NURSE, 1

SafariZoneGatePokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZoneGatePokecenter_OnTransition
	.byte 0

SafariZoneGatePokecenter_OnTransition::
	setrespawn HEAL_LOCATION_SAFARI_ZONE_GATE
	end

SafariZoneGatePokecenter_EventScript_NPC1::
	lock
	faceplayer
	msgbox SafariZoneGatePokecenter_Text_NPC1, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGatePokecenter_EventScript_NPC2::
	lock
	faceplayer
	msgbox SafariZoneGatePokecenter_Text_NPC2, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGatePokecenter_Text_Boy::
	lock
	faceplayer
	msgbox SafariZoneGatePokecenter_Text_SafariSong, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGatePokecenter_Text_NPC1:
	.string "Those who come to a POKéMON CENTER\n"
	.string "often take good care of their POKéMON.\p"
	.string "Wouldn't you agree?$"

SafariZoneGatePokecenter_Text_NPC2:
	.string "After a long walk in the mountains to\n"
	.string "find a POKéMON CENTER, when you're\l"
	.string "just about to fall flat...\p"
	.string "Then it feels like you are in paradise!$"

SafariZoneGatePokecenter_Text_SafariSong:
	.string "Safari, safari, it is so much fun.\n"
	.string "Safari, safari, so interesting, huh!\p"
	.string "So many POKéMON are waiting for us!\p"
	.string "...That's a song I made up.\n"
	.string "I sing it when I am in the SAFARI ZONE.$"
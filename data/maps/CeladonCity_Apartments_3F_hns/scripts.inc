CeladonCity_Apartments_3F_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_3F_EventScript_Sign::
	msgbox CeladonMansion3F_Text_DevRoomSign, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_Programmer::
	msgbox GameFreak_Text_Programmer, MSGBOX_NPC
	end

CeladonCity_Apartments_3F_EventScript_GraphicArtist::
	msgbox GameFreak_Text_GraphicArtist, MSGBOX_NPC
	end

CeladonCity_Apartments_3F_EventScript_Program::
	msgbox CeladonMansion3F_Text_GameProgram, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_Picture::
	msgbox CeladonMansion3F_Text_Drawing, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_CharacterDesigner::
	msgbox GameFreak_Text_CharacterDesigner, MSGBOX_NPC
	end

GameFreak_Text_GameDesigner:
	.string "Is that right?\p"
	.string "I'm the GAME DESIGNER!\p"
	.string "Filling up your POKéDEX is tough,\n"
	.string "but don't give up!$"

GameFreak_Text_GameDesignerCompletedPokedex:
	.string "Wow! Excellent! You completed\n"
	.string "your POKéDEX!\p"
	.string "Congratulations!$"

GameFreak_Text_GraphicArtist:
	.string "I'm the GRAPHIC ARTIST.\p"
	.string "I drew you!$"

GameFreak_Text_GraphicArtistPrintDiploma:
	.string "I'm the GRAPHIC ARTIST.\p"
	.string "Oh, you completed your POKéDEX?\p"
	.string "Want me to print out your\n"
	.string "DIPLOMA?$"

GameFreak_Text_GraphicArtistRefused:
	.string "Give me a shout if you want your\n"
	.string "DIPLOMA printed.$"

GameFreak_Text_GraphicArtistError:
	.string "Something's wrong. I'll have to\n"
	.string "cancel printing.$"

GameFreak_Text_Programmer:
	.string "Who, me? I'm the PROGRAMMER.\p"
	.string "Play the slot machines!$"

GameFreak_Text_CharacterDesigner:
	.string "Aren't the TWINS adorable?\p"
	.string "JASMINE's pretty too.\p"
	.string "Oh, I love them!$"

CeladonMansion3F_Text_DevRoomSign:
	.string "GAME FREAK DEVELOPMENT ROOM$"

CeladonMansion3F_Text_Drawing:
	.string "It's a detailed drawing of a\n"
	.string "pretty girl.$"

CeladonMansion3F_Text_GameProgram:
	.string "It's the game program. Messing\n"
	.string "with it could put a bug in the\n"
	.string "game!$"

CeladonMansion3F_Text_ReferenceMaterial:
	.string "It's crammed with reference\n"
	.string "materials. There's even a\n"
	.string "POKé DOLL.$"

LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
	lock
	faceplayer
	call_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
	call_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
	specialvar VAR_RESULT, HasAllHoennMons
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex::
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
	return

LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare::
	setflag FLAG_TEMP_2
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma::
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	special Special_ShowDiploma
	waitstate
	release
	end

LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex:
	.string "I'm the GAME DESIGNER.\p"
	.string "Oh, is that right?\n"
	.string "You're working on a POKéDEX?\p"
	.string "It's tough trying to complete it,\n"
	.string "but don't give up.\p"
	.string "If you do complete it, please come\n"
	.string "show me.$"

LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis:
	.string "Wow! That's awesome!\n"
	.string "Yep, it's totally awesome!\p"
	.string "This POKéDEX is completely filled!\n"
	.string "You really must love POKéMON!\p"
	.string "I'm so impressed!\p"
	.string "Let me give you something in\n"
	.string "recognition of your feat!$"

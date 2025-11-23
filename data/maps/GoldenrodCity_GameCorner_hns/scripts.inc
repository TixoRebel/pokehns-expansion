GoldenrodCity_GameCorner_hns_MapScripts::
	.byte 0

    @ Game Corner prices
	.set TM_DOUBLE_TEAM_COINS, 1500
	.set TM_PSYCHIC_COINS, 3500
	.set TM_FLAMETHROWER_COINS, 4000
	.set TM_THUNDERBOLT_COINS, 4000
	.set TM_ICE_BEAM_COINS, 4000
	.set DOLL_COINS, 1000
	.set DOLL2_COINS,  9000

	.set COINS_PRICE_50,  500
	.set COINS_PRICE_500, 5000
	.set COINS_PRICE_1000, 10000
	.set COINS_PRICE_2500, 25000
	.set COINS_PRICE_5000, 50000

GoldenrodCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons::
	lock
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NeedCoinCase
	msgbox GoldenrodCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon
	end

GoldenrodCity_GameCorner_EventScript_NeedCoinCase::
	msgbox GoldenrodCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon::
	showcoinsbox 1, 1
	message GoldenrodCity_GameCorner_Text_WhichPrize
	waitmessage
	multichoice 20, 0, MULTI_PRIZE_MONS, FALSE
	switch VAR_RESULT
	case 0, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Abra
	case 1, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Clefairy
	case 2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Munchlax
	case 3, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Dratini
	case 4, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Porygon
	case 5, GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	case 127, GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange::
	hidecoinsbox 0, 0
	closemessage
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Abra::
	setvar VAR_TEMP_1, SPECIES_ABRA
	setvar VAR_TEMP_2, 120
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Clefairy::
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
	setvar VAR_TEMP_2, 500
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Munchlax::
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
	setvar VAR_TEMP_2, 2800
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Dratini::
	setvar VAR_TEMP_1, SPECIES_DRATINI
	setvar VAR_TEMP_2, 5500
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Porygon::
	setvar VAR_TEMP_1, SPECIES_PORYGON
	setvar VAR_TEMP_2, 6500
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	msgbox GoldenrodCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	checkcoins VAR_RESULT
	goto_if_lt VAR_RESULT, VAR_TEMP_2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
	switch VAR_TEMP_1
	updatecoinsbox 1, 1
	playse SE_SHOP
	case SPECIES_ABRA,     GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveAbra
	case SPECIES_CLEFAIRY, GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveClefairy
	case SPECIES_DRATINI,  GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveDratini
	case SPECIES_MUNCHLAX,  GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveMunchlax
	case SPECIES_PORYGON,  GoldenrodCity_GameCorner_PrizeRoom_EventScript_GivePorygon
	case SPECIES_PINSIR,   GoldenrodCity_GameCorner_PrizeRoom_EventScript_GivePinsir
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveAbra::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveClefairy::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveDratini::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveMunchlax::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GivePorygon::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GivePinsir::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon::
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty
	goto_if_eq VAR_RESULT, 1, GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC
	goto_if_eq VAR_RESULT, 2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_PartyFull
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_PartyFull::
	msgbox GoldenrodCity_GameCorner_Text_NoRoomForPokemon
	hidecoinsbox 0, 0
	closemessage
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon::
	getpartysize
	subvar VAR_RESULT, 1
	copyvar VAR_0x8004, VAR_RESULT
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase::
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorNoCoinCase
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins::
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorNeedMoreCoins
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty::
	removecoins VAR_TEMP_2
	playse SE_SHOP
	updatecoinsbox 1, 1
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	playfanfare MUS_LEVEL_UP
	message GoldenrodCity_GameCorner_Text_PlayerObtainedTheMon
	waitmessage
	waitfanfare
	msgbox GoldenrodGamecorner_Text_GiveNicknameToThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC::
	removecoins VAR_TEMP_2
	playse SE_SHOP
	updatecoinsbox 1, 1
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	playfanfare MUS_LEVEL_UP
	message GoldenrodCity_GameCorner_Text_PlayerObtainedTheMon
	waitmessage
	waitfanfare
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_TransferredToPC::
	call Common_EventScript_TransferredToPC
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_PartyMon::
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	end
	
GoldenrodCity_GameCorner_PrizeRoom_EventScript_PcMon::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_GameCorner_EventScript_SendMon
	call Common_EventScript_NameReceivedBoxMon
	goto GoldenrodCity_GameCorner_EventScript_SendMon
	closemessage
	hidecoinsbox 0, 0
	release
	end

GoldenrodCity_GameCorner_EventScript_SendMon::
	call Common_EventScript_TransferredToPC
	closemessage
	hidecoinsbox 0, 0
	release
	end

GoldenrodCity_GameCorner_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_PokefanM1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_Hiker::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_MoveTutorInside, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_Woman::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_Gentleman::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_PokefanF::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_PokefanM2::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_PokefanM2, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_CooltrainerM::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_Pharmacist::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_Pharmacist, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_NoCoinCase::
	msgbox GoldenrodCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_CoinsClerk::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_ThisIsGoldenrodGameCorner, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NeedCoinCase
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), GoldenrodCity_GameCorner_EventScript_NoRoomFor50Coins
	checkmoney COINS_PRICE_50
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NotEnoughMoneyFor50
	message GoldenrodCity_GameCorner_Text_WereYouLookingForCoins
	waitmessage
	showmoneybox 0, 0
	showcoinsbox 1, 6
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50

GoldenrodCity_GameCorner_Text_ThisIsGoldenrodGameCorner:
	.string "This is the GAME CORNER.$"

GoldenrodCity_GameCorner_EventScript_NoRoomFor50Coins::
	msgbox MauvilleCity_GameCorner_Text_NoRoomFor50Coins, MSGBOX_DEFAULT
	clearflag FLAG_TEMP_2
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

GoldenrodCity_GameCorner_EventScript_NotEnoughMoneyFor50::
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoneyFor50, MSGBOX_DEFAULT
	clearflag FLAG_TEMP_2
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

GoldenrodCity_GameCorner_EventScript_PrizeCornerTMs::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_GameCorner_EventScript_ChooseTMPrizeMessage
	release
	end

GoldenrodCity_GameCorner_EventScript_ChooseTMPrizeMessage::
	message GoldenrodCity_GameCorner_Text_WhichPrize
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto GoldenrodCity_GameCorner_EventScript_ChooseTMPrize

GoldenrodCity_GameCorner_EventScript_ReturnToChooseTMPrize::
	message GoldenrodCity_GameCorner_Text_WhichPrize
	waitmessage
	goto GoldenrodCity_GameCorner_EventScript_ChooseTMPrize

GoldenrodCity_GameCorner_EventScript_ChooseTMPrize::
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
	switch VAR_RESULT
	case 0, GoldenrodCity_GameCorner_EventScript_TMDoubleTeam
	case 1, GoldenrodCity_GameCorner_EventScript_TMPsychic
	case 2, GoldenrodCity_GameCorner_EventScript_TMFlamethrower
	case 3, GoldenrodCity_GameCorner_EventScript_TMThunderbolt
	case 4, GoldenrodCity_GameCorner_EventScript_TMIceBeam
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
	end

GoldenrodCity_GameCorner_EventScript_TMDoubleTeam::
	setvar VAR_TEMP_1, 1
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
	goto GoldenrodCity_GameCorner_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_EventScript_TMPsychic::
	setvar VAR_TEMP_1, 2
	bufferitemname STR_VAR_1, ITEM_TM_PSYCHIC
	setvar VAR_0x8004, ITEM_TM_PSYCHIC
	goto GoldenrodCity_GameCorner_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_EventScript_TMFlamethrower::
	setvar VAR_TEMP_1, 3
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
	goto GoldenrodCity_GameCorner_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_EventScript_TMThunderbolt::
	setvar VAR_TEMP_1, 4
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
	goto GoldenrodCity_GameCorner_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_EventScript_TMIceBeam::
	setvar VAR_TEMP_1, 5
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
	goto GoldenrodCity_GameCorner_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_EventScript_ConfirmTMPrize::
	special BufferTMHMMoveName
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
	goto_if_unset FLAG_FINITE_TMS, MauvilleCity_GameCorner_EventScript_ConfirmTMPrizeInfinite
	switch VAR_TEMP_1
	case 1, MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
	case 2, MauvilleCity_GameCorner_EventScript_BuyTMPsychic
	case 3, MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
	case 4, MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
	case 5, MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
	end

GoldenrodCity_GameCorner_Text_WereYouLookingForCoins:
	.string "Were you looking for COINS?\p"
	.string "It's ¥500 for 50 COINS.\n"
	.string "Would you like some?$"

GoldenrodCity_GameCorner_EventScript_SlotMachine1::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine2::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 2
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine3::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 3
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine4::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 4
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine5::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 5
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine6::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 6
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine7::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 7
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine8::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 8
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine9::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 9
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine10::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 10
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_SlotMachine11::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 11
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

GoldenrodCity_GameCorner_PrizeRoom_Text_YouWantPrize:
	.string "{STR_VAR_1} is what you want?$"

GoldenrodCity_GameCorner_Text_PlayerObtainedTheMon:
	.string "{PLAYER} got {STR_VAR_1}!$"

GoldenrodGamecorner_Text_GiveNicknameToThisMon:
	.string "Nickname {STR_VAR_1}?$"

GoldenrodCity_GameCorner_Text_PrizeVendorIntro:
    .string "Welcome!\p"
    .string "We exchange your game coins for\n"
    .string "fabulous prizes!$"

GoldenrodCity_GameCorner_Text_PrizeVendorWhichPrize:
    .string "Which prize would you like?$"

GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo:
    .string "Here you go!$"

GoldenrodCity_GameCorner_Text_PrizeVendorNeedMoreCoins:
    .string "Sorry! You need more coins.$"

GoldenrodCity_GameCorner_Text_PrizeVendorNoMoreRoom:
    .string "Sorry. You can't carry any more.$"

GoldenrodCity_GameCorner_Text_PrizeVendorQuit:
    .string "OK. Please save your coins and come\n"
    .string "again!$"

GoldenrodCity_GameCorner_Text_PrizeVendorNoCoinCase:
    .string "Oh? You don't have a COIN CASE.$"

GoldenrodCity_GameCorner_Text_Pharmacist:
    .string "I always play this slot machine.\n"
    .string "It pays out more than others,\l"
    .string "I think.$"

GoldenrodCity_GameCorner_Text_Woman:
    .string "I can't stop winning!$"

GoldenrodCity_GameCorner_Text_PokefanM1:
    .string "I just love this new slot machine.\p"
    .string "It's more of a challenge than the\n"
    .string "ones in CELADON.$"

GoldenrodCity_GameCorner_Text_CooltrainerM:
    .string "Life is a gamble. I'm going to pull\n"
    .string "till I drop!$"

GoldenrodCity_GameCorner_Text_PokefanF:
    .string "Roulette…\p"
    .string "I prefer it over the slots because\n"
    .string "it's easier to figure the odds.\p"
    .string "But the payout is much lower.$"

GoldenrodCity_GameCorner_Text_CooltrainerF:
    .string "I won't quit until I win!$"

GoldenrodCity_GameCorner_Text_Gentleman:
    .string "I taught BLIZZARD to my POKéMON.\p"
    .string "It was hard to get enough coins for\n"
    .string "it, but it was worth it.$"

GoldenrodCity_GameCorner_Text_PokefanM2:
    .string "I couldn't win at the slots, and I\n"
    .string "blew it on roulette.\p"
    .string "I got so furious, I tossed out my\n"
    .string "COIN CASE in the UNDERGROUND.$"

GoldenrodCity_GameCorner_Text_MoveTutorInside:
    .string "Wahahah! The coins keep rolling in!$"

GoldenrodCity_GameCorner_Text_LeftTheirDrink:
    .string "Someone left their drink.\p"
    .string "It smells sweet.$"

GoldenrodCity_GameCorner_Text_ExchangeCoinsForPrizes:
	.string "Welcome.\p"
	.string "You can exchange your COINS for\n"
	.string "prizes here.$"

GoldenrodCity_GameCorner_Text_NeedCoinCaseForCoins:
	.string "Okay, you wanted some COINS for\n"
	.string "the games?\p"
	.string "But you don't have a COIN CASE for\n"
	.string "stowing the COINS.$"

GoldenrodCity_GameCorner_Text_NoRoomForPokemon:
	.string "Hm? You don't seem to have any room\n"
	.string "for this POKéMON.$"

GoldenrodCity_GameCorner_Text_WhichPrize:
	.string "Which prize would you like?$"

GoldenrodCity_GameCorner_Text_CantPlayWithNoCoinCase:
	.string "You can't play if you don't have\n"
	.string "a COIN CASE.$"

Roulette_EventScript_Table1::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 0
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Table2::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Play::
	special PlayRoulette
	waitstate
	end

Roulette_Text_PlayMinimumWagerIsX::
	.string "The minimum wager at this table\n"
	.string "is {STR_VAR_1}. Do you want to play?$"

Roulette_Text_NotEnoughCoins::
	.string "You don't have enough COINS.$"

Roulette_Text_SpecialRateTable::
	.string "Special rate table right now!$"

Roulette_Text_ControlsInstruction::
	.string "Place your wager with the + Control\n"
	.string "Pad, then press the A Button.$"

Roulette_Text_ItsAHit::
	.string "It's a hit!$"

Roulette_Text_Jackpot::
	.string "Jackpot!$"

Roulette_Text_NothingDoing::
	.string "Nothing doing!$"

Roulette_Text_YouveWonXCoins::
	.string "You've won {STR_VAR_1} COINS!$"

Roulette_Text_NoCoinsLeft::
	.string "No COINS left…$"

Roulette_Text_KeepPlaying::
	.string "Keep playing?$"

Roulette_Text_BoardWillBeCleared::
	.string "The ROULETTE board will be cleared.$"

Roulette_Text_CoinCaseIsFull::
	.string "Your COIN CASE is full!\n"
	.string "Coins can be exchanged for prizes.$"

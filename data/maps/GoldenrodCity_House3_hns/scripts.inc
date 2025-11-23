GoldenrodCity_House3_hns_MapScripts::
	.byte 0

GoldenrodCity_House3_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_House3_EventScript_Twin::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_Twin, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodHappinessRater_Text_PokefanM:
    .string "I keep losing in battles, and my\n"
    .string "POKéMON end up fainting…\p"
    .string "Maybe that's why my POKéMON don't\n"
    .string "like me much…$"

GoldenrodHappinessRater_Text_Twin:
    .string "When I use an item on my POKéMON,\n"
    .string "it acts really glad!$"

GoldenrodHappinessRater_EventScript_FriendshipRater::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, GoldenrodHappinessRater_EventScript_DetestsYou
	case FRIENDSHIP_1_TO_49, GoldenrodHappinessRater_EventScript_VeryWary
	case FRIENDSHIP_50_TO_99, GoldenrodHappinessRater_EventScript_NotUsedToYou
	case FRIENDSHIP_100_TO_149, GoldenrodHappinessRater_EventScript_GettingUsedToYou
	case FRIENDSHIP_150_TO_199, GoldenrodHappinessRater_EventScript_LikesYouQuiteALot
	case FRIENDSHIP_200_TO_254, GoldenrodHappinessRater_EventScript_VeryHappy
	case FRIENDSHIP_MAX, GoldenrodHappinessRater_EventScript_AdoresYou
	release
	end

GoldenrodHappinessRater_EventScript_DetestsYou::
	msgbox GoldenrodHappinessRater_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_VeryWary::
	msgbox GoldenrodHappinessRater_Text_VeryWary, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_NotUsedToYou::
	msgbox GoldenrodHappinessRater_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_GettingUsedToYou::
	msgbox GoldenrodHappinessRater_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_LikesYouQuiteALot::
	msgbox GoldenrodHappinessRater_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_VeryHappy::
	msgbox GoldenrodHappinessRater_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_AdoresYou::
	msgbox GoldenrodHappinessRater_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox GoldenrodHappinessRater_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodHappinessRater_Text_SeeHowMuchPokemonLikesYou:
	.string "Let me see your POKéMON.\n"
	.string "I'll check to see how much it likes you.\p"
	.string "Oh.\n"
	.string "Your POKéMON…$"

GoldenrodHappinessRater_Text_AdoresYou:
	.string "It adores you.\n"
	.string "It can't possibly love you any more.\l"
	.string "I even feel happy seeing it.$"

GoldenrodHappinessRater_Text_VeryHappy:
	.string "It seems to be very happy.\n"
	.string "It obviously likes you a whole lot.$"

GoldenrodHappinessRater_Text_LikesYouQuiteALot:
	.string "It likes you quite a lot.\n"
	.string "It seems to want to be babied a little.$"

GoldenrodHappinessRater_Text_GettingUsedToYou:
	.string "It's getting used to you.\n"
	.string "It seems to believe in you.$"

GoldenrodHappinessRater_Text_NotUsedToYou:
	.string "It's not very used to you yet.\n"
	.string "It neither loves nor hates you.$"

GoldenrodHappinessRater_Text_VeryWary:
	.string "It's very wary.\n"
	.string "It has scary viciousness in its eyes.\l"
	.string "It doesn't like you much at all.$"

GoldenrodHappinessRater_Text_DetestsYou:
	.string "This is a little hard for me to say…\p"
	.string "Your POKéMON simply detests you.\n"
	.string "Doesn't that make you uncomfortable?$"

GoldenrodHappinessRater_Text_Pikachu:
	.string "PIKACHU: Pika pika!$"


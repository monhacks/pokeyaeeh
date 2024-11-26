
.set LOCALID_NPC, 1

VerdanturfTown_FriendshipRatersHouse_MapScripts::
	.byte 0

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
	lock
	faceplayer
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou
	case FRIENDSHIP_1_TO_49, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary
	case FRIENDSHIP_50_TO_99, VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou
	case FRIENDSHIP_100_TO_149, VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou
	case FRIENDSHIP_150_TO_199, VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
	case FRIENDSHIP_200_TO_254, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy
	case FRIENDSHIP_MAX, VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou::
	goto_if_unset FLAG_RECEIVED_LUCARIONITE, VerdanturfTown_FriendshipRatersHouse_EventScript_LeadMonLucario
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_LeadMonLucario::
	special GetLeadMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_LUCARIO, VerdanturfTown_FriendshipRatersHouse_EventScript_GiveLucarionite
	return

VerdanturfTown_FriendshipRatersHouse_EventScript_GiveLucarionite::
	delay 4
	playse SE_PIN
	applymovement LOCALID_NPC, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_NPC, Common_Movement_Delay48
	waitmovement 0
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_ItsLucario, MSGBOX_AUTOCLOSE
	giveitem ITEM_LUCARIONITE
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_ExplainLucarionite, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_LUCARIONITE
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou:
	.string "Let me see your Pokémon.\n"
	.string "I'll check to see how much it likes you.\p"
	.string "Oh.\n"
	.string "Your Pokémon…$"

VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou:
	.string "It adores you.\n"
	.string "It can't possibly love you any more.\l"
	.string "I even feel happy seeing it.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy:
	.string "It seems to be very happy.\n"
	.string "It obviously likes you a whole lot.$"

VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot:
	.string "It likes you quite a lot.\n"
	.string "It seems to want to be babied a little.$"

VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou:
	.string "It's getting used to you.\n"
	.string "It seems to believe in you.$"

VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou:
	.string "It's not very used to you yet.\n"
	.string "It neither loves nor hates you.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryWary:
	.string "It's very wary.\n"
	.string "It has scary viciousness in its eyes.\l"
	.string "It doesn't like you much at all.$"

VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou:
	.string "This is a little hard for me to say…\p"
	.string "Your Pokémon simply detests you.\n"
	.string "Doesn't that make you uncomfortable?$"

VerdanturfTown_FriendshipRatersHouse_Text_Pikachu:
	.string "Pikachu: Pika pika!$"

VerdanturfTown_FriendshipRatersHouse_Text_ItsLucario:
	.string "It's…\n"
	.string "It's a Lucario…\p"
	.string "You both seem to have bonded really\n"
	.string "well!\p"
	.string "Here's a gift from me to your Lucario!$"

VerdanturfTown_FriendshipRatersHouse_Text_ExplainLucarionite:
	.string "That's a Lucarionite…\p"
	.string "Only the Trainers who have bonded with\n"
	.string "their Lucario be worthy of wielding\l"
	.string "one.\p"
	.string "You're worthy of it!$"

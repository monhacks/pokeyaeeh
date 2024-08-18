# 1 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
.set LOCALID_NPC, 1
# 3 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 4 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_MapScripts::
# 5 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.byte 0
# 6 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 7 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 9 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
# 11 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 12 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_NONE, VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou
# 14 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_1_TO_49, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary
# 15 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_50_TO_99, VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou
# 16 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_100_TO_149, VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou
# 17 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_150_TO_199, VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
# 18 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_200_TO_254, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy
# 19 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_MAX, VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou
# 20 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 21 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 22 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 23 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou::
# 24 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
# 25 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 26 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 28 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary::
# 29 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
# 30 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 31 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 33 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou::
# 34 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
# 35 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 36 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 37 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 38 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou::
# 39 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
# 40 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 41 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 42 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 43 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
# 44 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
# 45 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 46 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 47 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 48 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy::
# 49 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
# 50 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 51 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 52 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 53 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou::
# 54 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LUCARIONITE, VerdanturfTown_FriendshipRatersHouse_EventScript_LeadMonLucario
# 55 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
# 56 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 57 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 58 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 59 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_LeadMonLucario::
# 60 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	special GetLeadMonSpecies
# 61 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_LUCARIO, VerdanturfTown_FriendshipRatersHouse_EventScript_GiveLucarionite
# 62 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	return
# 63 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 64 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_GiveLucarionite::
# 65 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	delay 4
# 66 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	playse SE_PIN
# 67 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	applymovement LOCALID_NPC, Common_Movement_ExclamationMark
# 68 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmovement 0
# 69 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	applymovement LOCALID_NPC, Common_Movement_Delay48
# 70 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmovement 0
# 71 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_ItsLucario, MSGBOX_AUTOCLOSE
# 72 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	giveitem ITEM_LUCARIONITE
# 73 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_ExplainLucarionite, MSGBOX_DEFAULT
# 74 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	setflag FLAG_RECEIVED_LUCARIONITE
# 75 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 76 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 77 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 78 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
# 79 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 80 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 81 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitse
# 82 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 83 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
# 84 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmoncry
# 85 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 86 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 87 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 88 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou:
# 89 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Let me see your Pokémon.\n"
# 90 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "I'll check to see how much it likes you.\p"
# 91 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Oh.\n"
# 92 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Your Pokémon…$"
# 93 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 94 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou:
# 95 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It adores you.\n"
# 96 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It can't possibly love you any more.\l"
# 97 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "I even feel happy seeing it.$"
# 98 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 99 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy:
# 100 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to be very happy.\n"
# 101 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It obviously likes you a whole lot.$"
# 102 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 103 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot:
# 104 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It likes you quite a lot.\n"
# 105 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to want to be babied a little.$"
# 106 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 107 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou:
# 108 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's getting used to you.\n"
# 109 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to believe in you.$"
# 110 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 111 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou:
# 112 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's not very used to you yet.\n"
# 113 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It neither loves nor hates you.$"
# 114 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 115 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_VeryWary:
# 116 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's very wary.\n"
# 117 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It has scary viciousness in its eyes.\l"
# 118 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It doesn't like you much at all.$"
# 119 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 120 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou:
# 121 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "This is a little hard for me to say…\p"
# 122 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Your Pokémon simply detests you.\n"
# 123 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Doesn't that make you uncomfortable?$"
# 124 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 125 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_Pikachu:
# 126 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Pikachu: Pika pika!$"
# 127 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 128 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_ItsLucario:
# 129 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's…\n"
# 130 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's a Lucario…\p"
# 131 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "You both seem to have bonded really\n"
# 132 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "well!\p"
# 133 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Here's a gift from me to your Lucario!$"
# 134 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 135 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_Text_ExplainLucarionite:
# 136 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "That's a Lucarionite…\p"
# 137 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Only the Trainers who have bonded with\n"
# 138 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "their Lucario be worthy of wielding\l"
# 139 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "one.\p"
# 140 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "You're worthy of it!$"

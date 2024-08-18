# 1 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_MapScripts::
# 3 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 14 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 21 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 26 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 32 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 33 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda::
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
# 39 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
# 40 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 41 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 47 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 50 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 64 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 65 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 66 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 69 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 70 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 71 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 72 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 75 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 77 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 78 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally: Oh hey, {PLAYER}!\n"
# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "This is my cousin Wanda's house.\p"
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Just came to catch some supplies before\n"
# 83 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "leaving to Lavaridge, now.$"
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallysNextDoor:
# 86 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Uncle: Oh! {PLAYER}{KUN}!\n"
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally's next door.\p"
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "But, boy, there's something I have to\n"
# 89 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "tell you.\p"
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "This natural environment is doing\n"
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "wonders for Wally's health.\p"
# 92 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Maybe it's not just the environment.\n"
# 93 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It could be Pokémon that are giving\l"
# 94 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "the boy hope.$"
# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallySlippedOff:
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally's gone away…\n"
# 98 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He slipped off on his own…$"
# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 100 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
# 101 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Uncle: Is that right?\n"
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally's gone away that far all by\l"
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "himself…\p"
# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Well, I have to give him credit--he is\n"
# 105 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "my little brother's son.$"
# 106 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 107 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_MeetWanda:
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wanda: You are?\n"
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Oh, right, I get it!\p"
# 110 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "You're the {PLAYER} who Wally was\n"
# 111 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "telling me about.\p"
# 112 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm Wally's cousin.\n"
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Glad to meet you!\p"
# 114 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally's the best Trainer I know,\n"
# 115 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "you must be very strong, then.$"
# 116 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
# 118 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wanda: I'm glad Wally made a friend like\n"
# 119 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "you, {PLAYER}.\p"
# 120 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He doesn't often make any friends,\n"
# 121 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "so you must be special to him.$"
# 122 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 123 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Thanks to you, I can see my girlfriend\n"
# 125 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "every day.\l"
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Happy? You bet I am!$"
# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 128 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
# 129 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's boyfriend is a very\n"
# 130 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "driven and passionate sort of person.\p"
# 131 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He's been digging a tunnel nonstop\n"
# 132 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "just so he can see my daughter.\p"
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's a little concerned,\n"
# 134 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "so she goes out to the tunnel a lot.$"
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 136 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
# 137 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's amazing. My daughter's boyfriend\n"
# 138 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "was digging the tunnel by hand!\p"
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's so incredible!$"
# 140 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 141 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
# 142 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "If anything were to happen to Wally,\n"
# 143 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I would never be able to look his\l"
# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "parents in Petalburg in the eye…$"
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 146 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
# 147 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally was in Ever Grande?\p"
# 148 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "His parents in Petalburg would be\n"
# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "astonished to hear that!$"

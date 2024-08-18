# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_WallyIsComingHomeSoon
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_WonderHowWallyIsDoing
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YoureAYoungTrainer, MSGBOX_DEFAULT
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallyIsComingHomeSoon::
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WonderHowWallyIsDoing::
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YoureAYoungTrainer:
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You're…\n"
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "A young Trainer, just like our son!\p"
# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "… … … … … …\p"
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh, {PLAYER}!\n"
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's already left, our Wally.\p"
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder where he could have\n"
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gotten by now?$"
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our Wally is doing?$"
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally's coming home soon.\n"
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm looking forward to that.$"
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met Wally in\n"
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ever Grande City?\p"
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I hope you both had an awesome battle!$"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally was really happy when he told\n"
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "us that he caught a Pokémon.\p"
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It's been ages since I've seen him\n"
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "smile like that.$"
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "from my husband…\p"
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our Wally left Verdanturf Town\n"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "without telling anyone.\p"
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You know, Wally is frail, but\n"
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "he's surprisingly strong-willed.\p"
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure that he'll come back safe\n"
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "and sound one day!$"

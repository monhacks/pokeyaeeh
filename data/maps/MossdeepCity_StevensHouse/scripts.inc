# 1 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_BELDUM_BALL, 2
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts::
# 6 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 7 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_OnFrame
# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.byte 0
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad:
# 12 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_EventScript_HideStevensNote
# 13 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 18 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 19 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition:
# 20 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_eq VAR_STEVENS_HOUSE_STATE, 2, MossdeepCity_StevensHouse_EventScript_SetStevenPos
# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos::
# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 6, 5
# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnFrame:
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.2byte 0
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_LeaveBeldum
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_LeaveBeldum::
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum::
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemon SPECIES_BELDUM, 50
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_SendBeldumParty
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_SendBeldumPC
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumParty::
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumPC::
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC::
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 70 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_BELDUM_BALL
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 79 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 80 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 81 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldum::
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 89 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 90 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
# 91 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Steven::
# 94 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
# 95 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 96 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 97 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Letter::
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 102 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused, leftover from RS
# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 107 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 108 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 109 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_YouveEarnedHMDive:
# 110 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Mystic: {PLAYER}{KUN}…\p"
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "As you can see, there's not much here,\n"
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "but this is my home.\p"
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Thank you for all that you've done.\p"
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "This is my token of appreciation.\n"
# 115 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's the Hidden Machine Dive.\p"
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "No need to be shy--you've earned\n"
# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "this HM.$"
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 119 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ExplainDive:
# 120 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Mystic: While you're using Surf, you\n"
# 121 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "should notice dark patches of water.\p"
# 122 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Use Dive if you come to deep water\n"
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "like it. You'll drop to the seafloor.\p"
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "When you want to come back up, use\n"
# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Dive again.\p"
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "In some places, it won't be possible\n"
# 127 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "for you to surface, though.$"
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis:
# 130 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Mystic: Apparently, there's an\n"
# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "underwater cavern between\l"
# 132 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Mossdeep and Sootopolis.\p"
# 133 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "You know, the one that Capt. Stern\n"
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "found in his submarine.$"
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 136 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum:
# 137 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} checked the Poké Ball.\p"
# 138 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It contained the Pokémon\n"
# 139 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Beldum.\p"
# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Take the Poké Ball?$"
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedBeldum:
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} obtained a Beldum.$"
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon:
# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another Pokémon.$"
# 147 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 148 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas:
# 149 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} left the Poké Ball where\n"
# 150 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "it was.$"
# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LetterFromSteven:
# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a letter.\p"
# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "… … … … … …\p"
# 155 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "To {PLAYER}{KUN}…\p"
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I've decided to do a little soul-\n"
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "searching and train on the road.\p"
# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I don't plan to return home for some\n"
# 159 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "time.\p"
# 160 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I have a favor to ask of you.\p"
# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I want you to take the Poké Ball on\n"
# 162 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "the desk.\p"
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Inside it is a Beldum, my favorite\n"
# 164 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Pokémon.\p"
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I'm counting on you.\p"
# 166 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "May our paths cross someday.\p"
# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Mystic$"
# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks:
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 171 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "stones assembled by Mystic.$"


.set LOCALID_STEVEN, 1
.set LOCALID_BELDUM_BALL, 2

MossdeepCity_StevensHouse_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_OnFrame
	.byte 0

MossdeepCity_StevensHouse_OnLoad:
	call_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_EventScript_HideStevensNote
	end

MossdeepCity_StevensHouse_EventScript_HideStevensNote::
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
	return

MossdeepCity_StevensHouse_OnTransition:
	call_if_eq VAR_STEVENS_HOUSE_STATE, 2, MossdeepCity_StevensHouse_EventScript_SetStevenPos
	end

MossdeepCity_StevensHouse_EventScript_SetStevenPos::
	setobjectxyperm LOCALID_STEVEN, 6, 5
	setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_UP
	return

MossdeepCity_StevensHouse_OnFrame:
	.2byte 0

MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
	lockall
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_LeaveBeldum
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum
	end

MossdeepCity_StevensHouse_EventScript_LeaveBeldum::
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_StevensHouse_EventScript_GiveBeldum::
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
	givemon SPECIES_BELDUM, 50
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_SendBeldumParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_SendBeldumPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

MossdeepCity_StevensHouse_EventScript_SendBeldumParty::
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
	end

MossdeepCity_StevensHouse_EventScript_SendBeldumPC::
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
	end

MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
	end

MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
	removeobject LOCALID_BELDUM_BALL
	playfanfare MUS_OBTAIN_ITEM
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
	return

MossdeepCity_StevensHouse_EventScript_ReceivedBeldum::
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
	setflag FLAG_RECEIVED_BELDUM
	releaseall
	end

MossdeepCity_StevensHouse_EventScript_RockDisplay::
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
	end

MossdeepCity_StevensHouse_EventScript_Steven::
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
	end

MossdeepCity_StevensHouse_EventScript_Letter::
	lockall
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
	releaseall
	end

@ Unused, leftover from RS
MossdeepCity_StevensHouse_EventScript_DiveItemBall::
	finditem ITEM_HM_DIVE
	setflag FLAG_RECEIVED_HM_DIVE
	end

MossdeepCity_StevensHouse_Text_YouveEarnedHMDive:
	.string "Mystic: {PLAYER}{KUN}…\p"
	.string "As you can see, there's not much here,\n"
	.string "but this is my home.\p"
	.string "Thank you for all that you've done.\p"
	.string "This is my token of appreciation.\n"
	.string "It's the Hidden Machine Dive.\p"
	.string "No need to be shy--you've earned\n"
	.string "this HM.$"

MossdeepCity_StevensHouse_Text_ExplainDive:
	.string "Mystic: While you're using Surf, you\n"
	.string "should notice dark patches of water.\p"
	.string "Use Dive if you come to deep water\n"
	.string "like it. You'll drop to the seafloor.\p"
	.string "When you want to come back up, use\n"
	.string "Dive again.\p"
	.string "In some places, it won't be possible\n"
	.string "for you to surface, though.$"

MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis:
	.string "Mystic: Apparently, there's an\n"
	.string "underwater cavern between\l"
	.string "Mossdeep and Sootopolis.\p"
	.string "You know, the one that Capt. Stern\n"
	.string "found in his submarine.$"

MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum:
	.string "{PLAYER} checked the Poké Ball.\p"
	.string "It contained the Pokémon\n"
	.string "Beldum.\p"
	.string "Take the Poké Ball?$"

MossdeepCity_StevensHouse_Text_ObtainedBeldum:
	.string "{PLAYER} obtained a Beldum.$"

MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon:
	.string "There is no space for another Pokémon.$"

MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas:
	.string "{PLAYER} left the Poké Ball where\n"
	.string "it was.$"

MossdeepCity_StevensHouse_Text_LetterFromSteven:
	.string "It's a letter.\p"
	.string "… … … … … …\p"
	.string "To {PLAYER}{KUN}…\p"
	.string "I've decided to do a little soul-\n"
	.string "searching and train on the road.\p"
	.string "I don't plan to return home for some\n"
	.string "time.\p"
	.string "I have a favor to ask of you.\p"
	.string "I want you to take the Poké Ball on\n"
	.string "the desk.\p"
	.string "Inside it is a Beldum, my favorite\n"
	.string "Pokémon.\p"
	.string "I'm counting on you.\p"
	.string "May our paths cross someday.\p"
	.string "Mystic$"

MossdeepCity_StevensHouse_Text_CollectionOfRareRocks:
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by Mystic.$"

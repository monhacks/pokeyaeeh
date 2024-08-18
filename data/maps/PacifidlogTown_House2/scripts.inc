# 1 "data/maps/PacifidlogTown_House2/scripts.pory"

# 2 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_MapScripts::
# 3 "data/maps/PacifidlogTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"

# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
# 6 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	dotimebasedevents
# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag
# 10 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_ComeBackInXDays
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_MonAssessment
# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FirstMonAssessment
# 13 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
# 14 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, PacifidlogTown_House2_EventScript_GiveReturn
# 16 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_50_TO_99, PacifidlogTown_House2_EventScript_PutInEffort
# 18 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveFrustration
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown_House2/scripts.pory"

# 21 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag::
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, Common_EventScript_NopReturn
# 23 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_eq VAR_RESULT, 0, PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM
# 25 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"

# 27 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_MonAssessment::
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 29 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"

# 31 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FirstMonAssessment::
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
# 33 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 35 "data/maps/PacifidlogTown_House2/scripts.pory"

# 36 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM::
# 37 "data/maps/PacifidlogTown_House2/scripts.pory"
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 38 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 39 "data/maps/PacifidlogTown_House2/scripts.pory"

# 40 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveReturn::
# 41 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
# 42 "data/maps/PacifidlogTown_House2/scripts.pory"
	randomelement ITEM_CHOICE_BAND, ITEM_CHOICE_SPECS, ITEM_CHOICE_SCARF
# 43 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem VAR_RESULT, 1
# 44 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 45 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 46 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 49 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 50 "data/maps/PacifidlogTown_House2/scripts.pory"

# 51 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_PutInEffort::
# 52 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
# 53 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 54 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 55 "data/maps/PacifidlogTown_House2/scripts.pory"

# 56 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveFrustration::
# 57 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
# 58 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 60 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 61 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 62 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 63 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 64 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 65 "data/maps/PacifidlogTown_House2/scripts.pory"

# 66 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_ComeBackInXDays::
# 67 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 68 "data/maps/PacifidlogTown_House2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 69 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_GetGoodTMInXDays, MSGBOX_DEFAULT
# 70 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 72 "data/maps/PacifidlogTown_House2/scripts.pory"

# 73 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_HappyAzurill::
# 74 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 75 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 76 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 78 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
# 79 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 80 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
# 81 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 82 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 83 "data/maps/PacifidlogTown_House2/scripts.pory"

# 84 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UnhappyAzurill::
# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 86 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 87 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 88 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 89 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
# 90 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 91 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
# 92 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 94 "data/maps/PacifidlogTown_House2/scripts.pory"

# 95 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation:
# 96 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Er-hem!\p"
# 97 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I am the Pokémon Fan Club's most\n"
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "important person, the Chairman's\l"
# 99 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "younger brother.\p"
# 100 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I'm here enjoying my vacation with\n"
# 101 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Pokémon, yes, indeed.$"
# 102 "data/maps/PacifidlogTown_House2/scripts.pory"

# 103 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AhYourPokemon:
# 104 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Ah!\n"
# 105 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Your Pokémon…$"
# 106 "data/maps/PacifidlogTown_House2/scripts.pory"

# 107 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AdoringPokemonTakeThis:
# 108 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It clearly likes you very much.\p"
# 109 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A Pokémon that adoring and adorable\n"
# 110 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "deserves an item like this, no?$"
# 111 "data/maps/PacifidlogTown_House2/scripts.pory"

# 112 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_PutInSomeMoreEffort:
# 113 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Hmm…\n"
# 114 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It's not bad, but it's also not good.\p"
# 115 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You, as the Trainer, need to put in\n"
# 116 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "some more effort.$"
# 117 "data/maps/PacifidlogTown_House2/scripts.pory"

# 118 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ViciousPokemonTakeThis:
# 119 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It has a vicious look to it.\p"
# 120 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A frightening Pokémon like that\n"
# 121 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "needs an item like this.$"
# 122 "data/maps/PacifidlogTown_House2/scripts.pory"

# 123 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ExplainReturnFrustration:
# 124 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A Choice item locks your Pokémon to a\n"
# 125 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "specific move. But also boosts your\l"
# 126 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "damage, or speed.$"
# 127 "data/maps/PacifidlogTown_House2/scripts.pory"

# 128 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_GetGoodTMInXDays:
# 129 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Oh, yes. In about {STR_VAR_1} or so days,\n"
# 130 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I should be getting a good item or two.\p"
# 131 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You should come see me then.\n"
# 132 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I'll give you an item that's suitable\l"
# 133 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "for your Pokémon.$"
# 134 "data/maps/PacifidlogTown_House2/scripts.pory"

# 135 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rurii:
# 136 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Azurill: Rurii.$"
# 137 "data/maps/PacifidlogTown_House2/scripts.pory"

# 138 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_VeryFriendlyWithTrainer:
# 139 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It appears to be very friendly with the\n"
# 140 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Trainer.$"
# 141 "data/maps/PacifidlogTown_House2/scripts.pory"

# 142 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rururi:
# 143 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Azurill: Rururi!$"
# 144 "data/maps/PacifidlogTown_House2/scripts.pory"

# 145 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch:
# 146 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It doesn't appear to like the Trainer\n"
# 147 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "very much.$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest::
# 152 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 153 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 154 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_BATTLE_BOND_GRENINJA, PacifidlogTown_House2_EventScript_OldManKecleonQuest_2
# 163 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_ACCEPTED_KECLEON_QUEST, PacifidlogTown_House2_EventScript_OldManKecleonQuest_5
# 244 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_5, MSGBOX_YESNO
# 250 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_7
# 340 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_9, MSGBOX_NPC
# 344 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_2:
# 156 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_0, MSGBOX_DEFAULT
# 160 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_5:
# 165 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_KECLEON_DEFEATED, 10
	goto_if_ge PacifidlogTown_House2_EventScript_OldManKecleonQuest_10
# 237 "data/maps/PacifidlogTown_House2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_KECLEON_DEFEATED
# 238 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_4, MSGBOX_NPC
# 240 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_7:
# 252 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_ACCEPTED_KECLEON_QUEST
# 253 "data/maps/PacifidlogTown_House2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_KECLEON_DEFEATED
# 254 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_6, MSGBOX_DEFAULT
# 255 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_KECLEON_DEFEATED, 10
	goto_if_ge PacifidlogTown_House2_EventScript_OldManKecleonQuest_13
# 329 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_8, MSGBOX_NPC
# 334 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_10:
# 167 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_1, MSGBOX_AUTOCLOSE
# 170 "data/maps/PacifidlogTown_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GRENINJA
# 171 "data/maps/PacifidlogTown_House2/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GRENINJA
# 172 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag P_FLAG_FORCE_NO_SHINY
# 173 "data/maps/PacifidlogTown_House2/scripts.pory"
	givemon SPECIES_GRENINJA_BATTLE_BOND, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, NATURE_MODEST, 0, MON_MALE, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, FALSE
# 174 "data/maps/PacifidlogTown_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 175 "data/maps/PacifidlogTown_House2/scripts.pory"
	message PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_2
# 176 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
# 177 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitfanfare
# 178 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_BATTLE_BOND_GRENINJA
# 179 "data/maps/PacifidlogTown_House2/scripts.pory"
	clearflag P_FLAG_FORCE_NO_SHINY
# 180 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_17
# 204 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_18
# 228 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 232 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_13:
# 257 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_7, MSGBOX_AUTOCLOSE
# 261 "data/maps/PacifidlogTown_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GRENINJA
# 262 "data/maps/PacifidlogTown_House2/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GRENINJA
# 263 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag P_FLAG_FORCE_NO_SHINY
# 264 "data/maps/PacifidlogTown_House2/scripts.pory"
	givemon SPECIES_GRENINJA_BATTLE_BOND, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, NATURE_MODEST, 0, MON_MALE, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, FALSE
# 265 "data/maps/PacifidlogTown_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 266 "data/maps/PacifidlogTown_House2/scripts.pory"
	message PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_2
# 267 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
# 268 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitfanfare
# 269 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_BATTLE_BOND_GRENINJA
# 270 "data/maps/PacifidlogTown_House2/scripts.pory"
	clearflag P_FLAG_FORCE_NO_SHINY
# 271 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_22
# 296 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_23
# 320 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 324 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_17:
# 182 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 183 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_26
# 196 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 200 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_18:
# 206 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 207 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_29
# 220 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 224 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_22:
# 273 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 274 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_32
# 287 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 291 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_23:
# 298 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 299 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_35
# 312 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 316 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_26:
# 185 "data/maps/PacifidlogTown_House2/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 186 "data/maps/PacifidlogTown_House2/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 187 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 191 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_29:
# 209 "data/maps/PacifidlogTown_House2/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 210 "data/maps/PacifidlogTown_House2/scripts.pory"
	call Common_EventScript_TransferredToPC
# 211 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 215 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_32:
# 276 "data/maps/PacifidlogTown_House2/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 277 "data/maps/PacifidlogTown_House2/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 278 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 282 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_35:
# 301 "data/maps/PacifidlogTown_House2/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 302 "data/maps/PacifidlogTown_House2/scripts.pory"
	call Common_EventScript_TransferredToPC
# 303 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
# 307 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end


PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_0:
# 156 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Thanks to your efforts,\n"
	.string "there's no longer any Kecleon causing\l"
	.string "troubles!\p"
	.string "They have all moved south to Route 120.$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_1:
# 167 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You got them all?!\p"
	.string "Incredible!\p"
	.string "You deserve this gift!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_2:
# 175 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "{PLAYER} received a Greninja!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3:
# 187 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "That Greninja is a special one!\p"
	.string "If you are as good as I think you are,\n"
	.string "you will see a special phenomenon.\p"
	.string "Good luck on your journey!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_4:
# 238 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "So you've beaten {STR_VAR_1} of the Kecleon?\p"
	.string "I'm sure you'll get them all!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_5:
# 244 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I've seen a few Kecleon when I was\n"
	.string "in Fortree City.\p"
	.string "I've heard that they are still there!\p"
	.string "My brother in Fortree told me they are\n"
	.string "like pests there.\p"
	.string "Could you get rid of them for me?$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_6:
# 254 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Thank you, very much!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_7:
# 257 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "… … … … … …\p"
	.string "You already did?!\p"
	.string "Oh, my! You are a wonderous Trainer!\p"
	.string "Then you shall take this reward!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_8:
# 329 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I see you have already come in contact\n"
	.string "with a few!\p"
	.string "{STR_VAR_1}, you say?!\p"
	.string "If you get all, I'll give you a nice\n"
	.string "reward that'll be worth your time!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_9:
# 340 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Oh…\n"
	.string "That's fine.\p"
	.string "If you're upto the task,\n"
	.string "I can give you a very special Pokémon.$"

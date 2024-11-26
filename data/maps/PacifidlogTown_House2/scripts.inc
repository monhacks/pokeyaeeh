
PacifidlogTown_House2_MapScripts::
	.byte 0

PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
	lock
	faceplayer
	dotimebasedevents
	call PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_ComeBackInXDays
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_MonAssessment
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FirstMonAssessment
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, PacifidlogTown_House2_EventScript_GiveReturn
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_50_TO_99, PacifidlogTown_House2_EventScript_PutInEffort
	goto PacifidlogTown_House2_EventScript_GiveFrustration
	end

PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag::
	goto_if_unset FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, Common_EventScript_NopReturn
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
	call_if_eq VAR_RESULT, 0, PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM
	return

PacifidlogTown_House2_EventScript_MonAssessment::
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_FirstMonAssessment::
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM::
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	return

PacifidlogTown_House2_EventScript_GiveReturn::
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
	randomelement ITEM_CHOICE_BAND, ITEM_CHOICE_SPECS, ITEM_CHOICE_SCARF
	giveitem VAR_RESULT, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	special SetPacifidlogTMReceivedDay
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_PutInEffort::
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_GiveFrustration::
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_SOOTHE_BELL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	special SetPacifidlogTMReceivedDay
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_ComeBackInXDays::
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
	buffernumberstring STR_VAR_1, VAR_RESULT
	msgbox PacifidlogTown_House2_Text_GetGoodTMInXDays, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_HappyAzurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_UnhappyAzurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation:
	.string "Er-hem!\p"
	.string "I am the Pokémon Fan Club's most\n"
	.string "important person, the Chairman's\l"
	.string "younger brother.\p"
	.string "I'm here enjoying my vacation with\n"
	.string "Pokémon, yes, indeed.$"

PacifidlogTown_House2_Text_AhYourPokemon:
	.string "Ah!\n"
	.string "Your Pokémon…$"

PacifidlogTown_House2_Text_AdoringPokemonTakeThis:
	.string "It clearly likes you very much.\p"
	.string "A Pokémon that adoring and adorable\n"
	.string "deserves an item like this, no?$"

PacifidlogTown_House2_Text_PutInSomeMoreEffort:
	.string "Hmm…\n"
	.string "It's not bad, but it's also not good.\p"
	.string "You, as the Trainer, need to put in\n"
	.string "some more effort.$"

PacifidlogTown_House2_Text_ViciousPokemonTakeThis:
	.string "It has a vicious look to it.\p"
	.string "A frightening Pokémon like that\n"
	.string "needs an item like this.$"

PacifidlogTown_House2_Text_ExplainReturnFrustration:
	.string "A Choice item locks your Pokémon to a\n"
	.string "specific move. But also boosts your\l"
	.string "damage, or speed.$"

PacifidlogTown_House2_Text_GetGoodTMInXDays:
	.string "Oh, yes. In about {STR_VAR_1} or so days,\n"
	.string "I should be getting a good item or two.\p"
	.string "You should come see me then.\n"
	.string "I'll give you an item that's suitable\l"
	.string "for your Pokémon.$"

PacifidlogTown_House2_Text_Rurii:
	.string "Azurill: Rurii.$"

PacifidlogTown_House2_Text_VeryFriendlyWithTrainer:
	.string "It appears to be very friendly with the\n"
	.string "Trainer.$"

PacifidlogTown_House2_Text_Rururi:
	.string "Azurill: Rururi!$"

PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch:
	.string "It doesn't appear to like the Trainer\n"
	.string "very much.$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BATTLE_BOND_GRENINJA, PacifidlogTown_House2_EventScript_OldManKecleonQuest_2
	goto_if_set FLAG_ACCEPTED_KECLEON_QUEST, PacifidlogTown_House2_EventScript_OldManKecleonQuest_5
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_7
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_9, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_2:
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_0, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_5:
	compare VAR_KECLEON_DEFEATED, 10
	goto_if_ge PacifidlogTown_House2_EventScript_OldManKecleonQuest_10
	buffernumberstring STR_VAR_1, VAR_KECLEON_DEFEATED
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_4, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_7:
	setflag FLAG_ACCEPTED_KECLEON_QUEST
	buffernumberstring STR_VAR_1, VAR_KECLEON_DEFEATED
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_6, MSGBOX_DEFAULT
	compare VAR_KECLEON_DEFEATED, 10
	goto_if_ge PacifidlogTown_House2_EventScript_OldManKecleonQuest_13
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_8, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_10:
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_1, MSGBOX_AUTOCLOSE
	bufferspeciesname STR_VAR_1, SPECIES_GRENINJA
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GRENINJA
	setflag P_FLAG_FORCE_NO_SHINY
	givemon SPECIES_GRENINJA_BATTLE_BOND, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, NATURE_MODEST, 0, MON_MALE, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, FALSE
	playfanfare MUS_OBTAIN_ITEM
	message PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_2
	waitmessage
	waitfanfare
	setflag FLAG_RECEIVED_BATTLE_BOND_GRENINJA
	clearflag P_FLAG_FORCE_NO_SHINY
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_17
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_18
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_13:
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_7, MSGBOX_AUTOCLOSE
	bufferspeciesname STR_VAR_1, SPECIES_GRENINJA
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GRENINJA
	setflag P_FLAG_FORCE_NO_SHINY
	givemon SPECIES_GRENINJA_BATTLE_BOND, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, NATURE_MODEST, 0, MON_MALE, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, FALSE
	playfanfare MUS_OBTAIN_ITEM
	message PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_2
	waitmessage
	waitfanfare
	setflag FLAG_RECEIVED_BATTLE_BOND_GRENINJA
	clearflag P_FLAG_FORCE_NO_SHINY
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_22
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_23
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_17:
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_26
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_18:
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_29
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_22:
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_32
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_23:
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House2_EventScript_OldManKecleonQuest_35
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_26:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_29:
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_32:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end

PacifidlogTown_House2_EventScript_OldManKecleonQuest_35:
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	msgbox PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3, MSGBOX_NPC
	release
	end


PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_0:
	.string "Thanks to your efforts,\n"
	.string "there's no longer any Kecleon causing\l"
	.string "troubles!\p"
	.string "They have all moved south to Route 120.$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_1:
	.string "You got them all?!\p"
	.string "Incredible!\p"
	.string "You deserve this gift!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_2:
	.string "{PLAYER} received a Greninja!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_3:
	.string "That Greninja is a special one!\p"
	.string "If you are as good as I think you are,\n"
	.string "you will see a special phenomenon.\p"
	.string "Good luck on your journey!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_4:
	.string "So you've beaten {STR_VAR_1} of the Kecleon?\p"
	.string "I'm sure you'll get them all!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_5:
	.string "I've seen a few Kecleon when I was\n"
	.string "in Fortree City.\p"
	.string "I've heard that they are still there!\p"
	.string "My brother in Fortree told me they are\n"
	.string "like pests there.\p"
	.string "Could you get rid of them for me?$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_6:
	.string "Thank you, very much!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_7:
	.string "… … … … … …\p"
	.string "You already did?!\p"
	.string "Oh, my! You are a wonderous Trainer!\p"
	.string "Then you shall take this reward!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_8:
	.string "I see you have already come in contact\n"
	.string "with a few!\p"
	.string "{STR_VAR_1}, you say?!\p"
	.string "If you get all, I'll give you a nice\n"
	.string "reward that'll be worth your time!$"

PacifidlogTown_House2_EventScript_OldManKecleonQuest_Text_9:
	.string "Oh…\n"
	.string "That's fine.\p"
	.string "If you're upto the task,\n"
	.string "I can give you a very special Pokémon.$"

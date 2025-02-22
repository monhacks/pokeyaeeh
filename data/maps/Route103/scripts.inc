
.set LOCALID_RIVAL, 2

Route103_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
	.byte 0

Route103_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call ProfBirch_EventScript_UpdateLocation
	end

Route103_OnLoad:
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
	end

Route103_EventScript_OpenAlteringCave::
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	return

Route103_EventScript_Rival::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
	end

Route103_EventScript_RivalMay::
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartMayBattleTreecko
	case 1, Route103_EventScript_StartMayBattleTorchic
	case 2, Route103_EventScript_StartMayBattleMudkip
	end

Route103_EventScript_RivalBrendan::
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartBrendanBattleTreecko
	case 1, Route103_EventScript_StartBrendanBattleTorchic
	case 2, Route103_EventScript_StartBrendanBattleMudkip
	end

Route103_EventScript_StartMayBattleTreecko::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartMayBattleTorchic::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartMayBattleMudkip::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartBrendanBattleTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_StartBrendanBattleTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_StartBrendanBattleMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_AfterMayBattle::
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_AfterBrendanBattle::
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_RivalExit::
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
	end

Route103_EventScript_RivalExitFacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalExitFacingEastOrWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalExitFacingSouth::
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalEnd::
	removeobject LOCALID_RIVAL
	setvar VAR_BIRCH_LAB_STATE, 4
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	setvar VAR_OLDALE_RIVAL_STATE, 1
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Route103_Movement_RivalExitFacingNorth1:
	walk_left
	walk_down
	step_end

Route103_Movement_RivalExitFacingNorth2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingNorth:
	delay_16
	delay_4
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

Route103_Movement_RivalExit1:
	walk_down
	step_end

Route103_Movement_RivalExit2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingEastOrWest:
	delay_16
	walk_in_place_faster_down
	step_end

Route103_EventScript_Boy::
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
	end

Route103_EventScript_Man::
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
	end

Route103_EventScript_RouteSign::
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
	end

Route103_EventScript_Amy::
	trainerbattle_single TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv::
	trainerbattle_single TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Andrew::
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Miguel::
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Marcos::
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Rhett::
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Pete::
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Isabelle::
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_Text_MayRoute103Pokemon:
	.string "May: Let's see… The Pokémon found\n"
	.string "on Route 103 include…$"

Route103_Text_MayLetsBattle:
	.string "Oh, hi, {PLAYER}{KUN}!\p"
	.string "…Oh, I see, my dad gave you\n"
	.string "a Pokémon as a gift.\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a Trainer is like.$"

Route103_Text_MayDefeated:
	.string "Wow! That's great!\n"
	.string "{PLAYER}{KUN}, you're pretty good!$"

Route103_Text_MayTimeToHeadBack:
	.string "May: I think I know why my dad has\n"
	.string "an eye out for you now.\p"
	.string "I mean, you just got that Pokémon,\n"
	.string "but it already likes you.\p"
	.string "You might be able to befriend any\n"
	.string "kind of Pokémon easily.\p"
	.string "Well, it's time to head back to\n"
	.string "the Lab.$"

Route103_Text_BrendanRoute103Pokemon:
	.string "Brendan: Okay, so it's this one and\n"
	.string "that one that live on Route 103…$"

Route103_Text_BrendanLetsBattle:
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh, yeah, Dad gave you a Pokémon.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a Trainer's\n"
	.string "about!$"

Route103_Text_BrendanDefeated:
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_BrendanTimeToHeadBack:
	.string "Brendan: I think I get it.\n"
	.string "I think I know why my dad has his eye\l"
	.string "out for you now.\p"
	.string "Look, your Pokémon already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any Pokémon with ease.\p"
	.string "We should head back to the Lab.$"

Route103_Text_ShouldHaveBroughtPotion:
	.string "My Pokémon is staggeringly tired…\n"
	.string "I should have brought a Potion…$"

Route103_Text_ShortcutToOldale:
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to Oldale Town.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_Text_RouteSign:
	.string "Route 103\n"
	.string "{DOWN_ARROW} Oldale Town$"

Route103_EventScript_Daisy2::
	msgbox Route103_EventScript_Daisy2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_VOLTORB_HISUIAN, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, NATURE_MODEST, 0, MON_MALE, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CHLOROBLAST, MOVE_ENERGY_BALL, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_VOLTORB_HISUIAN
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VOLTORB_HISUIAN
	playfanfare MUS_OBTAIN_ITEM
	message Route103_EventScript_Daisy2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route103_EventScript_Daisy2_Text_2, MSGBOX_NPC
	giveitem ITEM_TM_ENERGY_BALL, 1
	setflag FLAG_ROUTE_103_BOSS_DEFEATED
	msgbox Route103_EventScript_Daisy2_Text_3, MSGBOX_NPC
	return


Route103_EventScript_Daisy::
	lock
	faceplayer
	checktrainerflag TRAINER_AMY_AND_LIV_1
	goto_if 1, Route103_EventScript_Daisy_5
Route103_EventScript_Daisy_3:
	msgbox Route103_EventScript_Daisy_Text_0, MSGBOX_NPC
Route103_EventScript_Daisy_1:
	release
	end

Route103_EventScript_Daisy_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated, Route103_EventScript_Daisy2
	clearflag B_FLAG_NO_BAG_USE
	msgbox Route103_EventScript_Daisy2_Text_3, MSGBOX_NPC
	goto Route103_EventScript_Daisy_1

Route103_EventScript_Daisy_4:
	checktrainerflag TRAINER_MIGUEL_1
	goto_if 1, Route103_EventScript_Daisy_9
	goto Route103_EventScript_Daisy_3

Route103_EventScript_Daisy_5:
	checktrainerflag TRAINER_ANDREW
	goto_if 1, Route103_EventScript_Daisy_4
	goto Route103_EventScript_Daisy_3

Route103_EventScript_Daisy_8:
	checktrainerflag TRAINER_RHETT
	goto_if 1, Route103_EventScript_Daisy_13
	goto Route103_EventScript_Daisy_3

Route103_EventScript_Daisy_9:
	checktrainerflag TRAINER_MARCOS
	goto_if 1, Route103_EventScript_Daisy_8
	goto Route103_EventScript_Daisy_3

Route103_EventScript_Daisy_12:
	checktrainerflag TRAINER_ISABELLE
	goto_if 1, Route103_EventScript_Daisy_2
	goto Route103_EventScript_Daisy_3

Route103_EventScript_Daisy_13:
	checktrainerflag TRAINER_PETE
	goto_if 1, Route103_EventScript_Daisy_12
	goto Route103_EventScript_Daisy_3


Common_EventScript_Nickname::
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Common_EventScript_Nickname_2
Common_EventScript_Nickname_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Common_EventScript_Nickname_4
	return

Common_EventScript_Nickname_2:
	call Common_EventScript_NicknamePartyMon
	goto Common_EventScript_Nickname_1

Common_EventScript_Nickname_4:
	call Common_EventScript_NicknamePCMon
	return


Common_EventScript_NicknamePartyMon::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_NicknamePartyMon_2
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return

Common_EventScript_NicknamePartyMon_2:
	return


Common_EventScript_NicknamePCMon::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_NicknamePCMon_2
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	return

Common_EventScript_NicknamePCMon_2:
	call Common_EventScript_TransferredToPC
	return


Route103_EventScript_Daisy2_Text_0:
	.string "That was a fun battle!\pHere, please accept this!$"

Route103_EventScript_Daisy2_Text_1:
	.string "{PLAYER} received a Hisuian Voltorb!$"

Route103_EventScript_Daisy2_Text_2:
	.string "That Voltorb…\pIt's one of a kind…\pPlease take good care of it.\pAlso, here's another gift.$"

Route103_EventScript_Daisy2_Text_3:
	.string "Energy Ball is a strong Grass-type\nattack that might lower the foe's\lSpecial Defense.\pIt's a really reliable move that'll\nnever let you down.$"

Route103_EventScript_Daisy_Text_0:
	.string "The soul soothing fragrance…\pYou're here for a battle, isn't it?\pPlease talk to me when you're done\nbeating everyone here.\pI'll see you then…$"

# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 6 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 7 "data/maps/Route102/scripts.pory"
	end
# 8 "data/maps/Route102/scripts.pory"

# 9 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 10 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 11 "data/maps/Route102/scripts.pory"
	end
# 12 "data/maps/Route102/scripts.pory"

# 13 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 14 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 15 "data/maps/Route102/scripts.pory"
	end
# 16 "data/maps/Route102/scripts.pory"

# 17 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 18 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 19 "data/maps/Route102/scripts.pory"
	end
# 20 "data/maps/Route102/scripts.pory"

# 21 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 22 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 23 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 25 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 26 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 27 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 28 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/Route102/scripts.pory"
	release
# 30 "data/maps/Route102/scripts.pory"
	end
# 31 "data/maps/Route102/scripts.pory"

# 32 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 33 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 34 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 36 "data/maps/Route102/scripts.pory"
	release
# 37 "data/maps/Route102/scripts.pory"
	end
# 38 "data/maps/Route102/scripts.pory"

# 39 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 40 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 41 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 42 "data/maps/Route102/scripts.pory"
	release
# 43 "data/maps/Route102/scripts.pory"
	end
# 44 "data/maps/Route102/scripts.pory"

# 45 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 46 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 47 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 48 "data/maps/Route102/scripts.pory"
	release
# 49 "data/maps/Route102/scripts.pory"
	end
# 50 "data/maps/Route102/scripts.pory"

# 51 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 52 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 53 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 54 "data/maps/Route102/scripts.pory"
	release
# 55 "data/maps/Route102/scripts.pory"
	end
# 56 "data/maps/Route102/scripts.pory"

# 57 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 58 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 59 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route102/scripts.pory"
	end
# 61 "data/maps/Route102/scripts.pory"

# 62 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 63 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 64 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route102/scripts.pory"
	end
# 66 "data/maps/Route102/scripts.pory"

# 67 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 68 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 69 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route102/scripts.pory"
	end
# 71 "data/maps/Route102/scripts.pory"

# 72 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 73 "data/maps/Route102/scripts.pory"
	.string "Wally: {PLAYER}…\n"
# 74 "data/maps/Route102/scripts.pory"
	.string "Pokémon hide in tall grass like this,\l"
# 75 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 76 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 77 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 78 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 79 "data/maps/Route102/scripts.pory"

# 80 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 81 "data/maps/Route102/scripts.pory"
	.string "Wally: I did it… It's my…\n"
# 82 "data/maps/Route102/scripts.pory"
	.string "My Pokémon!$"
# 83 "data/maps/Route102/scripts.pory"

# 84 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 85 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 86 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the Gym!$"
# 87 "data/maps/Route102/scripts.pory"

# 88 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 89 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 90 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 91 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 92 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 93 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 94 "data/maps/Route102/scripts.pory"

# 95 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 96 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 97 "data/maps/Route102/scripts.pory"
	.string "Pokémon!$"
# 98 "data/maps/Route102/scripts.pory"

# 99 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 100 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 101 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} Oldale Town$"
# 102 "data/maps/Route102/scripts.pory"

# 103 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 104 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 105 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} Petalburg City$"

Route102_EventScript_Tiana2::
# 108 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Tiana2_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route102/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 2
# 110 "data/maps/Route102/scripts.pory"
	giveitem ITEM_TM_HONE_CLAWS, 1
# 111 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE_102_BOSS_DEFEATED
# 112 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Tiana2_Text_1, MSGBOX_NPC
	return


Route102_EventScript_Tiana::
# 116 "data/maps/Route102/scripts.pory"
	lock
# 117 "data/maps/Route102/scripts.pory"
	faceplayer
# 118 "data/maps/Route102/scripts.pory"
	checktrainerflag TRAINER_CALVIN_1
	goto_if 1, Route102_EventScript_Tiana_5
Route102_EventScript_Tiana_3:
# 128 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Tiana_Text_2, MSGBOX_NPC
Route102_EventScript_Tiana_1:
# 130 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_Tiana_2:
# 121 "data/maps/Route102/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 122 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_EventScript_Tiana_Text_0, Route102_EventScript_Tiana_Text_1, Route102_EventScript_Tiana2
# 123 "data/maps/Route102/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 124 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Tiana2_Text_1, MSGBOX_NPC
	goto Route102_EventScript_Tiana_1

Route102_EventScript_Tiana_4:
# 120 "data/maps/Route102/scripts.pory"
	checktrainerflag TRAINER_ALLEN
	goto_if 1, Route102_EventScript_Tiana_2
	goto Route102_EventScript_Tiana_3

Route102_EventScript_Tiana_5:
# 119 "data/maps/Route102/scripts.pory"
	checktrainerflag TRAINER_RICK
	goto_if 1, Route102_EventScript_Tiana_4
	goto Route102_EventScript_Tiana_3


Route102_EventScript_Tiana2_Text_0:
# 108 "data/maps/Route102/scripts.pory"
	.string "Ok, fine! I lost!\pHere, take these, they'll help you in\nyour journey.$"

Route102_EventScript_Tiana2_Text_1:
# 112 "data/maps/Route102/scripts.pory"
	.string "Berry Juice heal your Pokémon by a\nlittle when held in battle.\pThe TM I gave you will boost your\nPokémon's Attack and accuracy.\pIt'll be useful in your journey.$"

Route102_EventScript_Tiana_Text_0:
# 122 "data/maps/Route102/scripts.pory"
	.string "I'm going to keep winning and aim to be\nthe best Trainer.\pHelp me further my career!$"

Route102_EventScript_Tiana_Text_1:
# 122 "data/maps/Route102/scripts.pory"
	.string "I ended up furthering your career…$"

Route102_EventScript_Tiana_Text_2:
# 128 "data/maps/Route102/scripts.pory"
	.string "Why don't you beat every trainer\nhere before talking to me again?$"

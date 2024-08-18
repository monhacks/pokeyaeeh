# 1 "data/maps/Route105/scripts.pory"

# 2 "data/maps/Route105/scripts.pory"
Route105_MapScripts::
# 3 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 4 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 5 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
# 6 "data/maps/Route105/scripts.pory"
	.byte 0
# 7 "data/maps/Route105/scripts.pory"

# 8 "data/maps/Route105/scripts.pory"
Route105_OnLoad:
# 9 "data/maps/Route105/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route105_CloseRegiEntrance
# 10 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute105North
# 11 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute105South
# 12 "data/maps/Route105/scripts.pory"
	end
# 13 "data/maps/Route105/scripts.pory"

# 14 "data/maps/Route105/scripts.pory"
Route105_CloseRegiEntrance::
# 15 "data/maps/Route105/scripts.pory"
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
# 16 "data/maps/Route105/scripts.pory"
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
# 17 "data/maps/Route105/scripts.pory"
	return
# 18 "data/maps/Route105/scripts.pory"

# 19 "data/maps/Route105/scripts.pory"
Route105_OnTransition:
# 20 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 21 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 22 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 23 "data/maps/Route105/scripts.pory"
	end
# 24 "data/maps/Route105/scripts.pory"

# 25 "data/maps/Route105/scripts.pory"
Route105_OnFrame:
# 26 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 27 "data/maps/Route105/scripts.pory"
	.2byte 0
# 28 "data/maps/Route105/scripts.pory"

# 29 "data/maps/Route105/scripts.pory"
Route105_EventScript_Luis::
# 30 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 31 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route105/scripts.pory"
	end
# 33 "data/maps/Route105/scripts.pory"

# 34 "data/maps/Route105/scripts.pory"
Route105_EventScript_Dominik::
# 35 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 36 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route105/scripts.pory"
	end
# 38 "data/maps/Route105/scripts.pory"

# 39 "data/maps/Route105/scripts.pory"
Route105_EventScript_Beverly::
# 40 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 41 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route105/scripts.pory"
	end
# 43 "data/maps/Route105/scripts.pory"

# 44 "data/maps/Route105/scripts.pory"
Route105_EventScript_Imani::
# 45 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 46 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route105/scripts.pory"
	end
# 48 "data/maps/Route105/scripts.pory"

# 49 "data/maps/Route105/scripts.pory"
Route105_EventScript_Josue::
# 50 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 51 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route105/scripts.pory"
	end
# 53 "data/maps/Route105/scripts.pory"

# 54 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres::
# 55 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 56 "data/maps/Route105/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 57 "data/maps/Route105/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route105_EventScript_AndresRematch
# 58 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 59 "data/maps/Route105/scripts.pory"
	release
# 60 "data/maps/Route105/scripts.pory"
	end
# 61 "data/maps/Route105/scripts.pory"

# 62 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 63 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 64 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 66 "data/maps/Route105/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 67 "data/maps/Route105/scripts.pory"
	release
# 68 "data/maps/Route105/scripts.pory"
	end
# 69 "data/maps/Route105/scripts.pory"

# 70 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRematch::
# 71 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 72 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route105/scripts.pory"
	end
# 74 "data/maps/Route105/scripts.pory"

# 75 "data/maps/Route105/scripts.pory"
Route104_Text_DadPokenavCall:
# 76 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 77 "data/maps/Route105/scripts.pory"
	.string "… … … … … Beep!\p"
# 78 "data/maps/Route105/scripts.pory"
	.string "Dad: Oh, {PLAYER}?\p"
# 79 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 80 "data/maps/Route105/scripts.pory"
	.string "Where are you now?\l"
# 81 "data/maps/Route105/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 82 "data/maps/Route105/scripts.pory"
	.string "I just heard from Devon's Mr. Stone\n"
# 83 "data/maps/Route105/scripts.pory"
	.string "about your PokéNav, so I decided\l"
# 84 "data/maps/Route105/scripts.pory"
	.string "to give you a call.\p"
# 85 "data/maps/Route105/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 86 "data/maps/Route105/scripts.pory"
	.string "so that's fine with me.\p"
# 87 "data/maps/Route105/scripts.pory"
	.string "You take care now.\p"
# 88 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 89 "data/maps/Route105/scripts.pory"
	.string "… … … … … Click!$"
# 90 "data/maps/Route105/scripts.pory"

# 91 "data/maps/Route105/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 92 "data/maps/Route105/scripts.pory"
	.string "Registered Gym Leader Chrizz\n"
# 93 "data/maps/Route105/scripts.pory"
	.string "in the PokéNav.$"

Route105_EventScript_Foster2::
# 96 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_Foster2_Text_0
# 97 "data/maps/Route105/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 98 "data/maps/Route105/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 99 "data/maps/Route105/scripts.pory"
	waitmessage
# 100 "data/maps/Route105/scripts.pory"
	waitfanfare
# 101 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_Foster2_Text_1
# 102 "data/maps/Route105/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE, 1
# 103 "data/maps/Route105/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 104 "data/maps/Route105/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 105 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_Foster2_Text_2, MSGBOX_NPC
	return


Route105_EventScript_Foster::
# 110 "data/maps/Route105/scripts.pory"
	lock
# 111 "data/maps/Route105/scripts.pory"
	faceplayer
# 112 "data/maps/Route105/scripts.pory"
	checktrainerflag TRAINER_IMANI
	goto_if 1, Route105_EventScript_Foster_5
Route105_EventScript_Foster_3:
# 124 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_Foster_Text_0, MSGBOX_NPC
Route105_EventScript_Foster_1:
# 126 "data/maps/Route105/scripts.pory"
	release
	end

Route105_EventScript_Foster_2:
# 117 "data/maps/Route105/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 118 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated, Route105_EventScript_Foster2
# 119 "data/maps/Route105/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 120 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_Foster2_Text_2, MSGBOX_NPC
	goto Route105_EventScript_Foster_1

Route105_EventScript_Foster_4:
# 114 "data/maps/Route105/scripts.pory"
	checktrainerflag TRAINER_JOSUE
	goto_if 1, Route105_EventScript_Foster_9
	goto Route105_EventScript_Foster_3

Route105_EventScript_Foster_5:
# 113 "data/maps/Route105/scripts.pory"
	checktrainerflag TRAINER_BEVERLY
	goto_if 1, Route105_EventScript_Foster_4
	goto Route105_EventScript_Foster_3

Route105_EventScript_Foster_8:
# 116 "data/maps/Route105/scripts.pory"
	checktrainerflag TRAINER_LUIS
	goto_if 1, Route105_EventScript_Foster_2
	goto Route105_EventScript_Foster_3

Route105_EventScript_Foster_9:
# 115 "data/maps/Route105/scripts.pory"
	checktrainerflag TRAINER_ANDRES_1
	goto_if 1, Route105_EventScript_Foster_8
	goto Route105_EventScript_Foster_3


Route105_EventScript_Foster2_Text_0:
# 96 "data/maps/Route105/scripts.pory"
	.string "Now that's what I call an awesome\nbattle!\pHere!\nYou can have this!$"

Route105_EventScript_Foster2_Text_1:
# 101 "data/maps/Route105/scripts.pory"
	.string "And this, too!$"

Route105_EventScript_Foster2_Text_2:
# 105 "data/maps/Route105/scripts.pory"
	.string "Earthquake is an excellent move!\pIt also hurts your partner in battle\nthough.\pUnless its Flying-type or is floating,\nhehe.$"

Route105_EventScript_Foster_Text_0:
# 124 "data/maps/Route105/scripts.pory"
	.string "I'm searching for a mystical rock\naround here!\pDon't bother me til you beat everyon\nelse!$"

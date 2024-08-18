# 1 "data/maps/Route127/scripts.pory"

# 2 "data/maps/Route127/scripts.pory"
Route127_MapScripts::
# 3 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route127_OnTransition
# 4 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route127_OnLoad
# 5 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route127_OnFrame
# 6 "data/maps/Route127/scripts.pory"
	.byte 0
# 7 "data/maps/Route127/scripts.pory"

# 8 "data/maps/Route127/scripts.pory"
Route127_OnTransition:
# 9 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 10 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 11 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_StartKyogreWeather
# 12 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_StartKyogreWeather
# 13 "data/maps/Route127/scripts.pory"
	end
# 14 "data/maps/Route127/scripts.pory"

# 15 "data/maps/Route127/scripts.pory"
Route127_OnLoad:
# 16 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute127North
# 17 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute127South
# 18 "data/maps/Route127/scripts.pory"
	end
# 19 "data/maps/Route127/scripts.pory"

# 20 "data/maps/Route127/scripts.pory"
Route127_OnFrame:
# 21 "data/maps/Route127/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 22 "data/maps/Route127/scripts.pory"
	.2byte 0
# 23 "data/maps/Route127/scripts.pory"

# 24 "data/maps/Route127/scripts.pory"
Route127_EventScript_Camden::
# 25 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_CAMDEN, Route127_Text_CamdenIntro, Route127_Text_CamdenDefeat
# 26 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route127/scripts.pory"
	end
# 28 "data/maps/Route127/scripts.pory"

# 29 "data/maps/Route127/scripts.pory"
Route127_EventScript_Donny::
# 30 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_DONNY, Route127_Text_DonnyIntro, Route127_Text_DonnyDefeat
# 31 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route127/scripts.pory"
	end
# 33 "data/maps/Route127/scripts.pory"

# 34 "data/maps/Route127/scripts.pory"
Route127_EventScript_Jonah::
# 35 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_JONAH, Route127_Text_JonahIntro, Route127_Text_JonahDefeat
# 36 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route127/scripts.pory"
	end
# 38 "data/maps/Route127/scripts.pory"

# 39 "data/maps/Route127/scripts.pory"
Route127_EventScript_Henry::
# 40 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_HENRY, Route127_Text_HenryIntro, Route127_Text_HenryDefeat
# 41 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route127/scripts.pory"
	end
# 43 "data/maps/Route127/scripts.pory"

# 44 "data/maps/Route127/scripts.pory"
Route127_EventScript_Roger::
# 45 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ROGER, Route127_Text_RogerIntro, Route127_Text_RogerDefeat
# 46 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route127/scripts.pory"
	end
# 48 "data/maps/Route127/scripts.pory"

# 49 "data/maps/Route127/scripts.pory"
Route127_EventScript_Aidan::
# 50 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_AIDAN, Route127_Text_AidanIntro, Route127_Text_AidanDefeat
# 51 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route127/scripts.pory"
	end
# 53 "data/maps/Route127/scripts.pory"

# 54 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji::
# 55 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route127_Text_KojiIntro, Route127_Text_KojiDefeat, Route127_EventScript_RegisterKoji
# 56 "data/maps/Route127/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 57 "data/maps/Route127/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route127_EventScript_RematchKoji
# 58 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostBattle, MSGBOX_DEFAULT
# 59 "data/maps/Route127/scripts.pory"
	release
# 60 "data/maps/Route127/scripts.pory"
	end
# 61 "data/maps/Route127/scripts.pory"

# 62 "data/maps/Route127/scripts.pory"
Route127_EventScript_RegisterKoji::
# 63 "data/maps/Route127/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 64 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiRegister, MSGBOX_DEFAULT
# 66 "data/maps/Route127/scripts.pory"
	register_matchcall TRAINER_KOJI_1
# 67 "data/maps/Route127/scripts.pory"
	release
# 68 "data/maps/Route127/scripts.pory"
	end
# 69 "data/maps/Route127/scripts.pory"

# 70 "data/maps/Route127/scripts.pory"
Route127_EventScript_RematchKoji::
# 71 "data/maps/Route127/scripts.pory"
	trainerbattle_rematch TRAINER_KOJI_1, Route127_Text_KojiRematchIntro, Route127_Text_KojiRematchDefeat
# 72 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostRematch, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route127/scripts.pory"
	end

Route127_EventScript_Athena2::
# 78 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_Athena2_Text_0, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route127/scripts.pory"
	givemon SPECIES_GARDEVOIR, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, 3, 1, MON_FEMALE, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_ENCORE, MOVE_PSYSHOCK, MOVE_HYPER_VOICE, TRUE
# 80 "data/maps/Route127/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
# 81 "data/maps/Route127/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GARDEVOIR
# 82 "data/maps/Route127/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 83 "data/maps/Route127/scripts.pory"
	message Route127_EventScript_Athena2_Text_1
# 84 "data/maps/Route127/scripts.pory"
	waitmessage
# 85 "data/maps/Route127/scripts.pory"
	waitfanfare
# 86 "data/maps/Route127/scripts.pory"
	call Common_EventScript_Nickname
# 87 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_Athena2_Text_2, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route127/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 89 "data/maps/Route127/scripts.pory"
	setflag FLAG_ROUTE_127_BOSS_DEFEATED
# 90 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_Athena2_Text_3, MSGBOX_AUTOCLOSE
	return


Route127_EventScript_Athena::
# 94 "data/maps/Route127/scripts.pory"
	lock
# 95 "data/maps/Route127/scripts.pory"
	faceplayer
# 96 "data/maps/Route127/scripts.pory"
	checktrainerflag TRAINER_CAMDEN
	goto_if 1, Route127_EventScript_Athena_5
Route127_EventScript_Athena_3:
# 110 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_Athena_Text_0, MSGBOX_NPC
Route127_EventScript_Athena_1:
# 112 "data/maps/Route127/scripts.pory"
	release
	end

Route127_EventScript_Athena_2:
# 103 "data/maps/Route127/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 104 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ATHENA, Route127_Text_AthenaIntro, Route127_Text_AthenaDefeat, Route127_EventScript_Athena2
# 105 "data/maps/Route127/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 106 "data/maps/Route127/scripts.pory"
	msgbox Route127_EventScript_Athena2_Text_3, MSGBOX_AUTOCLOSE
	goto Route127_EventScript_Athena_1

Route127_EventScript_Athena_4:
# 98 "data/maps/Route127/scripts.pory"
	checktrainerflag TRAINER_JONAH
	goto_if 1, Route127_EventScript_Athena_9
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_5:
# 97 "data/maps/Route127/scripts.pory"
	checktrainerflag TRAINER_DONNY
	goto_if 1, Route127_EventScript_Athena_4
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_8:
# 100 "data/maps/Route127/scripts.pory"
	checktrainerflag TRAINER_ROGER
	goto_if 1, Route127_EventScript_Athena_13
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_9:
# 99 "data/maps/Route127/scripts.pory"
	checktrainerflag TRAINER_HENRY
	goto_if 1, Route127_EventScript_Athena_8
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_12:
# 102 "data/maps/Route127/scripts.pory"
	checktrainerflag TRAINER_KOJI_1
	goto_if 1, Route127_EventScript_Athena_2
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_13:
# 101 "data/maps/Route127/scripts.pory"
	checktrainerflag TRAINER_AIDAN
	goto_if 1, Route127_EventScript_Athena_12
	goto Route127_EventScript_Athena_3


Route127_EventScript_Athena2_Text_0:
# 78 "data/maps/Route127/scripts.pory"
	.string "Haha, that was a great match.\pSince you beat me,\nI should give you a gift.$"

Route127_EventScript_Athena2_Text_1:
# 83 "data/maps/Route127/scripts.pory"
	.string "{PLAYER} received a Gardevoir!$"

Route127_EventScript_Athena2_Text_2:
# 87 "data/maps/Route127/scripts.pory"
	.string "You can also have this.$"

Route127_EventScript_Athena2_Text_3:
# 90 "data/maps/Route127/scripts.pory"
	.string "Holding a Gardevoirite,\nyour Gardevoir can wreak havoc,\ljust like mine!$"

Route127_EventScript_Athena_Text_0:
# 110 "data/maps/Route127/scripts.pory"
	.string "Hello, Trainer.\pI see you are here to challenge me.\pYou'll have to beat all 7 Trainers here,\nfirst. Then I'll accept your challenge.$"

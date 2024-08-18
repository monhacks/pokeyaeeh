# 1 "data/maps/Route125/scripts.pory"

# 2 "data/maps/Route125/scripts.pory"
Route125_MapScripts::
# 3 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_OnTransition
# 4 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route125_OnLoad
# 5 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_OnFrame
# 6 "data/maps/Route125/scripts.pory"
	.byte 0
# 7 "data/maps/Route125/scripts.pory"

# 8 "data/maps/Route125/scripts.pory"
Route125_OnTransition:
# 9 "data/maps/Route125/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 10 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 11 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_StartKyogreWeather
# 12 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_StartKyogreWeather
# 13 "data/maps/Route125/scripts.pory"
	end
# 14 "data/maps/Route125/scripts.pory"

# 15 "data/maps/Route125/scripts.pory"
Route125_OnLoad:
# 16 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_EventScript_PlaceTilesRoute125West
# 17 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_EventScript_PlaceTilesRoute125East
# 18 "data/maps/Route125/scripts.pory"
	end
# 19 "data/maps/Route125/scripts.pory"

# 20 "data/maps/Route125/scripts.pory"
Route125_OnFrame:
# 21 "data/maps/Route125/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 22 "data/maps/Route125/scripts.pory"
	.2byte 0
# 23 "data/maps/Route125/scripts.pory"

# 24 "data/maps/Route125/scripts.pory"
Route125_EventScript_Nolen::
# 25 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
# 26 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route125/scripts.pory"
	end
# 28 "data/maps/Route125/scripts.pory"

# 29 "data/maps/Route125/scripts.pory"
Route125_EventScript_Stan::
# 30 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
# 31 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route125/scripts.pory"
	end
# 33 "data/maps/Route125/scripts.pory"

# 34 "data/maps/Route125/scripts.pory"
Route125_EventScript_Tanya::
# 35 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
# 36 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route125/scripts.pory"
	end
# 38 "data/maps/Route125/scripts.pory"

# 39 "data/maps/Route125/scripts.pory"
Route125_EventScript_Sharon::
# 40 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_SHARON, Route125_Text_SharonIntro, Route125_Text_SharonDefeat
# 41 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route125/scripts.pory"
	end
# 43 "data/maps/Route125/scripts.pory"

# 44 "data/maps/Route125/scripts.pory"
Route125_EventScript_Ernest::
# 45 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_ERNEST_1, Route125_Text_ErnestIntro, Route125_Text_ErnestDefeat, Route125_EventScript_RegisterErnest
# 46 "data/maps/Route125/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 47 "data/maps/Route125/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route125_EventScript_RematchErnest
# 48 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_DEFAULT
# 49 "data/maps/Route125/scripts.pory"
	release
# 50 "data/maps/Route125/scripts.pory"
	end
# 51 "data/maps/Route125/scripts.pory"

# 52 "data/maps/Route125/scripts.pory"
Route125_EventScript_RegisterErnest::
# 53 "data/maps/Route125/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 54 "data/maps/Route125/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRegister, MSGBOX_DEFAULT
# 56 "data/maps/Route125/scripts.pory"
	register_matchcall TRAINER_ERNEST_1
# 57 "data/maps/Route125/scripts.pory"
	release
# 58 "data/maps/Route125/scripts.pory"
	end
# 59 "data/maps/Route125/scripts.pory"

# 60 "data/maps/Route125/scripts.pory"
Route125_EventScript_RematchErnest::
# 61 "data/maps/Route125/scripts.pory"
	trainerbattle_rematch TRAINER_ERNEST_1, Route125_Text_ErnestRematchIntro, Route125_Text_ErnestRematchDefeat
# 62 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRematchPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route125/scripts.pory"
	end
# 64 "data/maps/Route125/scripts.pory"

# 65 "data/maps/Route125/scripts.pory"
Route125_EventScript_Kim::
# 66 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_KIM_AND_IRIS, Route125_Text_KimIntro, Route125_Text_KimDefeat
# 67 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route125/scripts.pory"
	end
# 69 "data/maps/Route125/scripts.pory"

# 70 "data/maps/Route125/scripts.pory"
Route125_EventScript_Iris::
# 71 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_KIM_AND_IRIS, Route125_Text_IrisIntro, Route125_Text_IrisDefeat
# 72 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route125/scripts.pory"
	end
# 74 "data/maps/Route125/scripts.pory"

# 75 "data/maps/Route125/scripts.pory"
Route125_EventScript_Auron::
# 76 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_AURON, Route125_Text_AuronIntro, Route125_Text_AuronDefeat
# 77 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route125/scripts.pory"
	end

Route125_EventScript_Presley2::
# 82 "data/maps/Route125/scripts.pory"
	msgbox Route125_EventScript_Presley2_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route125/scripts.pory"
	givemon SPECIES_CORVIKNIGHT, 0, ITEM_LEFTOVERS, ITEM_CHERISH_BALL, 8, 2, MON_MALE, 252, 0, 252, 0, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_HARD_PRESS, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_ROOST, TRUE
# 84 "data/maps/Route125/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CORVIKNIGHT
# 85 "data/maps/Route125/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CORVIKNIGHT
# 86 "data/maps/Route125/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/Route125/scripts.pory"
	message Route125_EventScript_Presley2_Text_1
# 88 "data/maps/Route125/scripts.pory"
	waitmessage
# 89 "data/maps/Route125/scripts.pory"
	waitfanfare
# 90 "data/maps/Route125/scripts.pory"
	call Common_EventScript_Nickname
# 91 "data/maps/Route125/scripts.pory"
	msgbox Route125_EventScript_Presley2_Text_2, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route125/scripts.pory"
	giveitem ITEM_CORVIKNIGHTITE, 1
# 93 "data/maps/Route125/scripts.pory"
	setflag FLAG_ROUTE_125_BOSS_DEFEATED
# 94 "data/maps/Route125/scripts.pory"
	msgbox Route125_EventScript_Presley2_Text_3, MSGBOX_AUTOCLOSE
	return


Route125_EventScript_Presley::
# 98 "data/maps/Route125/scripts.pory"
	lock
# 99 "data/maps/Route125/scripts.pory"
	faceplayer
# 100 "data/maps/Route125/scripts.pory"
	checktrainerflag TRAINER_NOLEN
	goto_if 1, Route125_EventScript_Presley_5
Route125_EventScript_Presley_3:
# 114 "data/maps/Route125/scripts.pory"
	msgbox Route125_EventScript_Presley_Text_0, MSGBOX_NPC
Route125_EventScript_Presley_1:
# 116 "data/maps/Route125/scripts.pory"
	release
	end

Route125_EventScript_Presley_2:
# 107 "data/maps/Route125/scripts.pory"
	setflag B_FLAG_NO_BAG_USE
# 108 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat, Route125_EventScript_Presley2
# 109 "data/maps/Route125/scripts.pory"
	clearflag B_FLAG_NO_BAG_USE
# 110 "data/maps/Route125/scripts.pory"
	msgbox Route125_EventScript_Presley2_Text_3, MSGBOX_AUTOCLOSE
	goto Route125_EventScript_Presley_1

Route125_EventScript_Presley_4:
# 102 "data/maps/Route125/scripts.pory"
	checktrainerflag TRAINER_TANYA
	goto_if 1, Route125_EventScript_Presley_9
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_5:
# 101 "data/maps/Route125/scripts.pory"
	checktrainerflag TRAINER_STAN
	goto_if 1, Route125_EventScript_Presley_4
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_8:
# 104 "data/maps/Route125/scripts.pory"
	checktrainerflag TRAINER_ERNEST_1
	goto_if 1, Route125_EventScript_Presley_13
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_9:
# 103 "data/maps/Route125/scripts.pory"
	checktrainerflag TRAINER_SHARON
	goto_if 1, Route125_EventScript_Presley_8
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_12:
# 106 "data/maps/Route125/scripts.pory"
	checktrainerflag TRAINER_AURON
	goto_if 1, Route125_EventScript_Presley_2
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_13:
# 105 "data/maps/Route125/scripts.pory"
	checktrainerflag TRAINER_KIM_AND_IRIS
	goto_if 1, Route125_EventScript_Presley_12
	goto Route125_EventScript_Presley_3


Route125_EventScript_Presley2_Text_0:
# 82 "data/maps/Route125/scripts.pory"
	.string "I guess not.\nHere, this'll be worth your time!$"

Route125_EventScript_Presley2_Text_1:
# 87 "data/maps/Route125/scripts.pory"
	.string "{PLAYER} received a Corviknight!$"

Route125_EventScript_Presley2_Text_2:
# 91 "data/maps/Route125/scripts.pory"
	.string "Also, this is for extra power.$"

Route125_EventScript_Presley2_Text_3:
# 94 "data/maps/Route125/scripts.pory"
	.string "Holding a Corviknightite,\nyour Corviknight can become just as\lstrong as mine!\pMaybe even stronger.$"

Route125_EventScript_Presley_Text_0:
# 114 "data/maps/Route125/scripts.pory"
	.string "I am a strong Bird Keeper in the sea.\pIf you wish to challenge me,\nI suggest you defeat everyone here\lfirst, then come here again.\pI'll be waiting.$"


Route125_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route125_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_OnFrame
	.byte 0

Route125_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_StartKyogreWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_StartKyogreWeather
	end

Route125_OnLoad:
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_EventScript_PlaceTilesRoute125West
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_EventScript_PlaceTilesRoute125East
	end

Route125_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route125_EventScript_Nolen::
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Stan::
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Tanya::
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Sharon::
	trainerbattle_single TRAINER_SHARON, Route125_Text_SharonIntro, Route125_Text_SharonDefeat
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Ernest::
	trainerbattle_single TRAINER_ERNEST_1, Route125_Text_ErnestIntro, Route125_Text_ErnestDefeat
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route125_EventScript_Kim::
	trainerbattle_single TRAINER_KIM_AND_IRIS, Route125_Text_KimIntro, Route125_Text_KimDefeat
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Iris::
	trainerbattle_single TRAINER_KIM_AND_IRIS, Route125_Text_IrisIntro, Route125_Text_IrisDefeat
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Auron::
	trainerbattle_single TRAINER_AURON, Route125_Text_AuronIntro, Route125_Text_AuronDefeat
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
	end

Route125_EventScript_Presley2::
	msgbox Route125_EventScript_Presley2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_CORVIKNIGHT, 0, ITEM_LEFTOVERS, ITEM_CHERISH_BALL, 8, 2, MON_MALE, 252, 0, 252, 0, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_HARD_PRESS, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_ROOST, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_CORVIKNIGHT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CORVIKNIGHT
	playfanfare MUS_OBTAIN_ITEM
	message Route125_EventScript_Presley2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route125_EventScript_Presley2_Text_2, MSGBOX_AUTOCLOSE
	giveitem ITEM_CORVIKNIGHTITE, 1
	setflag FLAG_ROUTE_125_BOSS_DEFEATED
	msgbox Route125_EventScript_Presley2_Text_3, MSGBOX_AUTOCLOSE
	return


Route125_EventScript_Presley::
	lock
	faceplayer
	checktrainerflag TRAINER_NOLEN
	goto_if 1, Route125_EventScript_Presley_5
Route125_EventScript_Presley_3:
	msgbox Route125_EventScript_Presley_Text_0, MSGBOX_NPC
Route125_EventScript_Presley_1:
	release
	end

Route125_EventScript_Presley_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat, Route125_EventScript_Presley2
	clearflag B_FLAG_NO_BAG_USE
	msgbox Route125_EventScript_Presley2_Text_3, MSGBOX_AUTOCLOSE
	goto Route125_EventScript_Presley_1

Route125_EventScript_Presley_4:
	checktrainerflag TRAINER_TANYA
	goto_if 1, Route125_EventScript_Presley_9
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_5:
	checktrainerflag TRAINER_STAN
	goto_if 1, Route125_EventScript_Presley_4
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_8:
	checktrainerflag TRAINER_ERNEST_1
	goto_if 1, Route125_EventScript_Presley_13
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_9:
	checktrainerflag TRAINER_SHARON
	goto_if 1, Route125_EventScript_Presley_8
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_12:
	checktrainerflag TRAINER_AURON
	goto_if 1, Route125_EventScript_Presley_2
	goto Route125_EventScript_Presley_3

Route125_EventScript_Presley_13:
	checktrainerflag TRAINER_KIM_AND_IRIS
	goto_if 1, Route125_EventScript_Presley_12
	goto Route125_EventScript_Presley_3


Route125_EventScript_Presley2_Text_0:
	.string "I guess not.\nHere, this'll be worth your time!$"

Route125_EventScript_Presley2_Text_1:
	.string "{PLAYER} received a Corviknight!$"

Route125_EventScript_Presley2_Text_2:
	.string "Also, this is for extra power.$"

Route125_EventScript_Presley2_Text_3:
	.string "Holding a Corviknightite,\nyour Corviknight can become just as\lstrong as mine!\pMaybe even stronger.$"

Route125_EventScript_Presley_Text_0:
	.string "I am a strong Bird Keeper in the sea.\pIf you wish to challenge me,\nI suggest you defeat everyone here\lfirst, then come here again.\pI'll be waiting.$"

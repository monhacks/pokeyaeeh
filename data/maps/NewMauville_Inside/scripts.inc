# 1 "data/maps/NewMauville_Inside/scripts.pory"

# 2 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_MapScripts::
# 3 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMauville_Inside_OnResume
# 4 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Inside_OnTransition
# 5 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Inside_OnLoad
# 6 "data/maps/NewMauville_Inside/scripts.pory"
	.byte 0
# 7 "data/maps/NewMauville_Inside/scripts.pory"

# 8 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume:
# 9 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 10 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 11 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauville_Inside_EventScript_TryRemoveVoltorb
# 12 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 13 "data/maps/NewMauville_Inside/scripts.pory"

# 14 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_TryRemoveVoltorb::
# 15 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 17 "data/maps/NewMauville_Inside/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 19 "data/maps/NewMauville_Inside/scripts.pory"

# 20 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition:
# 21 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 22 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 23 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb1
# 24 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb2
# 25 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb3
# 26 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 27 "data/maps/NewMauville_Inside/scripts.pory"

# 28 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb1::
# 29 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1
# 30 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 31 "data/maps/NewMauville_Inside/scripts.pory"

# 32 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb2::
# 33 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2
# 34 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 35 "data/maps/NewMauville_Inside/scripts.pory"

# 36 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb3::
# 37 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3
# 38 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 39 "data/maps/NewMauville_Inside/scripts.pory"

# 40 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnLoad:
# 41 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq VAR_NEW_MAUVILLE_STATE, 2, NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 42 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 43 "data/maps/NewMauville_Inside/scripts.pory"

# 44 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_BlueButton::
# 45 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 46 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 48 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 49 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 50 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 51 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 52 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 53 "data/maps/NewMauville_Inside/scripts.pory"

# 54 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GreenButton::
# 55 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 56 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 57 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 1
# 58 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 59 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 60 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 62 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 63 "data/maps/NewMauville_Inside/scripts.pory"

# 64 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateBlueButton::
# 65 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 66 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 67 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 68 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 69 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 70 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 71 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 72 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 73 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 74 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 75 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 76 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 77 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 78 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 79 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 80 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 81 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 82 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 83 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 84 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 85 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 86 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 87 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 88 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 89 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 90 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 91 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 92 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 93 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 94 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 95 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, FALSE
# 96 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Pressed, FALSE
# 97 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Pressed, FALSE
# 98 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Green, FALSE
# 99 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Green, FALSE
# 100 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Green, FALSE
# 101 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Green, FALSE
# 102 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 103 "data/maps/NewMauville_Inside/scripts.pory"

# 104 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateGreenButton::
# 105 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 106 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 107 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 108 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 109 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 110 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 111 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 112 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 113 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 114 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 115 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 116 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 117 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 118 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 119 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 120 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 121 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 122 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 123 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 124 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 125 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 126 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 127 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 128 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 129 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 130 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 131 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 132 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 133 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 134 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 135 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Pressed, FALSE
# 136 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Pressed, FALSE
# 137 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Blue, FALSE
# 138 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Blue, FALSE
# 139 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, FALSE
# 140 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Blue, FALSE
# 141 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Blue, FALSE
# 142 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 143 "data/maps/NewMauville_Inside/scripts.pory"

# 144 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_RedButton::
# 145 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 146 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped, MSGBOX_AUTOCLOSE
# 147 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 148 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 149 "data/maps/NewMauville_Inside/scripts.pory"
	@ show rotom
# 150 "data/maps/NewMauville_Inside/scripts.pory"
	delay 60
# 151 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 152 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 153 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 154 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 155 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 156 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 157 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 158 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_TheWildRotomAttacked, MSGBOX_AUTOCLOSE
# 159 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_ROTOM, 0, ITEM_MAGNET, NATURE_MODEST, 2, 0, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_THUNDER_SHOCK, MOVE_HYPER_VOICE, MOVE_HEX, MOVE_DOUBLE_TEAM
# 160 "data/maps/NewMauville_Inside/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 161 "data/maps/NewMauville_Inside/scripts.pory"
	waitstate
# 162 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_TheWildRotomDroppedSomething, MSGBOX_AUTOCLOSE
# 163 "data/maps/NewMauville_Inside/scripts.pory"
	giveitem ITEM_ROTOM_CATALOG
# 164 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 2
# 165 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 166 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 167 "data/maps/NewMauville_Inside/scripts.pory"

# 168 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetGeneratorOffMetatiles::
# 169 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 6, METATILE_BikeShop_Button_Pressed, FALSE
# 170 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 2, METATILE_BikeShop_Generator_Off_Tile0, TRUE
# 171 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 2, METATILE_BikeShop_Generator_Off_Tile1, TRUE
# 172 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 2, METATILE_BikeShop_Generator_Off_Tile2, TRUE
# 173 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 2, METATILE_BikeShop_Generator_Off_Tile3, TRUE
# 174 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 3, METATILE_BikeShop_Generator_Off_Tile4, TRUE
# 175 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 3, METATILE_BikeShop_Generator_Off_Tile5, TRUE
# 176 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 3, METATILE_BikeShop_Generator_Off_Tile6, TRUE
# 177 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 3, METATILE_BikeShop_Generator_Off_Tile7, TRUE
# 178 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 179 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 180 "data/maps/NewMauville_Inside/scripts.pory"

# 181 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Generator::
# 182 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 183 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, NewMauville_Inside_EventScript_GeneratorOff
# 184 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
# 185 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 186 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 187 "data/maps/NewMauville_Inside/scripts.pory"

# 188 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GeneratorOff::
# 189 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
# 190 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 191 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 192 "data/maps/NewMauville_Inside/scripts.pory"

# 193 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1::
# 194 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 195 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 196 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 0
# 197 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 198 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 199 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 200 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 201 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 202 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 203 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 204 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 205 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 206 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 207 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb1
# 208 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 209 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 210 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 211 "data/maps/NewMauville_Inside/scripts.pory"

# 212 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb1::
# 213 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 214 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 215 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 216 "data/maps/NewMauville_Inside/scripts.pory"

# 217 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2::
# 218 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 219 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 220 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 0
# 221 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 222 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 223 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 224 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 225 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 226 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 227 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 228 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 229 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 230 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 231 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb2
# 232 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 233 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 234 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 235 "data/maps/NewMauville_Inside/scripts.pory"

# 236 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb2::
# 237 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 238 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 239 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 240 "data/maps/NewMauville_Inside/scripts.pory"

# 241 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3::
# 242 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 243 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 244 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 0
# 245 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 246 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 247 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 248 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 249 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 250 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 251 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 252 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 253 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 254 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 255 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb3
# 256 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 257 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 258 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 259 "data/maps/NewMauville_Inside/scripts.pory"

# 260 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb3::
# 261 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 262 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 263 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 264 "data/maps/NewMauville_Inside/scripts.pory"

# 265 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Scientist::
# 266 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 267 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 268 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_LeagueHiredUs, MSGBOX_NPC
# 269 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 270 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 271 "data/maps/NewMauville_Inside/scripts.pory"

# 272 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorRadiatingHeat:
# 273 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator is radiating heat that\n"
# 274 "data/maps/NewMauville_Inside/scripts.pory"
	.string "can be felt even at a distance.\p"
# 275 "data/maps/NewMauville_Inside/scripts.pory"
	.string "It looks like it should be turned off\n"
# 276 "data/maps/NewMauville_Inside/scripts.pory"
	.string "as soon as possible.$"
# 277 "data/maps/NewMauville_Inside/scripts.pory"

# 278 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorQuietedDown:
# 279 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator quieted down.$"
# 280 "data/maps/NewMauville_Inside/scripts.pory"

# 281 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped:
# 282 "data/maps/NewMauville_Inside/scripts.pory"
	.string "{PLAYER} stepped on the switch.\p"
# 283 "data/maps/NewMauville_Inside/scripts.pory"
	.string "Click…\p"
# 284 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\n"
# 285 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\p"
# 286 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator appears to have\n"
# 287 "data/maps/NewMauville_Inside/scripts.pory"
	.string "stopped…\p"
# 288 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\n"
# 289 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\p"
# 290 "data/maps/NewMauville_Inside/scripts.pory"
	.string "A Pokemon came out of the generator!$"
# 291 "data/maps/NewMauville_Inside/scripts.pory"

# 292 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_TheWildRotomAttacked:
# 293 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The wild Rotom attacked!$"
# 294 "data/maps/NewMauville_Inside/scripts.pory"

# 295 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_TheWildRotomDroppedSomething:
# 296 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The wild Rotom dropped something.$"
# 297 "data/maps/NewMauville_Inside/scripts.pory"

# 298 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_LeagueHiredUs:
# 299 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The League hired us to take care of\n"
# 300 "data/maps/NewMauville_Inside/scripts.pory"
	.string "the generator in Wattson's absence.\p"
# 301 "data/maps/NewMauville_Inside/scripts.pory"
	.string "If there's any emergency next time\n"
# 302 "data/maps/NewMauville_Inside/scripts.pory"
	.string "we'll try our best to handle it!$"

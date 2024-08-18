# 1 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 11 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
# 13 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx:: @@ this does nothing now. I hate you old man!
# 16 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	special SetMauvilleOldManObjEventGfx
# 17 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_MauvilleOldManCrying::
# 20 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    msgbox MauvilleCity_PokemonCenter_1F_Text_MauvilleOldManCrying, MSGBOX_NPC
# 21 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
# 24 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 25 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 26 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 27 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 28 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
# 32 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
# 33 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
# 36 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
# 37 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
# 40 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
# 41 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MauvilleOldManCrying:
# 44 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
    .string "I used to tell stories to\n"
# 45 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "young adventurers.\p"
# 46 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "But now…\p"
# 47 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I'm nothing.\p"
# 48 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Just a crazy old man waiting\n"
# 49 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "for his time to come.$"
# 50 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
# 52 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "That man over there, he used to say\n"
# 53 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "some weird things!\p"
# 54 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "He's funny in a weird way.\n"
# 55 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I doubt I'll forget about him!$"
# 56 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
# 58 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "When I accessed the Record Corner,\n"
# 59 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the data for what's hot in Dewford\l"
# 60 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "got updated.\p"
# 61 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "Now that bit of data is the same\n"
# 62 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "as my friend's!$"
# 63 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
# 65 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "A Record Corner opened upstairs in\n"
# 66 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "the Pokémon Center.\p"
# 67 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "I don't know what it's about, but it\n"
# 68 "data/maps/MauvilleCity_PokemonCenter_1F/scripts.pory"
	.string "sounds fun. I'll go check it out!$"

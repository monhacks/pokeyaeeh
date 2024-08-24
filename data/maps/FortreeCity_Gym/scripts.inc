# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_Gym_OnResume
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_Gym/scripts.pory"

# 7 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnResume:
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_METAL_TERRAIN
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 10 "data/maps/FortreeCity_Gym/scripts.pory"

# 11 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 12 "data/maps/FortreeCity_Gym/scripts.pory"
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_METAL_TERRAIN
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 14 "data/maps/FortreeCity_Gym/scripts.pory"

# 15 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 16 "data/maps/FortreeCity_Gym/scripts.pory"
    setflag B_FLAG_NO_BAG_USE
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 20 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FLASH_CANNON, FortreeCity_Gym_EventScript_GiveFlashCannon2
# 21 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 24 "data/maps/FortreeCity_Gym/scripts.pory"

# 25 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 29 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_AUTOCLOSE
# 30 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_MAWILITE
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveFlashCannon
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_EMBER_RIDGE_STATE, 1
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 53 "data/maps/FortreeCity_Gym/scripts.pory"

# 54 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveFlashCannon2::
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GiveFlashCannon, MSGBOX_AUTOCLOSE
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_FLASH_CANNON
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFlashCannon, MSGBOX_DEFAULT
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FLASH_CANNON
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 62 "data/maps/FortreeCity_Gym/scripts.pory"

# 63 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveFlashCannon::
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GiveFlashCannon, MSGBOX_AUTOCLOSE
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_FLASH_CANNON
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFlashCannon, MSGBOX_DEFAULT
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FLASH_CANNON
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 70 "data/maps/FortreeCity_Gym/scripts.pory"

# 71 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 75 "data/maps/FortreeCity_Gym/scripts.pory"

# 76 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 80 "data/maps/FortreeCity_Gym/scripts.pory"

# 81 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 85 "data/maps/FortreeCity_Gym/scripts.pory"

# 86 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 90 "data/maps/FortreeCity_Gym/scripts.pory"

# 91 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 95 "data/maps/FortreeCity_Gym/scripts.pory"

# 96 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 100 "data/maps/FortreeCity_Gym/scripts.pory"

# 101 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Acheron::
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KEEGAN, FortreeCity_Gym_Text_AcheronIntro, FortreeCity_Gym_Text_AcheronDefeat
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AcheronPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 105 "data/maps/FortreeCity_Gym/scripts.pory"

# 106 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 113 "data/maps/FortreeCity_Gym/scripts.pory"

# 114 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 118 "data/maps/FortreeCity_Gym/scripts.pory"

# 119 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 124 "data/maps/FortreeCity_Gym/scripts.pory"

# 125 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 130 "data/maps/FortreeCity_Gym/scripts.pory"

# 131 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 135 "data/maps/FortreeCity_Gym/scripts.pory"

# 136 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 140 "data/maps/FortreeCity_Gym/scripts.pory"

# 141 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, Champion-\n"
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree Gym Leader Krypto is\n"
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of Steel-type Pokémon.\p"
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "He's waiting for new challengers\n"
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 149 "data/maps/FortreeCity_Gym/scripts.pory"

# 150 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've beaten Krypto at his own game!$"
# 153 "data/maps/FortreeCity_Gym/scripts.pory"

# 154 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the powerful battle style of\n"
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "my Steel-type Pokémon!$"
# 157 "data/maps/FortreeCity_Gym/scripts.pory"

# 158 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 161 "data/maps/FortreeCity_Gym/scripts.pory"

# 162 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A Trainer has to be smart to keep\n"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our Leader?$"
# 167 "data/maps/FortreeCity_Gym/scripts.pory"

# 168 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Steel-type fanatics all around Hoenn.\n"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "want to join this Gym.\p"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the Fortree Gym,\n"
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"

# 174 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"

# 178 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough Trainers.\p"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 183 "data/maps/FortreeCity_Gym/scripts.pory"

# 184 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for Krypto, our Gym\n"
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Leader, to deal with you!\p"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto, I…\n"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"

# 193 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto is the greatest!\p"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "…\p"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypgoat!$"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"

# 198 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto taught me personally!\n"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"

# 202 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"

# 205 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to Krypto, the people of\n"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree can live without fear.$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When Krypto takes to battle, he\n"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "destroys everything in his way!\p"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that!$"
# 213 "data/maps/FortreeCity_Gym/scripts.pory"

# 214 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"

# 218 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto is an insane Trainer!$"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"

# 222 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of Steel-type Pokémon.\p"
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"

# 227 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 229 "data/maps/FortreeCity_Gym/scripts.pory"

# 230 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our Leader\l"
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto's Pokémon are all business.$"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"

# 235 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AcheronIntro:
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The metals shall be in your face!$"
# 237 "data/maps/FortreeCity_Gym/scripts.pory"

# 238 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AcheronDefeat:
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ow, dang it!$"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"

# 241 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AcheronPostBattle:
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I may have lost, but Krypto won't go\n"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "down that easily!$"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"

# 245 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Welcome, challenger.\p"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Great job on getting past my Gym\n"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Trainers.\p"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "They are push-overs anyway…\p"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But now!\n"
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You must face my Steel-type Pokémon\l"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and their overwhelming intensity!$"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"

# 254 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "What?!\n"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No way…!\p"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "After all of that strategizing just to\n"
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "be melted to nothing but a puddle of\l"
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "metal!$"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"

# 261 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the Hexnut Badge\n"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from Krypto.$"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"

# 265 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the Hexnut Badge, all Pokémon up\n"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to Lv 65, even those received through\l"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "For my first gift, take this Mega Stone,\n"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "for one of my favorite Pokémon… Mawile.\n"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I pray she does you well.$"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"

# 273 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GiveFlashCannon:
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this is another gift from me.$"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"

# 276 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFlashCannon:
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM20 contains Flash Cannon.\p"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A powerful Steel-type attack that has a\n"
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "chance to lower the foe's Special\l"
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Defense.\p"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A reliable and powerful move.\p"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"

# 284 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered Gym Leader Krypto\n"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the PokéNav.$"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"

# 288 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Go on, challenger,\n"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "that is all I have for you.\p"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Good luck!$"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"

# 293 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree City Pokémon Gym\p"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto's certified Trainers:\n"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wally$"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"

# 298 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree City Pokémon Gym\p"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto's certified Trainers:\n"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wally and {PLAYER}$"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"

# 303 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto: We humans can never escape\n"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"

# 313 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"

# 316 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto: Even though I have lost,\n"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"

# 323 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Krypto: We humans can never escape\n"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 327 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon with you?\p"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two Pokémon\n"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

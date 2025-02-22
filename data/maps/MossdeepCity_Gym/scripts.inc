
.set LOCALID_NINJABOY_1, 2
.set LOCALID_NINJABOY_2, 3
.set LOCALID_COOLTRAINER_M, 5
.set LOCALID_HEXMANIAC, 6
.set LOCALID_NINJABOY_3, 7
.set LOCALID_NINJABOY_4, 8
.set LOCALID_COOLTRAINER_F, 9
.set LOCALID_CAMPER, 10

MossdeepCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, MossdeepCity_Gym_OnResume
	.byte 0

MossdeepCity_Gym_OnTransition:
	checktrainerflag TRAINER_PRESTON
	call_if TRUE, MossdeepCity_Gym_PrestonMove
	checktrainerflag TRAINER_VIRGIL
	call_if TRUE, MossdeepCity_Gym_VirgilMove
	checktrainerflag TRAINER_NATE
	call_if TRUE, MossdeepCity_Gym_NateMove
	checktrainerflag TRAINER_SYLVIA
	call_if TRUE, MossdeepCity_Gym_SylviaMove
	checktrainerflag TRAINER_CLIFFORD
	call_if TRUE, MossdeepCity_Gym_CliffordMove
	checktrainerflag TRAINER_MACEY
	call_if TRUE, MossdeepCity_Gym_MaceyMove
	checktrainerflag TRAINER_KATHLEEN
	call_if TRUE, MossdeepCity_Gym_KathleenMove
	checktrainerflag TRAINER_NICHOLAS
	call_if TRUE, MossdeepCity_Gym_NicholasMove
	return

MossdeepCity_Gym_OnResume:
	call MossdeepCity_Gym_OnTransition
	end

MossdeepCity_Gym_PrestonMove::
	setobjectmovementtype LOCALID_NINJABOY_1, MOVEMENT_TYPE_FACE_DOWN
	return

MossdeepCity_Gym_VirgilMove::
	setobjectmovementtype LOCALID_NINJABOY_2, MOVEMENT_TYPE_FACE_DOWN
	return

MossdeepCity_Gym_NateMove::
	setobjectmovementtype LOCALID_COOLTRAINER_M, MOVEMENT_TYPE_FACE_DOWN
	return

MossdeepCity_Gym_SylviaMove::
	setobjectmovementtype LOCALID_HEXMANIAC, MOVEMENT_TYPE_FACE_DOWN
	return

MossdeepCity_Gym_CliffordMove::
	setobjectmovementtype LOCALID_NINJABOY_3, MOVEMENT_TYPE_FACE_DOWN
	return

MossdeepCity_Gym_MaceyMove::
	setobjectmovementtype LOCALID_NINJABOY_4, MOVEMENT_TYPE_FACE_DOWN
	return

MossdeepCity_Gym_KathleenMove::
	setobjectmovementtype LOCALID_COOLTRAINER_F, MOVEMENT_TYPE_FACE_DOWN
	return

MossdeepCity_Gym_NicholasMove::
	setobjectmovementtype LOCALID_CAMPER, MOVEMENT_TYPE_FACE_DOWN
	return

MossdeepCity_Gym_EventScript_GiveCalmMind2::
	giveitem ITEM_TM_VENOSHOCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_VENOSHOCK
	release
	end

MossdeepCity_Gym_EventScript_GiveCalmMind::
	giveitem ITEM_TM_VENOSHOCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_VENOSHOCK
	return

MossdeepCity_Gym_EventScript_TateAndLizaRematch::
	trainerbattle_rematch TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

@ Leftover from RS, functionally unused
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
	delay_16
	delay_16
	step_end

MossdeepCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_GymStatueCertified::
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue::
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, Champion-bound\n"
	.string "{PLAYER}?\p"
	.string "Light, the Gym Leader, here uses\n"
	.string "Poison-type Pokémon.\p"
	.string "If you go up against them with\n"
	.string "Grass or Fairy-type Pokémon,\l"
	.string "they'll inflict horrible damage!\p"
	.string "Plus, they'll come at you with\n"
	.string "outstanding combination attacks.\p"
	.string "If you want to win, you'll need to show\n"
	.string "them how tight you are with your\l"
	.string "Pokémon. Go for it!\p"
	.string "Also, if you're wondering,\n"
	.string "there's 8 Trainers here.\p"
	.string "They are invisible to the naked eye.\p"
	.string "You cannot see them. But,\n"
	.string "if you get close to them,\l"
	.string "they'll sense you.$"


MossdeepCity_Gym_Text_GymGuidePostVictory:
	.string "Wow, you're astounding!\n"
	.string "You're one great Trainer!$"

MossdeepCity_Gym_Text_PrestonIntro:
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

MossdeepCity_Gym_Text_PrestonDefeat:
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

MossdeepCity_Gym_Text_PrestonPostBattle:
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

MossdeepCity_Gym_Text_VirgilIntro:
	.string "Let me see your talent!$"

MossdeepCity_Gym_Text_VirgilDefeat:
	.string "You possess spectacular talent!$"

MossdeepCity_Gym_Text_VirgilPostBattle:
	.string "Your talent is superb!$"

MossdeepCity_Gym_Text_SylviaIntro:
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

MossdeepCity_Gym_Text_SylviaDefeat:
	.string "What you do…\n"
	.string "It horrifies me…$"

MossdeepCity_Gym_Text_SylviaPostBattle:
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

MossdeepCity_Gym_Text_NateIntro:
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the Poison-type can be.$"

MossdeepCity_Gym_Text_NateDefeat:
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

MossdeepCity_Gym_Text_NatePostBattle:
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

MossdeepCity_Gym_Text_KathleenIntro:
	.string "Let me show you a perfectly awful,\n"
	.string "horrifying time!$"

MossdeepCity_Gym_Text_KathleenDefeat:
	.string "N-nooooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle:
	.string "Your vitality is contagious!\n"
	.string "Get away from me quickly!$"

MossdeepCity_Gym_Text_CliffordIntro:
	.string "I may be a little boy, but I suggest\n"
	.string "you not patronize me.$"

MossdeepCity_Gym_Text_CliffordDefeat:
	.string "Ah, you overflow with the power\n"
	.string "of knowledge!$"

MossdeepCity_Gym_Text_CliffordPostBattle:
	.string "It seems that I could not overcome\n"
	.string "your smartness.$"

MossdeepCity_Gym_Text_MaceyIntro:
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

MossdeepCity_Gym_Text_MaceyDefeat:
	.string "How could you be so ludicrously\n"
	.string "strong?$"

MossdeepCity_Gym_Text_MaceyPostBattle:
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the Poison-type!\p"
	.string "The way you battle is somehow shabby!$"

MossdeepCity_Gym_Text_NicholasIntro:
	.string "Wroooar! Have a taste of my super\n"
	.string "Pokémon hard-battling power!$"

MossdeepCity_Gym_Text_NicholasDefeat:
	.string "Oh!\n"
	.string "Done in!$"

MossdeepCity_Gym_Text_NicholasPostBattle:
	.string "All right! I think I'll develop a special\n"
	.string "invincible Pokémon power next.$"

MossdeepCity_Gym_Text_TateAndLizaIntro:
	.string "Light: Fufufu… So you did beat\n"
	.string "everyone, here!\p"
	.string "I command power way beyond your\n"
	.string "comprehension.\p"
	.string "Prepare to get eroded by my toxins!$"

MossdeepCity_Gym_Text_TateAndLizaDefeat:
	.string "Light: It seems my toxins aren't potent\n"
	.string "enough…$"

MossdeepCity_Gym_Text_ReceivedMindBadge:
	.string "{PLAYER} received the Toxic Badge\n"
	.string "from Light.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
	.string "Light: With the Toxic Badge,\n"
	.string "all Pokémon upto Lv 70 will obey you\l"
	.string "without question.\p"
	.string "You can also use Dive outside of battle.\p"
	.string "Take this with you, too!$"

MossdeepCity_Gym_Text_ExplainCalmMind:
	.string "Light: TM107 contains Venoshock!\p"
	.string "A strong special Poison-type attack\n"
	.string "that deals double damage if the foe is\l"
	.string "poisoned.\p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_RegisteredTateAndLiza:
	.string "Registered Gym Leader Light\n"
	.string "in the PokéNav.$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle:
	.string "Light: Looks like the bond between you\n"
	.string "and your Pokémon were able to overcome\l"
	.string "my toxic strategy.\p"
	.string "You played fair! Good luck!$"

MossdeepCity_Gym_Text_GymStatue:
	.string "Mossdeep City Pokémon Gym\p"
	.string "Light certified Trainers:\n"
	.string "Wally$"

MossdeepCity_Gym_Text_GymStatueCertified:
	.string "Mossdeep City Pokémon Gym\p"
	.string "Light certified Trainers:\n"
	.string "Wally and {PLAYER}$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch:
	.string "Light: TBD$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
	.string "Light: TBD 2$"

MossdeepCity_Gym_Text_TateAndLizaPostRematch:
	.string "Light: TBD 3$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
	.string "Light: no$"

MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
	msgbox MossdeepCity_Gym_EventScript_TateAndLizaDefeated_Text_0, MSGBOX_DEFAULT
	message MossdeepCity_Gym_Text_ReceivedMindBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	clearflag FLAG_TOXIC_POISON_TEAM
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	setvar VAR_0x8008, 7
	giveitem ITEM_GENGARITE, 1
	msgbox MossdeepCity_Gym_EventScript_TateAndLizaDefeated_Text_1, MSGBOX_DEFAULT
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	setvar VAR_MOSSDEEP_CITY_STATE, 1
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	call MossdeepCity_Gym_EventScript_GiveCalmMind
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release
	end


MossdeepCity_Gym_EventScript_TateAndLiza::
	lock
	faceplayer
	checktrainerflag TRAINER_PRESTON
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_5
MossdeepCity_Gym_EventScript_TateAndLiza_3:
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Text_0, MSGBOX_NPC
MossdeepCity_Gym_EventScript_TateAndLiza_1:
	release
	end

MossdeepCity_Gym_EventScript_TateAndLiza_2:
	dotimebasedevents
	setflag B_FLAG_NO_BAG_USE
	setflag FLAG_TOXIC_POISON_TEAM
	trainerbattle_single TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
	shouldtryrematchbattle TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_EventScript_TateAndLizaRematch
	goto_if_unset FLAG_RECEIVED_TM_VENOSHOCK, MossdeepCity_Gym_EventScript_GiveCalmMind2
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_TateAndLiza_1

MossdeepCity_Gym_EventScript_TateAndLiza_4:
	checktrainerflag TRAINER_SYLVIA
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_5:
	checktrainerflag TRAINER_VIRGIL
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_4
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_8:
	checktrainerflag TRAINER_MACEY
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_13
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_9:
	checktrainerflag TRAINER_NATE
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_8
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_12:
	checktrainerflag TRAINER_NICHOLAS
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_16
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_13:
	checktrainerflag TRAINER_CLIFFORD
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_12
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3

MossdeepCity_Gym_EventScript_TateAndLiza_16:
	checktrainerflag TRAINER_KATHLEEN
	goto_if 1, MossdeepCity_Gym_EventScript_TateAndLiza_2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_3


MossdeepCity_Gym_EventScript_TateAndLizaDefeated_Text_0:
	.string "Congratulations.\n"
	.string "You win the toxic badge$"

MossdeepCity_Gym_EventScript_TateAndLizaDefeated_Text_1:
	.string "Light: When held by a Gengar,\n"
	.string "the Gengarite enables it to Mega Evolve\l"
	.string "and become an inescapable threat!\p"
	.string "And this as well.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Text_0:
	.string "Invisibility.\nI suggest you watch your steps,\nand be prepared to face any challenge!\pChallenge me after you beat all 8 of my\nTrainers.$"

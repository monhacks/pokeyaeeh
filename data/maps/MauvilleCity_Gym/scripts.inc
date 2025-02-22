
MauvilleCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
	.byte 0

MauvilleCity_Gym_OnLoad:
	end

MauvilleCity_Gym_EventScript_Wattson::
	dotimebasedevents
    setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
	shouldtryrematchbattle TRAINER_WATTSON_1, MauvilleCity_Gym_EventScript_WattsonRematch
	goto_if_unset FLAG_RECEIVED_TM_FIRE_BLAST, MauvilleCity_Gym_EventScript_GiveShockWave2
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_WattsonDefeated::
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	playse SE_UNLOCK
	call MauvilleCity_Gym_EventScript_GiveShockWave
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
	release
	end

MauvilleCity_Gym_EventScript_GiveShockWave2::
	giveitem ITEM_TM_HEAT_WAVE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_FIRE_BLAST
	release
	end

MauvilleCity_Gym_EventScript_GiveShockWave::
	giveitem ITEM_TM_HEAT_WAVE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_FIRE_BLAST
	return

MauvilleCity_Gym_EventScript_CompletedNewMauville::
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_WattsonRematch::
	trainerbattle_rematch TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Kirk::
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Shawn::
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Ben::
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Vivian::
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Angelo::
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
	goto MauvilleCity_Gym_EventScript_GymStatue
	end

MauvilleCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
	goto MauvilleCity_Gym_EventScript_GymStatue
	end

MauvilleCity_Gym_EventScript_GymStatueCertified::
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_EventScript_GymStatue::
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_Text_GymGuideAdvice:
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Ydarissep, the Leader of Mauville Gym,\n"
	.string "uses Fire-type Pokémon.\p"
	.string "If you challenge him with Grass-type\n"
	.string "Pokémon, he'll burn them!\p"
	.string "And, due to advancement in technology\n"
	.string "Ydarissep was able to hustle a mini sun\l"
	.string "inside the gym!\p"
	.string "It boosts the power of Fire-type\n"
	.string "attacks and lessens the power of\l"
	.string "Water-type attacks.\p"
	.string "Ground-type or Rock-type Pokémon\n"
	.string "are your best friends here.\p"
	.string "Go for it, Champ!\p"
	.string "Your fiery spirit burns bright!$"

MauvilleCity_Gym_Text_GymGuidePostVictory:
	.string "Whoa, you're burning hot!\n"
	.string "You've done it again, Champ!\p"
	.string "Onward to Fallabour, my friend!$"

MauvilleCity_Gym_Text_KirkIntro:
	.string "My fiery soul, it'll shatter your\n"
	.string "dreams whole, whoa-yeahah!$"

MauvilleCity_Gym_Text_KirkDefeat:
	.string "That was rough, man!$"

MauvilleCity_Gym_Text_KirkPostBattle:
	.string "I love Fire-types.\p"
	.string "We have a passion for burning!$"

MauvilleCity_Gym_Text_ShawnIntro:
	.string "I trained under Ydarissep!\n"
	.string "There ain't no way I'll lose easily!$"

MauvilleCity_Gym_Text_ShawnDefeat:
	.string "And I lost that easily…$"

MauvilleCity_Gym_Text_ShawnPostBattle:
	.string "Ydarissep, our Gym Leader, has been\n"
	.string "around for a long, long time.\p"
	.string "He was battling even before I was born!$"

MauvilleCity_Gym_Text_BenIntro:
	.string "This Gym's got the heat!\n"
	.string "Isn't it fun?$"

MauvilleCity_Gym_Text_BenDefeat:
	.string "It's no fun to lose…$"

MauvilleCity_Gym_Text_BenPostBattle:
	.string "Ydarissep says he likes setting\n"
	.string "public parks on fire.\p"
	.string "…\p"
	.string "There are no public parks in Hoenn!$"

MauvilleCity_Gym_Text_VivianIntro:
	.string "With my charm and my Pokémon's moves,\n"
	.string "you'll be cooled down!$"

MauvilleCity_Gym_Text_VivianDefeat:
	.string "I'm warmed by your power!$"

MauvilleCity_Gym_Text_VivianPostBattle:
	.string "I've heard that Ydarissep loves battling\n"
	.string "little kids.\p"
	.string "Not the best example, heh.$"

MauvilleCity_Gym_Text_AngeloIntro:
	.string "I love shiny things!$"

MauvilleCity_Gym_Text_AngeloDefeat:
	.string "Oh…\n"
	.string "My eyes are frazzled…$"

MauvilleCity_Gym_Text_AngeloPostBattle:
	.string "Mauville Gym's Ydarissep has a shiny\n"
	.string "forehead. It makes me happy!$"

MauvilleCity_Gym_Text_WattsonIntro:
	.string "Hello, young trainer.\n"
	.string "I am Ydarissep,\l"
	.string "the Gym Leader of Mauville City,\l"
	.string "though you probably already knew that.\p"
	.string "What you might not know is that,\n"
	.string "in my youth, I was a passionate bug\l"
	.string "catcher…\p"
	.string "However, I realized that Bug-type\n"
	.string "Pokémon weren't suited for my ambition\l"
	.string "to become a Gym Leader,\l"
	.string "as I constantly lost to Fire-type\l"
	.string "Pokémon regardless of my efforts.\p"
	.string "Since then, I've dedicated my life to\n"
	.string "Fire-type Pokémon.\p"
	.string "And it has been incredibly successful\n"
	.string "for me!\p"
	.string "Now that we've introduced ourselves,\n"
	.string "let me show you just how heated things\l"
	.string "can get around here!$"

MauvilleCity_Gym_Text_WattsonDefeat:
	.string "Wow, I've never seen someone with such\n"
	.string "a burning passion for battle like\l"
	.string "yours!\p"
	.string "Please, accept this Badge!$"

MauvilleCity_Gym_Text_WattsonNeedTwoPokemon:
    .string "Hello, young trainer.\p"
	.string "Congratulations on making it all the\n"
	.string "way to me!\p"
	.string "I would gladly battle you,\n"
	.string "but it seems you only have one Pokémon,\l"
	.string "it wouldn't be a fair fight.$"

MauvilleCity_Gym_Text_ReceivedDynamoBadge:
	.string "{PLAYER} received the Inferno Badge\n"
	.string "from Ydarissep.$"

MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
	.string "With the Inferno Badge, Pokémon can\n"
	.string "use Rock Smash out of battle.\p"
	.string "You should take this TM too,\n"
	.string "this is my favorite move!$"

MauvilleCity_Gym_Text_ExplainShockWave:
	.string "That TM84 there contains Heat Wave.\p"
	.string "It's a reliable move that never misses\n"
	.string "under sun!\p"
	.string "It can deal significant damage to both\n"
	.string "both of your opponents and\l"
	.string "occasionally inflict a burn!\p"
	.string "… … … … … …$"

MauvilleCity_Gym_Text_RegisteredWattson:
	.string "Registered Gym Leader Ydarissep\n"
	.string "in the PokéNav.$"

MauvilleCity_Gym_Text_WattsonPostBattle:
	.string "It's never disheartening to lose to\n"
	.string "such a promising trainer like yourself.\p"
	.string "It only fuels my desire to battle\n"
	.string "again.\l"
	.string "Next time, I will prevail!$"

MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
	.string "Wahahahah!\n"
	.string "Go forth and endeavor, young person!$"

MauvilleCity_Gym_Text_GymStatue:
	.string "Mauville City Pokémon Gym\p"
	.string "Ydarissep's certified Trainers:\n"
	.string "Wally$"

MauvilleCity_Gym_Text_GymStatueCertified:
	.string "Mauville City Pokémon Gym\p"
	.string "Ydarissep's certified Trainers:\n"
	.string "Wally and {PLAYER}$"

MauvilleCity_Gym_Text_WattsonPreRematch:
	.string "Ydarissep: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my Pokémon!\p"
	.string "Wahahahaha!\p"
	.string "I'll make sparks fly from you!\n"
	.string "Don't say I didn't warn you!$"

MauvilleCity_Gym_Text_WattsonRematchDefeat:
	.string "Oof…\n"
	.string "Our batteries ran dry…$"

MauvilleCity_Gym_Text_WattsonPostRematch:
	.string "Ydarissep: We'll have to recharge our\n"
	.string "batteries again.\p"
	.string "When we're fully charged up, we'll\n"
	.string "gladly accept your challenge.\p"
	.string "So, come back again sometime,\n"
	.string "won't you?$"

MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
	.string "Ydarissep: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my Pokémon!\p"
	.string "Wahahahaha!\p"
	.string "Oops! Wait!\n"
	.string "You've only one Pokémon with you!\p"
	.string "Come see me with two or more\n"
	.string "Pokémon, all right?$"

const u8 gText_MatchCallPkmnTrainer_Wally_Strategy[] = _("We let it all hang out.");
const u8 gText_MatchCallPkmnTrainer_Wally_Pokemon[] = _("The 1st Pokémon I caught.");
const u8 gText_MatchCallPkmnTrainer_Wally_Intro1[] = _("Pokémon and I have grown");
const u8 gText_MatchCallPkmnTrainer_Wally_Intro2[] = _("stronger together.");

const u8 gText_MatchCallRockinWhiz_Roxanne_Strategy[] = _("Rock-type power attack.");
const u8 gText_MatchCallRockinWhiz_Roxanne_Pokemon[] = _("I prefer rock-hard Pokémon.");
const u8 gText_MatchCallRockinWhiz_Roxanne_Intro1[] = _("A Leader of a big Gym bears");
const u8 gText_MatchCallRockinWhiz_Roxanne_Intro2[] = _("a lot of responsibility.");

const u8 gText_MatchCallTheBigHit_Brawly_Strategy[] = _("Direct physical action!");
const u8 gText_MatchCallTheBigHit_Brawly_Pokemon[] = _("Fighting Pokémon rule!");
const u8 gText_MatchCallTheBigHit_Brawly_Intro1[] = _("The world awaits me as the");
const u8 gText_MatchCallTheBigHit_Brawly_Intro2[] = _("next big wave!");

const u8 gText_MatchCallSwellShock_Wattson_Strategy[] = _("I choose to electrify.");
const u8 gText_MatchCallSwellShock_Wattson_Pokemon[] = _("Get shocked by electricity!");
const u8 gText_MatchCallSwellShock_Wattson_Intro1[] = _("One must never throw a");
const u8 gText_MatchCallSwellShock_Wattson_Intro2[] = _("match. Even I must not.");

const u8 gText_MatchCallPassionBurn_Flannery_Strategy[] = _("Battle aggressively.");
const u8 gText_MatchCallPassionBurn_Flannery_Pokemon[] = _("Burn with passion!");
const u8 gText_MatchCallPassionBurn_Flannery_Intro1[] = _("Completely wash away daily");
const u8 gText_MatchCallPassionBurn_Flannery_Intro2[] = _("fatigue in hot springs!");

const u8 gText_MatchCallReliableOne_Dad_Strategy[] = _("I flexibly adapt my style.");
const u8 gText_MatchCallReliableOne_Dad_Pokemon[] = _("Grown in a balanced manner.");
const u8 gText_MatchCallReliableOne_Dad_Intro1[] = _("I walk the 30 minutes from");
const u8 gText_MatchCallReliableOne_Dad_Intro2[] = _("home to here every day.");

const u8 gText_MatchCallSkyTamer_Winona_Strategy[] = _("I take advantage of speed.");
const u8 gText_MatchCallSkyTamer_Winona_Pokemon[] = _("Graceful sky dancers.");
const u8 gText_MatchCallSkyTamer_Winona_Intro1[] = _("The ultimate would be to");
const u8 gText_MatchCallSkyTamer_Winona_Intro2[] = _("live as one with nature.");

const u8 gText_MatchCallMysticDuo_TateAndLiza_Strategy[] = _("We battle in cooperation.");
const u8 gText_MatchCallMysticDuo_TateAndLiza_Pokemon[] = _("Always friendly Pokémon.");
const u8 gText_MatchCallMysticDuo_TateAndLiza_Intro1[] = _("Papa has trouble telling");
const u8 gText_MatchCallMysticDuo_TateAndLiza_Intro2[] = _("the two of us apart!");

const u8 gText_MatchCallDandyCharm_Juan_Strategy[] = _("I use splendid waterpower.");
const u8 gText_MatchCallDandyCharm_Juan_Pokemon[] = _("Pokémon of elegance!");
const u8 gText_MatchCallDandyCharm_Juan_Intro1[] = _("The adulation of beautiful");
const u8 gText_MatchCallDandyCharm_Juan_Intro2[] = _("ladies fills me with energy!");

const u8 gText_MatchCallEliteFour_Sidney_Strategy[] = _("Offense over defense!");
const u8 gText_MatchCallEliteFour_Sidney_Pokemon[] = _("The Dark side's beauties.");
const u8 gText_MatchCallEliteFour_Sidney_Intro1[] = _("They said I was a punk, but");
const u8 gText_MatchCallEliteFour_Sidney_Intro2[] = _("I'm one of the Elite Four!");

const u8 gText_MatchCallEliteFour_Phoebe_Strategy[] = _("Confuse and confound.");
const u8 gText_MatchCallEliteFour_Phoebe_Pokemon[] = _("There's nothing definite.");
const u8 gText_MatchCallEliteFour_Phoebe_Intro1[] = _("I wonder how my grandma at");
const u8 gText_MatchCallEliteFour_Phoebe_Intro2[] = _("Mt. Pyre is doing?");

const u8 gText_MatchCallEliteFour_Glacia_Strategy[] = _("I use items for help.");
const u8 gText_MatchCallEliteFour_Glacia_Pokemon[] = _("Flaming passion in icy cold!");
const u8 gText_MatchCallEliteFour_Glacia_Intro1[] = _("The ICE type can be better");
const u8 gText_MatchCallEliteFour_Glacia_Intro2[] = _("trained in this hot land.");

const u8 gText_MatchCallEliteFour_Drake_Strategy[] = _("Harness strong abilities.");
const u8 gText_MatchCallEliteFour_Drake_Pokemon[] = _("The raw power of Dragons!");
const u8 gText_MatchCallEliteFour_Drake_Intro1[] = _("I dedicate myself to the");
const u8 gText_MatchCallEliteFour_Drake_Intro2[] = _("Pokémon that saved me.");

const u8 gText_MatchCallChampion_Wallace_Strategy[] = _("Dignity and respect.");
const u8 gText_MatchCallChampion_Wallace_Pokemon[] = _("I prefer Pokémon of grace.");
const u8 gText_MatchCallChampion_Wallace_Intro1[] = _("I represent beauty as");
const u8 gText_MatchCallChampion_Wallace_Intro2[] = _("well as intelligence.");

const u8 *const gMatchCallFlavorTexts[REMATCH_TABLE_ENTRIES][CHECK_PAGE_ENTRY_COUNT] =
{
    [REMATCH_WALLY_VR] = MCFLAVOR(PkmnTrainer_Wally),
    [REMATCH_ROXANNE] = MCFLAVOR(RockinWhiz_Roxanne),
    [REMATCH_BRAWLY] = MCFLAVOR(TheBigHit_Brawly),
    [REMATCH_WATTSON] = MCFLAVOR(SwellShock_Wattson),
    [REMATCH_FLANNERY] = MCFLAVOR(PassionBurn_Flannery),
    [REMATCH_NORMAN] = MCFLAVOR(ReliableOne_Dad),
    [REMATCH_WINONA] = MCFLAVOR(SkyTamer_Winona),
    [REMATCH_TATE_AND_LIZA] = MCFLAVOR(MysticDuo_TateAndLiza),
    [REMATCH_JUAN] = MCFLAVOR(DandyCharm_Juan),
    [REMATCH_SIDNEY] = MCFLAVOR(EliteFour_Sidney),
    [REMATCH_PHOEBE] = MCFLAVOR(EliteFour_Phoebe),
    [REMATCH_GLACIA] = MCFLAVOR(EliteFour_Glacia),
    [REMATCH_DRAKE] = MCFLAVOR(EliteFour_Drake),
    [REMATCH_WALLACE] = MCFLAVOR(Champion_Wallace),
};

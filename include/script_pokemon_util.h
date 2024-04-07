#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(u16, u8, u16);
u32 ScriptGiveMonParameterized(u16, u8, u16, u8, u8, u8, u8, u8 *, u8 *, u16 *, bool8);
u8 ScriptGiveEgg(u16);
void CreateScriptedWildMon(u16 species, u8 level, u16 item, u8 nature, u8 abilityNum, u8 *evs, u8 *ivs, u16 *moves, bool8 isShiny);
void CreateScriptedDoubleWildMon(u16 species1, u8 level1, u16 item1, u8 nature1, u8 abilityNum1, u8 *evs1, u8 *ivs1, u16 *moves1, bool8 isShiny1, u16 species2, u8 level2, u16 item2, u8 nature2, u8 abilityNum2, u8 *evs2, u8 *ivs2, u16 *moves2, bool8 isShiny2);
void ScriptSetMonMoveSlot(u8, u16, u8);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEV(void);
void Script_GetChosenMonDefensiveEV(void);
void Script_GetChosenMonOffensiveIV(void);
void Script_GetChosenMonDefensiveIV(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H

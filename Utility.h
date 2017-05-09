/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <vector>
using namespace std;

typedef void( *func )( ... );

enum Bigness { Tiny = 0, Small, Medium, Large, Huge, Gargantuan };
enum Type { Piercing, Blungening, Slashing, S_Piercing, S_Blungening, S_Slashing,
	Nectrotic, Radiant, Fire, Lighting, Poison, Acid, Cold, Psychic, Thunder, Force  };
enum Conditions { Blinded, Charmed, Deafined, Frightened, Grappled, Incapacitated, Invisible,
	Paralyzed, Petrified, Poisoned, Prone, Restrained, Stunned, Unconscious,
	Exhaustion1, Exhaustion2, Exhaustion3, Exhaustion4, Exhaustion5, Exhaustion6 };
enum Race { Dragonborn, Dwarf, Elf, Gnome, Half_Elf, Half_Orc, Halfling, Human, Tiefling };
enum Background { Acolyte, Charlatan, Criminal, Entertainer, Folk_Hero, Guild_Artisan,
	Hermit, Noble, Outlander, Sage, Sailor, Soldier, Urchin };
enum Class { Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin,
	Ranger, Rogue, Sorcerer, Warlock, Wizard };
enum ItemType {LightArmor, MediumArmor, HeavyArmor, Shield, Clothes,
	SMWeapon, SRWeapon, SilverSWeapon, SRAmmo, SilverSRAmmo,
	MMWeapon, MRWEapon, SilverMWeapon, MRAmmo, SilverMRAmmo,
	Gear, Focus, Container, Tools, Food, Trinket};

#endif // !UTILITY_H
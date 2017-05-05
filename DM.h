/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef DM_H
#define DM_H


#include "Character.h"
#include "Item.h"
#include "Map.h"
#include "Utility.h"

class DM {
private:
	string name;
	Character* npc;
	Character* beasts;
	string notes;
	Map* maps;
};


#endif // !DM_H
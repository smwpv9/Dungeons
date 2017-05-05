/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef ADVENTURE_H
#define ADVENTURE_H

#include "Character.h"
#include "DM.h"
#include "Item.h"
#include <string>
#include <vector>
using namespace std;

class Adventure {
	DM god;
	Character* players;
	vector<Map> maps;
	string storyline;
};

#endif // !ADVENTURE_H
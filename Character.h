/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef CHARACTER_H
#define CHARACTER_H

#include "Item.h"
#include "Abilities.h"
#include <string>
#include <vector>
using namespace std;

class Character {
private:
	string name;
	int experience;
	short stats[6];
	string lore;
	vector<Item> backpack;
	vector<Abilities> actions;
public:
	string getName( );
	int getExperience( );
	string getLore( );


};


#endif // !CHARACTER_H
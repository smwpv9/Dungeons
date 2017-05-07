/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef CHARACTER_H
#define CHARACTER_H

#include "Abilities.h"
#include "Item.h"
#include "Utility.h"


class Character {
private:
	string name;
	Bigness size;
	int experience;
	short stats[6];
	short ac;
	string lore;
	vector<Item> backpack;
	vector<Abilities> actions;
public:
	string getName( );
	int getExperience( );
	string getLore( );
	short getStat( short i );
	bool checkHit( short a );
	void printBackpack( );
	Item removeItem( string n );
	bool addItem( Item i );

	Character( );
	Character( string n );
	~Character( );
};


#endif // !CHARACTER_H
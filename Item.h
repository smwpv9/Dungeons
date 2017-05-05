/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef ITEM_H
#define ITEM_H

#include "Abilities.h"
#include "Utility.h"

class Item {
private:
	string name;
	double value;
	double weight;
	string lore;
	string location;
	Abilities* abilities;

public:
	string getName( );
	double getValue( );
	short getWeight( );
	string getLore( );
	string getLocal( );

};

#endif // !ITEM_H
/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef ABILITIES_H
#define ABILITIES_H

#include "Utility.h"

class Abilities {
private:
	string name;
public:
	func action;

	string getName( );
	bool getShown( );
	void setShown( );
	Abilities( string n );
	~Abilities( );
};

#endif // !ABILITIES_H
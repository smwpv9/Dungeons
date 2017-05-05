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
	void( *action )( ... );
	string unlock;
public:
	string getname( );
	string getEffect( );
	bool getShown( );
	void setShown( bool b );
	bool tryUnlock( string u );
	Abilities( string n );
};

#endif // !ABILITIES_H
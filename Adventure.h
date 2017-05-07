/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef ADVENTURE_H
#define ADVENTURE_H


class Character;
class Map;

#include "DM.h"
#include "Utility.h"

class Adventure {
private:
	string name;
	string password;
	DM god;
	Character* players;
	vector<Map> maps;
	vector<string> storyline;
public:
	
	Adventure( );
	Adventure( string n, string p );
	~Adventure( );
};

#endif // !ADVENTURE_H
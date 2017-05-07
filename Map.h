/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef MAP_H
#define MAP_H

#include "Utility.h"

class Map {
private:
	string name;
	vector<string> interest;
	int hidden;
public:
	string getName( );
	string getInterest( int i );
	Map( string n, int h );
	~Map( );
};

#endif // !UTILITY_H
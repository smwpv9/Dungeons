/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#include "Map.h"
#include "Utility.h"
#include <fstream>

string Map::getName( )
{
	return name;
}

string Map::getInterest( int i )
{
	return interest.at( i );
}

Map::Map( string n, int h )
{
	name = n;
	hidden = h;

	string temp;
	fstream in( "Maps/" + name + ".txt", fstream::in );

	while( !in.eof( ) )
	{
		getline( in, temp );
		interest.push_back( temp );
	}
	in.close( );
	temp = "";
}

Map::~Map( )
{

}
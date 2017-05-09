/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#include "Adventure.h"
#include "Character.h"
#include "DM.h"
#include "Map.h"
#include <iostream>
#include <fstream>
using namespace std;

Adventure::Adventure( )
{

}
Adventure::Adventure( string n, string p )
{
	name = n;
	fstream in( "Adventures/" + name + ".txt", fstream::in );
	in >> password;
	
	if( p != password )
		return;
	
	string temp;
	int num,h ,i;

	in >> temp;
	god = DM( temp );

	in >> num;
	players = new Character[ num ];
	for( i = 0; i < num; i++ )
	{
		in >> temp;
		players[ i ] = Character( temp );
	}
	in >> num;
	for( i = 0; i < num; i++ )
	{
		in >> temp;
		in >> h;
		maps.push_back( Map(temp, h) );
	}
	in >> num;
	for( i = 0; i < num; i++ )
	{
		in >> temp;
		storyline.push_back( temp );
	}

}
Adventure::~Adventure( )
{
	delete[ ] players;
	while( maps.size( ) > 0)
		maps.erase( maps.begin( ) );
	while( storyline.size( ) > 0 )
		storyline.erase( storyline.begin( ) );
}
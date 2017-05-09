/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

int main( int argc, char** argv )
{
	string choice;
	bool loop = true;
	Player* one = NULL;
	cout << "WECOME!\n" << endl;
	do {
		cout << "What do you want to do?\n"
			<< "1) Create a new player profile\n"
			<< "2) Login to an existing profile" << endl;
		cin >> choice;

		// Error check the input.
		if( choice.size( ) > 1 )
			loop = true;
		else if( choice.at( 0 ) < '1' || choice.at( 0 ) > '2' )
			loop = true;
		else
			loop = false;

		//If Error then display error message
		if( loop )
			cout << "That is not a choice. Please try again\n" << endl;

	} while( loop );

	switch( choice.at( 0 ) )
	{
		case '1':
			one = new Player( false );
			break;
		case '2':
			one = new Player( true );
			break;
		default:
			cerr << "Something went very wrong\n" << endl;
			return -1;
			break;
	}
	if( one->getName( ) == "" )
	{
		cout << "Initialization failed\n"
			<< "Exiting!\n" << endl;
		delete one;
		return -1;
	}






	delete one;
	cout << "Thank you\n" << endl;
	return 0;
}




//
//#start: Adventure.o  DM.o Character.o Item.o Abilities.o Map.o Action.o Utility.o
//#	g++ Adventure.o DM.o Character.o Item.o Abilities.o Map.o Action.o Utility.o - o start
//#
//#Adventure.o: Adventure.cpp Adventure.h Character.h DM.h Map.h Utility.h
//#	g++ Adventure.cpp - c - std = c++11
//#
//#DM.o: DM.cpp DM.h Character.h Item.h Map.h Utility.h
//#	g++ DM.cpp - c - std = c++11
//#
//#Character.o: Character.cpp Character.h Item.h Abilities.h Utility.h
//#	g++ Character.cpp - c - std = c++11
//#
//#Item.o: Item.cpp Item.h Abilities.h Utility.h
//#	g++ Item.cpp - c - std = c++11
//#
//#Abilities.o: Abilities.cpp Abilities.h Action.h Utility.h
//#	g++ Abilities.cpp - c - std = c++11
//#
//#Map.o: Map.cpp Map.h Utility.h
//#	g++ Map.cpp - c - std = c++11
//#
//#Action.o: Action.cpp Action.h
//#	g++ Action.cpp - c - std = c++11
//#
//#Utility.o: Utility.cpp Utility.h
//#	g++ Utility.cpp - c - std = c++11
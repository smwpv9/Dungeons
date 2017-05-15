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

//================== Prototypes ===============================
void AddBasic( );



int main( void )
{
	string choice = "One";
	bool loop = true;
	Player* one = NULL;
	cout << "WECOME!\n" << endl;


	cout << choice.compare( "One\0\0" ) << endl;
	//Display Primary Menu
	do {
		cout << "What do you want to do?\n"
			<< "1) Create a new player profile\n"
			<< "2) Login to an existing profile\n"
			<< "3) Exit" << endl;
		cin >> choice;

		// Error check the input.
		if( choice.size( ) > 1 )
			loop = true;
		else if( choice.at( 0 ) < '1' || choice.at( 0 ) > '3' )
			loop = true;
		else
			loop = false;

		//If Error then display error message
		if( loop )
			cout << "That is not a choice. Please try again\n" << endl;

	} while( loop );

	//Primary Menu choice
	switch( choice.at( 0 ) )
	{
		case '1': //New account
			one = new Player( false );
			break;
		case '2': //Existing account
			one = new Player( true );
			break;
		case '3': // Exit
			cout << "Thank you" << endl;
			return 0;
			break;
		default:
			cerr << "Something went very wrong\n" << endl;
			return -1;
			break;
	}
	//Check initialization
	if( one->getName( ) == "" )
	{
		cout << "Initialization failed\n"
			<< "Exiting!\n" << endl;
		delete one;
		return -1;
	}

	cout << one->getName( ) << endl;

	//Display Secondary menu
	do {
		cout << "What do you want to do?\n"
			<< "1) View an adventure\n"
			<< "2) Adventure!!\n"
			<< "3) New adventure\n"
			<< "4) Add to Basic\n"
			<< "5) Change account data\n"
			<< "6) Logout" << endl;
		cin >> choice;

		// Error check the input.
		if( choice.size( ) > 1 )
			loop = true;
		else if( choice.at( 0 ) < '1' || choice.at( 0 ) > '6' )
			loop = true;
		else
			loop = false;

		//If Error then display error message
		if( loop )
			cout << "That is not a choice. Please try again\n" << endl;

	} while( loop );

	//Secondary Menu choice
	switch( choice.at( 0 ) )
	{
		case '1': //View an adventure
			one->ViewAdventure( );
			break;
		case '2': //Adventure
			one->Adventure( );
			break;
		case '3': //New adventure
			one->NewAdventure( );
			break;
		case '4': //Add to Basic
			AddBasic( );
			break;
		case '5': //Change account data
			one->changeData( );
			break;
		case '6': // Logout
			cout << "Thank you" << endl;
			delete one;
			return main( );
			break;
		default:
			cerr << "Something went very wrong\n" << endl;
			return -1;
			break;
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

void AddBasic( )
{
	bool loop = true;
	string choice;
	//Display Basic menu
	do {
		cout << "What do you want to do?\n"
			<< "a) Armor/Clothes\n"
			<< "b) Containers\n"
			<< "c) Food\n"
			<< "d) General\n"
			<< "e) Magical\n"
			<< "f) Misc\n"
			<< "g) Money\n"
			<< "h) Mounts\n"
			<< "i) Packs\n"
			<< "j) Ships\n"
			<< "k) Tools\n"
			<< "l) Trinkets\n"
			<< "m) Vehicle\n"
			<< "n) Weapons/Ammo" << endl;
		cin >> choice;

		// Error check the input.
		if( choice.size( ) > 1 )
			loop = true;
		else if( choice.at( 0 ) < 'a' || choice.at( 0 ) > 'n' )
			loop = true;
		else
			loop = false;

		//If Error then display error message
		if( loop )
			cout << "That is not a choice. Please try again\n" << endl;

	} while( loop );

	//Basic Menu choice
	switch( choice.at( 0 ) )
	{
		case 'a': //Armor & Clothes
			break;
		case 'b': //Containers
			break;
		case 'c': //Food
			break;
		case 'd': //General
			break;
		case 'e': //Magical
			break;
		case 'f': //Misc
			break;
		case 'g': //Money
			break;
		case 'h': //Mounts
			break;
		case 'i': //Packs
			break;
		case 'j': //Ships
			break;
		case 'k': //Tools
			break;
		case 'l': //Trinkets
			break;
		case 'm': //Vehicles
			break;
		case 'n': //Weapon & Ammo
			break;
		default:
			cout << "Something went very wrong!!!" << endl;
			break;
	}

	//Display Basic second menu
	do {
		cout << "Do you want to add another? (y/n)" << endl;
		cin >> choice;

		// Error check the input.
		if( choice.size( ) > 1 )
			loop = true;
		else if( choice.at( 0 ) != 'y' && choice.at( 0 ) != 'n' )
			loop = true;
		else
			loop = false;

		//If Error then display error message
		if( loop )
			cout << "That is not a choice. Please try again\n" << endl;

	} while( loop );

	//Basic Menu choice
	switch( choice.at( 0 ) )
	{
		case 'y':
			AddBasic( );
			break;
		case 'n':
			cout << "Thank you for your additions to the Base of this system\n" << endl;
			break;
		default:
			cout << "Something went very wrong!!!" << endl;
			break;
	}
	return;
}
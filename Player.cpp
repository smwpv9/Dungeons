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
#include <fstream>
using namespace std;



string Player::encrypt( string s )
{
	return s;
}

string Player::getName( )
{
	return name;
}

bool Player::changePass( )
{
	short count = 0;
	string p, p2;
	//Check to see if it still the valid user
	do {
		cout << "Please enter current password: ";
		cin >> p;
		count++;

		if( encrypt( p ) != password )
			cout << "That is not your current password." << endl;
	} while( count < 3 && encrypt(p) != password );

	//If count exceeds 3 return to previous screen
	if( encrypt( p ) != password )
	{
		cout << "You have exceeded the number of tries to enter your password.\n"
			<< "Returning to the previous menu\n" << endl;
		return false;
	}

	//Make sure the person enters the same password
	count = 0;
	do {
		cout << "Enter the new password: ";
		cin >> p;
		cout << "Please enter that again: ";
		cin >> p2;
		count++;

		if( p != p2 )
			cout << "I'm sorry those do not match";
	} while( count < 3 && p != p2 );
	
	//If count exceeds 3 return to previous screen
	if( p != p2 )
	{
		cout << "You have taken to long to enter a new password.\n"
			<< "Returning to previous menu\n" << endl;
		return false;
	}

	password = encrypt( p );
	cout << "Well done. Your password has been changed\n" << endl;
	return true;
}

Player::Player( bool b )
{
	if( b ) // Returning player logging in
	{
		fstream in;
		short count = 0;
		string p, u, n, inP;
		do {
			cout << "Please enter your username: ";
			cin >> u;
			count++;
			in.open( "Players/" + u + ".txt", fstream::in );
			if( !in.is_open( ) )
				cout << "That does not match a current player\n" << endl;
		} while( count < 3 && !in.is_open( ) );

		if( !in.is_open( ) )
		{
			cout << "You have exceeded your number of tries\n"
				<< "Returning to previous screen\n" << endl;
			return;
		}

		count = 0;
		getline( in, n );
		in >> ws;
		getline( in, p );
		in.close( );

		do {
			cout << "Please enter your password: ";
			cin >> inP;
			count++;

			if( encrypt( inP ) != password )
				cout << "That does not match\n" << endl;
		} while( count < 3 && encrypt( inP ) != password );

		if( encrypt( inP ) != password )
		{
			cout << "You have exceeded your number of tries\n"
				<< "Returning to previous screen\n" << endl;
			return;
		}
		name = n;
		username = u;
		password = p;
	}
	else // new player creating a profile
	{
		cout << "Create new\n" << endl;
	}
}

Player::~Player( )
{
	fstream out( "Players/" + username + ".txt", fstream::trunc | fstream::out );
	if( !out.is_open( ) )
	{
		cout << "Error occured while offloading" << username << endl;
		return;
	}
	out << name << "\n" << endl;
	out << password << "\n" << endl;
	out.close( );
	cout << "Unloading " << username << " Success\n" << endl;
}
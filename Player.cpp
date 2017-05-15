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

//=======================  Private  ===========================

string Player::encrypt( string s )
{
	return s+" x";
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
	} while( count < 3 && encrypt( p ) != password );

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

//========================  Public  ===========================

string Player::getName( )
{
	return name;
}

void Player::changeData( )
{
	cout << "Data Changed" << endl;
}

void Player::Adventure( )
{
	cout << "Adventuring" << endl;
}

void Player::NewAdventure( )
{
	cout << "Newing" << endl;
}

void Player::ViewAdventure( )
{
	cout << "Need another login" << endl;
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
		in >> ws;
		getline( in, n );
		in >> ws;
		getline( in, p );
		in.close( );
		cout << n << "N\n" << p  << "N" << endl;

		do {
			cout << "Please enter your password: ";
			cin >> inP;
			count++;

			if(encrypt( inP ).compare( password ) != 0)
				cout << "That does not match\n" << endl;
		} while( count < 3 && encrypt( inP ).compare( password ) != 0 );

		if( password  != encrypt( inP ) )
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
		string n, p2;
		fstream in;

		
		cout << "What is your display name?" << endl;
		cin >> ws;
		getline( cin, n );

		do {
			cout << "What is your username?" << endl;
			cin >> username;
			in.close( );
			in.open( "Players/" + username + ".txt", fstream::in );
			
			if( in.is_open( ) )
				cout << "I'm sorry. That username has been taken" << endl;

		} while( in.is_open( ) );
		in.close( );

		do {
			cout << "What do you want your password to be?" << endl;
			cin >> p2;
			cout << "Type that again to make sure we have it." << endl;
			cin >> password;
			if( password != p2 )
				cout << "Those do not match please try again" << endl;
		} while( password != p2 );

		password = encrypt( p2 );
		name = n;
	}
}

Player::~Player( )
{
	if( username == "" )
	{
		cout << "Unloading success" << endl;
		return;
	}
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
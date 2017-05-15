/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
private:
	string name;
	string username;
	string password;

	string encrypt( string s );
	bool changePass( );

public:
	string getName( );
	void changeData( );
	void Adventure( );
	void NewAdventure( );
	void ViewAdventure( );
	Player( bool b );
	~Player( );
};

#endif // !PLAYER_H
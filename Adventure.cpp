/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#include "Adventure.h"
#include <iostream>
using namespace std;

int main( int argc, char** argv )
{
	Character one;
	if( one.addItem( Item( ) ) )
		cout << "The strain be to much" << endl;
	cout << "Well it created" << endl;
	return 0;
}
/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#include "Abilities.h"
#include "Action.h"
#include <limits>
#include <fstream>
#include <math.h>


string Abilities::getName( )
{
	return name;
}

bool Abilities::getShown( )
{
	return ( action != &NotAFunc);
}

void Abilities::setShown( )
{
	int num = 0;
	int i;

	for( i = 0; i < name.size( ); i++ )
	{
		num += ( (int) pow( name.at( i ), i ) ) % numeric_limits<int>::max( );
	}
	switch( num )
	{
		case 1:
			action = &attackPierce;
			break;
		case 2:
			break;
		case 3:
			break;
	}
	return;
}

Abilities::Abilities( string n )
{
	name = n;
	action = &NotAFunc;
}

Abilities::~Abilities( )
{
}
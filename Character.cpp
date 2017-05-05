/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#include "Character.h"
#include <iostream>
using namespace std;

string Character::getName( )
{
	return name;
}
int Character::getExperience( )
{
	return experience;
}
string Character::getLore( )
{
	return lore;
}
short Character::getStat( short i )
{
	return stats[ i ];
}
bool Character::checkHit( short a )
{
	return ( a > ac );
}
void Character::printBackpack( )
{
	cout << "This character has this: " << endl;
	int i;
	for( i = 0; i < backpack.size( ); i++ )
	{
		cout << backpack.at( i ).getName( ) << "\n"
			<< backpack.at( i ).getValue( ) << "c " << backpack.at( i ).getWeight( ) << " lb." << endl;
	}
}
Item Character::removeItem( string n )
{
	int i = 0;
	while( backpack.at( i ).getName( ) != n )
		i++;
	Item one = backpack.at( i );
	backpack.erase( backpack.begin() +i );
	return one;
}
bool Character::addItem( Item i )
{
	int j;
	double load, carry;
	for( j = 0; j < backpack.size( ); j++ )
		load += backpack.at( j ).getWeight( );
	carry = stats[ 0 ] * 15;
	if( size == Tiny )
		carry *= 0.5;
	else if( size > Medium )
		carry *= ( size - Medium );

	if( ( load + i.getWeight( ) ) <= carry )
	{
		backpack.push_back( i );
		return true;
	}
	return false;
}

Character::Character( )
{
}
Character::Character( string n, Bigness b, int exp, short s[ 6 ], short a, string l )
{
	name = n;
	size = b;
	experience = exp;
	int i;
	for( i = 0; i < 6; i++ )
		stats[ i ] = s[ i ];
	ac = a;
	lore = l;
}
Character::~Character( )
{
}
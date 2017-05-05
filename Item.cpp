/*=============================================================
Author: Shayne Wadle
Date Began: May 4th 2017
Purpose: To streamline and potentially make an extention of D&D
Version: 0.1
=============================================================*/

//================== Includes and Defines =====================
#include "Item.h"
using namespace std;


string Item::getName( )
{
	return name;
}
double Item::getValue( )
{
	return value;
}
short Item::getWeight( )
{
	return weight;
}
string Item::getLore( )
{
	return lore;
}
string Item::getLocal( )
{
	return location;
}

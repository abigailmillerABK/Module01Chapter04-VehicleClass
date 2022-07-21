/*
Author: Abigail Miller
*/

#pragma once
#include "Vehicle.h"

class Boat : public Vehicle {
public:
	Boat(std::string color, int year) 
		:Vehicle{ color, year }
	{
	}
	void Drive();
};
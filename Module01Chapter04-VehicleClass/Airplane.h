/*
Author: Abigail Miller
*/

#pragma once
#include "Vehicle.h"

class Airplane : public Vehicle {
public:
	Airplane(std::string color, int year)
		:Vehicle{ color, year }
	{
	}
	void Drive();
};
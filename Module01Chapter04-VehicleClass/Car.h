/*
Author: Abigail Miller
*/

#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
	Car(std::string color, int year)
		:Vehicle{ color, year }
	{
	}
	void Drive();
};
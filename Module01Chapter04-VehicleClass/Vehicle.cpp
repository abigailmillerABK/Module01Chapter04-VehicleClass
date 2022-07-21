#include "Vehicle.h"

Vehicle::Vehicle(std::string color = "", int year = -1)
{
	this->color = color;
	this->year = year;
}

std::string Vehicle::GetColor()
{
	return color;
}

void Vehicle::SetColor(std::string color)
{
	this->color = color;
}

int Vehicle::GetYear()
{
	return year;
}

void Vehicle::SetYear(int year)
{
	this->year = year;
}

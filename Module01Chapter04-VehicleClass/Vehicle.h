#pragma once
#include <string>

class Vehicle {
protected:
	std::string color;
	int year;
public:
	Vehicle(std::string color, int year);
	virtual void Drive() = 0;
	std::string GetColor();
	void SetColor(std::string color);
	int GetYear();
	void SetYear(int year);
};
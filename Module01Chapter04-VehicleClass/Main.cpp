/*
Author: Abigail Miller
*/

#include <iostream>
#include "Boat.h"
#include "Airplane.h"
#include "Car.h"

void main() {

	Boat titanic = Boat("Grey", 1912);
	Airplane kittyHawk = Airplane("Brown", 1903);
	Car herbie = Car("Red", 1968);

	std::cout << "The boat drives by\n";
	titanic.Drive();
	std::cout << "\nThe airplane drives by\n";
	kittyHawk.Drive();
	std::cout << "\nThe car drives by\n";
	herbie.Drive();
	std::cout << "\n";
}
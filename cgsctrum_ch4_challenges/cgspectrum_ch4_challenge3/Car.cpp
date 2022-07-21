#include "Car.h"

Car::Car()
{
	this->wheels = 4;
	this->classification = "sedan";
}

void Car::Drive()
{
	std::cout << "Vroom!Vroom!\n";
}

#include "Car.h"

Car::Car()
{
	this->wheels = 4;
	this->classification = "sedan";
	this->setPassengerCapacity(5);
}

void Car::Drive()
{
	std::cout << "Vroom!Vroom!\n";
}

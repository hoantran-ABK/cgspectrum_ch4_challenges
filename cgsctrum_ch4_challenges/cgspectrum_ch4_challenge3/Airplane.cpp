#include "Airplane.h"

Airplane::Airplane()
{
	this->wings = 2;
	this->setPassengerCapacity(200);
}

void Airplane::Drive()
{
	std::cout << "Fly!\n";
}

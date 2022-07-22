#include "Boat.h"

Boat::Boat()
{
	this->sails = 1;
	this->setPassengerCapacity(7);
}

void Boat::Drive()
{
	std::cout << "dududu.... SAAIIL!\n";
}

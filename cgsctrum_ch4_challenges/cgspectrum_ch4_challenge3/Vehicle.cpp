#include "Vehicle.h"

void Vehicle::Drive()
{
}

void Vehicle::setPassengerCapacity(int cap)
{
	this->passenger_capacity = cap;
}

int Vehicle::getPassengerCapacity()
{
	return this->passenger_capacity;
}

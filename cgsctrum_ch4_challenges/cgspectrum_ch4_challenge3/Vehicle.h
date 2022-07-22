#pragma once
#include <iostream>
#include <string>

class Vehicle
{
private:
	int passenger_capacity;

public:
	virtual void Drive();
	void setPassengerCapacity(int cap);
	int getPassengerCapacity();
};


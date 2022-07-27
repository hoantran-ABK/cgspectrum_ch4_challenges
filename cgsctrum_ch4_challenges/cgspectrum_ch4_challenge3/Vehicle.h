#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
	int passenger_capacity;

public:
	virtual void Drive();
	void setPassengerCapacity(int cap);
	int getPassengerCapacity();
};


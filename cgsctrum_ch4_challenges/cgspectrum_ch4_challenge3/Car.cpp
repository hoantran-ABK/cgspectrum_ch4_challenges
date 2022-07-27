#include "Car.h"

using namespace std;

Car::Car()
{
	this->wheels = 4;
	this->classification = "sedan";
	this->setPassengerCapacity(5);
}

void Car::Drive()
{
	cout << "Vroom!Vroom!\n";
}

#include "Airplane.h"

using namespace std;

Airplane::Airplane()
{
	this->wings = 2;
	this->setPassengerCapacity(200);
}

void Airplane::Drive()
{
	cout << "Fly!\n";
}

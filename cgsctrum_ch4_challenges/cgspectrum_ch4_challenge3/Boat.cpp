#include "Boat.h"

using namespace std;

Boat::Boat()
{
	this->sails = 1;
	this->setPassengerCapacity(7);
}

void Boat::Drive()
{
	cout << "dududu.... SAAIIL!\n";
}

#include <iostream>
#include "Vehicle.h"
#include "Airplane.h"
#include "Boat.h"
#include "Car.h"

using namespace std;

int main() {
	Airplane ap = Airplane();
	Boat bt = Boat();
	Car cr = Car();

	ap.Drive();
	bt.Drive();
	cr.Drive();
}
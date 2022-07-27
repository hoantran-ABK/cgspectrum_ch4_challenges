#pragma once
#include "Vehicle.h"

using namespace std;

class Car :
    public Vehicle
{
private:
    int wheels;
    string classification;

public:
    Car();
    void Drive() override;
};


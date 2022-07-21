#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int wheels;
    std::string classification;

public:
    Car();
    void Drive() override;
};


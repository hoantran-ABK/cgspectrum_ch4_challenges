#pragma once
#include "Vehicle.h"
class Boat :
    public Vehicle
{
private:
    int sails;


public:
    Boat();
    void Drive() override;
};


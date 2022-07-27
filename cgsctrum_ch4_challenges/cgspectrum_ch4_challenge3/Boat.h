#pragma once
#include "Vehicle.h"

using namespace std;

class Boat :
    public Vehicle
{
private:
    int sails;


public:
    Boat();
    void Drive() override;
};


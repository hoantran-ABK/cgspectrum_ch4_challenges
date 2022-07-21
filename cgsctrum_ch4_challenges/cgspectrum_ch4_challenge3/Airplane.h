#pragma once
#include "Vehicle.h"
class Airplane :
    public Vehicle
{
private:
    int wings;

public:
    Airplane();
    void Drive() override;
};


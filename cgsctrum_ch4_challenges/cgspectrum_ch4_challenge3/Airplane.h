#pragma once
#include "Vehicle.h"

using namespace std;

class Airplane :
    public Vehicle
{
private:
    int wings;

public:
    Airplane();
    void Drive() override;
};


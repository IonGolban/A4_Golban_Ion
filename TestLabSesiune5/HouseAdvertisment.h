#pragma once
#include "Advertisment.h"
class HouseAdvertisment :
    public Advertisment
{
    int nrFloors;
public:
    HouseAdvertisment(int surface, int price, int nrFloors);
    void SetNrFloors(int nr);
    void PrintInfo()override;
};


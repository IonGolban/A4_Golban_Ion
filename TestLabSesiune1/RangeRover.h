#pragma once
#include "SUV.h"
class RangeRover :
    public SUV
{
    int consum;
public:
    void setConsum(int consum);
    std::string getName() override;
    int getConsum() override;
};


#pragma once
#include "Car.h"
class Toyota :
    public Car
{
public:
    Toyota();
 //   ~Toyota();
    void setByWeather(Weather w);
    int getTimeByLength(int lenght);
    char* getName();
    int getfuelConsumption();
    int getFuelCapacity();
};


#pragma once
#include "Car.h"
class Mazda :
    public Car
{
public :
    Mazda();
   // ~Mazda();
    void setByWeather(Weather w);
    int getTimeByLength(int lenght);
    char* getName();
    int getfuelConsumption();
    int getFuelCapacity();
};


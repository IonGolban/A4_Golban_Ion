#pragma once
#include "Car.h"
class Ford :
    public Car
{
public:
    Ford();
  //  ~Ford();
    void setByWeather(Weather w);
    int getTimeByLength(int lenght);
    char* getName();
    int getfuelConsumption();
    int getFuelCapacity();
};


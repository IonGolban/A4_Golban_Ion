#pragma once
#include "Car.h"
class Dacia :
    public Car
{
public :
    Dacia();
  //  ~Dacia();
    void setByWeather(Weather w);
    int getTimeByLength(int lenght);
    char* getName();
    int getfuelConsumption();
    int getFuelCapacity();
};


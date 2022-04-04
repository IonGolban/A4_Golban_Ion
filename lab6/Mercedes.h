#pragma once
#include "Car.h"
class Mercedes :
    public Car
{
public:
    Mercedes();
   // ~Mercedes();
    void setByWeather(Weather w);
    int getTimeByLength(int lenght);
    char* getName();
    int getfuelConsumption();
    int getFuelCapacity();  
};


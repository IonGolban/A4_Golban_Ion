#pragma once
#include "Weather.h"
class Car
{
protected:
	int fuelCapacity;
	int fuelConsumption;
	int avSpeed;
	char* name;

public:
	Car();
	virtual char* getName();
	virtual int getfuelConsumption();
	virtual int getFuelCapacity();
	virtual void setByWeather(Weather w);
	virtual int getTimeByLength(int lenght);
	
};


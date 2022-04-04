#pragma once
#include "Car.h" 
#include "Weather.h"
class Circuit
{
	int currentIndex;
	int maxLength;
	Car** vectorCar;
	Weather weather;
	bool* finish;
public :
	void setLength(int len);
	void addCar(Car* car);
	void setWeather(Weather w);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
	Circuit();
	//~Circuit();

};


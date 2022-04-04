#include "Dacia.h"
#include "Weather.h"
#include <string.h>
Dacia::Dacia() {
	
	this->avSpeed = 80;
	this->fuelCapacity = 60;
	this->fuelConsumption = 9;
	memcpy(this->name, "Dacia", sizeof("Dacia"));
}
void Dacia::setByWeather(Weather w) {
	if (w == 0) {
		this->avSpeed = 70;
		this->fuelConsumption = 9;
	}
	
	if (w == 2) {
		this->avSpeed = 50;
		this->fuelConsumption = 10;
	}
}
int Dacia::getTimeByLength(int length) {
	return this->avSpeed / length;
}
char* Dacia::getName() {
	return this->name;
}
int Dacia::getfuelConsumption() {
	return this->fuelConsumption;
}
int Dacia::getFuelCapacity() {
	return this->fuelCapacity;
}

#include "Toyota.h"
#include <string.h>
Toyota::Toyota() {
	this->avSpeed = 100;
	this->fuelCapacity = 70;
	memcpy(this->name, "Toyota", sizeof("Toyota"));
	this->fuelConsumption = 5;
}
void Toyota::setByWeather(Weather w) {
	if (w == 0) {
		this->avSpeed = 80;
		this->fuelConsumption = 6;
	}

	if (w == 2) {
		this->avSpeed = 60;
		this->fuelConsumption = 8;
	}
}
int Toyota::getTimeByLength(int length) {
	return this->avSpeed / length;
}
char* Toyota::getName() {
	return this->name;
}
int Toyota::getfuelConsumption() {
	return this->fuelConsumption;
}
int Toyota::getFuelCapacity() {
	return this->fuelCapacity;
}
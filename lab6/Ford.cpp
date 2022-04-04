#include "Ford.h"
#include <string.h>
Ford::Ford() {
	this->avSpeed = 100;
	this->fuelCapacity = 100;
	this->fuelConsumption = 13;
	memcpy(this->name, "Ford", sizeof("Ford"));
}
void Ford::setByWeather(Weather w) {
	if (w == 0) {
		this->avSpeed = 80;
		this->fuelConsumption = 15;
	}

	if (w == 2) {
		this->avSpeed = 60;
		this->fuelConsumption = 20;

	}
	
}
int Ford::getTimeByLength(int length) {
	return this->avSpeed / length;
}
char* Ford::getName() {
	return this->name;
}
int Ford::getfuelConsumption() {
	return this->fuelConsumption;
}
int Ford::getFuelCapacity() {
	return this->fuelCapacity;
}
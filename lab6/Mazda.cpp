#include "Mazda.h"
#include <string.h>
Mazda::Mazda() {
	this->avSpeed = 120;
	this->fuelCapacity = 60;
	this->fuelConsumption = 8;
	memcpy(this->name, "Mazda", sizeof("Mazda"));
}
void Mazda::setByWeather(Weather w) {
	if (w == 0) {
		this->avSpeed = 80;
		this->fuelConsumption = 10;
	}

	if (w == 2) {
		this->avSpeed = 60;
		this->fuelConsumption = 12;
	}
}
int Mazda::getTimeByLength(int length) {
	return this->avSpeed / length;
}
char* Mazda::getName() {
	return this->name;
}
int Mazda::getfuelConsumption() {
	return this->fuelConsumption;
}
int Mazda::getFuelCapacity() {
	return this->fuelCapacity;
}
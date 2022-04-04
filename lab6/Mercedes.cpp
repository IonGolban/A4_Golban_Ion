#include "Mercedes.h"
#include <string.h>
Mercedes::Mercedes() {
	this->avSpeed = 150;
	this->fuelCapacity = 65;
	this->fuelConsumption = 10;
	memcpy(this->name, "Mercedes", sizeof("Mercedes"));
}
void Mercedes::setByWeather(Weather w) {
	if (Weather::RAIN==w) {
		this->avSpeed = 100;
		this->fuelConsumption = 11;
	}

	if (Weather::SNOW == w){
		this->avSpeed = 60;
		this->fuelConsumption = 12;
	}
}
int Mercedes::getTimeByLength(int length) {
	return this->avSpeed / length;
}
char* Mercedes::getName() {
	return this->name;
}
int Mercedes::getfuelConsumption() {
	return this->fuelConsumption;
}
int Mercedes::getFuelCapacity() {
	return this->fuelCapacity;
}
#include "Circuit.h"
#include "Car.h"
#include <stdlib.h>
#include <iostream>

void Circuit::setLength(int len) {
	this->maxLength = len;
}
void Circuit::addCar(Car* car) {
		this->vectorCar[currentIndex++] = car;
}
void Circuit::setWeather(Weather w) {
	this->weather = w;
}
Circuit::Circuit() {
	this->currentIndex = 0; 
	this->vectorCar = new Car*[10];
	bool finish = new bool[10];
}
void Circuit::Race() {
	for (int i = 0; i < this->currentIndex; i++) {
		this->vectorCar[0]->setByWeather(this->weather);
	}
	for (int i = 0; i < this->currentIndex; i++) {
		for (int j = i + 1; j < this->currentIndex; j++)
		{
			if (vectorCar[j]->getTimeByLength(this->maxLength) < vectorCar[i]->getTimeByLength(this->maxLength)) {
				Car* temp = vectorCar[i];
				vectorCar[i] = vectorCar[j];
				vectorCar[j] = temp;
			}
		}
	}
	for (int i = 0; i < this->currentIndex; i++) {
		if ((this->vectorCar[i]->getFuelCapacity() / this->vectorCar[i]->getfuelConsumption()) * 100 <= this->maxLength) {
			this->finish[i] = 0;
		}
	}
}
void Circuit::ShowFinalRanks() {
	
	for (int i = 0; i < this->currentIndex; i++) {
		if (finish[i]) {
			std::cout << vectorCar[i]->getName() << " - " << vectorCar[i]->getTimeByLength(this->maxLength) << "\n";
		}
	}
	std::cout << "\n";
}
void Circuit::ShowWhoDidNotFinish() {
	for (int i = 0; i < this->currentIndex; i++) {
		if (!finish[i]) {
			std::cout << vectorCar[i]->getName() << " - " << vectorCar[i]->getTimeByLength(this->maxLength) << " ";
		}
	}
	std::cout << "\n";
}

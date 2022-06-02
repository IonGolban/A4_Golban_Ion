#include "Opel.h"

std::string Opel::getName()
{
	return "Opel";
}

int Opel::getCapacitate()
{
	return this->capacitate;
}

std::string Opel::getCuloare()
{
	return this->culoare;
}

void Opel::setCapacitate(int capacitate)
{
	this->capacitate = capacitate;
}

void Opel::setCuloare(std::string culoare)
{
	this->culoare = culoare;
}

void Opel::setAnFabricatie(int an)
{
	this->anFabricatie = an;
}

int Opel::getAnFabricatie()
{
	return this->anFabricatie;
}

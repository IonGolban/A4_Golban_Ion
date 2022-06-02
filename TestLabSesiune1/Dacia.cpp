#include "Dacia.h"

std::string Dacia::getName()
{
	return "Dacia";
}

int Dacia::getCapacitate()
{
	return this->capacitate;
}

std::string Dacia::getCuloare()
{
	return this->culoare;
}

void Dacia::setCapacite(int capacitate)
{
	this->capacitate = capacitate;
}

void Dacia::setCuloare(std::string culoare)
{
	this->culoare = culoare;
}

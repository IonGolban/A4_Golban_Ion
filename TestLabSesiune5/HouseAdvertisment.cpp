#include "HouseAdvertisment.h"
#include <iostream>
HouseAdvertisment::HouseAdvertisment(int surface, int price, int nrFloors)
{
	SetSurface(surface);
	SetPrice(price);
	this->nrFloors = nrFloors;
}

void HouseAdvertisment::SetNrFloors(int nr)
{
	this->nrFloors = nr;
}

void HouseAdvertisment::PrintInfo()
{
	std::cout << "House with" << nrFloors << "floors, with a surface of " << surface << " square meters that costs " << price << "dollars. " << std::endl;
}

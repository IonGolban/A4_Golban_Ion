#include "ApartamentAdvertisment.h"
#include <iostream>
ApartamentAdvertisment::ApartamentAdvertisment(int surface, int price, int lvl)
{
	SetSurface(surface);
	SetPrice(price);
	this->atLevel= lvl;
}

void ApartamentAdvertisment::SetLevel(int lvl)
{
	this->atLevel = lvl;
}

void ApartamentAdvertisment::PrintInfo()
{
	std::cout << "Apartment at " << atLevel << "-th level, with a surface of " << surface << " square meters that costs " << price << "dollars. "<<std::endl;
}

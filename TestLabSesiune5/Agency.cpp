#include "Agency.h"
#include <iostream>
#include <string.h>
Agency::Agency(const char* name)
{
	name = new char[strlen(name) + 1];
	this->name = name;
}

void Agency::AddAdvertisment(Advertisment* a)
{
	adv.push_back(a);
}

void Agency::PrintOffers(int minSurface, int maxPrice)
{
	bool ok = 0;
	for (Advertisment* a : adv) {
		if (a->GetPrice() <= maxPrice && a->GetSurface() >= minSurface) {
			a->PrintInfo();
			
			ok = 1;
		}
	}
	if (ok == 0) {
		std::cout << "Agency RealEstate could not find any offer for the criteria:"<<std::endl;
	}
}

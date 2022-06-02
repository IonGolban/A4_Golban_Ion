#pragma once
#include "Advertisment.h"
#include <vector>
class Agency
{
	const char* name;
	std::vector<Advertisment*> adv;

public:
	Agency(const char* name);
	void AddAdvertisment(Advertisment* a);
	void PrintOffers(int minSurface, int maxPrice);
};


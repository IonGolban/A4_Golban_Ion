#pragma once
#include "Entry.h"
#include <string>

class SpringData:
	public Entry
{
	std::string value;
public:
	SpringData(std::string name, std::string value);
	void Add(std::string toAdd)override;
	bool Substract(int toSubstract)override;
	void Print()override;
};


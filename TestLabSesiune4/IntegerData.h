#pragma once
#include "Entry.h"
#include <string>

class IntegerData:
	public Entry
{
	int value;
public:
	IntegerData(std::string name,std::string value);
	void Add(std::string toAdd)override;
	bool Substract(int toSubstract)override;
	void Print()override;
	int convert(std::string string);
};


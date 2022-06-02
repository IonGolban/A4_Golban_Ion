#include "SpringData.h"
#include <iostream>
SpringData::SpringData(std::string name, std::string value)
{
	this->name = name;
	this->value = value;
}

void SpringData::Add(std::string toAdd)
{
	this->value += toAdd;
}

bool SpringData::Substract(int toSubstract)
{
	
	if (this->value.length() < toSubstract)return false;
	this->value = value.substr(0, value.length() - toSubstract);
	return true;
}

void SpringData::Print()
{
	std::cout << this->name<<"="<<this->value;
}

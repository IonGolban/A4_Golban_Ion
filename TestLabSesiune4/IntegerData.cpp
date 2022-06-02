#include "IntegerData.h"
#include <iostream>
IntegerData::IntegerData(std::string name, std::string value)
{
	this->name = name;
	this->value = convert(value);
}

void IntegerData::Add(std::string toAdd)
{
	this->value += convert(toAdd);
}

bool IntegerData::Substract(int toSubstract)
{
	this->value -= toSubstract;
	return true;
}

void IntegerData::Print()
{
	std::cout << this->name<<"="<<this->value;
}
	
int IntegerData::convert(std::string string) {
	int number = 0; int i = 0;
	while (string[i] != NULL)
	{
		number += (string[i] - '0');
		number *= 10;
		i++;
	}
	return number / 10;
}
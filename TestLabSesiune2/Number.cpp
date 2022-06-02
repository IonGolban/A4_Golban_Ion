#include "Number.h"
#include <iostream>
Number::Number(int value)
{
	this->count = 0;
	this->number = value;

}

Number::operator int()
{
	return this->number;
}

int Number::operator+(int n)
{
	number = number + n;
	return number;
}

int Number::operator-(int n)
{
	number = n-number;
	return number;
}

int Number::operator*(int n)
{
	number = number * n;
	return number;
}

int Number::operator/(int n)
{
	number = number / n;
	return number;
}

Number& Number::operator+=(Printer* prnt)
{
	this->printers[count++] = prnt;
	return *this;
}

void Number::Print()
{
	for (int i = 0; i < count; i++) {
		std::cout << "Format: " << printers[i]->GetFormatName() << " Value: " << printers[i]->FormatNumber(this->number) << std::endl;
	}
}

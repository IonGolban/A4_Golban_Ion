#pragma once
#include "Printer.h"
class Number
{
	Printer* printers[100];
	int number;
	int count;
public :
	Number(int value);
	operator int();
	int operator +(int n);
	int operator -(int n);
	int operator *(int n);
	int operator /(int n);
	Number& operator += (Printer* prnt);
	void Print();
};


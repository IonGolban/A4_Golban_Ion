#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Student.h"

class Catalog
{
	Student* s[100];
	int count;

public:

	Catalog();

	Catalog& operator +=(const Student s);

	Student& operator[](const char* name);
	Student& operator[](int index);


	int GetCount();
};


#define _CRT_SECURE_NO_WARNINGS
#include "Catalog.h"
#include "string.h"

Catalog::Catalog() : count{ 0 }
{
}

Catalog& Catalog::operator+=(const Student s)
{
	
	this->s[count] = new Student(s);
	++count;

	return *this;
}

Student& Catalog::operator[](const char* name)
{
	for (int i{ 0 }; i < count; ++i)
	{
		if (strcmp(name, this->s[i]->getName()) == 0)
			return *s[i];
	}
}

Student& Catalog::operator[](int index)
{
	return *s[index];
}

int Catalog::GetCount()
{
	return count;
}

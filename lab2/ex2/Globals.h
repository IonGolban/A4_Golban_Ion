#pragma once
#include "Person.h"
class Globals
{
public:
	int compByName(Person* firtPerson,Person* secondPerson);

	int compByHistory(Person* firtPerson, Person* secondPerson);

	int compByEngl(Person* firtPerson, Person* secondPerson);
	
	int compByMath(Person* firtPerson, Person* secondPerson);
	
	int compByAverage(Person* firtPerson, Person* secondPerson);
};


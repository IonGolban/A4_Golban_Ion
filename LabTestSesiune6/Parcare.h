#pragma once
#include <vector>
#include "Masina.h"
class Parcare
{
	std::vector<Masina*> masini;
	int capacity;
public:
	void Create(int MaxCapacity);
	bool Add(Masina* m);
	void RemoveByName(std::string name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(std::string color);
};


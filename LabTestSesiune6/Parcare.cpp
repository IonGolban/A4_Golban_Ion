#include "Parcare.h"
#include <iostream>

void Parcare::Create(int MaxCapacity)
{
	this->capacity = MaxCapacity;
}

bool Parcare::Add(Masina* m)
{
	if (capacity - 1 == masini.size())return false;
	masini.push_back(m);
	return true;
}

void Parcare::RemoveByName(std::string name)
{
	for (int i = 0; i < masini.size();i++) {
		if (masini[i]->GetName() == name) {
			masini.erase(masini.begin()+i);
		}
	}
}

int Parcare::GetCount()
{
	return masini.size();
}

bool Parcare::IsFull()
{
	return masini.size()==this->capacity;
}

void Parcare::ShowAll()
{	
	for (auto m : masini) {
		std::cout << m->GetName() << "(" << m->GetColor() << ")" << ", ";
	}
	std::cout << std::endl;
}

void Parcare::ShowByColor(std::string color)
{
	for (auto m : masini) {
		if(m->GetColor()==color)
		std::cout << m->GetName() << "(" << m->GetColor() << ")" << ", ";
	}
	std::cout << std::endl;
}

#include "Zoo.h"
#include <iostream>

std::vector<Animal*> Zoo::GetFishes()
{
	std::vector<Animal*> fishes;
	for (auto a : this->animals) {
		if (a->IsAFish()) {
			fishes.push_back(a);
		}
	}
	return fishes;
}

std::vector<Animal*> Zoo::GetBirds()
{
	std::vector<Animal*> birds;
	for (auto a : this->animals) {
		if (a->IsABird()) {
			birds.push_back(a);
		}
	}
	return birds;
}

std::vector<Animal*> Zoo::GetMammals()
{
	std::vector<Animal*> mammals;
	for (auto a : this->animals) {
		if (a->IsAMamma()) {
		mammals.push_back(a);
		}
	}
	return mammals;
}

std::vector<Feline*> Zoo::GetFelines()
{
	std::vector<Feline*> felines;
	for (auto a : this->animals) {
		if (a->GetName()=="Tiger" || a->GetName() == "Lion") {
			felines.push_back(dynamic_cast<Feline*>(a));
		}
	}
	return felines;
}

int Zoo::GetTotalAnimals()
{
	return this->animals.size();
}

void Zoo::operator+=(Animal* a)
{
	this->animals.push_back(a);
}

bool Zoo::operator()(std::string name)
{
	for (auto a : this->animals) {
		if (a->GetName() == name) {
			return true;
		}
	}
	return false;
}

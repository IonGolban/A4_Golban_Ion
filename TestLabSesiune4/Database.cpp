#include "Database.h"
#include <iostream>
Database::Database()
{
	count = 0;
}

void Database::operator+=(Entry* e)
{
	this->entries[count++] = e;
}

void Database::operator-=(std::string name)
{
	for (int i = 0; i < count; i++) {
		if (entries[i]->GetName() == name) {
			for (int j = i; j < count; j++) {
				entries[j] = entries[j+1];
			}
			entries[count - 1] = nullptr;
			count--;
		}
	}
}

void Database::Print()
{
	for (int i = 0; i < count; i++) {
		entries[i]->Print();
		std::cout << std::endl;
	}
}

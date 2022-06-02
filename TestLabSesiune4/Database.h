#pragma once
#include "Entry.h"
class Database
{
	Entry** entries= new Entry*[100];
	int count;
public:
	Database();
	void operator += (Entry* e);
	void operator -= (std::string name);
	Entry** begin() { return &entries[0]; };
	Entry** end() { return &entries[count - 1]; };
	void Print();
};


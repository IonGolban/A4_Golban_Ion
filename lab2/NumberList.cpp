#define _CRT_SECURE_NO_WARNINGS
#include "NumberList.h"
#include <stdio.h>
using namespace std;

void NumberList::Init() {
	this->count = 0;
}
bool NumberList::Add(int x) {
	if (this->count >= 10) {
		return false;
	}
	else { 
		this->numbers[this->count] = x; 
		count++;
	}
	return true;
}
void NumberList::Sort() {
	int n = this->count;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (this->numbers[j] > this->numbers[j + 1])
			{
				
				int temp = this->numbers[j];
				this->numbers[j] = this->numbers[j + 1];
				this->numbers[j + 1] = temp;
			}
}
void NumberList::Print() {
	for (int i = 0; i < this->count; i++) {
		printf("%d",this->numbers[i]);
	}
}



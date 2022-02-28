#include "NumberList.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main() {
	NumberList numberList;
	numberList.Init();
	numberList.Add(5);
	numberList.Add(4);
	numberList.Add(10);
	numberList.Add(-5);
	numberList.Add(18);
	numberList.Sort();
	numberList.Print();
		return 0;
}
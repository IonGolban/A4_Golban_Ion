#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include "Math.h"
int main() {
	Math math;
	//char* ch = "ab";

	const char ch1 = 'ab';
	const char ch2 = 'bc';
	printf("%s\n", math.Add(&ch1, &ch2));
	printf("%d\n", math.Add(15, 20));
	printf("%d\n", math.Add(15, 20,25));
	printf("%d\n", math.Add(15.5, 20.5));
	printf("%d\n", math.Add(15.5, 20.5,25.5));

	printf("%d\n", math.Mul(15, 20));
	printf("%d\n", math.Mul(15, 20, 25));
	printf("%d\n", math.Mul(15.5, 20.5));
	printf("%d\n", math.Mul(15.5, 20.5, 25.5));

	printf("%d\n", math.Add(4, 20, 25,30,40));

	return 0;
}
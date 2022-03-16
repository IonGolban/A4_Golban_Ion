#include "Sort.h"

#include <stdio.h> 
int main() {

	//constructor for random elements 
	Sort s1(7, 10, 30);
	s1.InsertSort(true);
	s1.Print();
	
	//constructor for existing vector 
	Sort s2(new int[6]{4,5,2,1,9,12}, 6);
	s2.BubbleSort(false);
	s2.Print();

	//Constructor cu un initialization list
	Sort s3;
	s3.QuickSort(true);
	s3.Print();
	
	//Constructor cu variadic
	Sort s4(7, 10, 15, 16, 9, 3, 20, 1);
	s4.InsertSort();
	s4.Print();

	//Constructor cu un string
	Sort s5(new char[]{ "10,40,100,5,70" });
	s5.QuickSort(false);
	s5.Print();
	printf("\n");

	printf("element from index 2 -> %d \n", s5.GetElementFromIndex(2));
	printf("nr of elements -> %d ", s5.GetElementsCount());
	return 0;
}
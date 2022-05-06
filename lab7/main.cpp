#include <iostream>
#include "MyTemplate.h"
float operator"" _Kelvin(unsigned long long int x) {
	return x + 273.15;
}

float operator"" _Fahrenheit(unsigned long long int x) {
	return (x*1.8)+32;
}





int main() {

	float a = 300_Kelvin;

	float b = 120_Fahrenheit;

	MyTemplate<int> myTemplate;
	myTemplate.push(5);
	myTemplate.push(8);
	myTemplate.push(3);
	myTemplate.push(10);
	myTemplate.push(4);

	myTemplate.remove(0);
	myTemplate.printMyVector();
	std::cout << "-----------------------\n";
	myTemplate.insertElementAtIndex(0, 11);
	myTemplate.printMyVector();
	std::cout<<myTemplate.get(0)<<"\n";
	std::cout << myTemplate.getCount();

	
	return 0;
}
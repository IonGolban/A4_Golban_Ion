#include <stdio.h>
#include "Canvas.h"

int main() {
	
	Canvas canvas(100, 100);

	//circle
	canvas.DrawCircle(50,50,40,'+');
	canvas.FillCircle(50,50,40,'+');
	canvas.Print();
	
	canvas.Clear();
	
	// rectangle
	canvas.DrawRect(30,30, 60, 60, '+');
	canvas.FillRect(30,30, 60, 60, '+');
	canvas.Print();

	canvas.Clear();


	//line and point
	canvas.DrawLine(0, 0, 99, 99, '+');
	canvas.SetPoint(99,0, 'O');
	canvas.Print();

	canvas.Clear();

	return 0;
}
#include "Car.h"
#include "Circuit.h"
#include "Dacia.h"
#include "Weather.h"
#include "Ford.h"
#include "Mercedes.h"
#include "Mazda.h"
#include "Toyota.h"

int main()

{
	Circuit c;

	c.setLength(100);

	c.setWeather(Weather::RAIN);

	c.addCar(new Dacia());

	c.addCar(new Toyota());

	c.addCar(new Mercedes());

	c.addCar(new Ford());

	c.addCar(new Mazda());

	c.Race();

	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;

}
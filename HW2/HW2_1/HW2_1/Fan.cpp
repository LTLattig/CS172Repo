#include <iostream>
#include "Fan.h"

using namespace std;

// sets the Fan defaults
Fan::Fan() 
{
	fanSpeed = 1;
	fanRadius = 5;
	on = false;
}

// takes in an int to modify the default speed, outputs an error message if the value isn't w/n the parameters
int Fan::setSpeed(int N)
{
	int desiredSpeed;

	
	if (fanSpeed > 3 || fanSpeed < 1)
	{
		cout << "FAN SPEED CAN ONLY BE SET FROM 1-3 \n";
	}
	else
		fanSpeed = N;
	

	return 0;
}

// toggles b/n on and off states when the fxn is called
void Fan::switchOn()
{
	if (on == true)
		on = false;
	else if (on == false)
		on = true;

	return;
}

// magically changes the fan's radius (takes in a double, modifies the default value of fanRadius)
double Fan::magicallyChangeRadius(double N)
{
	fanRadius = N;
	return 0;
}

// outputs the fan radius
double Fan::showRadius()
{
	return fanRadius;
}

// outputs the fan speed
int Fan::showSpeed()
{
	return fanSpeed;
}

// ouputs the fan on/off state.
void Fan::showState()
{
	if (on == true)
		cout << "Fan is on.";
	else if (on == false)
		cout << "Fan is off.";
	return;
}
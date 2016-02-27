#pragma once

/*  ---Joseph---  Remember to include header definition guards. This will be very important in larger projects where the same header file will be included in multiple files. (-1)*/
class Fan
{

public:
	//[CONSTRUCTOR]
	Fan();

	//—————————————————————————————————————// Mutator Fxns

	int setSpeed(int); // takes in an integer. if not b/n 1 & 3, doesn't switch the fan speed
	void switchOn(); //toggles b/n on and off states [ default off as set by Fan(){} ]
	double magicallyChangeRadius(double); // takes in a double to modify the radius of this seemingly elastic fan

	//—————————————————————————————————————// Accessor Fxns

	int showSpeed(); // shows the fan speed
	void showState(); // shows the on/off state of the fan 
	double showRadius(); // shows the radius of the fan

private: 
	double fanRadius; // the double value of any given fan's radius
	int fanSpeed; // the integer value (1-3) of any given fan's speed
	bool on; // the bool value of any given fan's on/off state

};
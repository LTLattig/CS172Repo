/*
Name: Luke Lattig
Purpose: to create a rudimentary scheduling program (organized by venue) in order to hopefully pass exam 1 of CS 172 (see Event.h & Venue.h)
*/
#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

Event::Event() // creates an event with default values
{
	time = -1;
	title = "free";
}
Event::Event(int timeN, string titleN) // ... w/ custom values
{
	// Checks to see if new time is a valid value for time // [!! EDIT !!] Discovered that any checking of values is going to have to be something that 
	//happens before using the constructor. Can't think of a way to actually ensure that valid times (0 <= t <= 2359, where t != xx60-99) are being used without editing the test code.  
	/* if (0 <= timeN && timeN <= 2400)
	//{
		// if ((timeN % 100) < 60) */
			time = timeN;
		/*else if (timeN % 100 >= 60)
			cout << "That is not a valid time.";
	}
	else
		cout << "That is not a valid time."; */

	title = titleN;
}

int Event::getTime() 
{
	return time;
}

string Event::getTitle() 
{
	return title;
}

void Event::setTime(int nTime) // overwrites constructor values for time
{
	time = nTime;
	return;
}

void Event::setTitle(string nTitle) // overwrites constructor values for title
{
	title = nTitle;
	return;
}
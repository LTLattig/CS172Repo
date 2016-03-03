/*
Name: Luke Lattig
Purpose: to create a rudimentary scheduling program (organized by venue) in order to hopefully pass exam 1 of CS 172 (see Event.h & Venue.h)
*/
#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

int Venue::numEvents = -1;

bool Venue::validTime(int time)
{
	for (int i = 0; i <= numEvents; i++) // checks if the time has already been scheduled. If it has, return false for validTime. 
										//  If it hasn't, return true for validTime
	{
		if (time == scheduledEvents[i].getTime())
			return false;
	}
	return true;
}

void Venue::addEvent(int time, string name)
{
	if (numEvents < 12) // ensures that no more than 12 events may be scheduled at any given venue  
	{				    // (and that there's always a default event to return in case of input errors).
		if (validTime(time) == true)
		{
			numEvents++; // increments the number of events so that all the for loops actually work & don't have to check the values of the entire array.
			scheduledEvents[numEvents].setTime(time);
			scheduledEvents[numEvents].setTitle(name);
			cout << "Event \"" << name << "\" scheduled.\n";
		}
		else
			cout << "This time has already been taken, " 
			<< "scheduling of \"" << name << "\" aborted.\n"; // alerts the user to what event has failed to schedule + why

	}
	else
		cout << "This venue is already fully booked.\n"; // error message in case of overbooking of venue ( #Events > 12 )

	return;
}

Event Venue::findEvent(int time)
{

	for (int i = 0; i <= numEvents; i++) // loop checking each scheduled event for the specified time
	{
		if (time == scheduledEvents[i].getTime()) // check for equivalence
			return scheduledEvents[i];
	}
	
	cout << "No event is currently scheduled at the time " << time << ".\n"; // a moderately more helpful error message
	return scheduledEvents[12]; // returns the default event.
}

Event Venue::findEvent(string name)
{

	for (int i = 0; i <= numEvents; i++) // loop checking each scheduled event for the specified name (case sensitive, but thankfully that doesn't matter for this exam)
	{
		if (name == scheduledEvents[i].getTitle()) // check for equivalence
			return scheduledEvents[i];
	}

	cout << "No event is currently scheduled under the name \"" << name << ".\"\n"; // a moderately more helpful error message
	return scheduledEvents[12]; // returns the default event.

}


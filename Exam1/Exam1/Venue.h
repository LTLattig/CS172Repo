/*
Name: Luke Lattig
Purpose: to create a rudimentary scheduling program (organized by venue) in order to hopefully pass exam 1 of CS 172 (see Event.h & Venue.h)
*/
#pragma once
#ifndef _VENUE_H_
#define _VENUE_H_
#include <string>
#include <iostream>
#include "Event.h"

using namespace std;

class Venue
{
private:
	Event scheduledEvents[13]; // 12 schedulable events + one that can be used as a default return.
	static int numEvents; // used to keep the number of events <= 12.

public:

	bool validTime(int time); // checks to see if the time input is valid

//--Not-Quite-A-Mutator-But-You-Get-The-Idea--//
	void addEvent(int time, string name); // adds a new event to the array scheduledEvents[]

// -----------Accessors---------------//
	Event findEvent(int time);
	Event findEvent(string name);
};

#endif
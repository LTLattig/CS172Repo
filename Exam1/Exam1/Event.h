/*
Name: Luke Lattig
Purpose: to create a rudimentary scheduling program (organized by venue) in order to hopefully pass exam 1 of CS 172 (see Event.h & Venue.h)
*/
#pragma once

#ifndef _EVENT_H_
#define _EVENT_H_
#include <string>
#include <iostream>

using namespace std;

class Event
{
private:
	int time;
	string title;
public:

//-------------Constructors--------------//
	Event(); // default 
	Event(int time, string name); // custom

//------------Accessors------------------//
	int getTime();
	string getTitle();

//------------Mutators------------------// [Edit the variables of any given event, used to overwrite default events]
	void setTime(int newT);
	void setTitle(string newName);

};

#endif
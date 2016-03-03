/*
Name: Luke Lattig
Purpose: to create a rudimentary scheduling program (organized by venue) in order to hopefully pass exam 1 of CS 172 (see Event.h & Venue.h)
————————————————————————————————————————————————————————————————————————————————
Luke: Changed all times to be military to allow for greater potential precision
Luke: All further comments & code in this file belong to M. Bell
*/

#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;



int main()
{
	Venue theSpot;
	theSpot.addEvent(1000, "Coffee Hour");    //Should work
	theSpot.addEvent(1100, "Brunch w/ Bob");  //Should work
	theSpot.addEvent(1100, "Bingo"); //Shouldn't work

	cout << theSpot.findEvent(1000).getTitle() << endl; //Should find Coffee Hour
	cout << theSpot.findEvent("Brunch w/ Bob").getTime() << endl;  //Should find 11 o'clock
	cout << theSpot.findEvent("Bingo").getTime() << endl; //Should print -1, because Bingo ain't there!

	return 0;
}

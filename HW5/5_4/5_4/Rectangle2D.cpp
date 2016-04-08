/*
Luke Lattig
CS172 || HW 5_4
*/
#include "Rectangle2D.h"


bool Rectangle2D::contains(double inX, double inY)
{
	// checks to see if new point is in the bounds of the rectangle
	if ((inX >= x - (.5*w) && inX <= x + (.5*w)) &&
		(inY >= y - (.5*h) && inY <= y + (.5*h)))
			return true;

	return false;
}

bool Rectangle2D::contains(const Rectangle2D &r)
{
	// checks to see if the midpoint of the inner rectangle is even in the containing rectangle
	if ((r.getX() >= x - (.5*w) && r.getX() <= x + (.5*w)) &&
		(r.getY() >= y - (.5*h) && r.getY() <= y + (.5*h)))
		//check to see if upper & lower y-bounds of inner rectangle are within the containing rectangle
		if ( ( r.getY() + (0.5*r.getH()) <= y + (0.5*h) ) && ( r.getY() - (0.5*r.getH()) >= y - (0.5*h) ) )
			// checks to see if upper & lower x-bounds are within the containing rectangle
			if ((r.getX() + (0.5*r.getW()) <= x + (0.5*w) ) && (r.getX() >= x - 0.5*w + 0.5*r.getW()))
				return true;

	return false;
}

bool Rectangle2D::overlaps(const Rectangle2D &r)
{
	// checks to see if inner rectangle's extreme x/y values exceed or fall short of containing rectangle's
	// I'm so sorry that you have to read this. Hopefully the formatting won't be lost when I upload it. Might make it easier.
	if ( (((r.getX() + (0.5*r.getW()) >= x + (.5*w) ) && (r.getX() - (.5*r.getW()) <= x + .5*w))
									    /* */ || /* */
		((r.getX() <= x - .5*w + .5*r.getW()) && (r.getX() >= x - .5*w - .5*r.getW()))) 

									  /*——*/  ||  /*——*/

	   ( (r.getY() >= y + .5*h - .5*r.getH()) && (r.getY() <= y + .5*h + .5*r.getH())
										/* */ || /* */
		((r.getY() <= y - .5*h + .5*r.getH()) && (r.getY() >= y - .5*h - .5*r.getH())) ))
			return true;
		

	return false;
}

// confirmed formatting ruined.
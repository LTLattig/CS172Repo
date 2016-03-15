#include <iostream>
#include <cmath>
#include "RegularPolygon.h"


const double PI = 3.14159265359; // as far as I'm willing to define PI, despite it being Pi day. 

RegularPolygon::RegularPolygon() // default constructor
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int N, double S) // partial custom constructor (still @ (0,0))
{
	n = N;
	side = S;

	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int N, double S, double X, double Y) // complete custom constructor
{
	n = N;
	side = S;
	x = X;
	y = Y;
}

void RegularPolygon::setN(int newN) // can be used to specify a new number of sides
{
	n = newN;
	return;
}

void RegularPolygon::setSide(double newSide) // can be used to specify a new side length
{
	side = newSide;
	return;
}

void RegularPolygon::setX(double newX) // can be used to set a new x coordinate
{
	x = newX;
	return;
}

void RegularPolygon::setY(double newY) // can be used to set a new y coordinate
{
	y = newY;
	return;
}

double RegularPolygon::getPerimeter() const // returns perimeter
{
	return n * side;
}

double RegularPolygon::getArea() const // calculates area of given polygon (not very accurate, considering specified pi)
{
	return ((n * pow(side, 2)) / (4 * (PI / n))); // that said, it returns the same answer as when I calculated it manually, so it seems to be working as specified
}
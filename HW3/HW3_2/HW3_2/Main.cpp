#include <iostream>
#include <cmath>
#include "RegularPolygon.h"

void definePolygons(); // see below

int main()
{
	definePolygons();

	return 0;
}

void definePolygons() // performs the assignment as specified
{
	RegularPolygon defaultTriangle;
	RegularPolygon hexagon(6, 4);
	RegularPolygon decagon(10, 4, 5.6, 7.8);

	// Returns area and perimeter of default triangle
	std::cout << defaultTriangle.getPerimeter() << std::endl;
	std::cout << defaultTriangle.getArea() << std::endl;

	std::cout << std::endl; // white space

	// Returns area and perimeter of custom hexagon
	std::cout << hexagon.getPerimeter() << std::endl;
	std::cout << hexagon.getArea() << std::endl;

	std::cout << std::endl; // white space

	// Returns area and perimeter of custom decagon
	std::cout << decagon.getPerimeter() << std::endl;
	std::cout << decagon.getArea() << std::endl;
	
	return;
}
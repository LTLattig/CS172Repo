#include <iostream>
#include <cmath>
#include "RegularPolygon.h"

void definePolygons();

int main()
{
	definePolygons();

	return 0;
}

void definePolygons()
{
	RegularPolygon defaultTriangle;
	RegularPolygon hexagon(6, 4);
	RegularPolygon decagon(10, 4, 5.6, 7.8);

	std::cout << defaultTriangle.getPerimeter() << std::endl;
	std::cout << defaultTriangle.getArea() << std::endl;

	std::cout << std::endl;

	std::cout << hexagon.getPerimeter() << std::endl;
	std::cout << hexagon.getArea() << std::endl;

	std::cout << std::endl;

	std::cout << decagon.getPerimeter() << std::endl;
	std::cout << decagon.getArea() << std::endl;
	
	return;
}
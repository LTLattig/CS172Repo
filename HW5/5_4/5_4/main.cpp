/*
Luke Lattig
CS172 || HW 5_4
*/
#include <iostream>
#include "Rectangle2D.h"

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);
	Rectangle2D rTest (4.25, 2, 1, 1);

	std::cout << r1.getArea() << std::endl;
	std::cout << r1.getPerim() << std::endl;

	std::cout << r1.contains(3, 3) << std::endl;

	std::cout << r1.contains(r2) << std::endl;

	std::cout << r1.overlaps(r3) << std::endl;

	return 0;
}
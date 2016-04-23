/*
Author: Luke Lattig
CS172 || HW 6_3
*/

#include <iostream>
#include <string>
#include "Vector.h"

int main()
{
	Vector<int> inttest; // creates a "vector" of size 0 with nothing in it. 

	Vector<double> doubtest(3); // creates a "vector of size 3 with nothing in it. 
	Vector<double> doubtest2(4); // creates a "vector" of size 4 to swap with doubtest

	Vector<double>* doubPointer = &doubtest2;

	doubtest.writetoVector(); // fill in doubtest
	doubtest2.writetoVector(); // fill in doubtest2

	//doubtest.swap(doubPointer); // swaps doubtest & doubtest2 [NOT FUNCTIONAL]

	doubtest.pop_back(); // remove the last value of doubtest

	doubtest.push_back(7.2); // append 7.2 to doubtest


	double* printtest2 = doubtest.returnElements(); // creates a new array to recieve doubtest's values
	for (int i = 0; i < doubtest.getSize(); i++)
		std::cout << printtest2[i] << std::endl; // prints the values

	std::cout << inttest.empty() << std::endl; // checks if inttest is empty (should be: [1])
	std::cout << doubtest.empty() << std::endl; // checks if doubtest is empty (shouldn't be: [0])

	std::cout << doubtest.at(2) << std::endl; // finds the value of doubtest at the second position in the array

}
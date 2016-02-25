#include <iostream> 
#include <cmath>
#include "QuadraticEquation.h"

using namespace std;

void getRoots(); // contains all the code as specified by problem 9.6(?)

int main()
{
	getRoots();

	return 0;
}

void getRoots()
{
	QuadraticEquation Quad1;

	cout << "<< ax^2 + bx + c = 0 >> \n"; 
	cout << "Please enter integer values for a, b, and c: "; // prompts the user for values of a, b, and c such that they fulfill the quadratic equation

	Quad1.setA();
	Quad1.setB();
	Quad1.setC();

	if (Quad1.getDiscriminant() > 0) // checks if the discriminant (b^2 - 4ac)^(1/2) is positive
	{
		cout << "The value of (-b + (b^2 - 4ac)^(1/2)) / 2a is: "; 
		cout << Quad1.getRoot1(Quad1.getDiscriminant()) << endl; // returns the first root using the value of the discriminant

		cout << "The value of (-b - (b^2 - 4ac)^(1/2)) / 2a is: "; // returns the second root using the value of the discriminant
		cout << Quad1.getRoot2(Quad1.getDiscriminant()) << endl;
	}
	else if (Quad1.getDiscriminant() == 0) // checks if the discriminant (b^2 - 4ac)^(1/2) is zero
	{
		cout << "The discriminant (b^2 - 4ac) = 0. \n";
		cout << "The value of -b / 2a is: " << Quad1.getRoot1(Quad1.getDiscriminant()) << endl;
	}
	else if (Quad1.getDiscriminant() < 0) // checks if the discriminant (b^2 - 4ac)^(1/2) is negative
	{
		cout << "The discriminant (b^2 - 4ac) < 0. \nThere are no real roots.\n";
	}

	return; 
}
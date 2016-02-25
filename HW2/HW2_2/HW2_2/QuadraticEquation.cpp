#include<iostream>
#include<cmath>
#include"QuadraticEquation.h"

using namespace std;

QuadraticEquation::QuadraticEquation()
{

	int a = 1;
	int b = 1;
	int c = 1;

	return;
}

void QuadraticEquation::setA()
{
	cin >> a;
	
}

void QuadraticEquation::setB()
{
	cin >> b;
}

void QuadraticEquation::setC()
{
	cin >> c;
}

double QuadraticEquation::getDiscriminant()
{
	return pow(b, 2) - (4 * a * c);
}

double QuadraticEquation::getRoot1(double N)
{
	if (N >= 0)
		return (-b + pow(N, .5)) / (2 * a);
	else
		return 0;
}

double QuadraticEquation::getRoot2(double N)
{
	if (N >= 0)
		return (-b - pow(N, .5)) / (2 * a);
	else
		return 0;
}
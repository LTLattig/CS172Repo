#pragma once

class QuadraticEquation
{
	
public:
	QuadraticEquation(); 
	void setA();
	void setB();
	void setC();

	double getDiscriminant();
	double getRoot1(double);
	double getRoot2(double);

private:
	int a;
	int b;
	int c;
};
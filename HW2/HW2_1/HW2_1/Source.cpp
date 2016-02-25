#include<iostream>
#include"Fan.h"

using namespace std;

int main() 
{

	Fan Fan1, Fan2;

	//Sets the values specified for Fan1
	Fan1.setSpeed(3);
	Fan1.switchOn();
	Fan1.magicallyChangeRadius(10);


	//verifies that the values specified were set
	cout << "Fan 1: \n";
	cout << "Fan Speed: " << Fan1.showSpeed() << endl;

	Fan1.showState();
	cout << endl;

	cout << "Fan Radius: " << Fan1.showRadius() << endl << endl;

	//Sets the values specified for Fan2
	Fan2.setSpeed(2);
	Fan2.magicallyChangeRadius(5);

	//verifies values were set
	cout << "Fan 2: \n";
	cout << "Fan Speed: " << Fan2.showSpeed() << endl;

	Fan1.showState();
	cout << endl;

	cout << "Fan Radius: " << Fan2.showRadius() << endl << endl;

	return 0;
}
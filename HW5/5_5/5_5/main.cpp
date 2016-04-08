/*
Luke Lattig
CS 172 || HW 5_5
*/

#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

int main()
{
	Course c1("Booger Picking", 2);

	c1.addStudent("Ida Wannatry");
	c1.addStudent("Alredi Anneggsport");
	c1.addStudent("Kinnda A. Paine");

	c1.dropSudent("Kinnda A. Paine");

	string* students = c1.getStudents();

	for (int i = 0; i < c1.getNumberOfStudents(); i++)
		cout << students[i] << endl;
}
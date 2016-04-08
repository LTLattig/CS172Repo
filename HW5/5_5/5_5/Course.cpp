/*
Luke Lattig
CS 172 || HW 5_5

[!! IMPORTANT !!] All code in this file that is not denoted otherwise is taken from the textbook. [!! IMPORTANT !!]

Also, if you happen to be in the mood for punky, energetic music, check out Bliss, by Purple.
If you feel like something a little more mellow, but with some absolutely blistering guitar licks, 
try 1994 by PWR BTTM.
-Luke
*/

#include <iostream>
#include "Course.h"

using std::string;

Course::Course(const string& courseName, int capacity)
{

	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity; 
	students = new string[capacity];

}

// fulfills the requirement, but not my code. Looked up what on earth a deep copy was in the book (no such mention in class)\
and this was already written for this example. It's simple enough that I can't alter it in any significant way.
Course::Course(const Course& course)
{
	numberOfStudents = course.numberOfStudents;
	courseName = course.courseName;
	capacity = course.capacity;
	students = new string[capacity];
}

// not sure what the noise is all about for altering this to work with a deep copy. Seems as though if you wanted to erase the students of a\
deep copy, you would just call ~Course from the copied object. The key words might be "in the class."
Course::~Course() 
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	// my code
	if (numberOfStudents >= capacity) 
	{
		string *nArray = new string[capacity + 1]; // creates the temporary array

		for (int i = 0; i < capacity; i++) // copies over the old array
			nArray[i] = students[i];
		delete[] students; // deletes the old array

		capacity++; // increases class capacity

		students = new string[capacity]; // Reassigns students to a new array of size +1

		for (int i = 0; i < capacity; i++) // copies temporary array
			students[i] = nArray[i];
		delete[] nArray; // deletes temporary array
	}
	// end my code

	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropSudent(const string& name)
{
	// my code
	int bootIndex = -1;

	for (int i = 0; i < numberOfStudents; i++) // searches through existing students to find the designated target
	{
		if (name == students[i])
		{
			bootIndex = i;
		}
	}

	if (bootIndex != -1)
	{
		students[bootIndex] = students[numberOfStudents - 1]; // swaps the designated target with the last on the list of students
		numberOfStudents--; // gives target the boot, setting the stage for them to be overwritten by the next student.
	}

	// end my code
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

// my code
void Course::clear()
{
	for (int i = 0; i < numberOfStudents; i++) // sets all students to the empty string (kinda unneccessary)
	{
		students[i] = "";
	}
	numberOfStudents = 0; // resets number of students so that they're all overwritten when the time comes.
}
// end my code
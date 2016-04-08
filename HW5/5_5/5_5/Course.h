/*
Luke Lattig
CS 172 || HW 5_5

[!! IMPORTANT !!] All code in this file that is not denoted otherwise is taken from the textbook. [!! IMPORTANT !!]

*/

#pragma once
#ifndef _COURSE_H_
#define _COURSE_H_
#include <string>

using std::string;

class Course
{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;

public:
	Course(const string& courseName, int capacity);
	// my code
	Course(const Course&);
	// end my code
	~Course();

	string getCourseName() const;
	void addStudent(const string& name);
	void dropSudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;
	void clear();

};



#endif
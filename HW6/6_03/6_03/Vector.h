/*
Author: Luke Lattig
CS172 || HW 6_3
*/

#pragma once
#ifndef _VECTOR_H_
#define _VECTOR_H_


// this was pretty much the worst, just saying. I apologize in advance for any harm this might cause to your brain, \
and admit that this is pretty much the least organized code I have ever written. 

#include <iostream>
#include <string>

template<typename T>

class Vector
{

private:

	int size;
	T * elements;

public:
	Vector(); // default constructor
	Vector(int); // constructor that takes in a size
	Vector(int, T[]); // constructor that takes in a size and an array
	void push_back(T); // function that appends a value of type T to the "vector"
	void pop_back(); // function that removes the last value of the "vector"
	unsigned const int getSize(); // returns the number of elements in the "vector"
	T const at(int); // returns the contents of the "vector" at position (blank)
	bool const empty(); // checks to see if the "vector" is empty
	void clear(); // empties the "vector"
	void swap(Vector*&); // swaps the contents of two "vectors"
	void writetoVector(); // enables one to fill the "vector"
	T* returnElements(); // returns the elements of the "vector"
};

template<typename T>
Vector<T>::Vector()
{
	size = 0;
	elements = new T[0];

	//for (int i = 0; i < 5; i++)
	//	elements[i] = 0;
}

template<typename T>
Vector<T>::Vector(int nsize)
{
	size = nsize;

	elements = new T[nsize];

	// for (int i = 0; i < nsize; i++)
	//	elements[i] = 0;
}

template<typename T>
Vector<T>::Vector(int nsize, T nelements[])
{
	size = nsize;

	elements = new T[nsize];

	for (int i = 0; i < nsize; i++) // assigns the values of the given array to the vector's "elements" array
	{
		elements[i] = nelements[i];
	}
}

template<typename T>
void Vector<T>::push_back(T nelement)
{
	size++; // increases size of the "vector"

	T * nArray = new T[size]; // creates a new array
	for (int i = 0; i < size - 1; i++)
		nArray[i] = elements[i]; // assigns values of elements to mew array

	nArray[size - 1] = nelement; // adds the most recent value to new array

	delete[] elements; // deletes the old elements array

	elements = nArray; // assigns elements to the new array

	// delete[] tempArray;
}

// assigns the a value of null to the last space of the array & decrements size
template<typename T>
void Vector<T>::pop_back()
{
	size--; 

	elements[size] = NULL; 
}

// returns the size of the array
template<typename T>
unsigned const int Vector<T>::getSize()
{
	return size; 
}

// returns the element at given position
template<typename T>
T const Vector<T>::at(int position)
{
	return elements[position - 1]; 
}

template<typename T>
bool const Vector<T>::empty()
{
	if (size == 0) // if there's nothing in the array
		return true;

	for (int i = 0; i < size; i++) // if everything in the array is null
		if (elements[i] != NULL)
			return false;
	return true;
}


// sets all elements of array to null and sets size = 0
template<typename T>
void Vector<T>::clear()
{
	for (int i = 0; i < size; i++) 
		elements[i] = NULL;

	size = 0;
}

/* swaps elements and size values of two "vectors" [NOT FUNCTIONAL]
template<typename T>
void Vector<T>::swap(Vector* &swapee)
{
	Vector<T>* tempVector(size, elements);


	

}
*/

// allows the user to write to the "vector"
template<typename T>
void Vector<T>::writetoVector()
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> elements[i];
	}
}

// returns the array of elements
template<typename T>
T* Vector<T>::returnElements()
{
	return elements;
}
#endif
/*
Author: Luke Lattig
CS172 || HW6_1
*/

#include <iostream>
#include <string>


template <typename T>
int linearSearch(const T[], T, int);

int main()
{
	int testA[] = { 1, 2, 3, 4 };
	double testB[] = { 1.5, 2.5, 3.5, 4.5 };
	std::string testC[3] = { "Wook", "Jar", "Snoak" };

	std::string t = "Help";

	std::cout << linearSearch(testA, 2, 4) << std::endl; 
	std::cout << linearSearch(testB, 3.5, 4) << std::endl;
	std::cout << linearSearch(testC, t, 3) << std::endl; 
}

// as taken from Listing 7.9 of the course book. 
template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i + 1; // added one to reflect the relative position of the value that matches the key more intuitively.
		// Joseph: Ok, but the reason for this function in general is to find and return the index of the item so that you can use it in other code.
	}
	return -1;
}
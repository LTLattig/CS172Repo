/*
Author: Luke Lattig
CS172 || HW 6_2
*/

#include <iostream>
#include <string>

template<typename T>
bool isSorted(const T[], int);

int main()
{
	int testA[] = { 1, 2, 3, 4, 5 };
	double testB[] = { 1.1, 3.3, 2.2, 4.4, 5.5 };
	std::string testC[] = { "ayy", "bee", "cee" };

	std::cout << isSorted(testA, 5) << std::endl;
	std::cout << isSorted(testB, 5) << std::endl;
	std::cout << isSorted(testC, 3) << std::endl;
}

// I'm taking "sorted" to mean "in rising order." No idea whether this is what is meant, 
// but the book isn't giving me much to go on here. 
template<typename T>
bool isSorted(const T list[], int size) 
{
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] > list[i + 1])
			return false;
	}
	return true;
}
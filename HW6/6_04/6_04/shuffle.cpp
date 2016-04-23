
/*
Author: Luke Lattig
CS172 || HW 6_04
*/

#include <iostream>
#include <vector>
#include <ctime>

template<typename T>
void shuffle(std::vector<T>& v)
{
	srand(time(NULL)); // seeds random number generator

	for (int i = 0; i < 10; i++)
	{
			int random = rand() % 10; // creates a number 0-9 to correspond with the index of v
			
		//// swaps values ////
			T temp = v[i];
			v[i] = v[random];
			v[random] = temp;
	}
}

int main()
{
	std::vector<int> vTest = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	shuffle(vTest);

	for (int i = 0; i < 10; i++) // prints newly shuffled vector
		std::cout << vTest[i] << std::endl;
}
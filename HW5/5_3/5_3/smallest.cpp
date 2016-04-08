/*
Name: Luke Lattig
CS172||HW 5_3
*/

#include <iostream>

int findSmall(int[], int);


int main()
{
	int testArr[8] = { 1, 2, 4, 5, 10, 100, 2, -22 };

	// prints smallest number in array
	std::cout << findSmall(testArr, 8) << std::endl; 

}

// finds and returns smallest number of the given array
int findSmall(int* arr, int size)
{
	int* poi = arr; // poi/arr are adresses

	int mini = *poi;

	for (int i = 0; i < size; i++) // loops through the array, swapping out mini for any lesser value
		if (mini >= *(poi + i))
			mini = *(poi + i);
			
	return mini;
}
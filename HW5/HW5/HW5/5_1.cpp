/*
Luke Lattig
CS 172 || HW 5_1
*/
#include <iostream>

int getSize(); // retrieves the number of integers to allocate & later average
int * fillArray(int); // allocates & initializes an array according to user input
void arrayAverage(int[], int); // averages the numbers as input by the user

int main()
{
	int size = getSize();

	arrayAverage(fillArray(size), size);

	return 0;
}

int getSize() // returns user definition of array size
{
	int size;
	std::cout << "Please enter the number of integers you'd like to enter: ";
	std::cin >> size;
	return size;
}

int * fillArray(int size)
{
	int * poiArray = new int[size]; // allocates a new array of size "size" ( obtained from getSize() )

	std::cout << "Please enter " << size << " integers:\n";

	for (int i = 0; i < size; i++) // fills that array with user input ( integers )
		std::cin >> poiArray[i];

	return poiArray;
}

void arrayAverage(int arr[], int size)
{
	int * nArray = arr;
	int sum = 0;
	double average;
	int abavCount = 0; 

	for (int i = 0; i < size; i++) // sums up the elements of the array as entered by the user
		sum += nArray[i];

	average = sum / size; // retrieves average value of the array

	for (int i = 0; i < size; i++) // goes through array and counts the number of entries that are above the average
		if (nArray[i] > average)
			abavCount++;


	std::cout << "Average: " << average << std::endl;

	if (abavCount > 1) // case abavCount > 1
		std::cout << "There are " << abavCount << " numbers that you entered that are\nabove average\n";
	else if (abavCount == 1) // case abavCount == 1
		std::cout << "There is " << abavCount << " number that you entered that is\nabove average\n";

	delete[] nArray; // deletes array to (hopefully) prevent memory leaks
}

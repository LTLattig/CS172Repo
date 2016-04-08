#include <iostream>



int * doubleCapacity(const int*, int);

int main() //test code
{
	int inArray[5] = { 1, 2, 3, 4, 5 }; //test array to double
	
	int * outArray = doubleCapacity(inArray, 5);

	for (int i = 0; i < 10; i++) // reads out new array to make sure that size has indeed been doubled (in this case, size * 2 = 10)
		std::cout << outArray[i] << std::endl;

}

int * doubleCapacity(const int* list, int size) // the fxn asked for by the HW problem, returns an array with 2x as many spaces allocated to it as the original
{
int nSize = size * 2;

int* newArray = new int [nSize];

for (int i = 0; i < nSize; i++)
	newArray[i] = 0;

for (int i = 0; i < size; i++)
	newArray[i] = list[i];

return newArray;
}

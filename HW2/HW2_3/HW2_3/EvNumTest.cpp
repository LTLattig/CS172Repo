#include <iostream>
#include "EvenNumber.h"

using namespace std;

void EvenNumberTest(); // contains the main program as specified by problem 9.11

int main() 
{
	EvenNumberTest();

	return 0;
}

void EvenNumberTest() 
{
	int input;
	cout << "Please enter an even number to check the even numbers surrounding it: "; // prompts the user to enter a value for the evNumTest EvenNumber object
	cin >> input;

	EvenNumber evNumTest(input);
	EvenNumber evNumNext;
	EvenNumber evNumPrev;

	cout << "The current number is: " << evNumTest.getValue() << endl; //retrieves the value of evNumTest

	evNumNext = evNumTest.getNext(evNumTest.getValue()); //sets evNumNext equal to the object returned by .getNext()
	if (input % 2 == 0)
		cout << "The next even number is: " << evNumNext.getValue() << endl; // prints the value of evNumNext if even
	else if (input % 2 == 1)
		cout << "The number you input was not even. \n"; // straightforward, I think

	evNumPrev = evNumTest.getPrevious(evNumTest.getValue()); //sets evNumPrev equal to the object returned by .getPrevious()
	if (input % 2 == 0)
		cout << "The previous even number is: " << evNumPrev.getValue() << endl; // prints the value of evNumPrev
	else if (input % 2 == 1)
		cout << "The number you input was not even. \n"; // once again, relatively straightforward

	return;
}

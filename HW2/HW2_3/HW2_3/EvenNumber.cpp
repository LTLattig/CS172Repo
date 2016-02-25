#include <iostream>
#include "EvenNumber.h"

using namespace std;

EvenNumber::EvenNumber() // [CONSTRUCTOR] constructs an object of value = 0
{
	value = 0;
}

EvenNumber::EvenNumber(int N) // [CONSTRUCTOR] constructs an object of value = input
{
	value = N;
}

int EvenNumber::getValue() // returns the value of any given object
{
	return value;
}

/* 
void EvenNumber::setValue(int N)
{
	value = N;
} 
*/

EvenNumber EvenNumber::getNext(int N) // creates and returns an EvenNumber object of value input + 2
{
	EvenNumber nextNumber(N + 2);

		return nextNumber;

}

EvenNumber EvenNumber::getPrevious(int N) // creates and returns an EvenNumber object of value input -2
{
	EvenNumber prevNumber(N - 2);

		return prevNumber;
}
#pragma once

class EvenNumber 
{

public:
	EvenNumber(); // generates an EvenNumber object with value = 0
	EvenNumber(int); // generates an EvenNumber object with value = input

	int getValue(); // returns the value of a given object
	// void setValue(int);
	EvenNumber getNext(int); // returns an oject with the value of the input + 2
	EvenNumber getPrevious(int); // returns an oject with the value of the input - 2

private:
	int value; // this really makes things kinda weird to understand, blame the book for specifying "value"

};
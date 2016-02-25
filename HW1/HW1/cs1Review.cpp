/*Name: Luke Lattig
Course: CS 172-1
Assignment: CS 171 Review*/


/*

EX01_01: 
a) CPU
b) Random Access Memory?
c) i? iii? Define disk. 
d) v
e) 
f) 8 
g) iv
h) ii

*/

#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();
int whyNotTwice(int);
int add(int, int);
int addOne(int&);
int readArray(int[], int);
int checkArray(int[], int);

int main() {
	
	//calls each of the review functions in sequence. Apologies for the lack of menu.
	ex02();
	ex03();
	ex04();
	ex05();

}

void ex02() {

	// a) 
	bool hasPassedTest = true;

	//b)
	srand(time(0));
	int x = rand() % 1000;
	int y = rand() % 1000;
	// checks if x is greater than/equal to y, lets the user know
	if (x >= y)
		cout << "x is greater than or equal to y. \n";
	else
		cout << "x is less than y. \n";

	//c)
	int numberOfShares = 0;
	//prompt user for number of shares
	cout << "Please input a number of shares: ";
	//read in number of shares
	cin >> numberOfShares;
	// display if number of shares < 100
	if (numberOfShares < 100)
		cout << "There are less than 100 shares.\n";
	else
		cout << "There are 100 or more shares. \n";

	//d)
	int boxWidth;
	int bookWidth;
	
	cout << "Enter an integer for box width:";
	cin >> boxWidth;
	cout << "Enter an integer for book width:";
	cin >> bookWidth;
	// checks to see if box width is evenly divisble by book width. Really doesn't need a comment, whoops.
	if (boxWidth % bookWidth == 0)
		cout << "The box width is evenly divisible by the book width.\n";

	//e) reduces shelf life of chocolate by four if it's warmer than 90 deg(F/C? Nobody knows) outside
	int chocolateLives, temp;
	cout << "Please enter a shelf life for a box of chocolate, and the outside temperature: ";
	cin >> chocolateLives;
	cin >> temp;

	if (temp > 90)
		chocolateLives - 4;

	return;
}

void ex03() {

	//a) 
	int area;

	cout << "Enter the area of a square: ";
	cin >> area;

	// finds the length of the sides (L = a^(1/2))
	int length = pow(area, .5);

	// a^2 + b^2 = c^2 ( in this case 2a^2 = c^2, or c = (2a^2)^(1/2) )
	cout << "The diagonal of the square is " << pow(2 * pow(length, 2), .5) << endl;

	//b)
	char yOn;

	cout << "Please enter 'y' or 'n:' ";
	cin >> yOn;

	if (yOn == 'y')
		cout << "yes. \n";
	else if (yOn == 'n')
		cout << "no. \n";
	else
		cout << "You goofed somehow. Good job \n";

	//c)
	char tab = 9;

	//d)
	string mailingAddress;

	cout << "Please enter a mailing address. ";
	cin >> mailingAddress;
	cout << mailingAddress << endl;

	//e)
	string empty = " ";

	return;
}

void ex04() {

	//a)
	// loops until user inputs number 1 <= n <= 10
	int num = 0;
	do {
		cout << "input a number between 1 and 10: ";
		cin >> num;
	} while (num < 1 || num > 10);

	//b)
	int sum = 0;
	// sums all the cubes from 1 to the number entered above. 
	for (int i = 1; i <= num; i++)
		sum += pow(i, 3);

	cout << sum << endl;

	//c)
	// outputs an * for every number from 1 to entered number. 
	int count = 1;
	do {
		cout << "*";
		count++;
	} while (count <= num);
	cout << endl;

	//d)
	// outputs every even number from 0 - 40
	for (int i = 0; i <= 20; i++)
		cout << 2 * i << " ";
	cout << endl;

	//e)

	cout << whyNotTwice(num) << endl;

	//f)

	srand(time(0));

	cout << add(rand() % 10, rand() % 10) << endl;

	//g) passes in entered number by reference

	cout << addOne(num) << endl;

}

// returns twice the input
int whyNotTwice(int N) {

	return 2 * N;
}

// returns the sum of two random numbers b/n 0-9
int add(int N, int M) {

	return N + M;

}

// takes in number by reference, increments by one.
int addOne(int& N) {

	return N + 1;

}

void ex05() {

	//a) 

	int storage[5];
	cout << "please enter five numbers: " << endl;
	for (int i = 0; i <= 4; i++) // allows the user to enter 5 numbers consecutively
		cin >> storage[i];

	//b) 

	int sum = 0; 
	int product = 1;
	for (int i = 0; i <= 4; i++) // sums and multiplies all entered numbers above
	{
		sum += storage[i];

		product = product * storage[i];
	}
	cout << sum << " " << product << endl;

	//c)
	readArray(storage, 5);

	//d)
	checkArray(storage, 5);
	
	return;
}

// reads in an array and outputs the numbers inside it
int readArray(int A[], int N) 
{
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
	cout << endl;

	return 0;
}

// reads in an array and prompts the user for a number, checks whether that number is found in the array.
int checkArray(int A[], int N)
{
	int check;
	bool found;
	cout << "Enter a value: ";
	cin >> check;

	for (int i = 0; i < N; i++)
	{
		if (check == A[i])
		{
			found = true;
			break;
		}
		else if (check != A[i])
			found = false;
	}

	if (found == true)
		cout << "The value you entered was in the array. \n";
	
	else if (found == false)
		cout << "The value you entered was not in the array. \n";

	return 0;
}
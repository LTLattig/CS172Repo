#include <iostream>
#include <string>
#include <vector>

using std::string;


string getWord() // retrieves a word to check for palindromes
{
	string word;

	std::cout << "Please input a word: ";
	std::cin >> word;

	return word;
}

bool checkPalindrome(string input)
{
	int stringSize = input.length(); // obtains number of characters in the word

	std::vector<char> palinCheck(input.begin(), input.end()); // places individual characters of the word in an array
	std::vector<char> reverseInput(stringSize); // initializes an array with stringSize spots(it's the technical term) allocated

	for (int i = 0; i < stringSize; i++) // ensures case independency by making every alphabetic input lower-case. Also bars special characters (%, ., _, etc.)
	{
		if (palinCheck[i] > 64 && palinCheck[i] < 91) 
			palinCheck[i] = palinCheck[i] + 32;

		else if (palinCheck[i] < 48 ||
			palinCheck[i] > 57 && palinCheck[i] < 65 ||
			palinCheck[i] > 90 && palinCheck[i] < 97 ||
			palinCheck[i] > 122)
		{
			std::cout << "Please only use a-z, A-Z, & 0-9.\n";
			return false;
		}
	}

	for (int i = stringSize; i > 0; i--) // sets the values of reverseInput to the reverse of palinCheck
	{
		reverseInput[stringSize - i] = palinCheck[i - 1];
	}

	if (reverseInput == palinCheck) // if input is a palindrome, returns true + displays message. 
	{
		std::cout << input << " is a palindrome.\n";
		return true;
	}
	else // if input is not a palindrome, returns false + displays message. 
	{
		std::cout << input << " is not a palindrome.\n";
		return false;
	}	
}


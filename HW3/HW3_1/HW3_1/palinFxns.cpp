#include <iostream>
#include <string>
#include <vector>

using std::string;


string getWord()
{
	string word;

	std::cout << "Please input a word: ";
	std::cin >> word;

	return word;
}

bool checkPalindrome(string input)
{
	int stringSize = input.length();

	//try using stacks? http://stackoverflow.com/questions/8247793/converting-stdstring-to-stdvectorchar
	std::vector<char> palinCheck(input.begin(), input.end());
	std::vector<char> reverseInput(stringSize);
	

	for (int i = 0; i < stringSize; i++)
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

		// std::cout << palinCheck[i]; // a quality test
	}

	for (int i = stringSize; i > 0; i--)
	{
		reverseInput[stringSize - i] = palinCheck[i - 1];
	}

	if (reverseInput == palinCheck)
	{
		std::cout << input << " is a palindrome.\n";
		return true;
	}
	else
	{
		std::cout << input << " is not a palindrome.\n";
		return false;
	}
	
}


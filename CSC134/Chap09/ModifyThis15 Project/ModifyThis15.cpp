//ModifyThis15.cpp - number guessing game
//Created/revised by Ethan Green on 3/26/2018

#include <iostream>
#include <ctime>
//#include <cstdlib>
using namespace std;

int main()
{
	int randomNumber = 0;
	int numberGuess = 0;
	int totalGuessCount = 1;

	//generate a random number from 1 through 10
	srand(static_cast<int>(time(0)));

	randomNumber = 1 + rand() % (10 - 1 + 1);

	//get first guess from user
	cout << "Guess a number from 1 through 10: ";
	cin >> numberGuess;

	while (totalGuessCount <= 5)
	{
		if (numberGuess != randomNumber)
		{
			cout << "Sorry, guess again (" << 5 - totalGuessCount << " attempts remaining)" << endl << "Guess again: ";
			cin >> numberGuess;

			totalGuessCount++;
		}

		else
		{
			cout << endl << "Yes, the number is " << randomNumber << endl;

			cin.get();
			return 0;
		}
	}	

	cout << "You've run out of attempts! The number you were looking for was: " << randomNumber << endl;

	cin.get();
	return 0;
}   
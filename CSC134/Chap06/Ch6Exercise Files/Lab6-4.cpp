//Lab6-4.cpp - displays the price of a ticket 
//Created/revised by Ethan Green on 2/19/2018

#include <iostream>

using namespace std;

int main()
{
	int age = 0;
	double ticketPrice = 0.0;

	cout << "Enter the customer's age (years): " << endl;
	cin >> age;

	if (age <= 0)
	{
		cout << "Invalid age!";
		
		return 0;
	}

	else if (age >= 4 && age <= 64)
	{
		ticketPrice = 9.0;
	}

	else if (age >= 65)
	{
		ticketPrice = 6.0;
	}

	cout << "The ticker price for a customer of age " << age << " is: $" << ticketPrice << endl;

	return 0;
}

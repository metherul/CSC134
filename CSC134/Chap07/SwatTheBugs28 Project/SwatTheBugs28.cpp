//SwatTheBugs28.cpp - displays the number of positive integers
//and the number of negative integers entered by the user
//Created/revised by Ethan Green on 3/5/2018

#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int positive = 0;	
	int negative = 0;	

	cout << "Enter a positive or negative integer (enter 0 to end): ";
	cin >> number;

	while (number != 0)
	{
		if (number > 0)
		{
			positive++;
		}

		else if (number < 0)
		{
			negative++;
		}

		cout << "Enter another positive or negative integer (enter 0 to end): ";
		cin >> number;
	}
	
	cout << endl;
	cout << "Total positive integers: " << positive << endl;
	cout << "Total negative integers: " << negative << endl;

	return 0;
}

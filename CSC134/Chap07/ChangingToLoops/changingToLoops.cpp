//Introductory13.cpp - displays the total owed for a seminar -- make a WHILE loop
//Created/revised by Ethan Green on 2/26/2018

#include <iostream>

using namespace std;

int main()
{
	const int FEE1 = 125;
	const int FEE2 = 100;
	const int FEE3 = 75;
	int registrants = 0;
	int total = 0;

	cout << "Number of registrants: ";
	cin >> registrants;

	if (registrants <= 0)
	{
		cout << "Invalid entry" << endl;
	}

	else
	{
		if (registrants < 6)
		{
			total = registrants * FEE1;
		}

		else if (registrants < 21)
		{
			total = registrants * FEE2;
		}

		else
		{
			total = registrants * FEE3;
		}

		cout << "Total: $" << total << endl;
	} 

	return 0;
}	



































=========================================================
//Intermediate16.cpp - displays the smallest and largest of three integers --> make a FOR Loop
//Created/revised by _______________________ on __________________________

#include <iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int smallest = 0;
	int largest = 0;

	cout << "First integer: ";
	cin >> num1;
	cout << "Second integer: ";
	cin >> num2;
	cout << "Third integer: ";
	cin >> num3;

	if (num1 >= num2)
	{
		largest = num1;
		smallest = num2;
	}
	else
	{
		largest = num2;
		smallest = num1;
	}  //end if

	if (num3 >= largest)
		largest = num3;
	else if (num3 <= smallest)
		smallest = num3;
	//end if
	cout << endl;
	cout << "Smallest number is " << smallest << "." << endl;
	cout << "Largest number is " << largest << "." << endl;
	return 0;
}	//end of main function

#include <iostream>

using namespace std;

int main()
{
	int empCode = 0;	
	string empName = "";

	cout << "Enter the code of the user you would like to lookup: ";
	cin >> empCode;

	if (empCode >= 1 && empCode <= 5)
	{
		if (empCode == 1)
		{
			empName = "Same";
		}

		else if (empCode == 2)
		{
			empName = "Jack";
		}

		else if (empCode == 3 || empCode == 4)
		{
			empName = "Sue";
		}

		else if (empCode == 5)
		{
			empName = "Mary";
		}
	
		cout << "User " << empName << " has been found with code " << empCode;
	}

	else
	{
		cout << "Incorrect employee code, please enter a value which fits in the following criteria: " << endl << "	Value must be >= 1 and <= 5";
	}

	return 0;
}

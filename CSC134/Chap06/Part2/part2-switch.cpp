#include <iostream>

using namespace std;

int main()
{
    int empCode = 0;
    string empName = "";

    cout << "Enter the code of the user you would like to lookup: ";
	cin >> empCode;

    switch (empCode)
    {
        case 1:
        {
            empName = "Sam";
            break;
        }

        case 2: 
        {
            empName = "Jack";
            break;
        }

        case 3: 
        {
            empName = "Sue";
            break;
        }

        case 4: 
        {
            empName = "Sue";
            break;
        }

        case 5:
        {
            empName = "Mary";
            break;
        }

        default: 
        {
            cout << "Incorrect employee code, please enter a value which fits in the following criteria: " << endl << "	Value must be >= 1 and <= 5";
            
            return 0;
        }
    }

    cout << "User " << empName << " has been found with code " << empCode;

    return 0;
}
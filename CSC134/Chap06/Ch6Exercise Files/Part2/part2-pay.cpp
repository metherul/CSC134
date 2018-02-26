#include <iostream>

using namespace std;

int main()
{
    int empCode = 0;
    double salary = 0.0;
    double grossPay = 0.0;

    cout << "Enter your employee code: ";
    cin >> empCode;

    cout << "Enter your annual salary: ";
    cin >> salary;

    if (empCode >= 1 && empCode <= 3)
    {
        if (empCode == 1)
        {
            grossPay = salary / 12;
        }

        if (empCode == 2)
        {
            grossPay = salary / 24;
        }

        if (empCode == 3)
        {
            grossPay = salary / 52;
        }
    }

    // Note that the 0.0 value in grossPay will stick around if it's not changed by the above if statement.

    cout << "The gross pay is: $" << grossPay;

    return 0;
}
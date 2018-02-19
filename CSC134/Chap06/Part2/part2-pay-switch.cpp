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

    switch (empCode)
    {
        case 1: 
        {
            grossPay = salary / 12;
            break;
        }

        case 2:
        {
            grossPay = salary / 24;
            break;
        }

        case 3: 
        {
            grossPay = salary / 52;
            break;
        }
    }

    cout << "The gross pay is: $" << grossPay;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int registrationCount = 0;
    double totalFee = 0.0;

    cout << "Enter the total amount of registrations: ";
    cin >> registrationCount;

    if (registrationCount >= 1)
    {
        if (registrationCount <= 5)
        {
            totalFee = registrationCount * 125;
        }

        else if (registrationCount >= 6 && registrationCount <= 20)
        {
            totalFee = registrationCount * 100;
        }

        else if (registrationCount >= 21)
        {
            totalFee = registrationCount * 75;
        }
    }

    else
    {
        cout << registrationCount << " is an incorrect value. Please follow the parameters listed below: " << endl << " Values must be greater than 0" << endl;
    
        return 0;
    }

    cout << "The total registration fee is: $" << totalFee << endl;
    
    return 0;
}
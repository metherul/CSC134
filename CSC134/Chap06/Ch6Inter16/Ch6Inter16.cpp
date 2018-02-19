#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
    double numberArray[3];

    double largestNumber = 0.0;
    double smallestNumber = 0.0;

    cout << "Enter the first number: ";
    cin >> numberArray[0];

    cout << "Enter the second number: ";
    cin >> numberArray[1];

    cout << "Enter the third number: ";
    cin >> numberArray[2];

    sort(begin(numberArray), end(numberArray));

    cout << "Smallest number: " << numberArray[0] << endl;
    cout << "Largest number: " << numberArray[2] << endl;

    return 0;
}
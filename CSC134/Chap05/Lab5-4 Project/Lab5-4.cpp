//Lab5-4.cpp - displays the total due for tickets
//Created/revised by Ethan Green on 2/7/2018

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    const int TICKET_PRICE = 75;
    int tickets = 0;
    int total = 0;

    cout << "Number of tickets you want to purchase (the maximum is 10): ";
    cin >> tickets;

    if (tickets < 0 || tickets > 10)
    {
        cout << "Invalid ticket amount chosen. (" << tickets << ") Please try again.";
        return 0;
    }

    total = tickets * TICKET_PRICE;
    cout << setprecision(1) << "Your total is: $" << total << endl;

    return 0;
}

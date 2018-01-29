#include <iostream>

using namespace std;

int main()
{
    int firstClassTickets;
    int coachClassTickets;
    float firstClassCost;
    float coachClassCost;

    cout << "Enter the amount of first class tickets: ";
    cin >> firstClassTickets;

    cout << "Enter the amount of coach class tickets: ";
    cin >> coachClassTickets;

    cout << "Enter the cost of a first class ticket: ";
    cin >> firstClassCost;

    cout << "Enter the cost of a coach class ticket: ";
    cin >> coachClassCost;

    float totalFirstClassCost = firstClassTickets * firstClassCost;
    float totalCoachClassCost = coachClassTickets * coachClassCost;
    float totalCost = totalFirstClassCost + totalCoachClassCost;

    cout << "Total first class cost: " << totalFirstClassCost << endl;
    cout << "Total coach class cost: " << totalCoachClassCost << endl;
    cout << "Total ticket cost: " << totalCost;
}
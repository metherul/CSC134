// Ethan Green
// 1/29/2018

#include <iostream>

using namespace std;

int main()
{
    float salary;
    const int weeksInYear = 52;

    cout << "Please enter your yearly salary: ";
    cin >> salary;

    float biWeeklySalary = salary / (weeksInYear / 2);
    float weeklySalary = salary / weeksInYear;

    cout << "Your bi-weekly salary: " << biWeeklySalary << endl;
    cout << "Your weekly salary: " << weeklySalary << endl;
}

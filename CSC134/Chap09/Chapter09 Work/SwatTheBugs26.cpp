//SwatTheBugs26.cpp - displays the miles per gallon
//Created/revised by Ethan Green on 3/26/2018

#include <iostream>
#include <iomanip>

using namespace std;

double calcMpg(double, double);

int main()
{
	double miles = 0.0;
	double gallons = 0.0;
	double milesPerGal = 0.0;
	
	cout << "Enter the number of miles: ";
	cin >> miles;
	cout << "Enter number of gallons: ";
	cin >> gallons;

	milesPerGal = calcMpg(miles, gallons);
	cout << fixed << setprecision(1);
	cout << "Miles per gallon: " << milesPerGal << endl;

	return 0;
}	

double calcMpg(double distance, double galUsed)
{
	return distance / galUsed;
}	
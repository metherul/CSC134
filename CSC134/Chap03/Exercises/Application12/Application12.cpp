#include <iostream>

using namespace std;

int main()
{
	float feetDistance;
	cout << "Enter the distance in feet: ";
	cin >> feetDistance;

	float mphSpeed;
	cout << "Enter the speed in MPH: ";
	cin >> mphSpeed;

	double distancePerSecond = feetDistance / ((mphSpeed * 5280) / 3600);

	cout << "Distance/Second: " << distancePerSecond;
}

//Advanced21.cpp - calculates and displays a commission
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double RATE1 = 0.02;
	const double RATE2 = 0.05;
	double sales = 0.0;
	double commission = 0.0;

	cout << "Enter the sales amount: ";
	cin >> sales;

	switch (sales <= 15000.0)
	{
		case true:
		{
			commission = sales * RATE1;
			cout << "true";

			break;
		}

		case false:
		{
			commission = sales * RATE2;
			cout << "false";

			break;
		}
	}

	cout << fixed << setprecision(2);
	cout << "Commission: $" << commission << endl;
	return 0;
}	//end of main function

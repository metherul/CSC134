//Lab5-6.cpp - displays a service charge, which is 1%
//of the purchase price; however, an additional $5 service
//charge should be added to code 2 purchases
//Created/revised by Ethan Green on 2/7/2018

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	char code = ' ';
	double purchase = 0.0;
	double serviceChg = 0.0;

	cout << "Enter code: ";
	cin >> code;
	cout << "Purchase price: ";
	cin >> purchase;

	serviceChg = purchase * 0.01;

	if (code == '2')
	{
		serviceChg += 5;
	}

	cout << fixed << setprecision(2);
	cout << "Service charge: " << serviceChg << endl;

	return 0;
}

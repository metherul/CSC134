#include <iostream>

using namespace std;

int main()
{
	float grossPay = 0;
	float companyContribution = .04;
	float carlosContribution = .02;
	cout << "Enter the gross pay (per paycheck)" << endl;
	cin >> grossPay;
	
	float totalContribution = (grossPay * companyContribution) + (grossPay * carlosContribution);

	cout << "The total contribution: " << totalContribution << endl;

}

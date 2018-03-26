#include <iostream>

float CalculateGrossPay(float hours, float pay);

int main()
{
	while (true)
	{
		float inputHours = 0;
		float inputPay = 0;
		char loopResponse = ' ';

		std::cout << "Enter the amount of hours the employee has worked: ";
		std::cin >> inputHours;

		std::cout << "Enter the pay rate of the employee: $";
		std::cin >> inputPay;

		float grossPay = CalculateGrossPay(inputHours, inputPay);

		std::cout << "The gross employee pay is: $" << grossPay << std::endl;

		std::cout << "Would you like to continue? (y/n): ";
		std::cin >> loopResponse;

		if (loopResponse == 'n')
		{
			return 0;
		}
	}
}

float CalculateGrossPay(float hours, float pay)
{
	float totalHours = 0;

	if (hours > 50)
	{
		totalHours += (((hours - 50) * 2) + (13 * 1.5) + 37);
	}

	else if (hours >= 38 && hours <= 50)
	{
		totalHours += (((hours - 37) * 1.5) + 37);
	}

	else
	{
		totalHours += hours;
	}

	return totalHours * pay;
}
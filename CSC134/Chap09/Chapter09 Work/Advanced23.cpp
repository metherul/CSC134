#include <iostream>
#include <iomanip>

float CalculateShippingPrice(float totalDue, bool isPremium);

int main()
{
	float totalDue = 0;
	float shippingPrice = 0;
	char premiumResponse = ' ';

	std::cout << "Enter the total order cost: $";
	std::cin >> totalDue;

	std::cout << "Are you a premium member? (y/n) ";
	std::cin >> premiumResponse;

	shippingPrice = CalculateShippingPrice(totalDue, premiumResponse == 'y');

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Your order of amount $" << totalDue << " costs $" << shippingPrice << " to ship, with a total cost of $" << totalDue + shippingPrice << std::endl;
}

float CalculateShippingPrice(float totalDue, bool isPremium)
{
	float shippingPrice = 0;

	if (isPremium)
	{
		if (totalDue <= 49.99)
		{
			shippingPrice = 4.99;
		}
	}

	else
	{
		if (totalDue > 100)
		{
			shippingPrice = 12.99;
		}

		else
		{
			shippingPrice = 4.99;
		}
	}

	return shippingPrice;
}
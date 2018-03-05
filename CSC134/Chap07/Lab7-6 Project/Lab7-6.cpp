//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

int main()
{
	auto inputPriceCount = 0;
	auto totalPrices = 0.0;
	auto averagePrice = 0.0;
	auto acceptingUserInput = true;

	std::cout << "Enter the price per item ($), type -1 to finish." << std::endl;

	while (acceptingUserInput)
	{
		auto temporaryStorage = 0.0;
		inputPriceCount++;

		std::cout << "Enter the price of item #" << inputPriceCount << ": $";
		std::cin >> temporaryStorage;

		if (temporaryStorage < 0)
		{
			acceptingUserInput = false;
		}

		else
		{
			totalPrices += temporaryStorage;
		}
	}

	// Subtract one from inputPriceCount to make up for values added by breaking user entry
	inputPriceCount -= 1;

	if (inputPriceCount > 0)
	{
		averagePrice = (totalPrices / static_cast<double>(inputPriceCount));
	}

	else
	{
		averagePrice = 0.0;
	}

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The average price for " << inputPriceCount << " items and an aggregated cost of $" << totalPrices << " is $" << averagePrice << std::endl;

	return 0;
}
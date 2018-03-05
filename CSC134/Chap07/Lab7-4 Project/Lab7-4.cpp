//Lab7-4.cpp - displays the average electric bill
//Created/revised by Ethan Green on 3/5/2018

#include <iostream>
#include <iomanip>

int main()
{
	auto averageBill = 0.0;
	auto totalBill = 0.0;
	auto totalMonths = 0;
	auto acceptingUserInput = true;
	
	std::cout << "Enter your electric bill over a period of months -- type -1 to stop adding amounts." << std::endl;

	while (acceptingUserInput)
	{
		auto billStorage = 0.0;
		totalMonths++;

		std::cout << "Bill for month " << totalMonths << ": $";
		std::cin >> billStorage;

		if (billStorage < 0.0)
		{
			acceptingUserInput = false;
		}

		else
		{
			totalBill += billStorage;
		}
	}

	// totalMonths will be 1 higher than it needs to be from the breaking user input
	totalMonths -= 1;
	averageBill = (totalBill / static_cast<double>(totalMonths));

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Your average electric bill over a span of " << totalMonths << " months: $" << averageBill << std::endl;

	return 0;
}

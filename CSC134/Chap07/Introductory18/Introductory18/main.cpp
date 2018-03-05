// Created by Ethan Green on 3/5/2018
// Dirty code, but it works

#include <iostream>
#include <iomanip>

void DisplayStatistics(double totalHours, double totalSalary);

int main()
{
	auto totalHoursCalculated = 0.0;
	auto totalSalaryCalculated = 0.0;

	std::cout << "This application calculates the total pay of an employee, taking overtime into account." << std::endl;
	std::cout << "Input a negative number to finish." << std::endl;
	
	while (true)
	{
		auto employeeHourlyPay = 0.0;
		auto employeeHours = 0;
		auto totalPay = 0.0;

		std:: cout << "What is the hourly pay of this employee?" << std::endl << "> $";
		std::cin >> employeeHourlyPay;

		// Not the best way by any means, but it's a lazy fix. 
		if (employeeHourlyPay < 0)
		{
			DisplayStatistics(totalHoursCalculated, totalSalaryCalculated);
			return 0;
		}

		std::cout << "How many hours did this employee work?" << std::endl << "> $";
		std::cin >> employeeHours;

		if (employeeHours < 0)
		{
			DisplayStatistics(totalHoursCalculated, totalSalaryCalculated);
			return 0;
		}

		if (employeeHours > 40)
		{
			totalPay = ((40 * employeeHourlyPay) + (((employeeHours - 40) * 1.5) * employeeHourlyPay));
			totalHoursCalculated += (40 + (employeeHours - 40) * 1.5);
		}

		else if (employeeHours <= 40)
		{
			totalPay = employeeHours * employeeHourlyPay;
			totalHoursCalculated += employeeHours;
		}

		totalSalaryCalculated += totalPay;

		std::cout << std::fixed << std::setprecision(2);
		std::cout << "This employee has earned $" << totalPay << std::endl;
		std::cout << "##########################" << std::endl;
	}
}

void DisplayStatistics(double totalHours, double totalSalary)
{
	std::cout << "##########################" << std::endl;
	std::cout << "Operation canceled." << std::endl;
	std::cout << "Total runtime statistics: " << std::endl;
	std::cout << "Hours calculated: " << totalHours << std::endl;
	std::cout << "Salary calculated: $" << totalSalary << std::endl;
}
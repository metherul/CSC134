//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Ethan Green on 3/5/2018

#include <iostream>
#include <iomanip>

int main()
{	
	int day = 0;
	int totalTexts = 0;	
    int dailyTexts = 0;
    double average = 0.0;
 
	for (day = 1; day <= 7; day++)
	{
		std::cout << "How many text messages did you send on day " << day << "? ";
		std::cin >> dailyTexts;
		totalTexts += dailyTexts;
 	}	

	average = static_cast<double>(totalTexts) / (day - 1);
	std::cout << std::fixed << std::setprecision(0);
	std::cout << std::endl << "You sent approximately " << average << " text messages per day." << std::endl;

    return 0;
}  
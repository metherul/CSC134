// (CH5, 12) Department Store BoGoHo sale calculator
// Ethan Green
// 2/7/2018

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float itemPriceOne = 0.0;
	float itemPriceTwo = 0.0;

	cout << "Enter the price of the first item: $";
	cin >> itemPriceOne;

	cout << "Enter the price of the second item: $";
	cin >> itemPriceTwo;

	if (itemPriceOne > itemPriceTwo || 
			itemPriceOne == itemPriceTwo)
	{
		itemPriceTwo /= 2;
	}

	else if (itemPriceOne < itemPriceTwo)
	{
		itemPriceOne /= 2;
	}

	cout << fixed << setprecision(2) << "Total item cost: $" << itemPriceOne + itemPriceTwo;

	return 0;
}

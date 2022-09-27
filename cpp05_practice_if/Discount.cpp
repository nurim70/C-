#include <iostream>

#define PRICE 1000

using namespace std;

int main()
{
	int number_of_item;
	int total_price;

	cout << "number of items? ";
	cin >> number_of_item;

	if (number_of_item < 10)
	{
		total_price = PRICE * number_of_item;
		cout << "price: " << total_price << " KRW" << endl;
	}
	else
	{
		total_price = PRICE * number_of_item;
		cout << "original price: " << total_price << " KRW" << endl;
		total_price *= 0.9;
		cout << "discounted price: " << total_price << " KRW" << endl;
	}

	return 0;

}
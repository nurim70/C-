#include <iostream>

using namespace std;

int main()
{
	int input_number;
	int thousands;
	int hundreds;
	int tens;
	int ones;
	int remainder;

	cout << "Input your number: ";
	cin >> input_number;

	thousands = input_number / 1000;
	remainder = input_number % 1000;

	hundreds = remainder / 100;
	remainder = remainder % 100;

	tens = remainder / 10;
	remainder = remainder % 10;

	ones = remainder;

	cout << "thousands: " << thousands << endl;
	cout << "hundreds: " << hundreds << endl;
	cout << "tens: " << tens << endl;
	cout << "ones: " << ones << endl;

	return 0;
}
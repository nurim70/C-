#include <iostream>

using namespace std;

int main()
{
	int input_number;
	int thousand_digit;
	int hundred_digit;
	int ten_digit;
	int one_digit;

	cout << "Input your number: ";
	cin >> input_number;

	thousand_digit = input_number / 1000;
	input_number = input_number % 1000;
	hundred_digit = input_number / 100;
	input_number = input_number % 100;
	ten_digit = input_number / 10;
	one_digit = input_number % 10;

	switch (thousand_digit)
	{
	case 0 :
		cout << "thousands: zero" << endl;
		break;
	case 1 :
		cout << "thousands: one" << endl;
		break;
	case 2:
		cout << "thousands: two" << endl;
		break;
	case 3:
		cout << "thousands: three" << endl;
		break;
	case 4:
		cout << "thousands: four" << endl;
		break;
	case 5:
		cout << "thousands: five" << endl;
		break;
	case 6:
		cout << "thousands: six" << endl;
		break;
	case 7:
		cout << "thousands: seven" << endl;
		break;
	case 8:
		cout << "thousands: eight" << endl;
		break;
	case 9:
		cout << "thousands: nine" << endl;
		break;
	}

	switch (hundred_digit)
	{
	case 0:
		cout << "hundreds: zero" << endl;
		break;
	case 1:
		cout << "hundreds: one" << endl;
		break;
	case 2:
		cout << "hundreds: two" << endl;
		break;
	case 3:
		cout << "hundreds: three" << endl;
		break;
	case 4:
		cout << "hundreds: four" << endl;
		break;
	case 5:
		cout << "hundreds: five" << endl;
		break;
	case 6:
		cout << "hundreds: six" << endl;
		break;
	case 7:
		cout << "hundreds: seven" << endl;
		break;
	case 8:
		cout << "hundreds: eight" << endl;
		break;
	case 9:
		cout << "hundreds: nine" << endl;
		break;
	}

	switch (ten_digit)
	{
	case 0:
		cout << "tens: zero" << endl;
		break;
	case 1:
		cout << "tens: one" << endl;
		break;
	case 2:
		cout << "tens: two" << endl;
		break;
	case 3:
		cout << "tens: three" << endl;
		break;
	case 4:
		cout << "tens: four" << endl;
		break;
	case 5:
		cout << "tens: five" << endl;
		break;
	case 6:
		cout << "tens: six" << endl;
		break;
	case 7:
		cout << "tens: seven" << endl;
		break;
	case 8:
		cout << "tens: eight" << endl;
		break;
	case 9:
		cout << "tens: nine" << endl;
		break;
	}

	switch (one_digit)
	{
	case 0:
		cout << "ones: zero" << endl;
		break;
	case 1:
		cout << "ones: one" << endl;
		break;
	case 2:
		cout << "ones: two" << endl;
		break;
	case 3:
		cout << "ones: three" << endl;
		break;
	case 4:
		cout << "ones: four" << endl;
		break;
	case 5:
		cout << "ones: five" << endl;
		break;
	case 6:
		cout << "ones: six" << endl;
		break;
	case 7:
		cout << "ones: seven" << endl;
		break;
	case 8:
		cout << "ones: eight" << endl;
		break;
	case 9:
		cout << "ones: nine" << endl;
		break;
	}

	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int input_seconds;
	int remainder;
	int days, hours, minutes, seconds;

	cout << "Enter the number of seconds: ";
	cin >> input_seconds;

	days = input_seconds / 86400;
	remainder = input_seconds % 86400;

	hours = remainder / 3600;
	remainder = remainder % 3600;

	minutes = remainder / 60;
	remainder = remainder % 60;

	seconds = remainder;

	cout << input_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

	return 0;
}
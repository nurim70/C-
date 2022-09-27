#include <iostream>

using namespace std;

int main()
{
	int age;
	int age_month;

	cout << "Enter your age: ";
	cin >> age;
	cout << endl;

	age_month = age * 12;

	cout << "Your age in months is " << age_month << endl;

	return 0;
}
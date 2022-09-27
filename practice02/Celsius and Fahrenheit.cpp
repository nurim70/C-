#include <iostream>

using namespace std;

int main()
{
	int Celsius_value;
	float Fahrenheit_value;

	cout << "Please enter a Celsius value: ";
	cin >> Celsius_value;
	cout << endl;

	Fahrenheit_value = 1.8 * Celsius_value + 32.0;

	cout << Celsius_value << " degrees Celsius is " << Fahrenheit_value << " degrees Fahrenheit" << endl;
	
	return 0;
}
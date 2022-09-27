#include <iostream>

using namespace std;

int main()
{
	int height;
	int feet;  // 1 feet is 12 inches
	double inch = 2.54;  // 1 inch is 2.54 cm

	cout << "Input your height: ";
	cin >> height;

	inch = height / inch;

	feet = (int)(inch / 12);
	inch = inch - (feet * 12);

	cout << height << "cm is " << feet << " feet " << inch << " inch." << endl;

	return 0;
}
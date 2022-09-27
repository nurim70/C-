#include <iostream>

using namespace std;

int main()
{
	int length;
	int width;
	int height;
	int box_volume;

	cout << "Input length: ";
	cin >> length;
	//cout << endl;

	cout << "Input width: ";
	cin >> width;
	//cout << endl;

	cout << "Input height: ";
	cin >> height;
	cout << endl;

	box_volume = length * width * height;

	cout << "Box volume: " << box_volume << endl;
}
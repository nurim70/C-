#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input_string;
	int input_key;

	cout << "Input string: ";
	cin >> input_string;

	cout << "Input key: ";
	cin >> input_key;

	input_string[0] = input_string[0] + input_key;
	input_string[1] = input_string[1] + input_key;
	input_string[2] = input_string[2] + input_key;
	input_string[3] = input_string[3] + input_key;
	input_string[4] = input_string[4] + input_key;
	input_string[5] = input_string[5] + input_key;
	input_string[6] = input_string[6] + input_key;
	input_string[7] = input_string[7] + input_key;

	cout << "Cipher string: " << input_string << endl;

	return 0;
}
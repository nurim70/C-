#include <iostream>

using namespace std;

int main()
{
	int input1, input2, add, sub, mul, div;

	cout << "Input1: ";
	cin >> input1; cout << endl;

	cout << "Input2: ";
	cin >> input2; cout << endl;

	add = input1 + input2;
	sub = input1 - input2;
	mul = input1 * input2;
	div = input1 / input2;

	cout << "Add: " << add << endl << "Sub: " << sub << endl << "Mul: " << mul << endl << "Div: " << div << endl;

	return 0;
}

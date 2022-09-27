#include <iostream>

using namespace std;

int main()
{
	int x;
	int y;

	cout << "Input x: ";
	cin >> x;

	cout << "Input y: ";
	cin >> y;

	(x && y) ? cout << "It is located in the 1st quadarant." << endl : cout << "It is not located in the 1st quadarant." << endl;

	return 0;
}
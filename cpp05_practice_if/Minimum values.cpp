#include <iostream>

using namespace std;

int main()
{
	int first_num, second_num, third_num;

	cout << "input numbers: ";
	cin >> first_num >> second_num >> third_num;

	if (first_num > second_num)
	{
		if (second_num > third_num)
		{
			cout << "minimum number: " << third_num;
		}
		else
		{
			cout << "minimum number: " << second_num;
		}
	}
	else if (first_num < second_num)
	{
		if (first_num > third_num)
		{
			cout << "minimum number: " << third_num;
		}
		else
		{
			cout << "minimum number: " << first_num;
		}
	}

	return 0;
}
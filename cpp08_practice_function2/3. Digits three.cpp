#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input_number;

	cout << "input number: ";
	cin >> input_number;

	for (int i = 0; i < input_number.length(); i++)
	{
		if ((input_number.length() / 3) > 0 && (input_number.length() % 3) == (i % 3))
		{
			if ((input_number.length() / 3) >= 1 && (input_number.length() % 3) == 0)
			{
				if (i == 0)
				{
					cout << input_number[i];
					continue;
				}
			}
			cout << ",";
			cout << input_number[i];
		}
		else
		{
			cout << input_number[i];
		}
	}

	return 0;
}
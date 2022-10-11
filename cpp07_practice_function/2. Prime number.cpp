#include <iostream>

using namespace std;

bool primeNumber(int n);

int main()
{
	int input_number;
	
	while (true)
	{
		cout << "input number: ";
		cin >> input_number;

		if (input_number == -1)
		{
			cout << "Done" << endl;
			break;
		}
		else
		{
			if (primeNumber(input_number))
			{
				cout << input_number << " is not a prime number." << "\n\n\n";
			}
			else
			{
				cout << input_number << " is a prime number." << "\n\n\n";
			}
		}
	}

	return 0;
}

bool primeNumber(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return true;
		}
	}

	return false;
}
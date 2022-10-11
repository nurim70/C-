#include <iostream>

using namespace std;

int ipower(int n, int k);

int main()
{
	int input_number;

	cout << "input number: ";
	cin >> input_number;

	for (int i = 0; i <= 10; i++)
	{
		cout << input_number << "^" << i << " = " << ipower(input_number, i) << endl;
	}

	return 0;
}

int ipower(int n, int k)
{
	int result = 1;

	if (k == 0)
	{
		return result;
	}
	else
	{
		for (int i = 0; i < k; i++)
		{
			result *= n;
		}
		return result;
	}
}
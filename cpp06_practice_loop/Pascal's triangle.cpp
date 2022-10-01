#include <iostream>

using namespace std;

int main()
{
	int input_height;
	int i_fact = 1;
	int i_j_fact = 1;
	int j_fact = 1;

	cout << "input height: ";
	cin >> input_height;
	cout << endl;

	for (int i = 0; i < input_height; i++)
	{
		for (int m = 0; m < input_height - (i+1); m++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			i_fact = 1;
			i_j_fact = 1;
			j_fact = 1;

			for (int k = 1; k <= i; k++)
			{
				i_fact *= k;
			}
			for (int k = 1; k <= (i - j); k++)
			{
				i_j_fact *= k;
			}
			for (int k = 1; k <= j; k++)
			{
				j_fact *= k;
			}

			cout << i_fact / (i_j_fact * j_fact) << " ";
		}
		cout << endl;
	}

	return 0;
}
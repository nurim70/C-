#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			cout << j << "*" << i << "=" << (j * i) << " ";
			if ((j * i) < 10)
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
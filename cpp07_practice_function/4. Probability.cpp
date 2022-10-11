#include <iostream>
#include <random>

using namespace std;

void graph(int order, int len, int value, int n);

int main()
{
	random_device rd;
	mt19937 gen(rd());

	int n;
	int rand;
	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;
	int six = 0;
	int len = 50;

	cout << "Roll a dice 'n' times: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		rand = (gen() % 6) + 1;

		if (rand == 1)
		{
			one++;
		}
		else if (rand == 2)
		{
			two++;
		}
		else if (rand == 3)
		{
			three++;
		}
		else if (rand == 4)
		{
			four++;
		}
		else if (rand == 5)
		{
			five++;
		}
		else
		{
			six++;
		}
	}

	graph(1, len, one, n);
	graph(2, len, two, n);
	graph(3, len, three, n);
	graph(4, len, four, n);
	graph(5, len, five, n);
	graph(6, len, six, n);

	return 0;
}

void graph(int order, int len, int value, int n)
{
	cout << order <<":";

	int dot = (len * value) / n;

	for (int i = 0; i < len; i++)
	{
		if (i < dot)
		{
			cout << "@";
		}
		else
		{
			cout << "*";
		}
	}

	cout << endl;
}
#include <iostream>
#include <random>

using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());

	int one;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;
	int six = 0;

	one = (gen() % 45) + 1;

	while (true)
	{
		two = (gen() % 45) + 1;

		if (one != two)
		{
			break;
		}
	}

	while (true)
	{
		three = (gen() % 45) + 1;

		if ((three != one) && (three != two))
		{
			break;
		}
	}

	while (true)
	{
		four = (gen() % 45) + 1;

		if ((four != one) && (four != two) && (four != three))
		{
			break;
		}
	}

	while (true)
	{
		five = (gen() % 45) + 1;

		if ((five != one) && (five != two) && (five != three) && (five != four))
		{
			break;
		}
	}

	while (true)
	{
		six = (gen() % 45) + 1;

		if ((six != one) && (six != two) && (six != three) && (six != four) && (six != five))
		{
			break;
		}
	}

	cout << one << endl << two << endl << three << endl << four << endl << five << endl << six << endl;

	return 0;
}
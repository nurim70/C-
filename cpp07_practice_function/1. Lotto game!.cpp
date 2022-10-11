#include <iostream>
#include <random>

using namespace std;

void outputResult(int a, int b, int c, int d, int e, int f);
int matchNumber(int a, int b, int c, int d, int e, int f, int one, int two, int three, int four, int five, int six);

int main()
{
	int a, b, c, d, e, f;

	cout << "Guess lottery numbers: " << endl;
	cin >> a >> b >> c >> d >> e >> f;
	cout << "\n\n";

	outputResult (a, b, c, d, e, f);

	return 0;
}

void outputResult (int a, int b, int c, int d, int e, int f)
{
	random_device rd;
	mt19937 gen(rd());

	int match = 0;
	int place;

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

	cout << "Number: " << one << " " << two << " " << three << " " << four << " " << five << " " << six << "\n\n";

	match = matchNumber(a, b, c, d, e, f, one, two, three, four, five, six);

	cout << "You match " << match << " numbers!" << " You are in 5th place!" << endl;
	
}

int matchNumber(int a, int b, int c, int d, int e, int f, int one, int two, int three, int four, int five, int six)
{
	int match = 0;

	if (a == one || a == two || a == three || a == four || a == five || a == six)
	{
		match++;
	}
	if (b == one || b == two || b == three || b == four || b == five || b == six)
	{
		match++;
	}
	if (c == one || c == two || c == three || c == four || c == five || c == six)
	{
		match++;
	}
	if (d == one || d == two || d == three || d == four || d == five || d == six)
	{
		match++;
	}
	if (e == one || e == two || e == three || e == four || e == five || e == six)
	{
		match++;
	}
	if (f == one || f == two || f == three || f == four || f == five || f == six)
	{
		match++;
	}

	return match;
}
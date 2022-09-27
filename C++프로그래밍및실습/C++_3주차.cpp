#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int gram = 4321;
	int kg = gram / 1000;
	int g = gram % 1000;

	cout << kg << "." << g << endl;

	return 0;
}
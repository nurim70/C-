#include <iostream>
#include <cmath>

using namespace std;

double dis_cal(int x1, int x2, int y1, int y2);

int main()
{
	int x1, y1, x2, y2;

	cout << "input x1, y1: ";
	cin >> x1 >> y1;

	cout << "input x2, y2: ";
	cin >> x2 >> y2;

	cout << "Distance: " << dis_cal(x1, x2, y1, y2) << endl;

	return 0;
}

double dis_cal(int x1, int x2, int y1, int y2)
{
	return sqrt(pow(((double)x2 - (double)x1) , 2) + pow(((double)y2 - (double)y1), 2));
}

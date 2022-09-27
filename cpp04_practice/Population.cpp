#include <iostream>

using namespace std;

int main()
{
	long long world_population;
	long long kor_population;
	double percent;

	cout << "Enter the world's population: ";  // 2022년 9월 24일 오후 1시 50분 기준 7,976,486,430명
	cin >> world_population;

	cout << "Enter the population of KOR: ";  // 2022년 9월 24일 오후 1시 51분 기준 51,558,441명
	cin >> kor_population;

	percent = ((double)kor_population / (double)world_population) * 100;

	cout << "The population of KOR is " << percent << "% of the world population." << endl;

	return 0;
}
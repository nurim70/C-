#include <iostream>

using namespace std;

int main()
{
	long long world_population;
	long long kor_population;
	double percent;

	cout << "Enter the world's population: ";  // 2022�� 9�� 24�� ���� 1�� 50�� ���� 7,976,486,430��
	cin >> world_population;

	cout << "Enter the population of KOR: ";  // 2022�� 9�� 24�� ���� 1�� 51�� ���� 51,558,441��
	cin >> kor_population;

	percent = ((double)kor_population / (double)world_population) * 100;

	cout << "The population of KOR is " << percent << "% of the world population." << endl;

	return 0;
}
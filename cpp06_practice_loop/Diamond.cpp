#include <iostream>

using namespace std;

// 높이가 홀수인 경우는 잘 되는데, 짝수인 경우는 어떻게 해야할지 잘 모르겠습니다.
int main()
{
	int input_height;
	int blank;

	cout << "input height: ";
	cin >> input_height;
	cout << endl;

	blank = (int)(input_height / 2);

	for (int i = 1; i <= input_height; i += 2)
	{
		for (int j = 0; j < blank; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		for (int j = 0; j < blank; j++)
		{
			cout << " ";
		}
		blank--;
		cout << endl;
	}

	blank += 2;

	for (int i = input_height - 2; i >= 1; i -= 2)
	{
		for (int j = 0; j < blank; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		for (int j = 0; j < blank; j++)
		{
			cout << " ";
		}
		cout << endl;
		blank++;
	}

	return 0;
}
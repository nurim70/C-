#include <iostream>

using namespace std;

// ���̰� Ȧ���� ���� �� �Ǵµ�, ¦���� ���� ��� �ؾ����� �� �𸣰ڽ��ϴ�.
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
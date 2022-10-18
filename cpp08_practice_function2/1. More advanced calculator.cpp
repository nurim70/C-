// function overloading
//int add(int a, int b)
//{
//	return a + b;
//}
//double add(double a, double b)
//{
//	return a + b;
//}
// 함수 오버로딩은 반드시 다른 파라미터를 가져야 한다.

//template
//template <typename YourType>
//YourType add(YourType a, YourType b)
//{
//	return a + b;
//}
//template<>
//char add(char a, char b)
//{
//	return a + 0x20;
//}

#include <iostream>

using namespace std;
void input_num_oper();

template <typename T>
T calculate(char a, T b, T c)
{
	if (a == '+')
	{
		return b + c;
	}
	if (a == '-')
	{
		return b - c;
	}
	if (a == '*')
	{
		return b * c;
	}
	if (a == '/')
	{
		return b / c;
	}

}


int main()
{
	input_num_oper();

	return 0;
}

void input_num_oper()
{
	char oper;
	int number_1;
	int number_2;

	cout << "--------------" << endl;
	cout << "+ : add" << endl;
	cout << "- : subtract" << endl;
	cout << "* : multiply" << endl;
	cout << "/ : divide" << endl;
	cout << "Q : quit" << endl;
	cout << "---------------" << "\n\n";

	cout << "Select an operator: ";
	cin >> oper;

	if (oper == 'Q')
	{
		return;
	}

	while (true)
	{
		cout << "Input two number: ";
		cin >> number_1 >> number_2;

		if (oper != '/' || number_2 != 0)
		{
			break;
		}

		cout << "0으로 나눌 수 없습니다." << endl;
	}


	cout << "Answer: " << calculate(oper, number_1, number_2) << endl;

}
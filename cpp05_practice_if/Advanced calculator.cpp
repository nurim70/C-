#include <iostream>

using namespace std;

int main()
{
	char op;
	int first_number, second_number;
	int answer;

	cout << "--------------" << endl;
	cout << "+ : add" << endl;
	cout << "- : subtract" << endl;
	cout << "* : multiply" << endl;
	cout << "/ : divide" << endl;
	cout << "Q : quit" << endl;
	cout << "--------------" << endl;

	cout << "Select an operator: ";
	cin >> op;

	cout << "Input two number: ";
	cin >> first_number >> second_number;

	if (op == '+')
	{
		answer = first_number + second_number;
		cout << "Answer: " << answer << endl;
	}
	else if (op == '-')
	{
		answer = first_number - second_number;
		cout << "Answer: " << answer << endl;
	}
	else if (op == '*')
	{
		answer = first_number * second_number;
		cout << "Answer: " << answer << endl;
	}
	else if (op == '/')
	{
		if (second_number == 0)
		{
			cout << "Answer: Cannot divide by 0.";
		}
		answer = first_number / second_number;
		cout << "Answer: " << answer << endl;
	}
	else
	{
		cout << "quit";
	}

	return 0;
}
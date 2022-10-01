#include <iostream>

using namespace std;

int main()
{
	int select_number = 0;
	int bugger = 0;
	int fries = 0;
	int coke = 0;

	while (select_number != 4)
	{
		cout << "Select a menue (1-4)" << endl;
		cout << "1) Bugger, 2) Fries, 3) Coke, 4) Finish" << endl;
		cin >> select_number;

		if (select_number == 1)
		{
			cout << "You've ordered a Bugger";
			bugger++;
		}
		else if (select_number == 2)
		{
			cout << "You've ordered a Fries";
			fries++;
		}
		else if (select_number == 3)
		{
			cout << "You've ordered a Coke";
			coke++;
		}
		else if (select_number == 4)
		{
			cout << "Your order has been received!" << "\n\n";
		}
	}

	cout << "Your order" << endl;
	if (bugger != 0)
	{
		cout << "1) Bugger * " << bugger << endl;
	}
	if (fries != 0)
	{
		cout << "2) Fries * " << fries << endl;
	}
	if (coke != 0)
	{
		cout << "3) Coke * " << coke << endl;
	}
	
	return 0;

}
#include <iostream>
#include <string>  // string�� ���� �̸��� �Է��� �� ������ �����ϸ� ���� ���Ŀ� �Է��� ���� ������ ������ �ȵǾ getline()�̶�� �Լ� ����� ���� �־����ϴ�.

using namespace std;

int main()
{
	int stu_num;
	string name;

	cout << "Your student number: ";
	cin >> stu_num; 
	cout << endl;

	cin.ignore(100, '\n');  // �տ� stu_num�� �Է��ϸ� Enter�� �����ΰ� �Ǵµ� �װ� ������ ���ļ� getline() �Լ��� �۵��� �ȵǴ� �� ���Ƽ� ���۸� ��������ϴ�.
	cout << "Your name: ";
	getline(cin, name);
	cout << endl;

	cout << "My name is " << name << endl;
	cout << "My student ID is " << stu_num << endl;
	cout << "My name and ID is " << name << " and " << stu_num << endl;

	return 0;
}
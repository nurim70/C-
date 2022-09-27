#include <iostream>
#include <string>  // string만 쓰면 이름을 입력할 때 공백을 포함하면 공백 이후에 입력한 것은 변수에 저장이 안되어서 getline()이라는 함수 사용을 위해 넣었습니다.

using namespace std;

int main()
{
	int stu_num;
	string name;

	cout << "Your student number: ";
	cin >> stu_num; 
	cout << endl;

	cin.ignore(100, '\n');  // 앞에 stu_num을 입력하면 Enter로 끝을맺게 되는데 그게 영향을 미쳐서 getline() 함수가 작동이 안되는 것 같아서 버퍼를 지워줬습니다.
	cout << "Your name: ";
	getline(cin, name);
	cout << endl;

	cout << "My name is " << name << endl;
	cout << "My student ID is " << stu_num << endl;
	cout << "My name and ID is " << name << " and " << stu_num << endl;

	return 0;
}
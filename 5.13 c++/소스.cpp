#include <iostream>
#include <string>
using namespace std;

void main() {
	string str;
	char ch[80];

	cout << "Enter string : ";
	getline(cin, str);	// string 변수 입력
	cout << str << endl << endl;

	cout << "Enter string : ";
	cin.getline(ch, 80);	// char 배열 또는 char 포인터 입력
	cout << ch << endl;
}
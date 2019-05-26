//사진참조

#include <iostream>
#include <string>
using namespace std;

void main() {
	char str[30];
	string name;
	int num;

	cout << "Enter number : ";
	cin >> num;
	cout << num << endl;
	cin.ignore(); //엔터키 처리

	cout << "Enter string : ";
	cin.getline(str, 30); //iostream 함수
	cout << str << endl;

	cout << "Enter string : ";
	getline(cin, name, '\n'); // '\n'은 default, string 함수
	cout << name << " : " << name.size() << endl;
	// cout << strlen(name) << endl; // strlen은 string.h함수. string객체를 받을 수 있음
	cout << strlen(str) << endl;
}
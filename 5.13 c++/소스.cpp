#include <iostream>
#include <string>
using namespace std;

void main() {
	string str;
	char ch[80];

	cout << "Enter string : ";
	getline(cin, str);	// string ���� �Է�
	cout << str << endl << endl;

	cout << "Enter string : ";
	cin.getline(ch, 80);	// char �迭 �Ǵ� char ������ �Է�
	cout << ch << endl;
}
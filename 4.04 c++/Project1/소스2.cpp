//��������

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
	cin.ignore(); //����Ű ó��

	cout << "Enter string : ";
	cin.getline(str, 30); //iostream �Լ�
	cout << str << endl;

	cout << "Enter string : ";
	getline(cin, name, '\n'); // '\n'�� default, string �Լ�
	cout << name << " : " << name.size() << endl;
	// cout << strlen(name) << endl; // strlen�� string.h�Լ�. string��ü�� ���� �� ����
	cout << strlen(str) << endl;
}
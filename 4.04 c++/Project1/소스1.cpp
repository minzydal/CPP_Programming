#include <iostream>
#include <cstring>
using namespace std;

void main() {
	char str1[] = "string functions ";
	char str2[80];

	strcpy_s(str2, str1); //���ڿ� ����, str1 -> str2
	cout << str2 << endl;

	strcat_s(str2, "are useful!"); //���ڿ� ����
	cout << str2 << endl;
	
	cout << "Enter 2 strings : ";
	cin >> str1 >> str2;
	int result = strcmp(str1, str2); //���ڿ� ��

	if (result > 0)
		cout << "str1�� �ڿ� ����\n";
	else if (result < 0)
		cout << "str1�� �տ� ����\n";
	else
		cout << "����\n";

	cout << strchr("abcdef", 'd') << endl; //�չ��ڿ����� �޹����� �ּ�, ������ NULL
	cout << strstr("abcdef", "cd") << endl; //�չ��ڿ����� �޹����� �ּ�, ������ NULL
}
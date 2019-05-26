#include <iostream>
#include <cstring>
using namespace std;

void main() {
	char str1[] = "string functions ";
	char str2[80];

	strcpy_s(str2, str1); //문자열 복사, str1 -> str2
	cout << str2 << endl;

	strcat_s(str2, "are useful!"); //문자열 연결
	cout << str2 << endl;
	
	cout << "Enter 2 strings : ";
	cin >> str1 >> str2;
	int result = strcmp(str1, str2); //문자열 비교

	if (result > 0)
		cout << "str1이 뒤에 있음\n";
	else if (result < 0)
		cout << "str1이 앞에 있음\n";
	else
		cout << "같음\n";

	cout << strchr("abcdef", 'd') << endl; //앞문자열에서 뒷문자의 주소, 없으면 NULL
	cout << strstr("abcdef", "cd") << endl; //앞문자열에서 뒷문자의 주소, 없으면 NULL
}
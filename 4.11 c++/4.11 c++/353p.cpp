#include <iostream>
#include <string>
using namespace std;

void main() {
	string s;

	cout << "주민번호 입력(-포함) : ";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		/*
		if (s[i] != '-') //string의 각 문자 점검(배열 사용)
		cout << s[i];
		*/
		if (s.at(i) != '-') //함수 사용
			cout << s.at(i);
	}
}
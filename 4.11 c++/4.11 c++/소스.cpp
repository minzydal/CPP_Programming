#include <iostream>
#include <string>
using namespace std;

void main() {
	string s1 = "Money";
	string s2 = " has no value";
	string s3 = s1 + s2; // +�����ڷ� ���ڿ� ����, = �����ڷ� ���ڿ� ġȯ

	s1 += s2;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	string str1("Slow"), str2 = "steady"; //string ��ü�� ����� �ٸ� ���
	string str3 = "the race";

	string str4 = str1 + " and " + str2 + " wins " + str3;
	cout << str4 << endl;

	if (s1 == s2) //string ��
		cout << "same\n";
	else
		cout << "different\n";
}
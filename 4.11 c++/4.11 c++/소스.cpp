#include <iostream>
#include <string>
using namespace std;

void main() {
	string s1 = "Money";
	string s2 = " has no value";
	string s3 = s1 + s2; // +연산자로 문자열 연결, = 연산자로 문자열 치환

	s1 += s2;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	string str1("Slow"), str2 = "steady"; //string 객체를 만드는 다른 방법
	string str3 = "the race";

	string str4 = str1 + " and " + str2 + " wins " + str3;
	cout << str4 << endl;

	if (s1 == s2) //string 비교
		cout << "same\n";
	else
		cout << "different\n";
}
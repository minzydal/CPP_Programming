#include <iostream>
#include <string> // c++ -> string
using namespace std;

int main(){
	string s1 = "This is a test"; // string 클래스의 객체 생성
	string s2;					  // empty string s2 생성

	cout << s1 << endl;
	cout << "Enter string : ";
	cin >> s2;	// 공백까지만 입력
	cout << s2 << endl;

	string s("C++ string");	// string s = "C++ string";
	cout << s.size() << ", " << s.length() << endl; //size()가 표준

	cout << s.capacity() << endl;	// 실제 길이보다 충분한 메모리 확보
	cout << s.max_size() << endl;	// 문자열의 최대 길이

	s.resize(6);	// n이 문자열보다 크면 NULL로 채움
	cout << s << endl;
	cout << s.size() << ", " << s.capacity() << endl;

	s.clear();	 // s = "";
	if (s.empty())
		cout << "Empty string\n";
	cout << s.size() << endl;
}
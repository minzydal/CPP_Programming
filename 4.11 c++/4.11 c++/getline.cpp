#include <iostream>
#include <string>
using namespace std;

void main() {
	string s1;

	cout << "Enter string : ";
	getline(cin, s1, '\n'); // 전체 라인 입력, '\n'은 default

	s1.insert(4, "Hello");
	cout << s1 << endl;

	int index = s1.find("test");
	cout << index << endl;
	s1.append("World"); // s1 += "World";
	cout << s1 << endl;

	s1.erase(4, 5); // 4번에서부터 5글자 삭제
	cout << s1 << endl;

	s1.erase();	// 전체 삭제
	cout << s1.size() << endl;
}
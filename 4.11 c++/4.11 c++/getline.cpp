#include <iostream>
#include <string>
using namespace std;

void main() {
	string s1;

	cout << "Enter string : ";
	getline(cin, s1, '\n'); // ��ü ���� �Է�, '\n'�� default

	s1.insert(4, "Hello");
	cout << s1 << endl;

	int index = s1.find("test");
	cout << index << endl;
	s1.append("World"); // s1 += "World";
	cout << s1 << endl;

	s1.erase(4, 5); // 4���������� 5���� ����
	cout << s1 << endl;

	s1.erase();	// ��ü ����
	cout << s1.size() << endl;
}
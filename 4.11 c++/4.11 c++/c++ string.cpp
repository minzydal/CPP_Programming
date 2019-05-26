#include <iostream>
#include <string> // c++ -> string
using namespace std;

int main(){
	string s1 = "This is a test"; // string Ŭ������ ��ü ����
	string s2;					  // empty string s2 ����

	cout << s1 << endl;
	cout << "Enter string : ";
	cin >> s2;	// ��������� �Է�
	cout << s2 << endl;

	string s("C++ string");	// string s = "C++ string";
	cout << s.size() << ", " << s.length() << endl; //size()�� ǥ��

	cout << s.capacity() << endl;	// ���� ���̺��� ����� �޸� Ȯ��
	cout << s.max_size() << endl;	// ���ڿ��� �ִ� ����

	s.resize(6);	// n�� ���ڿ����� ũ�� NULL�� ä��
	cout << s << endl;
	cout << s.size() << ", " << s.capacity() << endl;

	s.clear();	 // s = "";
	if (s.empty())
		cout << "Empty string\n";
	cout << s.size() << endl;
}
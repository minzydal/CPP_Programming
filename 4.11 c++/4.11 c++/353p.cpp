#include <iostream>
#include <string>
using namespace std;

void main() {
	string s;

	cout << "�ֹι�ȣ �Է�(-����) : ";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		/*
		if (s[i] != '-') //string�� �� ���� ����(�迭 ���)
		cout << s[i];
		*/
		if (s.at(i) != '-') //�Լ� ���
			cout << s.at(i);
	}
}
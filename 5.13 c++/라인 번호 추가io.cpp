// ���� ��ȣ �߰��Ͽ� ��� ���Ͽ� ���(���� ���� �����)
// �� ����(���� ����)

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream is;
	ofstream os;
	char ch;
	int number = 1;

	is.open("score4.cpp");	// source ���α׷��� �Է� ���Ϸ� ���
	os.open("test.txt");

	is.get(ch);
	os << number << " : ";
	while (!is.eof()) {	// �Է� ������ �P�� �ƴϸ�
		os.put(ch);
		if (ch == '\n') {	// ���� ���ڸ�
			number++;
			os << number << " : "; // ���� ��ȣ ���
		}
		is.get(ch);
	}
	is.close();
	os.close();
}
// ���� ��ȣ �߰��Ͽ� ��� ���Ͽ� ���(���� ���� �����)
// �� ����(���� ����)

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream is;
	ofstream os;
	string line;
	int number = 1;

	is.open("score4.cpp");	// source ���α׷��� �Է� ���Ϸ� ���
	os.open("test.txt");

	getline(is, line);
	os << number << " : ";	// ���� ���
	cout << number << " : "; // ǥ�� ���
	while (!is.eof()) {	// �Է� ������ �P�� �ƴϸ�
		cout << line << endl;
		
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
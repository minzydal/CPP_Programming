// get(), put() �Լ��� �̿��� ���� ���� ���� �����

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream is;
	ofstream os;
	char ch;

	is.open("score2.cpp");	// ���� ���α׷��� �Է� ���Ϸ� Ȱ��
	os.open("result.txt");

	is.get(ch);				// �Է� ���Ͽ��� �� ���� �Է�, is >> ch
	while (!is.eof()) {		// ������ ��(end of file)�� �����ߴ��� �˻�
		cout.put(ch);		// cout << ch; ǥ�� ���
		os.put(ch);			// ���� ���, os << ch
		is.get(ch);
	}
	is.close();
	os.close();
}
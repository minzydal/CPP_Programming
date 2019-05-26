/*
ifstream���� ������ �� ��� ������ ������ error
ofstream���� ������ �� ��� ������ ������ ����
������ ������ ���� ����
�⺻ ����� ������(<<, >>)�� �̿��� ���� �����(�ڷ������ �����)
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	ofstream os;	// ���� ��� stream(output file stream)
	ifstream is;	// ���� �Է� stream(input file stream)
	int number, score;
	string name;

	os.open("result.txt", ios::out | ios::app);	// ��¿����� ���� ����, ios::app �߰��ϴ� ���
	if (!os) {				// file open ����, os, fail()
		cout << "File open error\n";
		exit(1);
	}
	cout << "Enter number, name, score : ";	// ǥ�� ���(monitor)
	cin >> number >> name >> score;			// ǥ�� �Է�(keyboard)
	os << number << " " << name << " " << score << endl;
	os.close();	// ��� ���� �ݱ�

	is.open("result.txt");	// �Է¿����� ���� ����
	if (is.fail()) {
		cout << "File open error\n";
		exit(1);
	}
	is >> number >> name >> score;
	cout << number << " " << name << " " << score << endl;	// ǥ�� ���(�����)
	is.close();	// �Է� ���� �ݱ�
}


/*

file �����ϴ� ���

 1)ofstream os("result.txt", ios::out | ios::app);
					//ofstream�� �Ű����� �ִ� ������ ȣ��
					

 2)ofstream os;		//ofstream�� default ������ ȣ��
   os.open("result.txt", ios::out | ios::app);		// �Լ� ���

*/

/*
	ios::in
	�б� ������ ���·� ���� ����

	ios::out
	���� ������ ���·� ���� ����

	ios::app
	����ϴ� �����Ͱ� �׻� ������ ���� ���

	ios::trunc
	�����ϰ��� �ϴ� ������ �̹� �ִ� ���, ������ ������ �����ϰ� �ٽ� �����

	ios::binary
	���̳ʸ� ���� ���� ����
*/
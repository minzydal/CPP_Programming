// ����� �����ڸ� ����� ������� �����

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	ofstream os;	// ���� ��� stream(output file stream)
	ifstream is;	// ���� �Է� stream(input file stream)
	int number, score;
	string name;

	os.open("result.txt");	// ��¿����� ���� ����, ios::app �߰��ϴ� ���
	if (!os) {				// file open ����, os, fail()
		cout << "File open error\n";
		exit(1);
	}
	cout << "Enter number, name, score : ";	// ǥ�� ���(monitor)
	cin >> number >> name >> score;			// ǥ�� �Է�(keyboard)
	while (!cin.eof()) {
		os << number << " " << name << " " << score << endl;
		cout << "Enter number, name, score : "; // ǥ�� ���(monitor)
		cin >> number >> name >> score;				// ǥ�� �Է�(keyboard)
	}
	os.close();	// ��� ���� �ݱ�

	is.open("result.txt");	// �Է¿����� ���� ����
	if (is.fail()) {
		cout << "File open error\n";
		exit(1);
	}
	is >> number >> name >> score;
	while (!is.eof()) {
		cout << number << " " << name << " " << score << endl;	// ǥ�� ���(�����)
		is >> number >> name >> score;
	}
	is.close();	// �Է� ���� �ݱ� 
}
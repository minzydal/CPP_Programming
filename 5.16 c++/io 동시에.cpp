/*
������� ���ÿ� �� �� �ִ� ���
������� ���ÿ� �� �� �ֵ��� ������ ����
seekg, seekp, tellg, tellp ��� ��� ����
�Ѱ����� �����ؼ� ����Ѵ�
ios::in�� �ֱ� ������ �̸� ������ ������ �Ѵ�
*/

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	int table[5], data, pos;
	fstream f;

	for (int i = 0; i < 5; i++)
		table[i] = i + 10;
	f.open("test.bin", ios::out | ios::binary | ios::in);
	if (f.fail()){
		cout << "File open error\n";
	exit(1);
	}

	f.write((char *)table, sizeof(table));
	cout << f.tellg() << endl;	// ���� �����ʹ� ���� ���� �ִ�

	f.seekg(0, ios::beg);	//������ ó������ �̵�
	while (1) {
		cout << "���Ͽ��� ��ġ �Է�(0-9, ���� -1) : ";
		cin >> pos;
		if (pos == -1)
			break;
		f.seekg(pos * sizeof(int), ios::beg);
		cout << f.tellg() << endl;
		f.read((char *)&data, sizeof(int));
		cout << pos << "��ġ�� �� : " << data << endl;
		cout << f.tellp() << endl;
	}

	f.close();
}
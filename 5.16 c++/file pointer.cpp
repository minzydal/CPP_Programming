/*
file pointer�� �̿��� ���� ��ġ �̵�
seekg, tellg�� ifstream���� ���
seekp, tellp�� ofstream���� ���
*/

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	int table[5], data, pos;
	ofstream os;
	ifstream is;

	for (int i = 0; i < 5; i++)
		table[i] = i + 10;
	os.open("test.bin", ios::binary);

	//os.write((char *)table, sizeof(table))l	//�迭 ��ü�� ���Ͽ� ���
	for (int i = 0; i < 5; i++)					//�迭 1���� ���Ͽ� ���
		os.write((char *)&table[i], sizeof(int));
	cout << os.tellp() << endl;		//���� ���� ������ ��ġ
	os.close();

}
/*
��ü �迭�� �� ���� �����
*/

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	int buffer[] = { 10, 20, 30, 40, 50 };
	ofstream os;
	ifstream is;
	int num;
	int array[5];

	os.open("test.bin", ios::binary); // binary ��� ǥ��

	os.write((char *)buffer, sizeof(buffer));	// �Ѳ����� ���
	os.close();

	is.open("test.bin", ios::binary); // binary �Է� ǥ��

	is.read((char *)array, sizeof(array)); // �Ѳ����� �Է�
	for (int i = 0; i < 5; i++)
		cout << array[i] << endl;
	is.close();
}
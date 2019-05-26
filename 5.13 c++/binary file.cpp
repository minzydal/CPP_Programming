/*
binary file(2�� ����)�� ���� �����
read, write �Լ� ���
���� �ϳ��� binary ���� ������ϴ� ��
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

	os.open("test.bin", ios::binary); // binary ��� ����

	for (int i = 0; i < 5; i++)	// ���� �ϳ��� ���
		os.write((char *)&buffer[i], sizeof(int));	// ���Ŀ� ����, (char *) ��� �������� �ּ�, ũ��
		os.close();
		
		is.open("test.bin", ios::binary); // binary �Է� ����

		is.read((char *)&num, sizeof(int)); // (char *)�Է� �������� �ּ�, ũ��
		while (!is.eof()) {
			cout << num << endl;
			is.read((char *)&num, sizeof(int));
		}
		is.close();
}
/*
��ü �迭�� �� ���� �����
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main() {
	int buffer[5][10];
	ofstream os;
	ifstream is;
	int array[5][10];

	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 10; j++)
			buffer[i][j] = rand() % 10;

	os.open("test.bin", ios::binary); // binary ��� ǥ��

//	for (int i = 0; i < 5; i++)
	//	os.write((char *)buffer[i], sizeof(buffer[i]));	//�Ѳ����� ���
	os.write((char *)buffer, sizeof(buffer)); // �Ѳ����� ���
	os.close();

	is.open("test.bin", ios::binary); // binary �Է� ǥ��

	for (int i = 0; i < 5; i++)
		is.read((char *)array[i], sizeof(array[i])); // �Ѳ����� �Է�

	/* for (int i = 0; i < 5; i ++)
			is.read((char *)array[i], sizeof(array[i]));	// �Ѳ����� �Է� */
	is.read((char *)array, sizeof(array));
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 10; j++)
			cout << array[i][j] << " ";
	cout << endl;
	}
	is.close();
}
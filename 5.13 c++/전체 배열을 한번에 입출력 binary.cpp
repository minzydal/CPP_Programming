/*
전체 배열을 한 번에 입출력
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

	os.open("test.bin", ios::binary); // binary 출력 표시

	os.write((char *)buffer, sizeof(buffer));	// 한꺼번에 출력
	os.close();

	is.open("test.bin", ios::binary); // binary 입력 표시

	is.read((char *)array, sizeof(array)); // 한꺼번에 입력
	for (int i = 0; i < 5; i++)
		cout << array[i] << endl;
	is.close();
}
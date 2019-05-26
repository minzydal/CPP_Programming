/*
전체 배열을 한 번에 입출력
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

	os.open("test.bin", ios::binary); // binary 출력 표시

//	for (int i = 0; i < 5; i++)
	//	os.write((char *)buffer[i], sizeof(buffer[i]));	//한꺼번에 출력
	os.write((char *)buffer, sizeof(buffer)); // 한꺼번에 출력
	os.close();

	is.open("test.bin", ios::binary); // binary 입력 표시

	for (int i = 0; i < 5; i++)
		is.read((char *)array[i], sizeof(array[i])); // 한꺼번에 입력

	/* for (int i = 0; i < 5; i ++)
			is.read((char *)array[i], sizeof(array[i]));	// 한꺼번에 입력 */
	is.read((char *)array, sizeof(array));
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 10; j++)
			cout << array[i][j] << " ";
	cout << endl;
	}
	is.close();
}
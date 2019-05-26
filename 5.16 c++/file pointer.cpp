/*
file pointer를 이용한 임의 위치 이동
seekg, tellg는 ifstream에서 사용
seekp, tellp는 ofstream에서 사용
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

	//os.write((char *)table, sizeof(table))l	//배열 전체를 파일에 출력
	for (int i = 0; i < 5; i++)					//배열 1개씩 파일에 출력
		os.write((char *)&table[i], sizeof(int));
	cout << os.tellp() << endl;		//현재 파일 포인터 위치
	os.close();

}
/*
binary file(2진 파일)에 대한 입출력
read, write 함수 사용
정수 하나씩 binary 모드로 입출력하는 예
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

	os.open("test.bin", ios::binary); // binary 출력 지정

	for (int i = 0; i < 5; i++)	// 숫자 하나씩 출력
		os.write((char *)&buffer[i], sizeof(int));	// 형식에 주의, (char *) 출력 데이터의 주소, 크기
		os.close();
		
		is.open("test.bin", ios::binary); // binary 입력 지정

		is.read((char *)&num, sizeof(int)); // (char *)입력 데이터의 주소, 크기
		while (!is.eof()) {
			cout << num << endl;
			is.read((char *)&num, sizeof(int));
		}
		is.close();
}
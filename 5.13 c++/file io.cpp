/*
ifstream으로 파일을 열 경우 파일이 없으면 error
ofstream으로 파일을 열 경우 파일이 없으면 생성
파일이 있으면 덮어 쓴다
기본 입출력 연산자(<<, >>)를 이용한 파일 입출력(자료형대로 입출력)
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	ofstream os;	// 파일 출력 stream(output file stream)
	ifstream is;	// 파일 입력 stream(input file stream)
	int number, score;
	string name;

	os.open("result.txt", ios::out | ios::app);	// 출력용으로 파일 열기, ios::app 추가하는 경우
	if (!os) {				// file open 실패, os, fail()
		cout << "File open error\n";
		exit(1);
	}
	cout << "Enter number, name, score : ";	// 표준 출력(monitor)
	cin >> number >> name >> score;			// 표준 입력(keyboard)
	os << number << " " << name << " " << score << endl;
	os.close();	// 출력 파일 닫기

	is.open("result.txt");	// 입력용으로 파일 열기
	if (is.fail()) {
		cout << "File open error\n";
		exit(1);
	}
	is >> number >> name >> score;
	cout << number << " " << name << " " << score << endl;	// 표준 출력(모니터)
	is.close();	// 입력 파일 닫기
}


/*

file 오픈하는 방법

 1)ofstream os("result.txt", ios::out | ios::app);
					//ofstream의 매개변수 있는 생성자 호출
					

 2)ofstream os;		//ofstream의 default 생성자 호출
   os.open("result.txt", ios::out | ios::app);		// 함수 사용

*/

/*
	ios::in
	읽기 가능한 형태로 파일 오픈

	ios::out
	쓰기 가능한 형태로 파일 오픈

	ios::app
	출력하는 데이터가 항상 파일의 끝에 출력

	ios::trunc
	오픈하고자 하는 파일이 이미 있는 경우, 기존의 파일을 삭제하고 다시 만든다

	ios::binary
	바이너리 파일 모드로 오픈
*/
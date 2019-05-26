// 입출력 연산자를 사용한 계속적인 입출력

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	ofstream os;	// 파일 출력 stream(output file stream)
	ifstream is;	// 파일 입력 stream(input file stream)
	int number, score;
	string name;

	os.open("result.txt");	// 출력용으로 파일 열기, ios::app 추가하는 경우
	if (!os) {				// file open 실패, os, fail()
		cout << "File open error\n";
		exit(1);
	}
	cout << "Enter number, name, score : ";	// 표준 출력(monitor)
	cin >> number >> name >> score;			// 표준 입력(keyboard)
	while (!cin.eof()) {
		os << number << " " << name << " " << score << endl;
		cout << "Enter number, name, score : "; // 표준 출력(monitor)
		cin >> number >> name >> score;				// 표준 입력(keyboard)
	}
	os.close();	// 출력 파일 닫기

	is.open("result.txt");	// 입력용으로 파일 열기
	if (is.fail()) {
		cout << "File open error\n";
		exit(1);
	}
	is >> number >> name >> score;
	while (!is.eof()) {
		cout << number << " " << name << " " << score << endl;	// 표준 출력(모니터)
		is >> number >> name >> score;
	}
	is.close();	// 입력 파일 닫기 
}
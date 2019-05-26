// get(), put() 함수를 이용한 문자 단위 파일 입출력

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream is;
	ofstream os;
	char ch;

	is.open("score2.cpp");	// 현재 프로그램을 입력 파일로 활용
	os.open("result.txt");

	is.get(ch);				// 입력 파일에서 한 글자 입력, is >> ch
	while (!is.eof()) {		// 파일의 끝(end of file)에 도달했는지 검사
		cout.put(ch);		// cout << ch; 표준 출력
		os.put(ch);			// 파일 출력, os << ch
		is.get(ch);
	}
	is.close();
	os.close();
}
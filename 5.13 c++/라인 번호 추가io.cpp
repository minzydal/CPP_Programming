// 라인 번호 추가하여 출력 파일에 출력(문자 단위 입출력)
// 줄 단위(사진 참고)

#include <iostream>
#include <fstream>
using namespace std;

void main() {
	ifstream is;
	ofstream os;
	char ch;
	int number = 1;

	is.open("score4.cpp");	// source 프로그램을 입력 파일로 사용
	os.open("test.txt");

	is.get(ch);
	os << number << " : ";
	while (!is.eof()) {	// 입력 파일의 긑이 아니면
		os.put(ch);
		if (ch == '\n') {	// 개행 문자면
			number++;
			os << number << " : "; // 라인 번호 출력
		}
		is.get(ch);
	}
	is.close();
	os.close();
}
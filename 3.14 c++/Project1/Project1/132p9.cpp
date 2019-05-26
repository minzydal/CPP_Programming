/*
문자하나를 읽어서 모음이냐 비모음이냐 판단
ch도 switch문에 들어갈 수 있음
영문자만 넣는다고 가정했을 때 
ex ) case 'a',,'i',,
*/
#include <iostream>
#include <cctype> //character
using namespace std;

int main() {

	char ch;
	cout << "문자 하나를 입력하세요: \n";
	cin >> ch;
	ch = tolower(ch); //대문자를 소문자로 변환해서 다시 입력.

	if (isalpha(ch)) {
		switch (ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cout << "모음.\n";
				break;

			default:
				cout << "비모음.\n";
				break;
			}
		}
	else {
			cout << "Wrong input\n";
	}
}
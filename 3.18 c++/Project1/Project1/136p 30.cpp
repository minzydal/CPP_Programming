/*
사용자가 엔터키를 누를 때까지 한 줄의 문자를 읽어서 
읽은 문자 중에서 문자 a의 개수를 세어 화면에 출력하는 프로그램

cin은 공백, 개행문자 무시 -> cin.get()

*/
#include <iostream>
using namespace std;

int main(void) {

	int count = 0;
	char ch;

	cout << "Enter character = ";
	cin >> ch;

	while (ch != '\n'){
		if (ch == 'a')
			count++;
		ch = cin.get(); //to read empty space
	}
	cout << "count = " << count << endl;
}      
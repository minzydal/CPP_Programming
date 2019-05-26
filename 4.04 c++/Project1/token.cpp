#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char str[] = "Programming is art!"; // /이용하면 하나의 토큰으로 분리
	char *token;
	const char *delimiter = " /"; //구분자 지정

	cout << "문자열 분리\n";
	token = strtok_s(str, delimiter);
	while (token != NULL) {
		cout << token << endl;
		token = strtok(NULL, delimiter);
	}
}
/*
사용자로부터 문자열을 받아서 단어의 개수를 계산하여서 콘솔에 출력하는 프로그램
to be or not to be 라고 입력하면 6을 출력함
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void tokenizer(string, string);

void main() {
	string str, token;
	int count = 0;
	int i;

	cout << "Enter string : ";
	getline(cin, str);

	for (i = 0; i < str.size(); i++); {
		if (str.at(i) == ' ' || str[i] == '\0') {
			count++;
			cout << count << " : " << token << endl;
			token.erase();
		}
		else
			token += (str[i]); //token.append(str[i])
	}
	cout << count + 1 << " : " << token << endl;
	cout << "Number of tokens : " << count + 1 << endl;
}

void tokenizer(string str, string delimiters) {
	int last = 0; count = 0;
	//구분자가 아닌 첫 글자를 찾는다.
	int pos = str.find_first_of(delimiters, last);

	while
}
/*
����ڷκ��� ���ڿ��� �޾Ƽ� �ܾ��� ������ ����Ͽ��� �ֿܼ� ����ϴ� ���α׷�
to be or not to be ��� �Է��ϸ� 6�� �����
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
	//�����ڰ� �ƴ� ù ���ڸ� ã�´�.
	int pos = str.find_first_of(delimiters, last);

	while
}
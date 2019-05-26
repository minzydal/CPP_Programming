#include <iostream>
#include <string>
using namespace std;

void main() {
	try {
		throw "disk is full\n";
	}
	catch (const char *s){
		cout << s << endl;
	}
}

/*
문자열을 매개변수로 넘기면 char *로 받는다
문자열의 시작 주소를 넘기기 때문에 string으로 받으면 안된다

#include <iostream>
#include <string>
using namespace std;

void main(){
	string str;
	try {
		throw str = "dis is full\n";	//string을 넘기는 경우
	} catch (string s)	{
		cout << s << endl;
	}
}
*/
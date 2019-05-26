#include <iostream>
#include <cstring>
using namespace std;

class Test {
	char * s;
public:
	Test(const char * temp) {	//shallow copy(얕은 복사)
		s = new char[strlen(temp) + 1];	//deep copy(깊은 복사)
		strcpy(s, temp);	//strcpy(char *, const char *)
	}
	Test(const Test &obj) {
	s = new char[strlen(obj.s) + 1];
	strcpy(s, obj.s);
	// strcpy_s(s, strlen(obj.s)+1, obj.s); -> secure version
	}
	void print() {
		cout << s << endl;
	}
	~Test() {
		delete[] s;
	}
};
int main() {
	const char *str = "test string";
	/*
	문자열은 메모리의 text segment에 저장되고
	이것은 내용을 바꿀 수 없는 문자열 상수(string literal)ㅇlek
	따라서 const char * 로 초기화 해야 한다
	*/

	Test test(str); //str은 문자열 상수, 따라서 생성자의 매개변수 타입도 const char *
	test.print();
	Test obj(test);
}
//vs2017부터는 const char *를 char *로 변환하는 것 허용 x, 반드시 const 붙여주기
#include <iostream>
#include <cstring>
using namespace std;

class Test {
	char * s;
public:
	Test(const char * temp) {	//shallow copy(���� ����)
		s = new char[strlen(temp) + 1];	//deep copy(���� ����)
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
	���ڿ��� �޸��� text segment�� ����ǰ�
	�̰��� ������ �ٲ� �� ���� ���ڿ� ���(string literal)��lek
	���� const char * �� �ʱ�ȭ �ؾ� �Ѵ�
	*/

	Test test(str); //str�� ���ڿ� ���, ���� �������� �Ű����� Ÿ�Ե� const char *
	test.print();
	Test obj(test);
}
//vs2017���ʹ� const char *�� char *�� ��ȯ�ϴ� �� ��� x, �ݵ�� const �ٿ��ֱ�
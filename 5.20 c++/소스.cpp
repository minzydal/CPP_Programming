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
���ڿ��� �Ű������� �ѱ�� char *�� �޴´�
���ڿ��� ���� �ּҸ� �ѱ�� ������ string���� ������ �ȵȴ�

#include <iostream>
#include <string>
using namespace std;

void main(){
	string str;
	try {
		throw str = "dis is full\n";	//string�� �ѱ�� ���
	} catch (string s)	{
		cout << s << endl;
	}
}
*/
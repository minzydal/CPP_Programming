/*
����ڰ� ����Ű�� ���� ������ �� ���� ���ڸ� �о 
���� ���� �߿��� ���� a�� ������ ���� ȭ�鿡 ����ϴ� ���α׷�

cin�� ����, ���๮�� ���� -> cin.get()

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
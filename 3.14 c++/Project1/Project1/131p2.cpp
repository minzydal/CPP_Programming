/*
����ڷκ��� 3���� ������ �о� �鿩 if0else���� ����ϱ� ���� ���� ���� �����ϴ� ���α׷�
*/
#include <iostream>
using namespace std;

int main() {

	int a, b, c,min; //�Է¹��� 3���� ����
	cout << "Please enter the a, b, c\n";
	cin >> a >> b >> c;
	
	if (a < b) {
		if (a < c)
			min = a;
		else
			min = c;
	}
	else {
		if (b < c)
			min = b;
		else
			min = c;
	}
		cout << min << endl;
		/*
		���� �����ڷ� �ڵ� ����ȭ 
		min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
		*/
		return 0;
}
#include <iostream>
using namespace std;

void function();

void main() {
	for (int i = 0; i < 5; i++)
		function();
}
void function() {
	int num = 0;
	static int snum = 0; //static����(����)�� ó�� ȣ�� �� �� �ѹ��� �ʱ�ȭ�ȴ�
						//ȣ��Ǹ� ��ȭ�� ���� �����Ѵ�.
	cout << num << ", " << snum << endl;
	num++;
	snum++;
	
	cout << "function ȣ�� Ƚ�� : " << snum << endl;
}
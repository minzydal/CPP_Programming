/*
����Ʈ �Ű����� ����
����Ʈ �Ű������� �Լ� �������� ����
����Ʈ �Ű������� �ݵ�� �ڿ������� ����
*/

#include <iostream>
using namespace std;

int calc_deposit(int salary = 200, int month = 12); // int = 200, int = 12

void main() {
	cout << "default parameter 0\n";
	cout << calc_deposit(100, 6) << endl;
	
	cout << "default parameter 1\n";
	cout << calc_deposit(100) << endl;

	cout << "default parameter 2\n";
	cout << calc_deposit() << endl;
}
int calc_deposit(int s, int m) {
	return s * m;
}
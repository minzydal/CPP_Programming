/*
�ߺ��Լ�(overloading functions) : ���� �̸��� ������ �Լ��� ���� �� �����ϴ� ��.
�Ű������� ���� Ÿ������ �����Ѵ�.
���� Ÿ�԰��� �������.
*/
#include <iostream>
using namespace std;

int sum(int, int);
double sum(double, double);

void main() {
	cout << sum(10, 20) << endl;
	cout << sum(1.0, 2.0) << endl;
}
int sum(int n1, int n2) {
	return n1 + n2;
}
double sum(double n1, double n2) {
	return n1 + n2;
}
#include <iostream>
using namespace std;

int sum = 100; 
/*
������ �� �� ������ ������� ���� 
�Լ� �ܺο� ����Ǹ� ��������
������ ���� ������ �̸��� ������ ������ �켱(shadow effect)
*/
void main() {
	int i = 0; sum = 0; //���� ����

	for (i = 0; i <= 10; i++)
		sum += i;
	cout << "Sum : " << sum << endl;

	::sum++; //�������� ���, scope resolution operator
	cout << sum << ", " << ::sum << endl;
}
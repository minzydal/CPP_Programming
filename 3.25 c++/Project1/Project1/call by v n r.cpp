/*
call by value / call by reference
�迭 ��Ҹ� �Լ��� �ѱ�� �Ϲ� ������ ���� �Լ����� ���ο� ������ ����� ���� ����(call by value)
�迭�� �Լ��� �ѱ�� �迭 �ּҸ� ����(call by reference)
�迭�� �̸��� �迭�� ���� �ּҸ� �ǹ�
*/

#include <iostream>
using namespace std;

void call_by_value(int);
void call_by_reference(int[], int);

int main() {
	int grade[5] = { 1, 2, 3, 4, 5 };

	call_by_value(grade[0]); //�迭 ��� �����ϴ� ��� call by value
	cout << "main : " << grade[0] << endl;

	call_by_reference(grade, 5); //�迭�� �Լ��� ������ ��� ũ�⵵ ���� ����
	cout << "main : ";
	for (int i = 0; i < 5; i++)
		cout << grade[i] << " ";
	cout << "\n";
	//�迭�� �Լ����� ���� ����Ǹ� main������ ����� ���� �����ȴ�
	printf("main : %p\n", grade);
	return 0;
}
void call_by_value(int n) {
	n = 100;
	cout << "�Լ� : " << n << endl;
}
void call_by_reference(int g[], int n) {
	for (int i = 0; i < n; i++)
		g[i] += 10;
	cout << "�Լ� : ";
	for (int i = 0; i < n; i++)
		cout << g[i] << " ";
	cout << "\n";
	printf("function : %p\n", g);
}
/*
2���� ���� �迭 a,b�� �޾Ƽ� �迭 ���Ұ� ������ �˻��ϴ� �Լ� array_equal(int a[], int b[], int size)
�� �ۼ� �� �׽�Ʈ
���� ��ü ���Ұ� ���ٸ� 1�� ��ȯ �׷��� �ʴٸ� 0�� ��ȯ
*/

#include <iostream>
using namespace std;

const int SIZE = 5;

int main() {
	int a[SIZE] = { 1, 2, 3, 4, 5 }, b[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
		b[i] = a[i];
	for (i = 0; i < SIZE; i++) {
		if (a[i] != b[i])
			break;
	}
	if (i == SIZE)
		cout << "���� �迭\n";
	else
		cout << "�ٸ� �迭\n";

	return 0;

}
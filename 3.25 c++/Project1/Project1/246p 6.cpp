/*
0~9���� ������ 100�� �����Ͽ� ���� ���� ������ ���� ����ϴ� ���α׷� �ۼ�
���� rand()�Լ� �̿�
*/

#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main() {
	int array[10] = { 0 }; // �迭�� ũ�� = 10��
	int i, num, max, index = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++) { // 100�� ����
		num = rand() % 10; //0~9���� ���� ����
		array[num]++; // �迭�� ���� 0~9
	}
	for (i = 0; i < 10; i++)
		cout << i << " : " << array[i] << endl;

	max = array[0]; //�ִ밪 ã��
	for (i = 1; i < 10; i++)
		if (array[i] > max) {
			max = array[i];
			index = i;
		}
	cout << "���� ���� ������ �� : " << index << endl;
	cout << "Ƚ�� " << max << endl;

	return 0;
}
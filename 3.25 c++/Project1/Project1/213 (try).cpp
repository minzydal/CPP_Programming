#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 10;

int main() {
	int grade[SIZE]; // �迭�� ������ 10��
	int i, j,  max, min; 

	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		grade[i] = rand() % 51; // grade �迭�� ���ҿ� 0~50���� ������ �� ����
		cout << grade[i] << endl; //�ϳ��� ���� �� ���
	}
	max = grade[0]; //grade[0]�� ���� ũ�ٰ� ����
	for (i = 0; i < SIZE; i++) {
		if (max < grade[i]) //grade[0]�� ������ �������� ������
			max = grade[i];	//�ִ밪�� ������ ������ ��
	for (j = 0; j <SIZE; j++)
		if (min > grade[j])
			min = grade[j];
	}
	cout << "MAX : " << max << endl; // �ִ밪�� max�� �־��־� ��� 
	cout << "MIN : " << min << endl; //�ּҰ��� min�� �־��־� ���

	return 0;
}


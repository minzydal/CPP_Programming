/*
�迭 0~100 =0
min prime number = 2
2�� ������ �������� != �Ҽ�
mod�� ���� �������� 1 ����
*/
#include <iostream>
using namespace std;

int main() {
	int num[101] = { 0 }; 

	for (int i = 2; i < 101/2; i++) {
		if (num[i] == 1)
			continue;
		for (int j = i + 1; j < 101; j++)
			if (j % i == 0) //�Ҽ�ã��
				num[j] = 1;
	}
	for (int i = 2; i < 101; i++)
		if (num[i] == 0)
			cout << i << endl;
}
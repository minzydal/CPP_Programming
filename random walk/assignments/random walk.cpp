#include <iostream>
#include <ctime>
#include <cstdlib>

#define SIZE 5 //��� ���� ũ��

//int check(int tile[][SIZE]); //Ÿ���� ��������(���������� 1) Ȯ���ϴ� ����
int i, j; //i,j ���������� ����

using namespace std;

int main(void) {

	int tile[SIZE][SIZE] = { { 0 } }; // 2���� �迭 5x5 ����
	int x = SIZE/2, y = SIZE/2; // ���� ��ġ : �߾�
	tile[x][y] = 1; // ���� ��ġ ������ = 1
	int count = 0; // �� �̵��Ÿ�

	time_t startTime; //���� �ð�

	srand((unsigned)time(NULL));

	startTime = clock(); // ���� �ð��� ����. CPU Time, ������ �и���

	while(count < 100000) {  //Ÿ�ϰ��� ��� 1�̵Ǹ� while�� Ż��
		for (i = 0; i < SIZE; i++) { // ���� Ÿ���� ���⽱�� ���
			for (j = 0; j < SIZE; j++) {
				if (tile[i][j] == 1)
					cout << "�� ";
				else
					cout << "�� ";
			}
			cout << endl;
		}
		cout << endl;
	
		int num = rand() % 8; // num = �̵��� ��, ���� 8���� Ÿ�� num ����(0~7)
		switch (num) {
		case 0:
			y--;
			count++;
			break;
		case 1:
			x++;
			y--;
			count++;
			break;
		case 2:
			x ++;
			count++;
			break;
		case 3:
			x++;
			y++;
			count++;
			break;
		case 4:
			y++;
			count++;
			break;
		case 5:
			x--;
			y++;
			count++;
			break;
		case 6:
			x--;
			count++;
			break;
		case 7:
			x--;
			y--;
			count++;
			break;
		}

		int check = 0;
		

	cout << "�� �̵��Ÿ� : " << count << endl;
	cout << "����ð�: " << (clock() - startTime) << endl;
	cout << "���� ��ġ : " << tile[x][y] << endl;
	
int check(int tile[][SIZE]) {
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			if (tile[i][j] == 0)
				return 0;
		}
	}
	return 1;
}
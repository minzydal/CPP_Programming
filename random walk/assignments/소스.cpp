#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_MOVE 100000 // �ִ� �̵� �ѵ�
#define N 5 // ��� ��

int i, j; //i,j ���������� ����
int check(int tile[][N]); //Ÿ�� ���� ��� 1�� �ƴ��� Ȯ���ϴ� ����

using namespace std;

int main(void) {
	int tile[N][N] = { {0} }; // 2���� �迭 5x5����
	int x = N / 2, y = N / 2; // ���� ��ǥ x, y / �߾ӿ� ����.
	tile[x][y] = 1;
	int count = 0, remainCounter, tx, ty; // �� �̵���, tx, ty = �Űܰ� ��ġ
	clock_t start, finish; // ����ð� ����

	start = clock();

	srand((unsigned)time(NULL));

	while (check(tile) != 1) { //Ÿ���� ��� 1�̵Ǹ� while�� Ż��

		int num = rand() % 8; // num = �̵��� ��, �ֺ��� �ִ� 8���� Ÿ�� �� ����(0~7)

		switch (num) {
		case 0:
			ty = y--;
			count++;
			break;
		case 1:
			tx = x++;
			ty = y--;
			count++;
			break;
		case 2:
			tx = x++;
			count++;
			break;
		case 3:
			tx = x++;
			ty = y++;
			count++;
			break;
		case 4:
			ty = y++;
			count++;
			break;
		case 5:
			tx = x--;
			ty = y++;
			count++;
			break;
		case 6:
			tx = x--;
			count++;
			break;
		case 7:
			tx = x--;
			ty = y--;
			count++;
			break;
		}
		for (i = 0; i < N; i++) { // ���� Ÿ���� ���⽱�� ���
			for (j = 0; j < N; j++) {
				if (tile[i][j] == 1)
					cout << "�� ";
				else
					cout << "�� ";
			}
			cout << endl;
		}
		cout << endl;

		if (tile[x][y] <= tile[N][N])
			x = tx;
			y = ty;

			for (ty = 0; ty < N; ty++)
			{
				for (tx = 0; tx < N; tx++)
				{
					if (tile[ty][tx] == 0) // �������� ������ ������
					{
						remainCounter++; // remainCounter�� ����
					}
				}
			}

			if (remainCounter == 0)
				break;

		finish = clock();
	}

	cout << "�� �̵� �� : " << count << endl;
	cout << "���� �ð� : " << ((double)(finish - start) / CLOCKS_PER_SEC) << endl;
	cout << "���� ��ǥ : " << tile[x][y] << endl;
}

int check(int tile[][N]) {
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (tile[i][j] == 0)
				return 0;
		}
	}
	return 1;
}
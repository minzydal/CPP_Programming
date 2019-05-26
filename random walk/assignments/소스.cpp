#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_MOVE 100000 // 최대 이동 한도
#define N 5 // 행과 열

int i, j; //i,j 전역변수로 설정
int check(int tile[][N]); //타일 값이 모두 1이 됐는지 확인하는 변수

using namespace std;

int main(void) {
	int tile[N][N] = { {0} }; // 2차원 배열 5x5생성
	int x = N / 2, y = N / 2; // 현재 좌표 x, y / 중앙에 있음.
	tile[x][y] = 1;
	int count = 0, remainCounter, tx, ty; // 총 이동수, tx, ty = 옮겨간 위치
	clock_t start, finish; // 수행시간 측정

	start = clock();

	srand((unsigned)time(NULL));

	while (check(tile) != 1) { //타일이 모두 1이되면 while문 탈출

		int num = rand() % 8; // num = 이동할 곳, 주변에 있는 8개의 타일 값 생성(0~7)

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
		for (i = 0; i < N; i++) { // 밟은 타일을 보기쉽게 출력
			for (j = 0; j < N; j++) {
				if (tile[i][j] == 1)
					cout << "■ ";
				else
					cout << "□ ";
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
					if (tile[ty][tx] == 0) // 안지나간 공간이 있으면
					{
						remainCounter++; // remainCounter를 증가
					}
				}
			}

			if (remainCounter == 0)
				break;

		finish = clock();
	}

	cout << "총 이동 수 : " << count << endl;
	cout << "수행 시간 : " << ((double)(finish - start) / CLOCKS_PER_SEC) << endl;
	cout << "현재 좌표 : " << tile[x][y] << endl;
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
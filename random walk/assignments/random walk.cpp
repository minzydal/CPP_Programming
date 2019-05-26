#include <iostream>
#include <ctime>
#include <cstdlib>

#define SIZE 5 //행과 열의 크기

//int check(int tile[][SIZE]); //타일을 지났는지(지나갔으면 1) 확인하는 변수
int i, j; //i,j 전역변수로 설정

using namespace std;

int main(void) {

	int tile[SIZE][SIZE] = { { 0 } }; // 2차원 배열 5x5 생성
	int x = SIZE/2, y = SIZE/2; // 현재 위치 : 중앙
	tile[x][y] = 1; // 현재 위치 지나감 = 1
	int count = 0; // 총 이동거리

	time_t startTime; //시작 시간

	srand((unsigned)time(NULL));

	startTime = clock(); // 시작 시간을 저장. CPU Time, 단위는 밀리초

	while(count < 100000) {  //타일값이 모두 1이되면 while문 탈출
		for (i = 0; i < SIZE; i++) { // 밟은 타일을 보기쉽게 출력
			for (j = 0; j < SIZE; j++) {
				if (tile[i][j] == 1)
					cout << "■ ";
				else
					cout << "□ ";
			}
			cout << endl;
		}
		cout << endl;
	
		int num = rand() % 8; // num = 이동할 곳, 주위 8개의 타일 num 생성(0~7)
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
		

	cout << "총 이동거리 : " << count << endl;
	cout << "수행시간: " << (clock() - startTime) << endl;
	cout << "현재 위치 : " << tile[x][y] << endl;
	
int check(int tile[][SIZE]) {
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			if (tile[i][j] == 0)
				return 0;
		}
	}
	return 1;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int fin(int x, int y);

int tile[5][5] = { 0 };//벌레가 밟는 타일(x,y좌표로 보면 된다.)

int main(void)
{
	int x, y;
	int i = 1, j = 1;

	srand((unsigned)time(NULL));

	printf("딱정벌레 게임\n");

	x = rand() % 6;//x축//처음 위치를 임의로 정한다.
	y = rand() % 6;//y축
	printf("처음 위치는 (%d,%d) 입니다.\n",2, 2);

	tile[x][y] = 1;//처음위치부터 밟아준다.

	printf("-----------------벌레 이동시작-----------------\n\n");

	do {
		j = rand() % 9;//8방위 또는 제자리로 이동한다.
		switch (j)
		{
		case 0:
			printf("벌레는 움직이지 않음	");
			tile[x][y] += 1;//타일값에 1을 더함으로써 이 타일을 밟은것을 표시한다.
			printf("지금까지 %d회 이동	", i);
			printf("현재위치는 (%d,%d).\n", x, y);
			i++;//횟수추가
			break;
		case 1:
			if (x > 0 && y < 5)//벌레가 벽에 부딪힐 경우 더 이상 뚫고 나가지 못하게 막는다.
			{
				printf("벌레가 북서쪽으로 이동	");
				x--, y++;
				tile[x][y] += 1;
				printf("지금까지 %d회 이동	", i);
				printf("현재위치는 (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 2:
			if (y < 5)
			{
				printf("벌레가 북쪽으로 이동	");
				y++;
				tile[x][y] += 1;
				printf("지금까지 %d회 이동	", i);
				printf("현재위치는 (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 3:
			if (x < 5 && y < 5)
			{
				printf("벌레가 북동쪽으로 이동	");
				x++, y++;
				tile[x][y] += 1;
				printf("지금까지 %d회 이동	", i);
				printf("현재위치는 (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 4:
			if (x < 5)
			{
				printf("벌레가 동쪽으로 이동	");
				x++;
				tile[x][y] += 1;
				printf("지금까지 %d회 이동	", i);
				printf("현재위치는 (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 5:
			if (x < 5 && y>0)
			{
				printf("벌레가 남동쪽으로 이동	");
				x++, y--;
				tile[x][y] += 1;
				printf("지금까지 %d회 이동	", i);
				printf("현재위치는 (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 6:
			if (y > 0)
			{
				printf("벌레가 남쪽으로 이동	");
				y--;
				tile[x][y]++;
				printf("지금까지 %d회 이동	", i);
				printf("현재위치는 (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 7:
			if (x > 0 && y > 0)
			{
				printf("벌레가 남서쪽으로 이동	");
				x--, y--;
				tile[x][y]++;
				printf("지금까지 %d회 이동	", i);
				printf("현재위치는 (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 8:
			if (x > 0)
			{
				printf("벌레가 서쪽으로 이동	");
				x--;
				tile[x][y]++;
				printf("지금까지 %d회 이동	", i);
				printf("현재위치는 (%d,%d)\n", x, y);
				i++;
			}
			break;
		}

	} while (fin(x, y));

	printf("총 이동 횟수는 %d입니다.", i);//총 이동횟수는 i에 저장해 왔다.

	printf("타일당 밟은 횟수\n");//표 그리기
	for (y = 5; y > -1; y--)
	{
		printf("--------------------------------------------------\n");
		for (x = 0; x < 6; x++)
			printf("|    %d	", tile[x][y]);
		printf("|\n");
	}
	printf("--------------------------------------------------\n");

	return 0;
}

int fin(int x, int y)//모든 타일이 0이 나오지 않으면, 즉 모든 타일이 1 이상이면 이동을 멈춘다.
{
	for (x = 0; x < 6; x++)
		for (y = 0; y < 6; y++)
		{
			if (tile[x][y] == 0)
				return 1;
		}
	return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

#define SIZE 5;

using namespace std;

int main()
{
	int tile[SIZE][SIZE] = { { 0 } }; // 2차원 배열 5x5 생성
	int count_tile[5][5] = { 0 }; // 각 타일에 몇번 들어갔는지 체크
	int n, m; // 타일의 크기 (n) * (m) , tile[m][n]
	int x, y; // 초기값 설정 (정중앙)
	int count_x, count_y; // 매 count 횟수마다 딱정벌레 위치 표시
	int count = 1; // 몇번 움직였는지 확인
	int sum = 0;  // 모든타일을 지나갔는지 확인
	int random_walk; // 딱정벌레 움직임
	clock_t start_time, end_time, used_time = 0; // 걸린시간

	srand((unsigned)time(NULL)); // 매번 새로운 값을 얻기 위함

	start_time = clock(); //시작시간

	while (true) // 타일의 크기 입력 (단 숫자만 받도록)
	{
		cout << "타일의 가로길이와 세로길이를 입력하시오 (20이하의 숫자만) : ";
		cin >> n >> m;

		if ((n > 0 && n < 6) && (m > 0 && m < 6))
			break;

		cin.clear();
		cin.ignore(10000, '\n');

		cout << "잘못 입력하셨습니다. 다시 입력해주세요.\n";
	}

	x = n / 2, y = m / 2; // 중앙값

	tile[y][x] = 1; // 처음 딱정벌레가 지나간(처음 위치하는) 방

	count_x = x + 1, count_y = y + 1; // 처음 딱정벌레의 위치 +1

	while (true)
	{
		random_walk = rand() % 8; //딱정벌레의 움직임을 랜덤값으로

		if (x == 0 && (random_walk >= 5)) //타일의 왼쪽 밖으로 나갔을때 다시 실행
			continue;

		if (y == 0 && (random_walk == 0 || random_walk == 1 || random_walk == 7)) // 타일의 위쪽 밖으로 나갔을때 다시 실행
			continue;

		if (x == n - 1 && (random_walk <= 3 && random_walk >= 1)) // 타일의 오른쪽 밖으로 나갔을때 다시 실행
			continue;

		if (y == m - 1 && (random_walk >= 3 && random_walk <= 5)) // 타일의 아래쪽 밖으로 나갔을때 다시 실행
			continue;

		switch (random_walk) // 딱정벌레의 움직임 확인
		{
		case 0:
		{
			tile[y - 1][x] = 1;
			count_tile[y - 1][x] += tile[y - 1][x];
			y = y - 1;
			count_y = count_y - 1;
			break;
		}
		case 1:
		{
			tile[y - 1][x + 1] = 1;
			count_tile[y - 1][x + 1] += tile[y - 1][x + 1];
			y = y - 1;
			x = x + 1;
			count_y = count_y - 1;
			count_x = count_x + 1;
			break;
		}
		case 2:
		{
			tile[y][x + 1] = 1;
			count_tile[y][x + 1] += tile[y][x + 1];
			x = x + 1;
			count_x = count_x + 1;
			break;
		}
		case 3:
		{
			tile[y + 1][x + 1] = 1;
			count_tile[y + 1][x + 1] += tile[y + 1][x + 1];
			y = y + 1;
			x = x + 1;
			count_y = count_y + 1;
			count_x = count_x + 1;
			break;
		}
		case 4:
		{
			tile[y + 1][x] = 1;
			count_tile[y + 1][x] += tile[y + 1][x];
			y = y + 1;
			count_y = count_y + 1;
			break;
		}
		case 5:
		{
			tile[y + 1][x - 1] = 1;
			count_tile[y + 1][x - 1] += tile[y + 1][x - 1];
			y = y + 1;
			x = x - 1;
			count_y = count_y + 1;
			count_x = count_x - 1;
			break;
		}
		case 6:
		{
			tile[y][x - 1] = 1;
			count_tile[y][x - 1] += tile[y][x - 1];
			x = x - 1;
			count_x = count_x - 1;
			break;
		}
		case 7:
		{
			tile[y - 1][x - 1] = 1;
			count_tile[y - 1][x - 1] += tile[y - 1][x - 1];
			y = y - 1;
			x = x - 1;
			count_y = count_y - 1;
			count_x = count_x - 1;
			break;
		}
		}

		cout << "-- " << count << "번째 실행 --\n";


		for (int i = 0; i < m; i++) // count 번째 타일 모양
		{
			for (int j = 0; j < n; j++)
			{
				cout << tile[i][j] << " ";
			}
			cout << endl;
		}

		cout << "-- 현재위치는  (" << count_x << ", " << count_y << ") 입니다." << endl << endl << endl; /*왼쪽 위를 중심(1,1)로 X축(count_x), Y축(count_y)*/


		for (int i = 0; i < m; i++) // 모든 타일을 한번 이상 지나갔는지 확인 (합산값)
		{
			for (int j = 0; j < n; j++)
			{
				sum += tile[i][j];
			}
		}
		if (sum == n * m) // 모든 타일을 한번 이상 지났을 시에 종료
		{
			break;
		}
		else // 모든 타일을 한번 이상 않았을 시에, 합산값을 초기화
		{
			sum = 0;
		}

		if (count == 10000) // 1만번 이상 움직였을 시에 너무 커지므로 종료
		{
			cout << "\n\n 너무 많이 움직였습니다. \n\n";
			break;
		}
		count++;
	}

	cout << endl << endl << "총 " << count << "번 움직였습니다." << endl;

	getchar();

	cout << endl << "각 방마다 지나간 횟수" << endl; //각 방마다 지나간 횟수
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << count_tile[i][j] << "\	";
		}
		cout << endl;
	}

	end_time = clock(); //끝시간

	used_time = end_time - start_time; // 걸린시간

	cout << "\n\n모든 타일을 지나는데 걸린 시간은 " << (double)used_time / CLOCKS_PER_SEC << "초 입니다.\n\n";

	return 0;
}
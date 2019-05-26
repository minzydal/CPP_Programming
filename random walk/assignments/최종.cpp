
#include <iostream>
#include <cstdlib>
#include <ctime>

#define SIZE 5;

using namespace std;

int main()
{
	int tile[SIZE][SIZE] = { { 0 } }; // 2���� �迭 5x5 ����
	int count_tile[5][5] = { 0 }; // �� Ÿ�Ͽ� ��� ������ üũ
	int n, m; // Ÿ���� ũ�� (n) * (m) , tile[m][n]
	int x, y; // �ʱⰪ ���� (���߾�)
	int count_x, count_y; // �� count Ƚ������ �������� ��ġ ǥ��
	int count = 1; // ��� ���������� Ȯ��
	int sum = 0;  // ���Ÿ���� ���������� Ȯ��
	int random_walk; // �������� ������
	clock_t start_time, end_time, used_time = 0; // �ɸ��ð�

	srand((unsigned)time(NULL)); // �Ź� ���ο� ���� ��� ����

	start_time = clock(); //���۽ð�

	while (true) // Ÿ���� ũ�� �Է� (�� ���ڸ� �޵���)
	{
		cout << "Ÿ���� ���α��̿� ���α��̸� �Է��Ͻÿ� (20������ ���ڸ�) : ";
		cin >> n >> m;

		if ((n > 0 && n < 6) && (m > 0 && m < 6))
			break;

		cin.clear();
		cin.ignore(10000, '\n');

		cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n";
	}

	x = n / 2, y = m / 2; // �߾Ӱ�

	tile[y][x] = 1; // ó�� ���������� ������(ó�� ��ġ�ϴ�) ��

	count_x = x + 1, count_y = y + 1; // ó�� ���������� ��ġ +1

	while (true)
	{
		random_walk = rand() % 8; //���������� �������� ����������

		if (x == 0 && (random_walk >= 5)) //Ÿ���� ���� ������ �������� �ٽ� ����
			continue;

		if (y == 0 && (random_walk == 0 || random_walk == 1 || random_walk == 7)) // Ÿ���� ���� ������ �������� �ٽ� ����
			continue;

		if (x == n - 1 && (random_walk <= 3 && random_walk >= 1)) // Ÿ���� ������ ������ �������� �ٽ� ����
			continue;

		if (y == m - 1 && (random_walk >= 3 && random_walk <= 5)) // Ÿ���� �Ʒ��� ������ �������� �ٽ� ����
			continue;

		switch (random_walk) // ���������� ������ Ȯ��
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

		cout << "-- " << count << "��° ���� --\n";


		for (int i = 0; i < m; i++) // count ��° Ÿ�� ���
		{
			for (int j = 0; j < n; j++)
			{
				cout << tile[i][j] << " ";
			}
			cout << endl;
		}

		cout << "-- ������ġ��  (" << count_x << ", " << count_y << ") �Դϴ�." << endl << endl << endl; /*���� ���� �߽�(1,1)�� X��(count_x), Y��(count_y)*/


		for (int i = 0; i < m; i++) // ��� Ÿ���� �ѹ� �̻� ���������� Ȯ�� (�ջ갪)
		{
			for (int j = 0; j < n; j++)
			{
				sum += tile[i][j];
			}
		}
		if (sum == n * m) // ��� Ÿ���� �ѹ� �̻� ������ �ÿ� ����
		{
			break;
		}
		else // ��� Ÿ���� �ѹ� �̻� �ʾ��� �ÿ�, �ջ갪�� �ʱ�ȭ
		{
			sum = 0;
		}

		if (count == 10000) // 1���� �̻� �������� �ÿ� �ʹ� Ŀ���Ƿ� ����
		{
			cout << "\n\n �ʹ� ���� ���������ϴ�. \n\n";
			break;
		}
		count++;
	}

	cout << endl << endl << "�� " << count << "�� ���������ϴ�." << endl;

	getchar();

	cout << endl << "�� �渶�� ������ Ƚ��" << endl; //�� �渶�� ������ Ƚ��
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << count_tile[i][j] << "\	";
		}
		cout << endl;
	}

	end_time = clock(); //���ð�

	used_time = end_time - start_time; // �ɸ��ð�

	cout << "\n\n��� Ÿ���� �����µ� �ɸ� �ð��� " << (double)used_time / CLOCKS_PER_SEC << "�� �Դϴ�.\n\n";

	return 0;
}
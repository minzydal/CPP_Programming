#include <iostream>
#include <cstdlib>
#include <ctime>

int fin(int x, int y);

int tile[5][5] = { 0 };//������ ��� Ÿ��(x,y��ǥ�� ���� �ȴ�.)

int main(void)
{
	int x, y;
	int i = 1, j = 1;

	srand((unsigned)time(NULL));

	printf("�������� ����\n");

	x = rand() % 6;//x��//ó�� ��ġ�� ���Ƿ� ���Ѵ�.
	y = rand() % 6;//y��
	printf("ó�� ��ġ�� (%d,%d) �Դϴ�.\n",2, 2);

	tile[x][y] = 1;//ó����ġ���� ����ش�.

	printf("-----------------���� �̵�����-----------------\n\n");

	do {
		j = rand() % 9;//8���� �Ǵ� ���ڸ��� �̵��Ѵ�.
		switch (j)
		{
		case 0:
			printf("������ �������� ����	");
			tile[x][y] += 1;//Ÿ�ϰ��� 1�� �������ν� �� Ÿ���� �������� ǥ���Ѵ�.
			printf("���ݱ��� %dȸ �̵�	", i);
			printf("������ġ�� (%d,%d).\n", x, y);
			i++;//Ƚ���߰�
			break;
		case 1:
			if (x > 0 && y < 5)//������ ���� �ε��� ��� �� �̻� �հ� ������ ���ϰ� ���´�.
			{
				printf("������ �ϼ������� �̵�	");
				x--, y++;
				tile[x][y] += 1;
				printf("���ݱ��� %dȸ �̵�	", i);
				printf("������ġ�� (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 2:
			if (y < 5)
			{
				printf("������ �������� �̵�	");
				y++;
				tile[x][y] += 1;
				printf("���ݱ��� %dȸ �̵�	", i);
				printf("������ġ�� (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 3:
			if (x < 5 && y < 5)
			{
				printf("������ �ϵ������� �̵�	");
				x++, y++;
				tile[x][y] += 1;
				printf("���ݱ��� %dȸ �̵�	", i);
				printf("������ġ�� (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 4:
			if (x < 5)
			{
				printf("������ �������� �̵�	");
				x++;
				tile[x][y] += 1;
				printf("���ݱ��� %dȸ �̵�	", i);
				printf("������ġ�� (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 5:
			if (x < 5 && y>0)
			{
				printf("������ ���������� �̵�	");
				x++, y--;
				tile[x][y] += 1;
				printf("���ݱ��� %dȸ �̵�	", i);
				printf("������ġ�� (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 6:
			if (y > 0)
			{
				printf("������ �������� �̵�	");
				y--;
				tile[x][y]++;
				printf("���ݱ��� %dȸ �̵�	", i);
				printf("������ġ�� (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 7:
			if (x > 0 && y > 0)
			{
				printf("������ ���������� �̵�	");
				x--, y--;
				tile[x][y]++;
				printf("���ݱ��� %dȸ �̵�	", i);
				printf("������ġ�� (%d,%d)\n", x, y);
				i++;
			}
			break;
		case 8:
			if (x > 0)
			{
				printf("������ �������� �̵�	");
				x--;
				tile[x][y]++;
				printf("���ݱ��� %dȸ �̵�	", i);
				printf("������ġ�� (%d,%d)\n", x, y);
				i++;
			}
			break;
		}

	} while (fin(x, y));

	printf("�� �̵� Ƚ���� %d�Դϴ�.", i);//�� �̵�Ƚ���� i�� ������ �Դ�.

	printf("Ÿ�ϴ� ���� Ƚ��\n");//ǥ �׸���
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

int fin(int x, int y)//��� Ÿ���� 0�� ������ ������, �� ��� Ÿ���� 1 �̻��̸� �̵��� �����.
{
	for (x = 0; x < 6; x++)
		for (y = 0; y < 6; y++)
		{
			if (tile[x][y] == 0)
				return 1;
		}
	return 0;
}
/*
2���� �迭 6x4�� ������ ����
�������� �� ���
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
	int array[6][4] = {0};

	srand((unsigned)time(NULL));

	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 4; j++)
			array[i][j] = 1 + rand() % 10; //1~10

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++)
			cout << setw(8) << array[i][j];

		// printf("%8d", array[i][j])

			cout << endl;
	}




}
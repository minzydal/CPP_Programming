#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 10;

int main() {
	int grade[SIZE]; //�迭�� ���� = 10

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++)
		grade[i] = rand() % 101;  // 0~100���� ���� ����
	for (int i = 0; i < SIZE; i++)
		cout << i << " : " << grade[i] << endl;

	return 0;

}
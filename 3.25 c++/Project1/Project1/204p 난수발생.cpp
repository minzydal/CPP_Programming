#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 10;

int main() {
	int grade[SIZE]; //배열의 개수 = 10

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++)
		grade[i] = rand() % 101;  // 0~100까지 난수 생성
	for (int i = 0; i < SIZE; i++)
		cout << i << " : " << grade[i] << endl;

	return 0;

}
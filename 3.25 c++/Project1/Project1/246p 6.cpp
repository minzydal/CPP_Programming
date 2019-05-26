/*
0~9까지 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램 작성
난수 rand()함수 이용
*/

#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main() {
	int array[10] = { 0 }; // 배열의 크기 = 10개
	int i, num, max, index = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++) { // 100번 생성
		num = rand() % 10; //0~9까지 난수 생성
		array[num]++; // 배열의 개수 0~9
	}
	for (i = 0; i < 10; i++)
		cout << i << " : " << array[i] << endl;

	max = array[0]; //최대값 찾기
	for (i = 1; i < 10; i++)
		if (array[i] > max) {
			max = array[i];
			index = i;
		}
	cout << "가장 많이 생성된 수 : " << index << endl;
	cout << "횟수 " << max << endl;

	return 0;
}
/*
2개의 정수 배열 a,b를 받아서 배열 원소가 같은지 검사하는 함수 array_equal(int a[], int b[], int size)
를 작성 및 테스트
만약 전체 원소가 같다면 1을 반환 그렇지 않다면 0을 반환
*/

#include <iostream>
using namespace std;

const int SIZE = 5;

int main() {
	int a[SIZE] = { 1, 2, 3, 4, 5 }, b[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
		b[i] = a[i];
	for (i = 0; i < SIZE; i++) {
		if (a[i] != b[i])
			break;
	}
	if (i == SIZE)
		cout << "같은 배열\n";
	else
		cout << "다른 배열\n";

	return 0;

}
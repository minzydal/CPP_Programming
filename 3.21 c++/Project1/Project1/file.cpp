/*
extern을 사용해서 쓸 수 있는 변수는 only 전역변수.
*/
#include <iostream>
using namespace std;

int sum = 100;

int get_square(int n) {
	sum = 500;
	return n * n;
}
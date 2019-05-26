/*
중복함수(overloading functions) : 같은 이름을 가지는 함수를 여러 개 정의하는 것.
매개변수의 수와 타입으로 구분한다.
리턴 타입과는 관계없다.
*/
#include <iostream>
using namespace std;

int sum(int, int);
double sum(double, double);

void main() {
	cout << sum(10, 20) << endl;
	cout << sum(1.0, 2.0) << endl;
}
int sum(int n1, int n2) {
	return n1 + n2;
}
double sum(double n1, double n2) {
	return n1 + n2;
}
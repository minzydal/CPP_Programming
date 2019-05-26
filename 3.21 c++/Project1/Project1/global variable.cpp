#include <iostream>
using namespace std;

int sum = 100; 
/*
전역은 될 수 있으면 사용하지 않음 
함수 외부에 선언되면 전역변수
전역과 지역 변수의 이름이 같으면 지역이 우선(shadow effect)
*/
void main() {
	int i = 0; sum = 0; //지역 변수

	for (i = 0; i <= 10; i++)
		sum += i;
	cout << "Sum : " << sum << endl;

	::sum++; //전역변수 사용, scope resolution operator
	cout << sum << ", " << ::sum << endl;
}
/*
구의 표면적과 체적을 구하는 프로그램 작성
구의 반지름은 실수로 입력됨.
4파이알중에 파이는 상수
*/

#include <iostream>
using namespace std;

const double PI = 3.14;

int main() {

	double radius;
	double A, V;
	cout << "구의 반지름을 입력하세요 : ";
	cin >> radius; //입력받은 반지름 읽기

	A = 4 * PI * radius * radius;
	V = (4 / 3) * PI * radius * radius * radius;

	cout << "구의 표면적은 " << A << "입니다. " << endl;
	cout << "구의 부피는 " << V << "입니다. " << endl;
}
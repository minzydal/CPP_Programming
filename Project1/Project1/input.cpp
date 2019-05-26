/*
x의 값을 실수로 입력받아서 다항식의 값을 계산하는 프로그램
*/
#include <iostream>
#include <cmath> //pow함수 쓰기 위해 cmath헤더파일 가져오기 
using namespace std;

int main() {
	
	double x, result;
	cout << "x 값을 입력하세요 : ";
	cin >> x;

	result = 3 * pow(x, 3) - 7 * pow(x, 2) + 9;

	cout << "다항식의 값은 " << result << "입니다.";
}
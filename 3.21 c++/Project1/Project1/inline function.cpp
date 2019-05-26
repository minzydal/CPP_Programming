/*
inline 함수 예제
길이가 짧은 함수의 경우 함수 호출에 대한 overhead를 줄일 수 있다.
바로 실행
*/

#include <iostream>
using namespace std;

inline double square(double);

void main() {
	cout << square(2.0) << endl; //2.0*2.0으로 치환
	cout << square(3.0) << endl; //3.0*3.0으로 치환
}
inline double square(double n) { //함수 정의에도 inline 붙일 수 있다.
	return n * n;
}
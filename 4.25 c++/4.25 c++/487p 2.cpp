/*
MyMath 클래스에 PI라는 이름으로 정적변수를 선언하고 3.141592로 초기화
이 PI값을 반환하는 getPI()라는 이름의 정적 메소드도 작성하기
*/

#include <iostream>
using namespace std;

class MyMath {
	static const double PI;
	static const int MAXSPEED;
public:
	static double getPI() {
		return PI;
	}
	static int getMax() {
		return MAXSPEED;
	}
};
const double MyMath::PI = 3.141592;
const int MyMath::MAXSPEED = 300;

void main() {
	cout << MyMath::getPI() << endl;
	printf("%d\n", MyMath::getMax());
}
#include <iostream>
#include <string>
using namespace std;

class Car {
public :
	int speed, gear;
	string color;

	void setGear(int g) {
		gear = g;
	}
	void speedUp(int inc) {
		speed += inc;
	}
	void speedDown(int dec) {
		speed -= dec;
	}
};
class SportsCar : public Car {
	bool turbo;
public :
	void setTurbo(bool t) {	// 터보 모드 설정 멤버 함수
		turbo = t;
	}
};
void main() {	//sportsCar 클래스 객체 c는
				//Car 클래스의 모든 public 멤버를 사용할 수 있다.

	SportsCar c;
	c.color = "red";	// 부모 클래스 멤버 변수 접근
	c.setGear(3);		// 부모 클래스 멤버 함수 호출
	c.speedUp(100);		// 부모 클래스 멤버 함수 호출
	c.speedDown(30);	// 부모 클래스 멤버 함수 호출
	c.setTurbo(true);	//당연히 자신이 추가한 함수도 사용

}
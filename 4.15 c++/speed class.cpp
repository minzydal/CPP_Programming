#include <iostream>
#include <string>

using namespace std;

class Car {
public : 
	int speed; //접근 제어, default는 private
	int gear; //멤버 변수
	string color;

	void speedUp() { //멤버함수
		speed += 10;
}
	void speedDown() {
		speed -= 10;
	}	//클래스 정의 끝에 ; 반드시 필요
};
void main() {
	Car myCar, yourCar;

	myCar.speed = 100; //클래스는 사용자가 정의한 새로운 타입
	yourCar.speed = 60; //클래스로부터 객체를 생성해서 사용
	myCar.color = "white";

	yourCar.speedUp();
	cout << myCar.speed << endl;
	cout << yourCar.speed << endl;
}
/*
this 포인터
멤버함수 호출 시 호출 객체를 묵시적으로 전달하고 함수는 this 포인터로 받음
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public :
	Car(int speed = 0, int gear = 1, string color = "whilte") {	// Car *this 숨겨져 있음
		this->speed = speed;	// this->speed : 멤버 변수, speed : 매개변수
		this->gear = gear;
		this->color = color;
	}
	void display();
};
void Car::display() {
	cout << "Speed : " << this->speed << ", Gear : " <<
		this->gear << ", Color : " << this->color << endl;
}
void maion() {
	Car myCar;
	myCar.display();
	cout << sizeof(myCar) << endl;

	Car *pCar = &myCar;
	pCar->display();
	cout << sizeof << endl;
	cout << sizeof << endl;

	pCar = new Car(0, 1, "blue");
	pCar->display();

	delete pCar;
}
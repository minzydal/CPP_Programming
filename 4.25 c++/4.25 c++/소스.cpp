#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public :
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
	}					//default 매개변수, 콜론 초기화 사용
	void display();
};
void Car::display() {
	cout << "Speed : " << speed << ", Gear : " << gear << ", Color : " << color << endl;
}
void main() { 
	Car myCar;
	myCar.display();	//일반 객체의 멤버 접근은 . 연산자 사용
	cout << sizeof(myCar) << endl;

	Car *pCar = &myCar; //객체 포인터가 일반 객체 참조
	pCar->display();	//객체 포인터는 ->연산자로 멤버 호출
	cout << sizeof(pCar) << endl;

	pCar = new Car(100, 3, "blue");	//객체 포인터가 동적생성된 객체 참조
	pCar->display();

	delete pCar;

}
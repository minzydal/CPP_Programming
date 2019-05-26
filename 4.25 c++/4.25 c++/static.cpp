/*
모든 객체(instance)는 자기만의 멤버변수를 갖는다(instance 변수)
static 변수는 모든 객체가 공유하는 변수(클래스 변수)
일반 멤버 변수는 객체가 생성되어야 존재함
static 변수나 함수는 객체 생성 이전에 생성됨(중요한 개념)
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear, id;	//id에 객체마다 고유번호를 주려고 한다.
	string color;
public:
	static int numCars;	//private으로 선언되지만 설명을 위해 public 선언
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
		id = ++numCars;
	}
	void display() {
		cout << speed << ", " << gear << ", " << color << ", " << id << endl;
	}
};
int Car::numCars = 0;	//static 변수는 반드시 클래스 외부에서 초기화

void main(){
	cout << Car::numCars << endl;
	//static 변수나 함수는 객체와 무관하게 사용 가능(클래스 이름으로 호출)
	Car myCar;
	cout << Car::numCars << endl;
	cout << myCar.numCars << endl;
	//static 변수나 함수는 객체가 생성되면 객체 이름으로도 호출 가능(사용하지 않음)
	myCar.display();

	Car yourCar;
	cout << Car::numCars << endl;
	yourCar.display();
}
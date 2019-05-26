//static 함수

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear, id;	//id에 객체마다 고유번호를 주려고 한다.
	string color;
	static int numCars;	
public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
		id = ++numCars;
	}
	void display() {
		cout << speed << ", " << gear << ", " << color << ", " << id << endl;
		cout << numCars << endl;	//일반 멤버함수는 static변수나 함수 호출 가능 
		cout << getNumCars() << endl;
	}
	static int getNumCars() {
		/*
		display();	// static 함수는 non-static 함수 호출 불가
		speed = 100;	//static 함수는 non-static 변수 사용 불가
		*/
		return numCars;
	}
	~Car() {
		numCars--;
		cout << "소멸자" << this->color << ", " << numCars << endl;
	}
};
int Car::numCars = 0;	//static 변수는 반드시 클래스 외부에서 초기화

void main() {
	cout << Car::getNumCars << endl;
	//static 함수도 객체와 무관하게 사용 가능(클래스 이름으로 호출)
	Car myCar;
	cout << Car::getNumCars << endl;
	cout << myCar.getNumCars << endl;
	//static 함수도 객체 이름으로 호출 가능(사용하지 않음)
	myCar.display();

	Car yourCar;
	cout << Car::getNumCars << endl;
	yourCar.display();
}

/*
static 함수는 static 함수와 변수에만 접근 가능(멤버 변수와 함수는 객체가 생성되어야 존재하기 때문)
static 함수는 this 사용 불가(객체 생성과 무관하기 때문)
그러나 일반 멤버함수는 static 변수와 함수에 접근 가능
*/
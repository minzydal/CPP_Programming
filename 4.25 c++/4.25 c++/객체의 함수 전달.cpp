/*
객체의 함수 전달
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public :
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
	}
	void display() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
	void swap(Car obj){		//함수에 객체 전달은 기본적으로 call by value
		//void swap(Car &obj) 매개변수로 넘어가는 값을 바꾸고 싶으면 call by reference로 전달하기 
		Car temp;

		temp = *this;
		*this = obj;	//obj call by value로 전달받음
		obj = temp;
		}

};
void main() {
	Car mine(0, 1, "white");
	Car yours(100, 5, "red");
	mine.display(); // mine은 포인터
	yours.display();

	mine.swap(yours);	// 호출객체의 값은 변하지만 매개변수 객체는 변하지 않는다.
	mine.display();
	yours.display();
}

/*
1. 포인터를 사용하는 방법

void swap(Car * obj) {	//call by address
	Car temp;

	temp = *this;
	*this = *obj;
	*obj = temp;
}

2. 레퍼런스를 사용하는 방법

void swap(Car &obj) {
	Car temp;

	temp = *this;
	*this = *obj;
	*obj = temp;
}
*/

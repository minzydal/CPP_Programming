/*
colon 초기화(number initializer), 초기화 리스트
일반 멤버변수의 초기화

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed,gear;
	string color;
	public :
	Car(int s, int g, string c) : speed(s), gear(g), color(c){ //콜론 초기화
		speed = s;
		gear = g;
		color = c;
		cout << "생성자 호출\n";
	}
	void print(){
	cout << speed << ", " << gear << ", " << color << ", " << MAX_SPEED << endl;
	}
	};
	void main(){
		Car car(100, 5, "blue");
		car.print();
}
*/
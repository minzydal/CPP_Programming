/*
복사 생성자(copy constructor)
이미 생성된 객체와 멤버변수가 동일한 객체 생성 시 자동 호출
컴파일러는 복사 생성자가 없으면 default 복사 생성자 제공
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public:
	Car(int s, int g, string c) : speed(s), gear(g), color(c) {
		cout << "생성자 호출\n";
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
	~Car() {
		cout << "소멸자 호출\n";
	}
	Car(const Car &obj) {	// 매개변수 형식에 주의(&사용)
		cout << "복사 생성자 호출\n";
		speed = obj.speed;
		gear = obj.gear;
		color = obj.color;
	}
};
void main() {
	Car c1(0, 1, "yellow");
	Car c2{ c1 };	// c2 = c1, c2(c1)과 동일, 복사 생성자 호출

	c1.print();
	c2.print();
}
/*
객체를 2개 생성하지만 생성자 호출은 1번, 소멸자 호출은 2번
c2객체 생성은 복사 생성자를 호출하기 때문이다
컴파일러가 제공하는 디폴트 복사 생성자 사용
디폴트 복사 생성자는 멤버 대 멤버를 복사하는 얕은 복사(shallow copy)사용 
*/
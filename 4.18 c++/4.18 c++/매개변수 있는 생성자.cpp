
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed = 0, gear = 0; //멤버 변수에 초기값 지정 가능
	string color;
public:
	Car(int s, int g, string c) {	//매개변수 있는 생성자
		cout << "매개변수 있는 생성자 호출 \n";
		speed = s;
		gear = g;
		color = c;
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car car1(100, 5, "blue");	// 객체를 생성하면 자동으로 생성자 호출
	car1.print();

	Car car2 = Car(10, 2, "red");	// C 스타일 생성자 호출(사용하지 않는다)
	car2.print();

	Car car3;	// 매개변수 있는 생성자를 작성하면 컴파일러는 default 생성자를 제공하지 않는다
}
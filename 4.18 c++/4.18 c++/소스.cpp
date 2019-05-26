
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear; 
	string color;
public:
	Car() {
		cout << "디폴트 생성자 호출\n";
		speed = 0;
		gear = 1;
		color = "white";
	}
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
	Car car1;	//디폴트 생성자 호출, car1(), 아님
	Car car2(10, 2, "red");	//매개변수 있는 생성자 호출
	Car car3{20, 3, "white"};	//uniform initializer
	Car car4{ 30, 4, "blue" };
	car1.print();
	car2.print();
}
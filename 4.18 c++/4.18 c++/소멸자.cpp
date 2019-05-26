/*
destructor 함수
클래스 이름 앞에 ~가 붙음
생성자와 마찬가지로 반환값 없음
매개변수가 없기 때문에 중복 정의할 수 없음
객체 소멸 시 자동으로 호출
주로 할당된 자원(메모리, 파일 등)을 반납하는 용도로 사용
*/
#include <iostream>
#include <string>
using namespace std;

class Car{
	int speed, gear;
	string color;
public :
	Car(int s, int g, string c) {
		cout << "생성자 호출\n";
		speed = s;
		gear = g;
		color = c;
	}
	~Car() {
		cout << "소멸자 호출\n";
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car car(100, 5, "blue");
	car.print();	//프로그램 종료 시 자동으로 소멸자 호출 
}
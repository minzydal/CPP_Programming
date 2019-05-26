/*
생성자 함수
클래스 이름과 동일
리턴값이 없음
반드시 public이어야함
생성자도 함수이기 때문에 중복 정의 가능
객체 생성시 자동으로 호출
주로 멤버변수 값들을 초기화하는데 사용
default 생성자가 없으면 컴파일러는 default 생성자 제공
car(){}
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed = 0, gear = 0; //멤버 변수에 초기값 지정 가능
	string color = "blue";
public :
	Car() {
		cout << "default constructor(디폴트 생성자) 호출 \n";
		speed = 0;
		gear = 1;
		color = "white";
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car car; //객체를 생성하면 자동으로 생성자 호출
			//default 생성자 호출 시 car()아님. 주의
			//괄호 들어가면 안됨
	car.print();
}
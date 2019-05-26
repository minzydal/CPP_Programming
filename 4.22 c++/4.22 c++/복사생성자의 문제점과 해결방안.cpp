/*
디폴트 복사생성자의 문제점과 해결방안
다음 프로그램은 런타임 에러가 발생한다.이유는?
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
	char *color;	//color를 character pointer로 선언
public:
	Car(const char *c) {
		cout << "생성자 호출\n";
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	void setColor(Car obj) {
		delete[] color;
		color = new char[strlen(obj.color) + 1];
		strcpy(color, obj.color);
	}
	~Car() {
		cout << "소멸자 호출\n";
		delete[] color;
	}
	Car getCar() {
		Car newCar("blue");
		return newCar;
	}
	Car(const Car &obj)
	{
		cout << "복사생성자 호출\n";
		color = new char[strlen(obj.color) + 1];
		strcpy(color, obj.color);
	}
};

void main() {
	Car c1("yellow");
	Car c2("black");
	Car c3(c1);	// c2=c1과 동일.	1) 기존 객체와 동일한 새로운 객체를 생성하는 경우

	c1.setColor(c2);	//			2) 함수에 객체를 전달하는 경우

	Car myCar = c1.getCar();	//	3) 함수에서 객체를 리턴하는 경우
}								//	run time eroor 발생

/*
매개변수는 지역변수와 같아서
c-> "yellow"
color가 참조하는 위 변수는 소멸이 된다
그래서 run time error가 발생하게 된다.
*/
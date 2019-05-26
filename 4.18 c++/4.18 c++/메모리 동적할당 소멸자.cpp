/*
메모리 동적할당한 경우 소멸자의 역할
run time error가 발생한다. 이유는?
매우 중요
*/

#include <iostream>
#include <string>
using namespace std;

class Car{
	int speed, gear;
	char *color;
public:
	Car(int s, int g, const char *c) {		//c는 매개변수, 따라서 함수 종료 시 소멸됨
		cout << "생성자 호출\n";
		speed = s;
		gear = g;
		//color = c;					//shallow copy의 경우 주소 복사
		color = new char[strlen(c) + 1];//메모리 동적 할당
		strcpy(color, c);
		printf("%s %s\n", c, color);
		printf("%p %p\n", c, color);	// 주소가 같다
	}
	~Car() {
		cout << "소멸자 호출\n";
		delete[] color;		//동적 할당 메모리 반납
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car car(100, 5, "black");
	car.print();	//프로그램 종료 시 자동으로 소멸자 호출
	cout << sizeof(car) << endl;
}


/*
얕은 복사(shalllow copy), 깊은 복사(deep copy)
color = new char[strlen(c) + 1]; //메모리 동적 할당
strcpy(color, c);
*/
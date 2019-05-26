
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear, id;	//id에 객체마다 고유번호를 주려고 한다.
	string color;
public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
		cout << "생성자 호출\n";
	}
	void display() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car objArray[3] = {
		Car(0, 1, "white"),// 객체 배열 초기화는 생성자 호출
		Car(0, 1, "red"),
		Car(0, 1, "blue")
	};
	cout << sizeof(objArray) << ", " << sizeof(objArray[0]) << endl;
	printf("%d %d\n", objArray, &objArray[0]);	//객체 배열도 배열 이름은 배열의 시작 주소
	printf("%d %d\n", &objArray[1], &objArray[2]);
	for (int i = 0; i < 3; i++) {
		objArray[i].display();
		(objArray + i)->display();	//배열 이름은 배열의 시작 주소, 따라서 포인터처럼 사용 가능 
	}

	Car *p = objArray;	//객체 포인터 p가 배열 참조
	for (int i = 0; i < 3; i++) {
		p->display();
		p++;
	}
	// for 반복문이 종료되면 p는 배열을 벗어 난다. 반드시 배열의 처음으로 이동
	p = objArray;
	for (int i = 0; i < 3; i++)
		(p + i)->display();

	Car car[3];	//객체 배열을 선언만 하면 자동으로 default 생성자 호출
}

/*
사각형을 나타내는 rectangle 이라고 이름 부텽진 클래스 만들기
사각형의 가로를 나타내는 width와 length를 멤버변수
사각형의 넓이를 계산해서 반환하는 calcArea() 멤버함수
UML로 그리고 접근자, 설정자 추가하여 구현
*/
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Rectangle {
	int width;
	int length;
public:
	void setWidth(int w) { // setter함수
		width = w;
	}
	int getWidth() { // getter함수
		return width;
	}
	void setLength(int l) {
		length = l;
	}
	int getLength() {
		return length;
	}
	int calcArea() {
		return width * length;
	}
};

void main() {
	Rectangle r1;
	cout << sizeof(r1) << endl;
	r1.setWidth(10);
	r1.setLength(20);
	cout << r1.getWidth() << endl;
	cout << r1.getLength() << endl;
	cout << r1.calcArea() << endl;

}
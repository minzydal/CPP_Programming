#include <iostream>
using namespace std;

class Shape {
	int x, y;
public:
	virtual void draw() {
		cout << "Shape draw\n";
	}
	void setOrigin(int ax, int ay) {
		this->x = x;
		this->y = y;
	}
};
class Rectangle : public Shape {
	int width, height;
public:
	void setRadius(int r) {
		radius = r;
	}
	void draw() {
		cout << "Circle draw\n";
	}
	void print() {
		Shape::print();
		cout << radius << endl;
	}
};
class Circle : public Shape {
	int radius;
public : 
	void setRadius(int r) {
		radius = r;
		cout << radius << endl;
	}
	virtual void draw() {
		cout << "Circle draw\n";
	}

	void main() {
		Shape *ps = new Rectangle();
		/*부모 클래스의 객체 포인터는 자식클래스 객체를 참조할 수 있다.
		  상향 형변환(up-casting)
		*/
		ps->setOrigin(10, 10);
		ps->draw();
		((Rectangle *)ps)->setWidth(100);
		//하향형변환(down-casting)을 통해 자식클래스에 추가된 함수 호출 가능

		Circle c;
		ps = &c;
		ps->draw();
		((Circle *)ps)->setRadius(5);

}


	/*
	부모 클래스의 객체 포인터를 사용하여 가상함수를 호출하면
	실제 참조하는 객체의 overriding된 함수를 호출한다

	가상함수는 객체 포인터를 통해서만 구현된다
	일반 객체변수로는 구현되지 않는다
	Rectangle r;
	Shape s = r;
	s.draw()
	*/
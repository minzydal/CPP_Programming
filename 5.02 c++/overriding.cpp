#include <iostream>
using namespace std;

class Shape {
	int x, y;
public:
	Shape() :

	{
		cout << "Shape(x, y) 생성자 \n";
	}
	~Shape() {
		cout << "Shape 소멸자\n";
	}
	void print() {
		cout << "Shape : " << x << ", " << y << endl;
	}
};

class Rectangle : public Shape {
	int width, height;
public:
	Rectangle(int x = 0, int y = 0, int w = 0, int h = 0) :
		Shape(x, y), width(w), height(h) {
		// child class의 생성자는 parent class의 생성자를 : 초기화를 이용하여 먼저 호출함.
		cout << "Rectangle 생성자 \n";
	}
	~Rectangle() {
		cout << "Rectangle 소멸자 \n";
	}
	void print() {	//Shape class의 print를 overriding
		Shape::print();	//Shape 클래스의 print 호출
		cout << "Rectangle : " << width << ", " << height << endl;
	}
};
void main() {
	Rectangle r(10, 10, 100, 100);

	r.print();
	r.Shape::print(); //재정의된 부모 클래스의 print함수 호출
}

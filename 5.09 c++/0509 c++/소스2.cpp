#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "Shape draw\n";
	}
	void test(Shape *s[]) {
		for (int i = 0; i < 3; i++)
			s[i]->draw();
	}
};
class Rectangle : public Shape {
public :
	virtual void draw() {
		cout << "Rectangle draw\n";
	}
};

class Circle : public Shape {
public :
	virtual void draw() {
		cout << "Circle draw\n";
	}
};
class Triangle : public Shape {
public :
	virtual void draw() {
		cout << "Triangle draw\n";
	}
};

void main() {
	Shape *array[4];	//객체 포인터 배열(반드시 포인터 배열)
	
	array[0] = new Rectangle();
	array[1] = new Triangle();
	array[2] = new Circle();
	
	for (int i = 0; i < 3; i++)
		array[i]->draw();
	Shape shape;
	shape.test(array);
}

/*
부모 클래스의 객체 포인터 배열에 자식 클래스의 객체들을 저장
부모 클래스 객체 포인터는 자식 객체를 참조할 수 있기 때문에 가능
이 경우에도 실제 참조하는 객체의 가상함수 호출
파생 객체들의 배열을 따로 만들 필요 없이 기반 클래스의 포인터 배열에
파생 객체들을 저장하여 다형성을 구현
*/
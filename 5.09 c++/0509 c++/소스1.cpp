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
		/*�θ� Ŭ������ ��ü �����ʹ� �ڽ�Ŭ���� ��ü�� ������ �� �ִ�.
		  ���� ����ȯ(up-casting)
		*/
		ps->setOrigin(10, 10);
		ps->draw();
		((Rectangle *)ps)->setWidth(100);
		//��������ȯ(down-casting)�� ���� �ڽ�Ŭ������ �߰��� �Լ� ȣ�� ����

		Circle c;
		ps = &c;
		ps->draw();
		((Circle *)ps)->setRadius(5);

}


	/*
	�θ� Ŭ������ ��ü �����͸� ����Ͽ� �����Լ��� ȣ���ϸ�
	���� �����ϴ� ��ü�� overriding�� �Լ��� ȣ���Ѵ�

	�����Լ��� ��ü �����͸� ���ؼ��� �����ȴ�
	�Ϲ� ��ü�����δ� �������� �ʴ´�
	Rectangle r;
	Shape s = r;
	s.draw()
	*/
#include <iostream>
using namespace std;

class Shape {
	int x, y;
public:
	Shape() :

	{
		cout << "Shape(x, y) ������ \n";
	}
	~Shape() {
		cout << "Shape �Ҹ���\n";
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
		// child class�� �����ڴ� parent class�� �����ڸ� : �ʱ�ȭ�� �̿��Ͽ� ���� ȣ����.
		cout << "Rectangle ������ \n";
	}
	~Rectangle() {
		cout << "Rectangle �Ҹ��� \n";
	}
	void print() {	//Shape class�� print�� overriding
		Shape::print();	//Shape Ŭ������ print ȣ��
		cout << "Rectangle : " << width << ", " << height << endl;
	}
};
void main() {
	Rectangle r(10, 10, 100, 100);

	r.print();
	r.Shape::print(); //�����ǵ� �θ� Ŭ������ print�Լ� ȣ��
}

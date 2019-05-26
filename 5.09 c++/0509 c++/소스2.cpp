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
	Shape *array[4];	//��ü ������ �迭(�ݵ�� ������ �迭)
	
	array[0] = new Rectangle();
	array[1] = new Triangle();
	array[2] = new Circle();
	
	for (int i = 0; i < 3; i++)
		array[i]->draw();
	Shape shape;
	shape.test(array);
}

/*
�θ� Ŭ������ ��ü ������ �迭�� �ڽ� Ŭ������ ��ü���� ����
�θ� Ŭ���� ��ü �����ʹ� �ڽ� ��ü�� ������ �� �ֱ� ������ ����
�� ��쿡�� ���� �����ϴ� ��ü�� �����Լ� ȣ��
�Ļ� ��ü���� �迭�� ���� ���� �ʿ� ���� ��� Ŭ������ ������ �迭��
�Ļ� ��ü���� �����Ͽ� �������� ����
*/
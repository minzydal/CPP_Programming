#include <iostream>
using namespace std;

class Shape {
	int x, y;
public :
	void setOrigin(int ax, int ay) {
		x = ax;
		y = ay;
	}
	void draw() {
		cout << "Shape draw \n";
	}
	void print() {
		cout << "Shape : " << x << ", " << y << endl;
	}
};
class Rectangle : public Shape {
	int width, height;
public:
	void setWidth(int w) {
		width = w;
	}
	void draw() {
		cout << "Rectangle draw\n";
	}
	void print() {
		Shape::print();
		cout << "Rectangle : " << width << ", " << height << endl;
	}
};
void main() {
	Shape *ps = new Rectangle();	
	/*
	�θ� Ŭ������ ��ü ������ ps�� �ڽ� Ŭ���� ��ü�� ������ �� �ִ�.
	(���� ����ȯ : up casting)
	ȣ���� �� �ִ� �Լ��� �θ� Ŭ������ ���ǵ� �Լ���� ���ѵȴ�.
	�θ� Ŭ������ draw() ȣ��
	�ڽ� Ŭ���� ������� ������ �� �ִ�.	
	*/
	ps->setOrigin(10, 10);
	ps->draw();
	//ps->setWidth(100);

	((Rectangle *)ps)->setWidth(100);
	((Rectangle *)ps)->print();
	((Rectangle *)ps)->draw();
	/*
	��ü ������ ps�� �ڽ�Ŭ���� �����ͷ� ���� ����ȯ(down casting)�� �� �ִ�.
	�׷��� ps�� ���� �ڽ� Ŭ������ ����� ������ �� �ִ�.
	*/

	Rectangle *pr = (Rectangle *)ps;	// Rectangle ��ü ������ pr�� ps�� ���⺯ȯ�Ͽ� ����.
	pr->setWidth(200);
	//pr = ps; // ���� �������� �ʴ´�(�ڽ� ��ü �����ʹ� �θ� ��ü ���� �Ұ���)

	Rectangle r;
	r.setOrigin(10, 10);
	r.draw();
	ps = &r;	// �θ� Ŭ������ ��ü ������ ps�� �ڽ� Ŭ���� c ���� ����
	((Rectangle *)ps)->setWidth(5);
	((Rectangle *)ps)->print();
	((Rectangle *)ps)->draw();
}
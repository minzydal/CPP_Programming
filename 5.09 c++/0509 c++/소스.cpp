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
	부모 클래스의 객체 포인터 ps는 자식 클래스 객체를 참조할 수 있다.
	(상향 형변환 : up casting)
	호출할 수 있는 함수는 부모 클래스에 정의된 함수들로 제한된다.
	부모 클래스의 draw() 호출
	자식 클래스 멤버에는 접근할 수 있다.	
	*/
	ps->setOrigin(10, 10);
	ps->draw();
	//ps->setWidth(100);

	((Rectangle *)ps)->setWidth(100);
	((Rectangle *)ps)->print();
	((Rectangle *)ps)->draw();
	/*
	객체 포인터 ps를 자식클래스 포인터로 하향 형변환(down casting)할 수 있다.
	그러면 ps를 통해 자식 클래스의 멤버에 접근할 수 있다.
	*/

	Rectangle *pr = (Rectangle *)ps;	// Rectangle 객체 포인터 pr에 ps를 하향변환하여 대입.
	pr->setWidth(200);
	//pr = ps; // 역은 성립하지 않는다(자식 객체 포인터는 부모 객체 참조 불가능)

	Rectangle r;
	r.setOrigin(10, 10);
	r.draw();
	ps = &r;	// 부모 클래스의 객체 포인터 ps가 자식 클래스 c 참조 가능
	((Rectangle *)ps)->setWidth(5);
	((Rectangle *)ps)->print();
	((Rectangle *)ps)->draw();
}
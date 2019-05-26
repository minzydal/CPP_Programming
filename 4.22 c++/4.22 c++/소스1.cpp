// 멤버변수중에 객체 변수가 이쓴 경우

#include <iostream>
using namespace std;

class Point {
	int x, y;
public :
	Point(int ax, int ay) : x(ax), y(ay) {
		cout << "Point 생성자\n";
	}
};
class Rectangle {
	Point p1, p2;
public:
	Rectangle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2) {
	// p1(x1, y1);		//생성자 함수는 명시적으로 호출할 수 없다
	// p2(x2, y2);
		cout << "Rectangle 생성자 \n";
	}
};
void main() {
	Rectangle r(1, 2, 3, 4);
}

/*
멤버중에 객체가 포함되어 있다면 포함된 객체가 먼저 생성되어야 한다
Rectangle 객체보다 Point객체 p1, p2가 먼저 생성되어야 한다.
point의 생성자를 명시적으로 호출할 수 없기 때문에 콜론 초기화를 이용해서
point객체 p1과 p2를 먼저 생성한다
*/
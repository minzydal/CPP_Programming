/*
class Point{}
*/

#include <iostream>
using namespace std;

class Point {
private : // 멤버 변수는 private 으로 설정
	int x, y; 
public : // 멤버 변수는 public 으로 설정
	void setX(int ax) { //setter 함수
		x = ax;
	}
	int getX() { //getter 함수
		return x;
	}
	void setY(int ay) {
		y = ay;
	}
	int getY() {
		return y;
	}
};	//클래스 정의 뒤에는 반드시 :

void main() {
	Point p1, p2; // Point 클래스의 객체 p1, p2 생성
	
	//p1.x - 200;
	p1.getX = 200;
	p1.setX(10);
	p1.setY(20);
	p2.setX(100);
	p2.setY(200);

	cout << p1.getX() << ", " << p1.getY() << endl;
	cout << p2.getX() << ", " << p2.getY() << endl;

}
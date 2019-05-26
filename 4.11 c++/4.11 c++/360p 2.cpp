/*
class Point{}
*/

#include <iostream>
using namespace std;

class Point {
private : // ��� ������ private ���� ����
	int x, y; 
public : // ��� ������ public ���� ����
	void setX(int ax) { //setter �Լ�
		x = ax;
	}
	int getX() { //getter �Լ�
		return x;
	}
	void setY(int ay) {
		y = ay;
	}
	int getY() {
		return y;
	}
};	//Ŭ���� ���� �ڿ��� �ݵ�� :

void main() {
	Point p1, p2; // Point Ŭ������ ��ü p1, p2 ����
	
	//p1.x - 200;
	p1.getX = 200;
	p1.setX(10);
	p1.setY(20);
	p2.setX(100);
	p2.setY(200);

	cout << p1.getX() << ", " << p1.getY() << endl;
	cout << p2.getX() << ", " << p2.getY() << endl;

}
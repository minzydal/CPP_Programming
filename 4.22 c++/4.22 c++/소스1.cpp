// ��������߿� ��ü ������ �̾� ���

#include <iostream>
using namespace std;

class Point {
	int x, y;
public :
	Point(int ax, int ay) : x(ax), y(ay) {
		cout << "Point ������\n";
	}
};
class Rectangle {
	Point p1, p2;
public:
	Rectangle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2) {
	// p1(x1, y1);		//������ �Լ��� ��������� ȣ���� �� ����
	// p2(x2, y2);
		cout << "Rectangle ������ \n";
	}
};
void main() {
	Rectangle r(1, 2, 3, 4);
}

/*
����߿� ��ü�� ���ԵǾ� �ִٸ� ���Ե� ��ü�� ���� �����Ǿ�� �Ѵ�
Rectangle ��ü���� Point��ü p1, p2�� ���� �����Ǿ�� �Ѵ�.
point�� �����ڸ� ��������� ȣ���� �� ���� ������ �ݷ� �ʱ�ȭ�� �̿��ؼ�
point��ü p1�� p2�� ���� �����Ѵ�
*/
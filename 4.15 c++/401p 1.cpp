/*
�簢���� ��Ÿ���� rectangle �̶�� �̸� �ηO�� Ŭ���� �����
�簢���� ���θ� ��Ÿ���� width�� length�� �������
�簢���� ���̸� ����ؼ� ��ȯ�ϴ� calcArea() ����Լ�
UML�� �׸��� ������, ������ �߰��Ͽ� ����
*/
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Rectangle {
	int width;
	int length;
public:
	void setWidth(int w) { // setter�Լ�
		width = w;
	}
	int getWidth() { // getter�Լ�
		return width;
	}
	void setLength(int l) {
		length = l;
	}
	int getLength() {
		return length;
	}
	int calcArea() {
		return width * length;
	}
};

void main() {
	Rectangle r1;
	cout << sizeof(r1) << endl;
	r1.setWidth(10);
	r1.setLength(20);
	cout << r1.getWidth() << endl;
	cout << r1.getLength() << endl;
	cout << r1.calcArea() << endl;

}
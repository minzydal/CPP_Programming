/*
��ü�� �Լ� ����
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public :
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
	}
	void display() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
	void swap(Car obj){		//�Լ��� ��ü ������ �⺻������ call by value
		//void swap(Car &obj) �Ű������� �Ѿ�� ���� �ٲٰ� ������ call by reference�� �����ϱ� 
		Car temp;

		temp = *this;
		*this = obj;	//obj call by value�� ���޹���
		obj = temp;
		}

};
void main() {
	Car mine(0, 1, "white");
	Car yours(100, 5, "red");
	mine.display(); // mine�� ������
	yours.display();

	mine.swap(yours);	// ȣ�ⰴü�� ���� �������� �Ű����� ��ü�� ������ �ʴ´�.
	mine.display();
	yours.display();
}

/*
1. �����͸� ����ϴ� ���

void swap(Car * obj) {	//call by address
	Car temp;

	temp = *this;
	*this = *obj;
	*obj = temp;
}

2. ���۷����� ����ϴ� ���

void swap(Car &obj) {
	Car temp;

	temp = *this;
	*this = *obj;
	*obj = temp;
}
*/

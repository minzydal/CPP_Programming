#include <iostream>
#include <string>
using namespace std;

class Car {
public :
	int speed, gear;
	string color;

	void setGear(int g) {
		gear = g;
	}
	void speedUp(int inc) {
		speed += inc;
	}
	void speedDown(int dec) {
		speed -= dec;
	}
};
class SportsCar : public Car {
	bool turbo;
public :
	void setTurbo(bool t) {	// �ͺ� ��� ���� ��� �Լ�
		turbo = t;
	}
};
void main() {	//sportsCar Ŭ���� ��ü c��
				//Car Ŭ������ ��� public ����� ����� �� �ִ�.

	SportsCar c;
	c.color = "red";	// �θ� Ŭ���� ��� ���� ����
	c.setGear(3);		// �θ� Ŭ���� ��� �Լ� ȣ��
	c.speedUp(100);		// �θ� Ŭ���� ��� �Լ� ȣ��
	c.speedDown(30);	// �θ� Ŭ���� ��� �Լ� ȣ��
	c.setTurbo(true);	//�翬�� �ڽ��� �߰��� �Լ��� ���

}
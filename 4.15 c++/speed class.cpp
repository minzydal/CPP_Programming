#include <iostream>
#include <string>

using namespace std;

class Car {
public : 
	int speed; //���� ����, default�� private
	int gear; //��� ����
	string color;

	void speedUp() { //����Լ�
		speed += 10;
}
	void speedDown() {
		speed -= 10;
	}	//Ŭ���� ���� ���� ; �ݵ�� �ʿ�
};
void main() {
	Car myCar, yourCar;

	myCar.speed = 100; //Ŭ������ ����ڰ� ������ ���ο� Ÿ��
	yourCar.speed = 60; //Ŭ�����κ��� ��ü�� �����ؼ� ���
	myCar.color = "white";

	yourCar.speedUp();
	cout << myCar.speed << endl;
	cout << yourCar.speed << endl;
}
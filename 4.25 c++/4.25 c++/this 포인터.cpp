/*
this ������
����Լ� ȣ�� �� ȣ�� ��ü�� ���������� �����ϰ� �Լ��� this �����ͷ� ����
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public :
	Car(int speed = 0, int gear = 1, string color = "whilte") {	// Car *this ������ ����
		this->speed = speed;	// this->speed : ��� ����, speed : �Ű�����
		this->gear = gear;
		this->color = color;
	}
	void display();
};
void Car::display() {
	cout << "Speed : " << this->speed << ", Gear : " <<
		this->gear << ", Color : " << this->color << endl;
}
void maion() {
	Car myCar;
	myCar.display();
	cout << sizeof(myCar) << endl;

	Car *pCar = &myCar;
	pCar->display();
	cout << sizeof << endl;
	cout << sizeof << endl;

	pCar = new Car(0, 1, "blue");
	pCar->display();

	delete pCar;
}
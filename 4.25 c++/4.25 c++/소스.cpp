#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public :
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
	}					//default �Ű�����, �ݷ� �ʱ�ȭ ���
	void display();
};
void Car::display() {
	cout << "Speed : " << speed << ", Gear : " << gear << ", Color : " << color << endl;
}
void main() { 
	Car myCar;
	myCar.display();	//�Ϲ� ��ü�� ��� ������ . ������ ���
	cout << sizeof(myCar) << endl;

	Car *pCar = &myCar; //��ü �����Ͱ� �Ϲ� ��ü ����
	pCar->display();	//��ü �����ʹ� ->�����ڷ� ��� ȣ��
	cout << sizeof(pCar) << endl;

	pCar = new Car(100, 3, "blue");	//��ü �����Ͱ� ���������� ��ü ����
	pCar->display();

	delete pCar;

}
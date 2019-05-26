//static �Լ�

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear, id;	//id�� ��ü���� ������ȣ�� �ַ��� �Ѵ�.
	string color;
	static int numCars;	
public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
		id = ++numCars;
	}
	void display() {
		cout << speed << ", " << gear << ", " << color << ", " << id << endl;
		cout << numCars << endl;	//�Ϲ� ����Լ��� static������ �Լ� ȣ�� ���� 
		cout << getNumCars() << endl;
	}
	static int getNumCars() {
		/*
		display();	// static �Լ��� non-static �Լ� ȣ�� �Ұ�
		speed = 100;	//static �Լ��� non-static ���� ��� �Ұ�
		*/
		return numCars;
	}
	~Car() {
		numCars--;
		cout << "�Ҹ���" << this->color << ", " << numCars << endl;
	}
};
int Car::numCars = 0;	//static ������ �ݵ�� Ŭ���� �ܺο��� �ʱ�ȭ

void main() {
	cout << Car::getNumCars << endl;
	//static �Լ��� ��ü�� �����ϰ� ��� ����(Ŭ���� �̸����� ȣ��)
	Car myCar;
	cout << Car::getNumCars << endl;
	cout << myCar.getNumCars << endl;
	//static �Լ��� ��ü �̸����� ȣ�� ����(������� ����)
	myCar.display();

	Car yourCar;
	cout << Car::getNumCars << endl;
	yourCar.display();
}

/*
static �Լ��� static �Լ��� �������� ���� ����(��� ������ �Լ��� ��ü�� �����Ǿ�� �����ϱ� ����)
static �Լ��� this ��� �Ұ�(��ü ������ �����ϱ� ����)
�׷��� �Ϲ� ����Լ��� static ������ �Լ��� ���� ����
*/
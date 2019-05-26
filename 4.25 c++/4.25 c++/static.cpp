/*
��� ��ü(instance)�� �ڱ⸸�� ��������� ���´�(instance ����)
static ������ ��� ��ü�� �����ϴ� ����(Ŭ���� ����)
�Ϲ� ��� ������ ��ü�� �����Ǿ�� ������
static ������ �Լ��� ��ü ���� ������ ������(�߿��� ����)
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear, id;	//id�� ��ü���� ������ȣ�� �ַ��� �Ѵ�.
	string color;
public:
	static int numCars;	//private���� ��������� ������ ���� public ����
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
		id = ++numCars;
	}
	void display() {
		cout << speed << ", " << gear << ", " << color << ", " << id << endl;
	}
};
int Car::numCars = 0;	//static ������ �ݵ�� Ŭ���� �ܺο��� �ʱ�ȭ

void main(){
	cout << Car::numCars << endl;
	//static ������ �Լ��� ��ü�� �����ϰ� ��� ����(Ŭ���� �̸����� ȣ��)
	Car myCar;
	cout << Car::numCars << endl;
	cout << myCar.numCars << endl;
	//static ������ �Լ��� ��ü�� �����Ǹ� ��ü �̸����ε� ȣ�� ����(������� ����)
	myCar.display();

	Car yourCar;
	cout << Car::numCars << endl;
	yourCar.display();
}
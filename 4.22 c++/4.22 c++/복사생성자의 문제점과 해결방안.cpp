/*
����Ʈ ����������� �������� �ذ���
���� ���α׷��� ��Ÿ�� ������ �߻��Ѵ�.������?
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
	char *color;	//color�� character pointer�� ����
public:
	Car(const char *c) {
		cout << "������ ȣ��\n";
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	void setColor(Car obj) {
		delete[] color;
		color = new char[strlen(obj.color) + 1];
		strcpy(color, obj.color);
	}
	~Car() {
		cout << "�Ҹ��� ȣ��\n";
		delete[] color;
	}
	Car getCar() {
		Car newCar("blue");
		return newCar;
	}
	Car(const Car &obj)
	{
		cout << "��������� ȣ��\n";
		color = new char[strlen(obj.color) + 1];
		strcpy(color, obj.color);
	}
};

void main() {
	Car c1("yellow");
	Car c2("black");
	Car c3(c1);	// c2=c1�� ����.	1) ���� ��ü�� ������ ���ο� ��ü�� �����ϴ� ���

	c1.setColor(c2);	//			2) �Լ��� ��ü�� �����ϴ� ���

	Car myCar = c1.getCar();	//	3) �Լ����� ��ü�� �����ϴ� ���
}								//	run time eroor �߻�

/*
�Ű������� ���������� ���Ƽ�
c-> "yellow"
color�� �����ϴ� �� ������ �Ҹ��� �ȴ�
�׷��� run time error�� �߻��ϰ� �ȴ�.
*/
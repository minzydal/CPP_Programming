/*
���� ������(copy constructor)
�̹� ������ ��ü�� ��������� ������ ��ü ���� �� �ڵ� ȣ��
�����Ϸ��� ���� �����ڰ� ������ default ���� ������ ����
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public:
	Car(int s, int g, string c) : speed(s), gear(g), color(c) {
		cout << "������ ȣ��\n";
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
	~Car() {
		cout << "�Ҹ��� ȣ��\n";
	}
	Car(const Car &obj) {	// �Ű����� ���Ŀ� ����(&���)
		cout << "���� ������ ȣ��\n";
		speed = obj.speed;
		gear = obj.gear;
		color = obj.color;
	}
};
void main() {
	Car c1(0, 1, "yellow");
	Car c2{ c1 };	// c2 = c1, c2(c1)�� ����, ���� ������ ȣ��

	c1.print();
	c2.print();
}
/*
��ü�� 2�� ���������� ������ ȣ���� 1��, �Ҹ��� ȣ���� 2��
c2��ü ������ ���� �����ڸ� ȣ���ϱ� �����̴�
�����Ϸ��� �����ϴ� ����Ʈ ���� ������ ���
����Ʈ ���� �����ڴ� ��� �� ����� �����ϴ� ���� ����(shallow copy)��� 
*/
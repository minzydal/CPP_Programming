
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed = 0, gear = 0; //��� ������ �ʱⰪ ���� ����
	string color;
public:
	Car(int s, int g, string c) {	//�Ű����� �ִ� ������
		cout << "�Ű����� �ִ� ������ ȣ�� \n";
		speed = s;
		gear = g;
		color = c;
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car car1(100, 5, "blue");	// ��ü�� �����ϸ� �ڵ����� ������ ȣ��
	car1.print();

	Car car2 = Car(10, 2, "red");	// C ��Ÿ�� ������ ȣ��(������� �ʴ´�)
	car2.print();

	Car car3;	// �Ű����� �ִ� �����ڸ� �ۼ��ϸ� �����Ϸ��� default �����ڸ� �������� �ʴ´�
}
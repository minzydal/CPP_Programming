
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear; 
	string color;
public:
	Car() {
		cout << "����Ʈ ������ ȣ��\n";
		speed = 0;
		gear = 1;
		color = "white";
	}
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
	Car car1;	//����Ʈ ������ ȣ��, car1(), �ƴ�
	Car car2(10, 2, "red");	//�Ű����� �ִ� ������ ȣ��
	Car car3{20, 3, "white"};	//uniform initializer
	Car car4{ 30, 4, "blue" };
	car1.print();
	car2.print();
}
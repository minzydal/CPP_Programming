/*
colon �ʱ�ȭ(number initializer), �ʱ�ȭ ����Ʈ
�Ϲ� ��������� �ʱ�ȭ

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed,gear;
	string color;
	public :
	Car(int s, int g, string c) : speed(s), gear(g), color(c){ //�ݷ� �ʱ�ȭ
		speed = s;
		gear = g;
		color = c;
		cout << "������ ȣ��\n";
	}
	void print(){
	cout << speed << ", " << gear << ", " << color << ", " << MAX_SPEED << endl;
	}
	};
	void main(){
		Car car(100, 5, "blue");
		car.print();
}
*/
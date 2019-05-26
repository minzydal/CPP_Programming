/*
�޸� �����Ҵ��� ��� �Ҹ����� ����
run time error�� �߻��Ѵ�. ������?
�ſ� �߿�
*/

#include <iostream>
#include <string>
using namespace std;

class Car{
	int speed, gear;
	char *color;
public:
	Car(int s, int g, const char *c) {		//c�� �Ű�����, ���� �Լ� ���� �� �Ҹ��
		cout << "������ ȣ��\n";
		speed = s;
		gear = g;
		//color = c;					//shallow copy�� ��� �ּ� ����
		color = new char[strlen(c) + 1];//�޸� ���� �Ҵ�
		strcpy(color, c);
		printf("%s %s\n", c, color);
		printf("%p %p\n", c, color);	// �ּҰ� ����
	}
	~Car() {
		cout << "�Ҹ��� ȣ��\n";
		delete[] color;		//���� �Ҵ� �޸� �ݳ�
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car car(100, 5, "black");
	car.print();	//���α׷� ���� �� �ڵ����� �Ҹ��� ȣ��
	cout << sizeof(car) << endl;
}


/*
���� ����(shalllow copy), ���� ����(deep copy)
color = new char[strlen(c) + 1]; //�޸� ���� �Ҵ�
strcpy(color, c);
*/
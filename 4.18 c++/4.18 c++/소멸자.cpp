/*
destructor �Լ�
Ŭ���� �̸� �տ� ~�� ����
�����ڿ� ���������� ��ȯ�� ����
�Ű������� ���� ������ �ߺ� ������ �� ����
��ü �Ҹ� �� �ڵ����� ȣ��
�ַ� �Ҵ�� �ڿ�(�޸�, ���� ��)�� �ݳ��ϴ� �뵵�� ���
*/
#include <iostream>
#include <string>
using namespace std;

class Car{
	int speed, gear;
	string color;
public :
	Car(int s, int g, string c) {
		cout << "������ ȣ��\n";
		speed = s;
		gear = g;
		color = c;
	}
	~Car() {
		cout << "�Ҹ��� ȣ��\n";
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car car(100, 5, "blue");
	car.print();	//���α׷� ���� �� �ڵ����� �Ҹ��� ȣ�� 
}
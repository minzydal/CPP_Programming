/*
������ �Լ�
Ŭ���� �̸��� ����
���ϰ��� ����
�ݵ�� public�̾����
�����ڵ� �Լ��̱� ������ �ߺ� ���� ����
��ü ������ �ڵ����� ȣ��
�ַ� ������� ������ �ʱ�ȭ�ϴµ� ���
default �����ڰ� ������ �����Ϸ��� default ������ ����
car(){}
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed = 0, gear = 0; //��� ������ �ʱⰪ ���� ����
	string color = "blue";
public :
	Car() {
		cout << "default constructor(����Ʈ ������) ȣ�� \n";
		speed = 0;
		gear = 1;
		color = "white";
	}
	void print() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car car; //��ü�� �����ϸ� �ڵ����� ������ ȣ��
			//default ������ ȣ�� �� car()�ƴ�. ����
			//��ȣ ���� �ȵ�
	car.print();
}
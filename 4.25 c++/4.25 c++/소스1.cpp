
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear, id;	//id�� ��ü���� ������ȣ�� �ַ��� �Ѵ�.
	string color;
public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {
		cout << "������ ȣ��\n";
	}
	void display() {
		cout << speed << ", " << gear << ", " << color << endl;
	}
};
void main() {
	Car objArray[3] = {
		Car(0, 1, "white"),// ��ü �迭 �ʱ�ȭ�� ������ ȣ��
		Car(0, 1, "red"),
		Car(0, 1, "blue")
	};
	cout << sizeof(objArray) << ", " << sizeof(objArray[0]) << endl;
	printf("%d %d\n", objArray, &objArray[0]);	//��ü �迭�� �迭 �̸��� �迭�� ���� �ּ�
	printf("%d %d\n", &objArray[1], &objArray[2]);
	for (int i = 0; i < 3; i++) {
		objArray[i].display();
		(objArray + i)->display();	//�迭 �̸��� �迭�� ���� �ּ�, ���� ������ó�� ��� ���� 
	}

	Car *p = objArray;	//��ü ������ p�� �迭 ����
	for (int i = 0; i < 3; i++) {
		p->display();
		p++;
	}
	// for �ݺ����� ����Ǹ� p�� �迭�� ���� ����. �ݵ�� �迭�� ó������ �̵�
	p = objArray;
	for (int i = 0; i < 3; i++)
		(p + i)->display();

	Car car[3];	//��ü �迭�� ���� �ϸ� �ڵ����� default ������ ȣ��
}

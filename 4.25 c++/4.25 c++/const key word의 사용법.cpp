/*
const key word 
*/
#include <iostream>
using namespace std;

class ConstTest {
	const int MAXSPEED = 100;	//��� ��� ����
	int speed;
public :
	ConstTest(int s, int m) : MAXSPEED(m) {	// : �ʱ�ȭ ���
		speed = s;
	}
	void print() const {	//const �Լ� ����(�Լ����� ��� ���� ���� �Ұ�)
		cout << speed << ", " << MAXSPEED << endl;
		/*
		speed = 20;
		setSpeed(100);		// const �Լ��� const�� �ƴ� �Լ� ȣ�� �Ұ�. why?
		*/
	}
	void setSpeed(int s) {
		speed = s;
	}
	int getSpeed() {
		return speed;
	}
};
void main() {
	ConstTest obj1(10, 100);
	obj1.print();
	cout << obj1.getSpeed() << endl;

	const ConstTest obj2(20, 200);	//const ��ü ����(��� ���� ���� �Ұ�)
	obj2.print();
	/*
	obj2.setSpeed(30);	// const��ü�� const�� �ƴ� ��� �Լ� ȣ�� �Ұ�
	*/
	cout << obj2.getSpeed() << endl;	// const ��ü�� getSpeed() �Լ��� ȣ���Ϸ���?
}
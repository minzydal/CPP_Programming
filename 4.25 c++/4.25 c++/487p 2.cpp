/*
MyMath Ŭ������ PI��� �̸����� ���������� �����ϰ� 3.141592�� �ʱ�ȭ
�� PI���� ��ȯ�ϴ� getPI()��� �̸��� ���� �޼ҵ嵵 �ۼ��ϱ�
*/

#include <iostream>
using namespace std;

class MyMath {
	static const double PI;
	static const int MAXSPEED;
public:
	static double getPI() {
		return PI;
	}
	static int getMax() {
		return MAXSPEED;
	}
};
const double MyMath::PI = 3.141592;
const int MyMath::MAXSPEED = 300;

void main() {
	cout << MyMath::getPI() << endl;
	printf("%d\n", MyMath::getMax());
}
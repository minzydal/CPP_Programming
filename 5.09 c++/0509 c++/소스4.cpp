/*
���� �����Լ��θ� ������ Ŭ������interface��� �Ѵ�
�ݵ�� �����ؾ� �Ǵ� �Լ����� ��� interface�� �ۼ�
interface�� ��ӹ��� Ŭ������ ��� ���������Լ��� �����ؾ��Ѵ�.
*/

#include <iostream>
using namespace std;

class RemoteControl {
	virtual void turnOn() = 0;
	virtual void turnOff() = 0;
};
class TV : public RemoteControl {
public:
	virtual void turnOn() {
		cout << "TV turn on\n";
	}
	virtual void turnOff() {
		cout << "TV turn off\n";
	}
};
void main() {
	TV tv;

	tv.turnOn();
	tv.turnOff();
}
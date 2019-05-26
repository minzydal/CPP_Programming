/*
순수 가상함수로만 구성된 클래스를interface라고 한다
반드시 구현해야 되는 함수들을 모아 interface로 작성
interface를 상속받은 클래스는 모든 순수가상함수를 구현해야한다.
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
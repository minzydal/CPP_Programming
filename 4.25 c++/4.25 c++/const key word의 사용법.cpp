/*
const key word 
*/
#include <iostream>
using namespace std;

class ConstTest {
	const int MAXSPEED = 100;	//상수 멤버 선언
	int speed;
public :
	ConstTest(int s, int m) : MAXSPEED(m) {	// : 초기화 사용
		speed = s;
	}
	void print() const {	//const 함수 선언(함수에서 멤버 변수 변경 불가)
		cout << speed << ", " << MAXSPEED << endl;
		/*
		speed = 20;
		setSpeed(100);		// const 함수는 const가 아닌 함수 호출 불가. why?
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

	const ConstTest obj2(20, 200);	//const 객체 선언(멤버 변수 변경 불가)
	obj2.print();
	/*
	obj2.setSpeed(30);	// const객체는 const가 아닌 멤버 함수 호출 불가
	*/
	cout << obj2.getSpeed() << endl;	// const 객체가 getSpeed() 함수를 호출하려면?
}
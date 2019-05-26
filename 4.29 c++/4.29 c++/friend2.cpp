/*
클래스 전체를 friend로 지정하는 경우
friend로 지정된 클래스의 모든 멤버함수에서 접근할 수 있다
*/

#include <iostream>
using namespace std;

class Employee {
	int salary;
	friend class Manager;	// Manager 클래스의 모든 멤버함수에서
							// Employee 클래스의 모든 멤버에 접근 가능

public:
	Employee() : salary(1000) {
	}
	void print() {
		cout << salary << endl;
	}
};
class Manager {
public:
	void raiseSalary(Employee &e, int amount) {	// & 없는 경우?
		e.salary += amount;
	}
	void print(Employee &e) {
		e.print();
	}
};
void main() {
	Employee e;
	Manager m;
	m.raiseSalary(e, 100);
	m.print(e);

}
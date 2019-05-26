#include <iostream>
#include <string>
using namespace std;

class Employee {
	int id;
protected :
	int salary;
public :
	string name;
	void setSalary(int s) {
		salary = s;
	}
	int getSalary() {
		return salary;
	}
};
class Manager : public Employee {
	int bonus;
public :
	Manager(int b = 0) : bonus(b) {
	}
	void modify(int s, int b) {
	// id = 100;		// 부모 클래스의 private 멤버 접근 불가
		salary = s;		// protected 멤버 접근 가능
		bonus = b;		// public 멤버 접근 가능
	}
	void display() {
		cout << salary << "," << bonus << endl;
		// cout << id << endl;	//부모 클래스의 private 멤버에는 직접 점근할 수 없다
	}							//getter, setter 함수를 사용하여 접근한다.
};

void main() {
	Manager m;

	m.setSalary(2000);
	m.display();
	m.modify(1000, 500);
	m.display();
	cout << m.getSalary() << endl;
	cout << m.name() << endl;
	// cout << m.salary <<endl;
}
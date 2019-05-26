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
	// id = 100;		// �θ� Ŭ������ private ��� ���� �Ұ�
		salary = s;		// protected ��� ���� ����
		bonus = b;		// public ��� ���� ����
	}
	void display() {
		cout << salary << "," << bonus << endl;
		// cout << id << endl;	//�θ� Ŭ������ private ������� ���� ������ �� ����
	}							//getter, setter �Լ��� ����Ͽ� �����Ѵ�.
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
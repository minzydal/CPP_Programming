/*
Ŭ���� ��ü�� friend�� �����ϴ� ���
friend�� ������ Ŭ������ ��� ����Լ����� ������ �� �ִ�
*/

#include <iostream>
using namespace std;

class Employee {
	int salary;
	friend class Manager;	// Manager Ŭ������ ��� ����Լ�����
							// Employee Ŭ������ ��� ����� ���� ����

public:
	Employee() : salary(1000) {
	}
	void print() {
		cout << salary << endl;
	}
};
class Manager {
public:
	void raiseSalary(Employee &e, int amount) {	// & ���� ���?
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
#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name; // �������� �������� ������ default�� private
	int salary, age; //private ����� �ܺο��� ������ �� ���� Ŭ���� ������ �Լ��鸸 ����� �� �ִ�.
public :
	void setAge(int a) {
		if (age < 0) {
			cout << "wrong input\n";
			age = 0;
		}
			age = a;
	}
	int getAge() {
		return age;
	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	void setSalary(int s) {
		salary = s;
	}
	int getSalary() {
		return salary;
	}
};
void main(){
	Employee e;
	// e.salary = 300;	//private member�� ������ �� ����.
	// e.age = 26;

	e.setName("Hong Gildong");
	e.setAge(20);
	string name = e.getName();
	int age = e.getAge();
	cout << name << ", " << age << endl;
}
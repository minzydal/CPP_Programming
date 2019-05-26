#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name; // 접근제어 지정하지 않으면 default로 private
	int salary, age; //private 멤버는 외부에서 접근할 수 없고 클래스 내부의 함수들만 사용할 수 있다.
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
	// e.salary = 300;	//private member에 접근할 수 없다.
	// e.age = 26;

	e.setName("Hong Gildong");
	e.setAge(20);
	string name = e.getName();
	int age = e.getAge();
	cout << name << ", " << age << endl;
}
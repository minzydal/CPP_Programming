#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	int salary, age;
public:	//클래스 내부에는 함수 원형, 클래스 밖에서 함수 정의
	void setAge(int);
	int getAge();
	void setName(string);
	string getName();
	void setSalary(int);
	int getSalary();
};
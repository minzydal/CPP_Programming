#include <iostream>
#include <string>
using namespace std;

class Employee {
	string name;
	int salary, age;
public:	//Ŭ���� ���ο��� �Լ� ����, Ŭ���� �ۿ��� �Լ� ����
	void setAge(int);
	int getAge();
	void setName(string);
	string getName();
	void setSalary(int);
	int getSalary();
};
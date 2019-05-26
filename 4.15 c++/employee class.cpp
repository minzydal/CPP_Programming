#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

void Employee::setAge(int a) {
	age = a;
}
int Employee::getAge() {
	return age;
}
void Employee::setName(string n) {
	name = n;
}
string Employee::getName() {
	return name;
}
void Employee::setSalary(int s) {
	salary = s;
}
int Employee::getSalary() {
	return salary;
}
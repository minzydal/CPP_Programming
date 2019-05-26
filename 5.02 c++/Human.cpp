#include <iostream>
#include <string>

using namespace std;

class Human {
	string name;
	int age;
public:
	Human(string n = " ", int a = 0) : name(n), age(a) {
		cout << "Human ������ \n";
	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	void setAge(int a) {
		age = a;
	}
	int getAge() {
		return age;
	}
	void print() {

	}
};

class Student : public Human {
	string major;
public:
	Student(string n = "", int a = 0, string m = "") : Human(n, a) {
		major = m;
		cout << "Student ������ \n";
	}
	void setMajor(string m) {
		major = m;
	}
	string getMajor() {
		return major;
	}
	void print() {
		Human::print();
		cout << major << endl;
	}
	~Student() {
		cout << "Student destructor\n";
	}
};

void main() {
	Human h1("����", 18);
	Human h2("����", 21);
	Human h3("���", 50);
	h1.print();
	h2.print();
	h3.print();

	Student s1("����", 21, "computer");
	Student s2("����", 22, "�濵");
	Student s3("����", 24, "����");
	s1.print();
	s2.print();
	s3.print();
}
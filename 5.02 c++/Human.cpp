#include <iostream>
#include <string>

using namespace std;

class Human {
	string name;
	int age;
public:
	Human(string n = " ", int a = 0) : name(n), age(a) {
		cout << "Human 생성자 \n";
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
		cout << "Student 생성자 \n";
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
	Human h1("춘향", 18);
	Human h2("몽룡", 21);
	Human h3("사또", 50);
	h1.print();
	h2.print();
	h3.print();

	Student s1("명진", 21, "computer");
	Student s2("미현", 22, "경영");
	Student s3("용준", 24, "전자");
	s1.print();
	s2.print();
	s3.print();
}
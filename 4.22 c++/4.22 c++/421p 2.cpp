#include <iostream>
using namespace std;

class MyClass {
	const int LIMIT = 1000;
public :
	MyClass(int lim) : LIMIT(lim) {
	//	LIMIT = lim;
		cout << "Constructor call\n";
	}
	void print() {
		cout << LIMIT << endl;
	}
	~MyClass() {
		cout << "Destructor call\n";
	}
};
void main(){
	MyClass obj1(10);
	MyClass obj2(1000);

	obj1.print();
	obj2.print();
}
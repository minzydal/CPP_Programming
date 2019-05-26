/*
#include <iostream>
#include <string>
using namespace std;

class Test {
	string s;
public:
	Test(string temp) {
		cout << "constructor call\n";
		s = temp;
	}
	void print() {
	
	}

};
*/

#include <iostream>
using namespace std;

class Test{
	int *ptr, size;
public:
	Test(int n){
	cout << "constructor call\n";
	size = n;
	ptr = new int[size];
	for (int i = 0; i< size; i++)
		ptr[i] = i;
	}
	Test(const Test &obj){
	cout << "copy constructor call\n";
	size = obj.size;
	// ptr = obj.ptr;
	ptr = new int[size];
	for(int i = 0; i < size; i++)
	ptr[i] = obj.ptr[i];
	}
	void print(){
		for (int i = 0; i < size; i++)
			cout << ptr[i] << endl;
	}
	~Test() {
		cout << "destructor call\n";
		delete[] ptr;
	}
};
int main() {
	Test t1(5);
	t1.print();
	Test t2(t1);
	t2.print();

	return 0;
}
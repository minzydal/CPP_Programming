#include <iostream>
using namespace std;

class MyArray {
	int *ptr;
	int size;
public :
	MyArray(int s = 5) : size(s) {
		ptr = new int[size];
		for (int i = 0; i < size; i++)
			ptr[i] = i;
	}
	~MyArray() {
		delete[] ptr;
	}
	int operator[](int index) {
		if (index < 0 || index >= size)
			throw "illegal index";
		return ptr[index];
	}
};
void main() {
	MyArray array(10);
	int pos;

	try {
		cout << "Enter array index : ";
		cin >> pos;
		cout << array[pos] << endl;
	}
	catch (const char *e) {
		cout << e << endl;
	}
	cout << "Exception handling\n";
}
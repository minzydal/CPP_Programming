#include <iostream>
#include <string>
using namespace std;

class NotFound {
	string exception;
public:
	NotFound(string e = "") : exception(e) {
	}
	string get_exception() {
		return exception;
	}
};
class SearchArray {
	int *ptr, size;
public:
	SearchArray(int a[], int s) {
		ptr = a;
		size = s;
	}
	int get_number(int num) {
		for (int i = 0; i < size; i++) {
			if (*ptr == num)
				return i;
			ptr++;
		}
		throw NotFound("not found");
	}
};
void main() {
	int array[] = { 1, 2, 3, 4, 5 };
	int index;
	SearchArray sa(array, 5);

	try {
		index = sa.get_number(4);
		cout << index << endl;
		index = sa.get_number(6);
		cout << index << endl;
	}
	catch (NotFound e) {
		cout << e.get_exception() << endl; 
	}
}
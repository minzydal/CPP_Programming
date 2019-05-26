
#include <iostream>
using namespace std;

class IndexOutException {
public:
	IndexOutException() {
		return "index out of bounds exception\n";
	}
};
void main() {
	int num[10];
	int pos;

	try {
		cout << "Enter array index : ";
		cin >> pos;
		if (pos < 0 || pos >= 10)
			throw IndexOutException();
		num[pos] = 100;
	}
	catch (IndexOutException e) {
		cout << e.getException() << endl;
	}
	cout << "Exception handling\n";
}
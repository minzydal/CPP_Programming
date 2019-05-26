// 배열 범위를 벗어나면 예외를 발생한다

#include <iostream>
using namespace std;

void main() {
	int num[10];
	int pos;

	try {
		cout << "Enter array index : ";
		cin >> pos;
		if (pos < 0 || pos > 9)
			throw "index out of bounds Exception\n";
		num[pos] = 100;
	} catch (const char *) {
		cout << s << endl;
	}
}


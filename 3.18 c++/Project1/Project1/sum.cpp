#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i, sum = 0;

	for (i = 1; i < 30; i++) {
		sum = pow(i, 2) + 1;
	}
	cout << "SUM�� " << sum << " �Դϴ�.\n" << endl;

	return 0;
}


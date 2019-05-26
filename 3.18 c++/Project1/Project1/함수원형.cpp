#include <iostream>
using namespace std;

int square(int); //함수 원형(function prototype)의 매개변수는 타입만 적어도 됨

int main() {
	int result;

	for (int i = 0; i < 5; i++) {
		result = square(i);
		cout << result << endl;
	}
	return 0;
}
int square(int n) {
	return n * n;
}
#include <iostream>
using namespace std;

int main() {

	int x, y, r;
	cout << "두 개의 정수를 입력하세요: ";
	cin >> x >> y;

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	cout << "최대공약수는 " << x << "입니다.\n";
}
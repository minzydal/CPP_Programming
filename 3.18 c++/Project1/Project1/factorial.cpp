/*팩토리얼
for문을 이용하여 factorial값을 출력하는 프로그램
while문
*/

#include <iostream>
using namespace std;

int main(void) {

	int fact = 1;
	int n;

	cout << "정수 입력 : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		fact *= i;
		cout << i << "!은 " << fact << "입니다.\n";
	}
}
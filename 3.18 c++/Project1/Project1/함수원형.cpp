#include <iostream>
using namespace std;

int square(int); //�Լ� ����(function prototype)�� �Ű������� Ÿ�Ը� ��� ��

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
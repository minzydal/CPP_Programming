#include <iostream>
using namespace std;

int main() {

	int x, y, r;
	cout << "�� ���� ������ �Է��ϼ���: ";
	cin >> x >> y;

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	cout << "�ִ������� " << x << "�Դϴ�.\n";
}
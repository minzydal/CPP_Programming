/*
�Ǻ���ġ ����
���� 2���� ���Ҹ� ���Ͽ� ���� ���Ҹ� ����� ����
ex ) 0, 1, 1, 2, 3, 5, 8
���, ���� �Է�
*/

#include <iostream>
using namespace std;

int main() {
	int num, fibo;
	int f0 = 0, f1 = 1;
	

	cout << "������ �Է��ϼ���: ";
	cin >> num;

	cout << f0 << endl << f1 << endl;

	for (int i = 0; i < num; i++) {
		fibo = f0 + f1;
		cout << fibo << endl;
		f0 = f1;
		f1 = fibo;
	}
}
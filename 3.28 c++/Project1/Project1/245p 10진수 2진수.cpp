/*
10���� �Է� -> 2������ ��� (�������� ���)
�迭 ���� : 32���� ��
*/
#include <iostream>
using namespace std;

int main() {
	int binary[32] = { 0 }; // ������ �迭 32��
	int num, digit = 0; // num = 10����

	cout << "10���� �Է� : ";
	cin >> num;
	while (num != 0) { //Ż�� ���� num = 0
			binary[digit] = num % 2;
			num /= 2;
			digit++;
		}
	for (int i = --digit; i >= 0; i--)
		cout << binary[i] << " ";
	cout << endl;

		return 0;
	}

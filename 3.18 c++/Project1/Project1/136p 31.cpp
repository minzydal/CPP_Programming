/*
���� �ٸ� n������ r���� ���Ͽ� �Ϸķ� �����ϴ� ����� �� permutation
������ ���ϴ� ���α׷�
n,r�� �Է¹���
*/
#include <iostream>
using namespace std;

int main() {

	int n, r; // �Է¹��� n�� r
	int perm = 1; //permutation

	cout << "Enter n, r : ";
	cin >> n >> r;

	for (int i = n; i >= (n - r + 1); i--)
		perm *= i;
	cout << perm << endl;

}
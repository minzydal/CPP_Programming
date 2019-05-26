/*
서로 다른 n개에서 r개를 택하여 일렬로 나열하는 방법의 수 permutation
순열을 구하는 프로그램
n,r을 입력받음
*/
#include <iostream>
using namespace std;

int main() {

	int n, r; // 입력받을 n과 r
	int perm = 1; //permutation

	cout << "Enter n, r : ";
	cin >> n >> r;

	for (int i = n; i >= (n - r + 1); i--)
		perm *= i;
	cout << perm << endl;

}
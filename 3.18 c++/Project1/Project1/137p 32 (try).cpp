/*
피보나치 수열
앞의 2개의 원소를 합하여 뒤의 원소를 만드는 수열
ex ) 0, 1, 1, 2, 3, 5, 8
출력, 갯수 입력
*/

#include <iostream>
using namespace std;

int main() {
	int num, fibo;
	int f0 = 0, f1 = 1;
	

	cout << "갯수를 입력하세요: ";
	cin >> num;

	cout << f0 << endl << f1 << endl;

	for (int i = 0; i < num; i++) {
		fibo = f0 + f1;
		cout << fibo << endl;
		f0 = f1;
		f1 = fibo;
	}
}
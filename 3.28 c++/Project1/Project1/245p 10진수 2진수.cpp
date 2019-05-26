/*
10진수 입력 -> 2진수로 출력 (역순으로 출력)
배열 선언 : 32개의 방
*/
#include <iostream>
using namespace std;

int main() {
	int binary[32] = { 0 }; // 이진수 배열 32개
	int num, digit = 0; // num = 10진수

	cout << "10진수 입력 : ";
	cin >> num;
	while (num != 0) { //탈출 조건 num = 0
			binary[digit] = num % 2;
			num /= 2;
			digit++;
		}
	for (int i = --digit; i >= 0; i--)
		cout << binary[i] << " ";
	cout << endl;

		return 0;
	}

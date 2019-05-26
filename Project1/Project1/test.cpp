#include <iostream>
using namespace std;

/*
1000보다 작은 정수를 입력받아 이것을 1000의 자리 백의 자리 10의 자리 따로따로 분리하여 출력하는 프로그램 작성
입력받을 정수 5623
*/
int main() {
	int x1, x2, x3, x4; //1000의 자리 100의자리 10의 자리 1의자리
	int num; //입력받을 정수

	cout << "정수를 입력하시오 : ";
	cin >> num;

	x1 = num / 1000; //x1은 2
	x2 = (num - (x1 * 1000)) / 100;	
	x3 = (num - (x1 * 1000) - (x2 * 100)) / 10;
	x4 = num % 10;

	cout << "천의자리" << x1 << endl;
	cout << "백의자리" << x2 << endl;
	cout << "십의자리" << x3 << endl;
	cout << "일의자리" << x4 << endl;

	return 0;
}